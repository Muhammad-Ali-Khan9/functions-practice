# Lecture 10 — If…Else Selection Statement

An `if` by itself can run a statement or skip it. Many decisions are a choice between two actions: pass or fail, debit or credit, a positive result or a negative one. `else` is the action that runs when the condition is false.

```cpp
if (condition)
    statementWhenTrue;
else
    statementWhenFalse;
```

Exactly one of the two statements runs. They are not both skipped, and they are not both executed. Each side can be a brace block if it needs more than one statement.

```cpp
if (score >= 50) {
    cout << "Pass\n";
    passed = passed + 1;
} else {
    cout << "Fail\n";
    failed = failed + 1;
}
```

The `else` belongs to the nearest `if` that does not already have an `else`. Indentation cannot change that rule. Lecture 11 spends more time on nesting. This lecture needs the rule because a missing pair of braces will attach an `else` to the wrong `if`.

```cpp
if (score >= 50)
    if (attendance >= 75)
        cout << "Pass\n";
    else
        cout << "Fail\n";
```

The `else` belongs to `attendance`, not to `score`. A student with score `40` prints nothing. A student with score `90` and attendance `70` prints `Fail`. If `Fail` was supposed to mean “the score was below 50”, the program is wrong even though it looks tidy. Braces make the attachment visible:

```cpp
if (score >= 50) {
    if (attendance >= 75)
        cout << "Pass\n";
} else {
    cout << "Fail\n";
}
```

## A chain of alternatives

When the choices are mutually exclusive and ordered, write a chain. The first true condition wins, and the rest of the chain is skipped.

```cpp
if (score >= 85)
    cout << "A\n";
else if (score >= 70)
    cout << "B\n";
else if (score >= 50)
    cout << "C\n";
else
    cout << "F\n";
```

The order is part of the meaning. This version never prints `A` for a score of `90`, because `90 >= 50` is already true and the later tests are skipped:

```cpp
if (score >= 50)
    cout << "C\n";
else if (score >= 70)
    cout << "B\n";
else if (score >= 85)
    cout << "A\n";
else
    cout << "F\n";
```

Put the narrow, high bar first, or write conditions that do not overlap. Overlapping conditions in the wrong order are still legal C++. They are just the wrong rule.

## The conditional operator

`?:` is an expression that chooses between two values. It is not a place to hide a long block of statements.

```cpp
int mark = (score >= 50) ? 1 : 0;
```

The condition comes first. The value after `?` is used when the condition is true. The value after `:` is used when it is false. The two result expressions should be the same kind of value. If one is `double` and the result is stored in an `int`, the fractional part is truncated:

```cpp
int whole = (n > 0) ? 1 : 0.9;
```

When `n` is not positive, `0.9` becomes `0` because `whole` is an `int`.

`?:` has lower precedence than `+`. This stores `y + 1` in the false case, not “the larger value, then plus one”:

```cpp
int k = x > y ? x : y + 1;
```

If the intended value is “one more than the larger of `x` and `y`”, add parentheses:

```cpp
int k = (x > y ? x : y) + 1;
```

Use `if`/`else` when the branches do work. Use `?:` when the only job is to pick one of two values.

## Remainder and negative numbers

C++ divides integers toward zero. The sign of `a % b` follows `a`. So `(-3) % 2` is `-1`, not `1`.

```cpp
if (n % 2 == 1)
    cout << "odd\n";
else
    cout << "even\n";
```

This is correct for `0`, `1`, and `8`. It is wrong for `-3`, because `-1 == 1` is false, so the program prints `even`. A non-negative remainder test, or a test that treats every non-zero remainder as odd, matches the mathematical meaning:

```cpp
if (n % 2 != 0)
    cout << "odd\n";
else
    cout << "even\n";
```

`-3 % 2` is `-1`, and `-1 != 0` is true. For values you know are non-negative, `== 1` is safe. The moment negatives are allowed, `!= 0` is the test that matches “not divisible by 2.”

## A path that never stores a value

If a variable is given its useful value in only one branch, the other branch must store something too, or the variable must be initialized before the decision.

```cpp
int result;
if (n >= 0)
    result = n;
else
    result = -n;
```

Both paths write `result`. Leaving the `else` out would mean a negative `n` reads `result` before any assignment. That is not a value you can reason about.

Absolute value for an ordinary `int` is the pattern above. It says: a negative number is its own negation, and every other number stays as it is.

## Triangle classification

Three lengths form a triangle only when each side is shorter than the sum of the other two, and each length is positive. If that fails, the later labels are meaningless. Inside the legal case, three equal sides are equilateral, exactly two equal sides are isosceles, and no equal sides are scalene.

```cpp
if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
    cout << "not a triangle\n";
} else if (a == b && b == c) {
    cout << "equilateral\n";
} else if (a == b || b == c || a == c) {
    cout << "isosceles\n";
} else {
    cout << "scalene\n";
}
```

The `else` chain matters. An equilateral triangle also has “at least two sides equal.” If the isosceles test came first, an equilateral triangle would be labeled isosceles and the equilateral line would never run.

