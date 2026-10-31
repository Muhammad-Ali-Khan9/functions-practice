# Lecture 15 — while and do…while

`while` tests, then maybe runs the body. `do`…`while` runs the body, then tests. That single change of order is the whole difference.

```cpp
while (condition) {
    body
}
```

```cpp
do {
    body
} while (condition);
```

The semicolon after the `do`…`while` condition is required. It is not the empty-statement bug from `if`. It is the end of this statement. Forgetting it is a compile error. Putting an extra semicolon after a plain `while` header is a different and real bug:

```cpp
while (x > 0);
```

That `while` controls an empty statement. If `x > 0` and the empty statement never changes `x`, the program repeats the empty statement forever. The lines you indented underneath are not in the loop.

## When the first test is already false

```cpp
int n = 0;
while (n > 0)
    cout << n << "\n";
```

`0 > 0` is false. The body runs zero times. Nothing is printed.

```cpp
int n = 0;
do
    cout << n << "\n";
while (n > 0);
```

The body runs, prints `0`, and only then is the condition checked. The check fails, so it does not run a second time. Output:

```text
0
```

Use `do`…`while` when the body must happen at least once before the program can know whether to repeat. A menu is the usual case: show the menu, read a choice, and only then decide whether the choice was “quit.”

```cpp
int choice;
do {
    cout << "1 add, 2 quit\n";
    cin >> choice;
    if (choice == 1)
        cout << "adding\n";
} while (choice != 2);
```

A `while` version has to read once before the loop, or it has to invent a starting `choice` that is not `2` so the loop can be entered. Both are legal. The `do` version matches the sentence “ask at least once.”

## Input validation

A score is valid only when it is between `0` and `100` inclusive. The program cannot test a score it has not read, so the read belongs inside a loop that is willing to run before the test. `do`…`while` is a direct reading of “read, and if it is bad, read again.”

```cpp
int score;
do {
    cout << "Score from 0 to 100: ";
    cin >> score;
} while (score < 0 || score > 100);
```

The loop continues while the value is illegal. The condition is the failure condition, not the success condition. Writing `score >= 0 && score <= 100` in that position would keep asking while the score is already valid, which is the opposite policy.

Trace a bad score and then a good one. The user types `-4`, then `80`.

1. Body reads `-4`. `-4 < 0` is true, so the loop runs the body again.
2. Body reads `80`. Both sides of `||` are false, so the loop stops.

`score` is `80` after the loop. The invalid value is not kept, because the next trip replaced it.

## The two loops are not interchangeable

You can rewrite a `do`…`while` as a `while` only by making sure the first trip still happens. One mechanical rewrite is to run the body once before a `while` that repeats it. If the body is long, that duplication is a bad idea. The other rewrite uses a flag:

```cpp
bool again = true;
while (again) {
    body
    again = condition;
}
```

If `condition` is false after the first body, `again` becomes false and the `while` does not repeat. That matches `do`…`while`. A plain `while (condition)` does not, whenever `condition` can be false before the first body.

Inside the body, something must change a variable the condition uses. A `do`…`while` that never updates that variable is still infinite. It just runs the body once before it gets stuck, which makes it slightly more confusing to notice.

---

## Questions

### Question 1

`n` is `0`. What does each program print?

```cpp
while (n > 0)
    cout << "W";
cout << "\n";
```

```cpp
do
    cout << "D";
while (n > 0);
cout << "\n";
```

### Question 2

The user will type `2` immediately, meaning quit. How many times does each version print `menu`? `choice` starts at `0` in the `while` version.

```cpp
int choice = 0;
while (choice != 2) {
    cout << "menu\n";
    cin >> choice;
}
```

```cpp
int choice;
do {
    cout << "menu\n";
    cin >> choice;
} while (choice != 2);
```

### Question 3

What is wrong with this loop if `x` starts at `3`?

```cpp
while (x > 0);
{
    cout << x << "\n";
    x--;
}
```

