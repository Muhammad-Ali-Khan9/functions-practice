# Lecture 12 — switch, and the Increment and Decrement Operators

An `if`/`else` chain can choose among many paths. It gets noisy when every path is “this integer constant means that action.” `switch` is a multiple-selection statement for that job. It jumps to a matching `case` label. It does not search a range, and it does not do the work of `break` for you.

## switch

```cpp
switch (expression) {
case constant1:
    statements;
    break;
case constant2:
    statements;
    break;
default:
    statements;
    break;
}
```

The expression in the parentheses must be an integral value: `int`, `char`, `bool`, or an enumeration. It cannot be a `double`, and it cannot be a `string`. Each `case` label must be a constant known at compile time. A variable is not allowed there, and `case 1 - 5:` is not a range. The minus sign is subtraction, so that label is the constant `-4` if it appears where a constant expression is legal, or it is simply the wrong tool. Grouping a range is done by stacking labels and letting execution fall through:

```cpp
switch (month) {
case 4:
case 6:
case 9:
case 11:
    days = 30;
    break;
case 2:
    days = 28;
    break;
default:
    days = 31;
    break;
}
```

`break` ends the `switch`. Without it, execution continues into the next case. That is fall-through. It is useful when several labels share one action, as the 30-day months do. It is a bug when each case was supposed to be private and the `break` was forgotten.

`default` runs when no label matches. It does not have to be last in the source, but putting it last, with a `break`, is the readable form. If `default` is in the middle and a later case has no `break` above it, control can fall into `default` from that earlier case. Position does not create a wall. `break` does.

`char` values are integers. `case '1':` matches the character `1`, whose code is not the integer `1`. `case 1:` matches the number one. Reading a menu choice with `cin >> n` into an `int`, then testing `case '1'`, will not hit the digit the user thinks they typed if they typed the number `1`.

A `switch` on a value that is not a compile-time constant label list is just an ordinary expression in the parentheses. This is legal, and it selects on whatever `n` currently is:

```cpp
int n = 2;
switch (n) {
case 1:
    cout << "one\n";
    break;
case 2:
    cout << "two\n";
    break;
}
```

This is not legal, because the label is not constant:

```cpp
int pick = 2;
switch (n) {
case pick:          // compile error
    cout << "no\n";
    break;
}
```

## ++ and --

`++x` and `x++` both add one to `x`. `--x` and `x--` both subtract one. The difference is the value of the expression when it is used for something besides the update itself.

| Expression | When `x` starts at `3` | Value of the expression | `x` afterward |
| --- | --- | --- | --- |
| `++x` | prefix | `4` | `4` |
| `x++` | postfix | `3` | `4` |
| `--x` | prefix | `2` | `2` |
| `x--` | postfix | `3` | `2` |

Used as a statement by itself, `++x;`, `x++;`, `x = x + 1;`, and `x += 1;` all leave `x` one larger. The prefix and postfix forms are not interchangeable inside a larger expression:

```cpp
int x = 3;
int a = ++x;   // a is 4, x is 4
int y = 3;
int b = y++;   // b is 3, y is 4
```

Do not modify the same variable twice in one expression. `i = i++ + 1` does not have a meaning you should memorize. Split it into separate statements. Even where a newer C++ rule gives `<<` a left-to-right order, a line such as `cout << x++ << x++` is a puzzle, not a program. Print, then increment, on its own line.

`+=`, `-=`, `*=`, and `/=` are the matching shortcuts for the other arithmetic operators. `x *= 2` doubles `x`. `x /= 2` is integer division when `x` is an `int`, so an odd value loses the fraction.

---

## Questions

### Question 1

`month` is `9`, then the program is compiled again with `month` equal to `2`, then with `month` equal to `12`. What is `days` each time? Assume `days` starts at `0` and the 30-day `switch` from the notes is used, including the `break` after the shared 30-day cases.

### Question 2

`choice` is `2`. What is printed? Then say what is printed if both `break` statements are deleted.

```cpp
switch (choice) {
case 1:
    cout << "A";
    break;
case 2:
    cout << "B";
case 3:
    cout << "C";
    break;
default:
    cout << "D";
    break;
}
```

### Question 3

The user types the character `1` into a `char` variable named `key`, and types the integer `1` into an `int` variable named `n` on another run. Which program prints `digit`, and which prints `number`?

```cpp
switch (key) {
case '1':
    cout << "digit\n";
    break;
case 1:
    cout << "number\n";
    break;
}
```

```cpp
switch (n) {
case '1':
    cout << "digit\n";
    break;
case 1:
    cout << "number\n";
    break;
}
```

### Question 4

`grade` is `'B'`. What is printed? The `default` is not at the bottom. Does that by itself send this input into `default`?

```cpp
switch (grade) {
default:
    cout << "other\n";
    break;
case 'A':
    cout << "best\n";
    break;
case 'B':
    cout << "good\n";
    break;
}
```

### Question 5

Explain the compile error.

```cpp
int lo = 1;
int hi = 5;
int x = 3;
switch (x) {
case lo:
case hi:
    cout << "edge\n";
    break;
}
```

Write a legal `switch` that treats the constants `1` and `5` as the same action, and sends `3` to `default`.

### Question 6

`x` starts at `3` before each line. The lines are separate experiments, not one sequence. Give the printed value and the value of `x` after each experiment.

```cpp
cout << ++x;
cout << x++;
cout << x--;
cout << --x;
```

### Question 7

`x` is `7`. Give `a`, `b`, and the final `x` after these statements run in order.

