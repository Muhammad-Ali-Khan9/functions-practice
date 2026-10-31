# Lecture 09 — If Selection Statement

A program that only runs top to bottom can compute a formula, but it cannot make a decision. Selection means some statements run and others are skipped, based on a condition that is true or false.

C++ has three building blocks for every program: sequence, selection, and repetition. This lecture is the first selection statement, `if`. The `else` branch is lecture 10. Loops start at lecture 13.

## The statement

```cpp
if (condition)
    statement;
```

`condition` is in parentheses. They are required. If the condition is true, the one statement underneath runs. If it is false, that statement is skipped and execution continues after it.

A condition is an expression that is interpreted as true or false. In C++ a numeric value of `0` is false. Every other number is true. There is also a real Boolean type, `bool`, with values `true` and `false`. `true` prints as `1` and `false` prints as `0` if you send them to `cout`.

Several statements must be wrapped in braces. The braces are the statement, as far as `if` is concerned:

```cpp
if (score >= 50) {
    cout << "Pass\n";
    passed = passed + 1;
}
```

Without the braces, only the next single statement is controlled by the `if`. Indentation does not count. The compiler does not read your spaces.

```cpp
if (score >= 50)
    cout << "Pass\n";
passed = passed + 1;   // always runs
```

A semicolon immediately after the parentheses is an empty statement. The `if` controls that empty statement and nothing else:

```cpp
if (score >= 50);      // the decision ends here
    cout << "Pass\n";  // always runs
```

## Relational operators

These compare two values and produce true or false.

| Operator | Meaning | Example, when `x` is 5 |
| --- | --- | --- |
| `==` | equal | `x == 5` is true |
| `!=` | not equal | `x != 5` is false |
| `>` | greater than | `x > 3` is true |
| `<` | less than | `x < 3` is false |
| `>=` | greater or equal | `x >= 5` is true |
| `<=` | less or equal | `x <= 4` is false |

`=` is not a comparison. It is assignment. `if (x = 0)` stores `0` in `x` and then tests that stored value. The value is `0`, so the condition is false, and `x` has been destroyed. This compiles. It is one of the most common bugs in the course.

```cpp
int x = 5;
if (x = 0)
    cout << "equal\n";
cout << x << "\n";
```

Nothing prints from inside the `if`. Then `0` prints, because the assignment happened.

Integer division happens before the comparison. `1/2` is `0` in integer arithmetic, and `0` is false. `1.0/2` is `0.5`, which is true.

```cpp
if (1 / 2)
    cout << "integer\n";   // skipped
if (1.0 / 2)
    cout << "floating\n";  // prints
```

Do not compare floating-point values with `==` when they came from decimal fractions. `0.1 + 0.2 == 0.3` is false, because those decimals are not exact in binary. Compare a distance instead:

```cpp
double diff = (0.1 + 0.2) - 0.3;
if (diff < 0)
    diff = -diff;
if (diff < 0.000001)
    cout << "close enough\n";
```

## Logical operators

A single comparison is often not the real rule. Logical operators combine conditions.

| Operator | Meaning | True when |
| --- | --- | --- |
| `&&` | and | both sides are true |
| \|\| | or | at least one side is true |
| `!` | not | the condition was false |

`&&` is evaluated before `||`. `!` is evaluated before either of them. Parentheses are cheaper than a wrong program:

```cpp
if ((x > 0 && x < 10) || y == 5)
    cout << "inside the rule\n";
```

With `x` equal to `-1` and `y` equal to `5`:

1. `x > 0` is false.
2. `false && (x < 10)` is false. The right side of `&&` does not need to be discussed yet.
3. `y == 5` is true.
4. `false || true` is true.

So the body runs, even though `x` is not between 0 and 10.

`&&` and `||` stop early. This is short-circuit evaluation, and it is left to right.

* `&&` stops if the left side is false. The whole “and” cannot become true.
* `||` stops if the left side is true. The whole “or” is already true.

That is why this does not divide by zero:

```cpp
int a = 0;
if (a != 0 && 10 / a > 1)
    cout << "yes\n";
cout << "done\n";
```

`a != 0` is false, so `10 / a` never runs. Output is only `done`. Swap the sides and the program crashes, because the division is now on the left and runs first:

```cpp
if (10 / a > 1 && a != 0)   // a is 0: division happens
    cout << "yes\n";
```

`!` flips a condition. `!(x > 0)` is the same test as `x <= 0`, including the equal case. Forgetting the equal case is a typical off-by-one in a decision.

## How to build a decision with only `if`

Lecture 10 adds `else`. You can still make several decisions with separate `if` statements. Later statements can correct earlier ones. A leap year is divisible by 4, except years divisible by 100, except years divisible by 400.

