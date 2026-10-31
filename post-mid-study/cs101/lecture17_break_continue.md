# Lecture 17 — break and continue

`break` and `continue` change where a loop goes next. They do not change the loop’s condition by themselves. A reader has to look for them in the middle of the body, which is why they should be rare and obvious.

`break` leaves the innermost `switch` or loop that contains it. Execution continues after that statement. `continue` skips the rest of the current trip. What it does after that depends on the kind of loop.

| Statement | `continue` goes to |
| --- | --- |
| `while` | the condition test |
| `do`…`while` | the condition test |
| `for` | the update, and then the condition test |

The `for` case is the one that surprises people who rewrote the loop as a `while` and put the increment at the bottom. In the `for`, the increment is in the header, and `continue` still runs it. In a `while`, a `continue` that appears before the increment skips the increment.

```cpp
for (int i = 0; i < 5; i++) {
    if (i == 2)
        continue;
    cout << i << " ";
}
```

`i` equal to `2` skips the print. The header still does `i++`. The printed values are `0 1 3 4`.

```cpp
int i = 0;
while (i < 5) {
    if (i == 2)
        continue;
    cout << i << " ";
    i++;
}
```

When `i` is `2`, `continue` jumps to the test. `i` is still `2`, because the increment was below the `continue`. The test `2 < 5` succeeds, and the body hits `continue` again. This loop does not finish. It has already printed `0 1 `.

If the `while` increments before the `continue`, it can be safe:

```cpp
int i = 0;
while (i < 5) {
    i++;
    if (i == 3)
        continue;
    cout << i << " ";
}
```

`i` becomes `1, 2, 3, 4, 5`. The print is skipped only when `i` is `3`. Output: `1 2 4 5`. The loop ends because the increment was not skipped.

## break only climbs one level

An inner `break` does not know about the outer loop.

```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        if (j == 1)
            break;
        cout << i << j << " ";
    }
}
```

For every `i`, the inner loop prints `j` equal to `0` and then breaks when `j` is `1`. The outer loop moves on to the next `i`.

```text
00 10 20
```

There is no labeled `break` in C++. You cannot name the outer loop and break that name. If the outer loop must stop too, set a `bool` that the outer condition checks, or structure the loops so the outer condition becomes false.

## break inside a switch that is inside a loop

`switch` uses `break` to keep cases from falling through. That `break` belongs to the `switch`, not to the surrounding loop, when the `switch` is the nearest thing that can accept a `break`.

```cpp
for (int i = 1; i <= 3; i++) {
    switch (i) {
    case 2:
        break;
    default:
        cout << i << " ";
        break;
    }
}
```

* `i` is `1`. `default` prints `1`.
* `i` is `2`. `case 2` breaks out of the `switch` only. The `for` update still runs.
* `i` is `3`. `default` prints `3`.

```text
1 3
```

That `break` leaves the `switch` only. The `for` loop keeps going. To end the loop from `case 2`, set a `bool stop` in that case and test it in the loop condition.

## continue in do…while

`continue` jumps to the condition, not back to the first line of the body.

```cpp
int n = 0;
do {
    n++;
    if (n == 2)
        continue;
    cout << n << " ";
} while (n < 4);
```

`n` becomes `1`, prints `1`. `n` becomes `2`, `continue` checks `2 < 4`, which is true. `n` becomes `3`, prints `3`. `n` becomes `4`, prints `4`. `4 < 4` fails.

```text
1 3 4
```

`2` is missing because the print was skipped, not because the loop restarted without the increment. The increment is above the `continue` in this example.

## A search that might fail

`break` is a reasonable way to stop reading once the target appears. After the loop, “the loop ended” is not enough information. It might have ended because the target was found, or because the sentinel arrived. Store the reason.

```cpp
int value;
int target = 7;
bool found = false;
cin >> value;
while (value != -1) {
    if (value == target) {
        found = true;
        break;
    }
    cin >> value;
}
```

Input `1 2 7 9 -1` sets `found` and breaks. `9` and `-1` are not read. Input `1 2 -1` ends because the sentinel failed the `while` test, and `found` stays false. The `bool` is the result. The `break` is only the early exit.

`while (true)` plus a `break` can build the same loop. The risk is a path through the body that never hits a `break` and never changes a tested variable. The loop is then infinite, and the condition `true` will not save you. Prefer a condition that says why the loop should continue, and use `break` for a rare early exit.

---

## Questions

### Question 1