---

## Questions

### Question 1

What is printed for each pair `(score, attendance)`: `(40, 90)`, `(90, 80)`, and `(90, 70)`?

```cpp
if (score >= 50)
    if (attendance >= 75)
        cout << "Pass\n";
    else
        cout << "Fail\n";
```

Which `if` owns the `else`? Rewrite the program so `Fail` means the score is below 50, and a passing score with low attendance prints nothing.

### Question 2

`score` is `90`. What is printed, and why does the letter not match the usual grade scale?

```cpp
if (score >= 50)
    cout << "C\n";
else if (score >= 70)
    cout << "B\n";
else if (score >= 85)
    cout << "A\n";
else
    cout << "F\n";
```

Put the tests in an order that prints `A`, `B`, `C`, and `F` on the usual boundaries `85`, `70`, and `50`.

### Question 3

`n` is `-3`, then the same program runs again with `n` equal to `4` and with `n` equal to `0`. What does this print in each case?

```cpp
if (n % 2 == 1)
    cout << "odd\n";
else
    cout << "even\n";
```

Write the condition that classifies every `int`, positive or negative, correctly.

### Question 4

`x` is `3` and `y` is `5`. What is `k`? What would `k` be if the parentheses in the second statement were used instead?

```cpp
int k = x > y ? x : y + 1;
int fixed = (x > y ? x : y) + 1;
```

Explain which operator runs first in the line that computes `k`.

### Question 5

What is stored in `whole` when `n` is `4`, and when `n` is `-2`?

```cpp
int whole = (n > 0) ? 1 : 0.9;
```

Why is the false branch not the value `0.9`?

### Question 6

`result` is declared with no starting value. For `n` equal to `6` and for `n` equal to `-6`, say whether every path assigns `result` before it is printed. Then write a correct absolute-value decision.

```cpp
int result;
if (n >= 0)
    result = n;
cout << result << "\n";
```

### Question 7

Sides `3, 3, 3` and sides `3, 4, 5` and sides `1, 2, 3` and sides `5, 5, 6` are fed to the triangle program in the notes. Give the four labels, and explain why the equilateral test has to appear before the isosceles test.

### Question 8

Trace this program for `x` equal to `2`.

```cpp
int x = 2;
if (x > 0)
    if (x < 0)
        cout << "A\n";
    else
        cout << "B\n";
else
    cout << "C\n";
```

One of the three letters is unreachable for every `int x`. Which letter, and why?

### Question 9

A fee is `0` when `age` is under `6`, `10` when `age` is from `6` through `17`, and `25` otherwise. Negative ages are not valid; for a negative age the program should print `bad age` and leave `fee` at `-1`. Write the `if`/`else` chain. Trace ages `-1`, `5`, `6`, `17`, and `18`.

### Question 10

Find both bugs. The author wanted `Fail` only when `score` is below `50`, and wanted `passed` to increase only on a real pass. `score` is `40` in this copy. State the output of the broken program, then write the repaired program and its output for `40` and for `80`.

```cpp
int score = 40;
int passed = 0;
if (score = 50)
    if (score >= 50)
        cout << "Pass\n";
        passed = passed + 1;
else
    cout << "Fail\n";
cout << passed << "\n";
```

---

## Answers

### Answer 1

The `else` binds to the inner `if`, the attendance test.

* `(40, 90)`: the outer condition is false, so the inner `if`/`else` never runs. Nothing is printed.
* `(90, 80)`: both conditions are true. Output is `Pass`.
* `(90, 70)`: the score test passes and the attendance test fails, so the inner `else` runs. Output is `Fail`.

That last line is the bug in the specification. Low attendance is not the same event as a failing score.

```cpp
if (score >= 50) {
    if (attendance >= 75)
        cout << "Pass\n";
} else {
    cout << "Fail\n";
}
```

Now `(40, 90)` prints `Fail`, `(90, 80)` prints `Pass`, and `(90, 70)` prints nothing.

### Answer 2

`90 >= 50` is true, so the first branch prints `C` and the rest of the chain is skipped. `90` never gets a chance to be compared with `85`.

```text
C
```

The high boundary has to be tested while it is still possible to reach it:

```cpp
if (score >= 85)
    cout << "A\n";
else if (score >= 70)
    cout << "B\n";
else if (score >= 50)
    cout << "C\n";
else
    cout << "F\n";
```

`90` prints `A`. `70` fails the first test and passes the second, so it prints `B`. `50` prints `C`. `49` reaches the final `else` and prints `F`.

### Answer 3

C++ integer division truncates toward zero, and the remainder takes the sign of the dividend.

* `n` is `-3`. `(-3) % 2` is `-1`. `-1 == 1` is false, so the program prints `even`. That label is wrong mathematically.
* `n` is `4`. The remainder is `0`, so it prints `even`. That one is correct.
* `n` is `0`. The remainder is `0`, so it prints `even`. Zero is even, so this one is also correct.

```cpp
if (n % 2 != 0)
    cout << "odd\n";
else
    cout << "even\n";
```