```cpp
int x = 7;
int a = x++;
int b = ++x;
```

Then say what `x += 1;` would do if it replaced both of those lines as a single extra statement after them. Do not replace them. Add it, and report `x`.

### Question 8

Why is `cout << x++ << " " << x++;` a bad line when `x` is `3`, even if a compiler prints something? Rewrite it as separate statements that print the current value, then advance `x`, then print the new value, with a space between the numbers. State the output of your rewrite.

### Question 9

A menu uses `int option`. Option `1` should print `save`, option `2` should print `save` as well, option `3` should print `quit`, and every other option should print `unknown`. Write the `switch`, using fall-through only where the two options share an action. Trace options `1`, `2`, `3`, and `9`.

### Question 10

`n` starts at `4`. How many times does the body of this `switch` idea run? There is no loop. What is printed, and what is `n` at the end? Then explain the mistake in the comment.

```cpp
int n = 4;
switch (n) {
case 4:
    cout << n << "\n";
    n--;
case 3:
    cout << n << "\n";
    n--;
    break;
default:
    cout << "done\n";
    break;
}
// comment claims: n is printed, then decreased, and case 4 runs four times
```

---

## Answers

### Answer 1

`9` matches `case 9`, which is stacked with the other 30-day labels and then hits `break`. `days` is `30`.

`2` matches `case 2`. `days` is `28`. It does not fall into `default`, because that case has its own `break`.

`12` matches nothing. `default` sets `days` to `31`.

### Answer 2

`choice` is `2`, so control jumps to `case 2` and prints `B`. There is no `break` before `case 3`, so it continues and prints `C`, then `break` leaves the `switch`. `default` does not run.

```text
BC
```

If both `break` statements are deleted, `case 2` still starts at `B`, then falls through `C`, then falls through `default` and prints `D`.

```text
BCD
```

Deleting a `break` never repeats the `switch` from the top. It only continues downward.

### Answer 3

The first program switches on a `char`. The user typed the character `1`, which matches `case '1'`. It prints `digit`. `case 1:` is a different label, the numeric code `1`, which is not the character `1`.

The second program switches on an `int`. The user typed the integer `1`, which matches `case 1:`. It prints `number`. `case '1':` would match the numeric code of the character `1`, which is `49` in the ASCII encoding this course uses, not the integer `1`.

### Answer 4

`grade` is `'B'`, so control jumps directly to `case 'B'` and prints `good`. `default` is not a net that every case falls into. It is the arm used when the jump finds no matching label. A `B` found its label, so `default` does not run just because it is written first.

```text
good
```

`default` would run for `'C'`. It would also run for `'A'` if someone deleted the `break` under `default` and the jump had landed on `default`. It does not run for `'A'` as written, because `'A'` has its own label and its own `break`.

### Answer 5

`case` labels must be compile-time constants. `lo` and `hi` are variables. Their values are not a legal label, even though at this moment those variables hold `1` and `5`. The program does not compile.

```cpp
switch (x) {
case 1:
case 5:
    cout << "edge\n";
    break;
default:
    cout << "middle or other\n";
    break;
}
```

For `x` equal to `3`, the output is `middle or other`. For `x` equal to `1` or `5`, the output is `edge`. Fall-through is the range tool `switch` actually has: several constants, one shared body.

### Answer 6

Each line starts from `x` equal to `3` again.

| Experiment | Printed | `x` after the line |
| --- | --- | --- |
| `cout << ++x` | `4` | `4` |
| `cout << x++` | `3` | `4` |
| `cout << x--` | `3` | `2` |
| `cout << --x` | `2` | `2` |

Prefix changes the variable and then yields the new value. Postfix yields the old value and then changes the variable. The print shows the value of the expression, which is not always the value left behind in `x`.

### Answer 7

`a = x++` stores the old value. `a` is `7`, and `x` becomes `8`.

`b = ++x` increments first. `x` becomes `9`, and `b` is `9`.

After both lines, `x` is `9`. One more `x += 1;` sets `x` to `10`. `+=` is an ordinary update. It does not have a prefix form and a postfix form.

### Answer 8

Both `x++` expressions modify `x`, and both are part of one larger expression. That is a bad place to ask what the program means. Split the work until each modification is its own statement.

```cpp
cout << x << " ";
x++;
cout << x << "\n";
```

Starting from `3`, the output is:

```text
3 4
```

The first print shows the value before the update. The second print shows the value after `x++` has happened.

### Answer 9

```cpp
switch (option) {
case 1:
case 2:
    cout << "save\n";
    break;
case 3:
    cout << "quit\n";
    break;
default:
    cout << "unknown\n";
    break;
}
```

* `1` falls through the empty `case 1` into `case 2`, prints `save`, and stops.
* `2` prints `save` and stops.
* `3` prints `quit` and stops.
* `9` matches nothing and prints `unknown`.

Option `2` must not fall into option `3`. The `break` after `save` is what keeps `quit` off the save path.

### Answer 10

There is no loop. A `switch` selects once. `case 4` prints `4`, then `n--` makes `n` equal to `3`, then there is no `break`, so execution falls into `case 3`. That prints `3`, then `n--` makes `n` equal to `2`, then `break` ends the `switch`.

```text
4
3
```

`n` ends at `2`. `default` does not run.

The comment is wrong in two ways. Case labels are not a counter, so `case 4` does not mean “do this four times.” And fall-through visits `case 3` once on the way down. It does not go back to `case 4`. Decrementing `n` inside the `switch` does not cause the `switch` to be re-tested.