Does the block in braces run before or after the problem appears?

### Question 4

The user types `150`, then `-1`, then `40`. What is `score` when a correct validation loop stops? Write the loop. The legal range is `0` through `100` inclusive.

### Question 5

This claims to repeat while the score is illegal. The user types `40` first. How many times is `40` read, and does the loop stop?

```cpp
int score;
do {
    cin >> score;
} while (score >= 0 && score <= 100);
```

### Question 6

Convert this `do`…`while` into a `while` loop without duplicating the body. `n` starts at `3`.

```cpp
do {
    cout << n << " ";
    n--;
} while (n > 0);
```

State the output, and state the output of a mistaken conversion that only changes `do` into `while` and leaves the test at the top with `n` still starting at `3`. Those two outputs happen to match. Then change the start to `n = 0` and show that the two shapes no longer match.

### Question 7

`password` is `1234`. Write a `do`…`while` loop that reads a guess, allows at most `3` guesses, and stops early when the guess is correct. Use a counter and a `bool`. Trace the guesses `1111 2222 1234`. Then trace the guesses `1111 2222 3333`. Say whether the password was found in each trace.

### Question 8

`x` starts at `5`. How many lines are printed, and what is `x` at the end?

```cpp
do {
    cout << x << "\n";
    x = x - 2;
} while (x > 0);
```

List the printed numbers. What would a `while (x > 0)` in front of the same body print for the same start? This start does not reveal the difference. Name a start that does.

### Question 9

The loop should print `3 2 1` and stop. `n` starts at `3`. What does this print, and why does it fail to stop?

```cpp
int n = 3;
do {
    if (n == 1)
        n = 0;
    cout << n << " ";
} while (n > 0);
```

Put an update in the body so the printed line is `3 2 1` and the loop ends. Do not change the condition.

### Question 10

A cashier types item prices until the price is `-1`. Negative prices other than `-1` are mistakes and should be rejected without ending the sale. Positive prices and `0` are accepted. The first prompt must appear even if you cannot yet know what the cashier will type.

Write the loop. A rejected price should print `rejected` and should not be added. Trace the prices `12 -3 5 -1`. Give the total and say how many accepted prices there were.

---

## Answers

### Answer 1

The `while` tests first. `0 > 0` is false, so `W` is never printed. The newline after the loop still runs.

```text
<blank line>
```

The `do` body prints `D` before the test. The test then fails, so there is one `D` and then the newline.

```text
D
```

Same condition, same starting value, different number of trips. The order of the test is the reason.

### Answer 2

Both versions print `menu` once and then read `2`, which ends the loop.

The `while` version enters because `choice` was forced to `0`, and `0 != 2`. If that initialization had been `choice = 2`, the `while` version would print `menu` zero times and would never read the user’s quit command. The `do` version does not depend on a fake starting choice. It asks, then looks at what was typed.

For this particular input and this particular initialization, the visible output is the same: one line, `menu`. The structures are still not the same program.

### Answer 3

The semicolon ends the `while`. Its body is empty. `x` is `3`, and `3 > 0` stays true because the empty body does not decrement `x`. The program never leaves that `while`.

The brace block is after the loop, not inside it. It does not run before the problem appears. It would run only if the empty `while` stopped. It never does. The decrement cannot rescue a loop it is not in.

### Answer 4

```cpp
int score;
do {
    cout << "Score from 0 to 100: ";
    cin >> score;
} while (score < 0 || score > 100);
```

* Read `150`. `150 > 100` is true, so continue.
* Read `-1`. `-1 < 0` is true, so continue.
* Read `40`. Both comparisons are false, so `||` is false and the loop stops.

`score` is `40`. The earlier values were overwritten by later reads. They are not stored unless you store them yourself before the next read.

### Answer 5

`40` is legal. The condition `score >= 0 && score <= 100` is the success condition, and this loop continues while the condition is true. The program reads `40` and then asks again. It will keep reading every further legal score and will stop only when a score is illegal.