`-3` now has remainder `-1`, which is not `0`, so it prints `odd`. `4` and `0` still print `even`.

### Answer 4

`>` is evaluated before `?:`, and `+` is also evaluated before `?:`. The unparenthesized line is `x > y ? x : (y + 1)`.

`3 > 5` is false, so `k` is `5 + 1`, which is `6`.

The parenthesized line first chooses the larger of `x` and `y`, which is `5`, and then adds `1`. `fixed` is `6` for these particular inputs. The two expressions are not the same rule. Change the inputs to `x = 8` and `y = 5`: `k` is `8`, because the condition is true and `x` is chosen, while `fixed` is `9`. Same-looking code, different arithmetic, and these inputs are what expose it. With `(3, 5)` both happen to be `6`, so a single trace is not enough to claim the expressions match.

### Answer 5

`whole` has type `int`. The `?:` expression is stored in an `int`, so a `double` result is truncated toward zero.

* `n` is `4`. The condition is true, so the value is `1`. `whole` is `1`.
* `n` is `-2`. The condition is false, so the value chosen is `0.9`, and storing it in an `int` truncates it to `0`. `whole` is `0`.

The false branch is not stored as `0.9` because an `int` cannot hold that fractional value. If the variable were a `double`, the stored false result would be `0.9`.

### Answer 6

When `n` is `6`, the condition is true and `result` becomes `6` before the print. That path is safe, and the output is `6`.

When `n` is `-6`, the condition is false. Nothing in the fragment assigns `result`. The print then uses a variable with no value. That path is not safe. Do not describe its output as a number.

Both paths have to write the variable:

```cpp
int result;
if (n >= 0)
    result = n;
else
    result = -n;
cout << result << "\n";
```

For `6` the output is `6`. For `-6` the output is `6`.

### Answer 7

* `3, 3, 3` is a legal triangle and all three sides match, so the label is `equilateral`.
* `3, 4, 5` is legal because `3+4 > 5`, `3+5 > 4`, and `4+5 > 3`. No two sides match, so the label is `scalene`.
* `1, 2, 3` fails `1+2 <= 3`. The label is `not a triangle`. The later tests must not run, or `1` and `2` being different might be called scalene.
* `5, 5, 6` is legal and exactly two sides match, so the label is `isosceles`.

An equilateral triangle also satisfies `a == b || b == c || a == c`. In an `else if` chain the first true test wins. If isosceles were tested first, `3, 3, 3` would print `isosceles` and the equilateral branch would be unreachable. Testing three equal sides first peels that case off, and the following test then means “exactly two sides equal” even though its Boolean expression only says “at least one pair matches.” The `else` is what adds the word “exactly.”

### Answer 8

`x > 0` is true for `2`, so the outer `else` does not run. Inside, `x < 0` is false, so the inner `else` runs.

```text
B
```

`A` is unreachable. The inner test `x < 0` is inside the branch that already required `x > 0`. No integer is both greater than zero and less than zero. The inner `else` is the only reachable inner path, and it means “positive, and not negative,” which is every positive `x`. `C` is the path for `x <= 0`.

### Answer 9

```cpp
int fee = -1;
if (age < 0) {
    cout << "bad age\n";
} else if (age < 6) {
    fee = 0;
} else if (age <= 17) {
    fee = 10;
} else {
    fee = 25;
}
```

The negative test has to be first. Otherwise `age < 6` would treat `-1` as a small child and set `fee` to `0`.

* `-1`: prints `bad age`. `fee` stays `-1`.
* `5`: not negative, and `5 < 6`, so `fee` is `0`.
* `6`: fails `age < 6`, and `6 <= 17`, so `fee` is `10`.
* `17`: `fee` is `10`.
* `18`: the final `else`, so `fee` is `25`.

`age <= 17` is required on the middle band. Writing `age < 17` would charge an adult fee at age `17`.

### Answer 10

Bug 1: `score = 50` assigns `50` and the condition value is `50`, which is true. The original score `40` is overwritten. This is not a comparison.

Bug 2: there are no braces around the inner body. The only statement controlled by `if (score >= 50)` is `cout << "Pass\n"`. The assignment `passed = passed + 1` is the next statement, and the `else` binds to the inner `if` because that is the nearest `if` without an `else`.

After the assignment, `score` is `50`. The outer condition is true. The inner `score >= 50` is true, so it prints `Pass`. The `else` does not run. `passed` then increases because it is outside the inner `if`.

```text
Pass
1
```

The repair restores the comparison, groups the pass action, and attaches `Fail` to the score test:

```cpp
int score = 40;
int passed = 0;
if (score == 50 || score > 50) {
    cout << "Pass\n";
    passed = passed + 1;
} else {
    cout << "Fail\n";
}
cout << passed << "\n";
```

The condition `score >= 50` is the same test and is the one to write. For `40`:

```text
Fail
0
```

For `80`:

```text
Pass
1
```

`passed` no longer increases on a failing score, and a score of `40` is not replaced by `50` before the decision.