```cpp
bool leap = false;
if (year % 4 == 0)
    leap = true;
if (year % 100 == 0)
    leap = false;
if (year % 400 == 0)
    leap = true;
```

Trace the years the calendar actually cares about:

| Year | `leap` after the `% 4` test | `leap` after the `% 100` test | `leap` after the `% 400` test | Leap? |
| --- | --- | --- | --- | --- |
| 1900 | true | false | false | no |
| 2000 | true | false | true | yes |
| 2024 | true | true | true | yes |
| 2023 | false | false | false | no |

The same pattern finds the largest of three numbers. Start with a candidate and replace it when a later `if` proves it is too small:

```cpp
int largest = a;
if (b > largest)
    largest = b;
if (c > largest)
    largest = c;
```

Using `>` rather than `>=` means a tie keeps the earlier value. The printed number is still a largest value.

Any non-zero remainder is true. For a non-negative integer, `if (n % 2)` is the oddness test, because an odd remainder is `1` and an even remainder is `0`.

## What to check before you trust an `if`

1. Is the operator `==`, or did you write `=`?
2. Is exactly one statement under the `if`, and is that what you meant?
3. Is there a semicolon before the body?
4. Did integer division turn the condition into `0`?
5. Can `&&` or `||` skip a dangerous right-hand side, and is the safe test on the left?
6. Are parentheses showing the rule you actually meant?

---

## Questions

### Question 1

`x` starts at `5`. What does this program print, and what is `x` at the end? Explain the condition.

```cpp
int x = 5;
if (x = 0)
    cout << "equal\n";
cout << "x is " << x << "\n";
```

### Question 2

What does each program print? `n` is a non-negative `int`.

```cpp
if (1 / 2)
    cout << "A";
if (1.0 / 2)
    cout << "B";
if (n % 2)
    cout << " odd";
```

Give the output for `n` equal to `0`, `1`, `8`, and `7`, including the letters from the first two tests.

### Question 3

A student indented this and expects `passed` to increase only when the score is at least 50. What happens for score `40`, and for score `70`?

```cpp
int score = 40;
int passed = 0;
if (score >= 50)
    cout << "Pass\n";
    passed = passed + 1;
cout << passed << "\n";
```

Rewrite it so both lines are controlled by the decision.

### Question 4

What is printed, and why is the indentation misleading?

```cpp
int score = 10;
if (score >= 50);
    cout << "Pass\n";
cout << "Done\n";
```

### Question 5

`a` is `0`. Describe exactly what runs, what does not run, and what is printed.

```cpp
int a = 0;
if (a != 0 && 10 / a > 1)
    cout << "yes\n";
cout << "done\n";
```

Then say what changes if the condition is rewritten as `10 / a > 1 && a != 0`.

### Question 6

`x` is `-1` and `y` is `5`. Does the body run? Show the value of each piece. Then rewrite the condition with parentheses so a reader can see the real rule.

```cpp
if (x > 0 && x < 10 || y == 5)
    cout << "yes\n";
```

### Question 7

Why is this condition the wrong way to ask whether `0.1 + 0.2` landed on `0.3`? Write a condition that accepts the sum when it is within `0.000001` of `0.3`.

```cpp
if (0.1 + 0.2 == 0.3)
    cout << "exact\n";
```

### Question 8

Using only separate `if` statements, set `bool leap` for a year. Then give the final value of `leap` for `1900`, `2000`, `2024`, and `2023`. Do not use `else`.

### Question 9

Write statements, using only `if`, that store the largest of `a`, `b`, and `c` in `largest`. Then trace `a = 4`, `b = 4`, `c = 2`, and trace `a = -1`, `b = -5`, `c = -1`. Say what your choice of `>` or `>=` does when two values tie.

### Question 10

This function-free fragment is supposed to print `child` when `age` is from 0 through 12, including both ends, and print nothing otherwise. It has two independent mistakes. Find both, and write the corrected condition. Use one `if` and a logical operator.

```cpp
if (age > 0 && age < 12)
    cout << "child\n";
```

Check your correction with ages `0`, `12`, `13`, and `-1`.

---

## Answers

### Answer 1

The condition is an assignment, not a test. `x = 0` stores `0` in `x` and the value of that assignment is `0`, which is false. The line inside the `if` does not run. The next line is not part of the `if`, so it does run.

```text
x is 0
```

`x` is `0` at the end. The original `5` is gone. The comparison that was intended is `x == 0`, which would have left `x` equal to `5` and would also have skipped `equal`, because `5` is not `0`.

### Answer 2

`1 / 2` is integer division, so the quotient is `0`. A zero condition is false, so `A` is not printed. `1.0 / 2` is `0.5`, and every non-zero value is true, so `B` is printed.

`n % 2` is `0` for an even non-negative `n` and `1` for an odd one. Only `1` gets past the `if`.