So `40` is read once and the loop does not stop. The condition describes the values you wanted to keep, but a `do`…`while` condition describes the reason to go back and do the body again.

### Answer 6

```cpp
bool again = true;
while (again) {
    cout << n << " ";
    n--;
    again = n > 0;
}
```

Starting at `3`, both the original and this rewrite print:

```text
3 2 1
```

A mistaken conversion that only moves the test to the top:

```cpp
while (n > 0) {
    cout << n << " ";
    n--;
}
```

also prints `3 2 1` when `n` starts at `3`, because the first test happens to be true. That coincidence is not a translation.

When `n` starts at `0`, the original `do`…`while` prints `0` and then stops, because `n--` makes `-1` and `-1 > 0` is false. The top-tested `while (n > 0)` prints nothing. One start value hid the bug. The other start value shows it.

### Answer 7

```cpp
int password = 1234;
int tries = 0;
int guess = 0;
bool found = false;

do {
    cin >> guess;
    tries = tries + 1;
    if (guess == password)
        found = true;
} while (!found && tries < 3);
```

Guesses `1111 2222 1234`:

* Try 1: not equal, `found` stays false, `tries` is `1`, continue.
* Try 2: not equal, `tries` is `2`, continue.
* Try 3: equal, `found` becomes true, `tries` is `3`. `!found` is false, so the loop stops.

The password was found on the last allowed try.

Guesses `1111 2222 3333`:

* Three failures. `found` stays false. `tries` becomes `3`, and `tries < 3` fails, so the loop stops even though the password was never seen.

After the loop, `found` is how the rest of the program can tell the two endings apart. The loop stopping is not the same fact as the password being correct.

### Answer 8

* Print `5`, then `x` is `3`. `3 > 0`, continue.
* Print `3`, then `x` is `1`. `1 > 0`, continue.
* Print `1`, then `x` is `-1`. `-1 > 0` is false.

Three lines: `5`, `3`, and `1`. `x` ends at `-1`.

A front-tested `while (x > 0)` with the same body and the same start also prints those three lines, because `5 > 0` is true on entry. The start `x = 0` reveals the difference: `do`…`while` prints `0` once, and `while` prints nothing.

### Answer 9

`n` starts at `3`. The `if` does nothing while `n` is `3`. The body prints `3`. Nothing else changes `n`. The condition `n > 0` stays true. The program prints `3 ` forever. It never reaches `n == 1`, so the assignment inside the `if` is dead on this run.

The update has to move `n` on the trips that are not the special case:

```cpp
int n = 3;
do {
    cout << n << " ";
    n--;
} while (n > 0);
```

Printed line: `3 2 1`. When `1` has been printed, `n--` makes `0`, and `0 > 0` ends the loop. The special `if` was never needed. Decrement is the update the condition was waiting for.

### Answer 10

The first prompt has to happen before any price exists, so the read is inside `do`.

```cpp
int price;
int total = 0;
int accepted = 0;
do {
    cin >> price;
    if (price == -1) {
        // stop below, after the condition sees it
    } else if (price < 0) {
        cout << "rejected\n";
    } else {
        total = total + price;
        accepted = accepted + 1;
    }
} while (price != -1);
```

The empty `if` is only a comment hook. The condition is what stops the loop. A clearer body tests the sentinel first and does nothing with it:

```cpp
do {
    cin >> price;
    if (price < 0 && price != -1)
        cout << "rejected\n";
    else if (price >= 0) {
        total = total + price;
        accepted = accepted + 1;
    }
} while (price != -1);
```

Trace `12 -3 5 -1`:

* `12` is accepted. `total` is `12`, `accepted` is `1`.
* `-3` is negative and is not the sentinel. Print `rejected`. Totals unchanged.
* `5` is accepted. `total` is `17`, `accepted` is `2`.
* `-1` matches neither adding rule. The condition then stops the loop.

`total` is `17`. Two prices were accepted. `-1` was not added, and `-3` was not added.