What is printed?

```cpp
for (int i = 0; i < 5; i++) {
    if (i == 2)
        continue;
    cout << i << " ";
}
```

Why does this `for` finish, instead of sticking on `2`?

### Question 2

The user runs this and it does not return to the prompt. What has already been printed, and which line is skipped forever after that?

```cpp
int i = 0;
while (i < 5) {
    if (i == 2)
        continue;
    cout << i << " ";
    i++;
}
```

Move one statement so the loop prints `0 1 3 4` and ends. Do not change the condition, and do not replace `continue`.

### Question 3

What is printed by the nested loops?

```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        if (j == 1)
            break;
        cout << i << j << " ";
    }
}
```

Which loop does `break` leave? What would the output be if `break` left both loops? It does not. The contrast is the point.

### Question 4

`i` runs from `1` through `3`. What is printed, and does the loop end early?

```cpp
for (int i = 1; i <= 3; i++) {
    switch (i) {
    case 2:
        break;
    default:
        cout << i << " ";
        break;
    }
}
```

Write the smallest extra `bool` change that makes `case 2` end the `for` loop as well. You may change the `for` condition.

### Question 5

Trace the `do`…`while` in the notes, the one that continues when `n` becomes `2`, with `n` starting at `0` and the test `n < 4`. What is printed? Which part of the loop does `continue` jump to?

### Question 6

Input is `4 -2 9 0 8 -1`. The sentinel is `-1`. `0` means stop, and it is not an error. Negative values other than the sentinel should be ignored without stopping. Other values should be added.

```cpp
int value;
int sum = 0;
cin >> value;
while (value != -1) {
    if (value == 0)
        break;
    if (value < 0) {
        cin >> value;
        continue;
    }
    sum = sum + value;
    cin >> value;
}
```

Give `sum`. Say which numbers were added, which number caused `break`, and whether `8` was read.

### Question 7

Rewrite Question 6 without `break` or `continue`. Use a `bool` named `stop`. The negative branch must still read the next value, or the same negative will be tested forever. Show the loop.

### Question 8

A `for` from `i = 0` while `i < 10`, updating with `i++`, continues when `i` is even and breaks when `i` is `7`. What is printed if the print sits between the two `if` statements, after the even test and before the `7` test?

```cpp
for (int i = 0; i < 10; i++) {
    if (i % 2 == 0)
        continue;
    if (i == 7)
        break;
    cout << i << " ";
}
```

### Question 9

Target is `7`. Input is `1 2 7 9 -1`. Using the search loop from the notes, is `9` read? What is `found`? Then answer the same questions for input `1 2 -1`.

### Question 10

This loop is meant to stop when `n` becomes `0`, and `n` starts at `3`. The body contains a `break`. Why does the loop still run forever?

```cpp
int n = 3;
while (true) {
    cout << n << " ";
    if (n < 0)
        break;
}
```

Repair it so it prints `3 2 1` and stops. Keep `while (true)` and keep a `break`.

---

## Answers

### Answer 1

```text
0 1 3 4
```

When `i` is `2`, `continue` skips the print and goes to the `for` update. `i++` in the header runs, `i` becomes `3`, and the condition is tested again. The loop does not stick, because the update is not in the part of the body that `continue` skips.

### Answer 2

`i` is `0`: not equal to `2`, print `0`, increment to `1`. `i` is `1`: print `1`, increment to `2`. `i` is `2`: `continue` jumps to the condition. The increment below it does not run. `2 < 5` is still true, so the body repeats the same `continue`. Already printed:

```text
0 1
```

The skipped line, on every later trip, is `i++`.

Move the increment above the `continue`:

```cpp
int i = 0;
while (i < 5) {
    if (i == 2) {
        i++;
        continue;
    }
    cout << i << " ";
    i++;
}
```

When `i` is `2`, it becomes `3` before `continue`. The following trips print `3` and `4`. Output: `0 1 3 4`. The increment now exists on both paths. A `continue` cannot be allowed to be the only path that forgets it.

### Answer 3

```text
00 10 20
```

`break` leaves the inner `for` only. For `i` equal to `0`, `j` prints `0` and then `j == 1` breaks. The same thing happens for `i` equal to `1` and `i` equal to `2`. The outer loop completes all three of its trips.

If `break` left both loops, the output would be only `00`, because the first inner `break` would abandon the outer loop as well. C++ does not do that. There is no label you can hang on the outer `for` to ask for it.