| `n` | Output |
| --- | --- |
| 0 | `B` |
| 1 | `B odd` |
| 8 | `B` |
| 7 | `B odd` |

There is a space before `odd` because the string contains that space. `B` and `odd` are not on separate lines.

### Answer 3

Only `cout << "Pass\n"` belongs to the `if`. The assignment is the next statement in sequence, so it runs for every score.

Score `40`: the test is false, `Pass` is not printed, then `passed` becomes `1`. Output:

```text
1
```

Score `70`: the test is true. Output:

```text
Pass
1
```

The braces make both lines one statement:

```cpp
if (score >= 50) {
    cout << "Pass\n";
    passed = passed + 1;
}
cout << passed << "\n";
```

Now score `40` prints `0`, and score `70` prints `Pass` and then `1`.

### Answer 4

The semicolon is an empty statement, and that empty statement is the body of the `if`. The condition is false because `10 >= 50` is false, so the empty statement is skipped. That does not matter, because it prints nothing anyway. `Pass` is the next ordinary statement, so it always prints.

```text
Pass
Done
```

The same output appears when the score is `70`. The condition no longer controls the message. Delete the semicolon. If more than one line must depend on the score, use braces as well.

### Answer 5

`a != 0` is false. `&&` stops there, so `10 / a` is never evaluated and the program does not divide by zero. The body is skipped. `done` is outside the `if`.

```text
done
```

The rewritten condition evaluates `10 / a` first. `a` is `0`, so this is division by zero before `&&` gets a chance to save it. Short-circuit protection only helps when the safe test is on the left.

### Answer 6

`&&` happens before `||`, so the condition is `(x > 0 && x < 10) || (y == 5)`.

* `x > 0` is false.
* `false && (x < 10)` is false, and the second comparison need not run.
* `y == 5` is true.
* `false || true` is true.

The body runs and prints `yes`.

Parentheses that match that meaning:

```cpp
if ((x > 0 && x < 10) || y == 5)
    cout << "yes\n";
```

If the intended rule was “`y` is 5 only matters when `x` is positive”, the parentheses would be different: `x > 0 && (x < 10 || y == 5)`. With these inputs that version is false, because `x > 0` fails and `&&` stops. The parentheses are the difference between the two rules.

### Answer 7

Decimal fractions such as `0.1` and `0.2` are not stored exactly in binary. Their sum is a value very close to `0.3` but not the same bit pattern, so `==` is false and `exact` is not printed. The test is asking for a bit-for-bit match, not for “close enough for this problem.”

```cpp
double gap = (0.1 + 0.2) - 0.3;
if (gap < 0)
    gap = -gap;
if (gap < 0.000001)
    cout << "close enough\n";
```

The first `if` turns a negative gap into a distance. The second `if` accepts that distance only when it is smaller than the tolerance.

### Answer 8

```cpp
bool leap = false;
if (year % 4 == 0)
    leap = true;
if (year % 100 == 0)
    leap = false;
if (year % 400 == 0)
    leap = true;
```

The order is the whole algorithm. A later `if` is allowed to undo an earlier one.

* `1900`: divisible by 4, so true; divisible by 100, so false; not divisible by 400. Final value `false`.
* `2000`: true, then false, then true because `2000 % 400 == 0`. Final value `true`.
* `2024`: true, and the other two tests fail. Final value `true`.
* `2023`: the first test fails and the later tests do not turn it back on. Final value `false`.

### Answer 9

```cpp
int largest = a;
if (b > largest)
    largest = b;
if (c > largest)
    largest = c;
```

`a = 4`, `b = 4`, `c = 2`. Start at `4`. `b > 4` is false, so the tie stays with `a`. `c > 4` is false. `largest` is `4`.

`a = -1`, `b = -5`, `c = -1`. Start at `-1`. `-5 > -1` is false. `-1 > -1` is false. `largest` is `-1`.

`>` does not replace a value with an equal value. `>=` would replace on a tie, so the later variable would win, but the number stored would be the same. Either operator answers “what is a largest value?”. Neither one by itself tells you which variable produced the tie.

### Answer 10

The first mistake is `age > 0`. Age `0` is a child in the stated rule, so the comparison must be `>=`. The second mistake is `age < 12`. Age `12` is included, so the comparison must be `<=`.

```cpp
if (age >= 0 && age <= 12)
    cout << "child\n";
```

* `0`: both sides true, prints `child`.
* `12`: both sides true, prints `child`.
* `13`: `age <= 12` is false, so `&&` is false and nothing is printed.
* `-1`: `age >= 0` is false, `&&` stops, and nothing is printed.

`age > 0 && age <= 12` would still reject a newborn. `age >= 0 && age < 12` would still reject a twelve-year-old. Both ends of the range have to be checked against the English phrase “from 0 through 12, including both ends.”