### Answer 4

```text
1 3
```

The loop does not end early. `case 2` breaks the `switch`. The `for` then increments `i` from `2` to `3` and runs again. `default` has its own `break`, and that one is also only a `switch` break. The prints are `1` and `3`.

```cpp
bool stop = false;
for (int i = 1; i <= 3 && !stop; i++) {
    switch (i) {
    case 2:
        stop = true;
        break;
    default:
        cout << i << " ";
        break;
    }
}
```

When `i` is `2`, `stop` becomes true and the `switch` break runs. The `for` update then makes `i` equal to `3`, and the condition `!stop` fails. The body does not run for `3`. Output is `1`. The `break` inside the `switch` is still not the thing that stopped the loop. The flag in the `for` condition is.

### Answer 5

`continue` jumps to `while (n < 4)`, not to `n++`.

* `n` becomes `1`, the `continue` test fails, print `1`. `1 < 4`, repeat.
* `n` becomes `2`, `continue` skips the print and tests `2 < 4`, which is true.
* `n` becomes `3`, print `3`. `3 < 4`, repeat.
* `n` becomes `4`, print `4`. `4 < 4` is false.

```text
1 3 4
```

`2` is missing. `4` is present because the print happens before the condition is checked, and `continue` was not taken on that trip.

### Answer 6

Start by reading `4`.

* `4` is not `0` and not negative. Add it. `sum` is `4`. Read `-2`.
* `-2` is negative. The negative branch reads the next value, which is `9`, and `continue` goes to the `while` test. `9` is not `-1`.
* `9` is added. `sum` is `13`. Read `0`.
* `0` hits `break`. The loop ends immediately.

`sum` is `13`. The added numbers are `4` and `9`. `0` caused the `break`. `8` is not read, and neither is `-1`. They are still waiting in the input. `break` does not mean “skip this value.” It means “leave the loop now.”

### Answer 7

```cpp
int value;
int sum = 0;
bool stop = false;
cin >> value;
while (value != -1 && !stop) {
    if (value == 0) {
        stop = true;
    } else if (value < 0) {
        cin >> value;
    } else {
        sum = sum + value;
        cin >> value;
    }
}
```

The `0` branch sets `stop` and does not read again. The loop condition then fails. The negative branch reads a replacement value and does not add. Without that read, `value` would stay negative and the same branch would run forever, which is the `continue` bug in a new costume. The ordinary branch adds and then reads, matching the original.

On `4 -2 9 0 8 -1`, `sum` is still `13`, and `8` is still unread.

### Answer 8

Even values hit `continue` before the print: `0, 2, 4, 6, 8` are not printed. The `for` update still advances them.

Odd values reach the second test. `1, 3, 5` are printed. `7` hits `break` before the print, so `7` is not printed and `9` never happens.

```text
1 3 5
```

The print is between the two exits, so both the skipped evens and the breaking `7` are absent. Moving the print above both tests would have shown those values before leaving.

### Answer 9

Input `1 2 7 9 -1`. The loop adds nothing. It compares.

* `1` is not `7`. Read `2`.
* `2` is not `7`. Read `7`.
* `7` matches. `found` becomes true. `break` leaves the loop.

`9` is not read. `found` is true.

Input `1 2 -1`.

* `1` fails, read `2`.
* `2` fails, read `-1`.
* The `while` test sees the sentinel and stops. `break` never runs.

`found` stays false. There is no `9` in this input. The important contrast is the ending: the same loop variable can die by `break` or by the sentinel, and `found` is the only record of which one happened.

### Answer 10

`n` starts at `3` and the body never changes `n`. `n < 0` is false on every trip. The `break` is present in the source and unreachable in the run. The condition `true` never becomes false. The program prints `3 ` forever.

`break` is not a plan unless a trip can reach it. The missing piece is the decrement that makes `n < 0` eventually true. Printing `3 2 1` means the print of `1` must happen before the break, so the break should see `0` after that print, or it should see the value after decrement and the loop should print before decrementing down through `1`.

```cpp
int n = 3;
while (true) {
    cout << n << " ";
    n--;
    if (n == 0)
        break;
}
```

* Print `3`, `n` becomes `2`, not zero.
* Print `2`, `n` becomes `1`, not zero.
* Print `1`, `n` becomes `0`, break.

```text
3 2 1
```

The `break` is reachable because `n--` is on every path, above it. A `continue` placed above that decrement would have reintroduced the infinite loop.
