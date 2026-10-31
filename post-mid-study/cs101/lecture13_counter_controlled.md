# Lecture 13 — Counter-Controlled Repetition

Selection skips work. Repetition does work again. Counter-controlled repetition is the form you use when the number of repetitions is known before the loop starts: print ten lines, add the first `n` integers, read exactly `n` scores.

A counter-controlled loop has four pieces, and a bug is usually one of them in the wrong place.

1. The counter gets a starting value. This happens once, before the loop.
2. The condition is tested before every trip through the body, including the first.
3. The body does the work of one trip.
4. The counter changes. If it does not, and the condition can stay true, the loop never ends.

`while` is the statement this lecture uses. `for`, which packs the same four pieces into one header, is lecture 16.

```cpp
int i = 1;            // 1. start
while (i <= 10) {     // 2. test
    cout << i << " "; // 3. body
    i = i + 1;        // 4. update
}
```

The condition `i <= 10` is checked when `i` is `1` through `10`. That is ten trips. After the trip where `i` is `10`, the update makes `i` equal to `11`, the test fails, and the loop stops. The body does not run for `11`.

`i < 10` with the same start is nine trips: `1` through `9`. Off-by-one errors are wrong boundaries, not wrong arithmetic inside the body. Write the first value and the last value you want, then choose `<` or `<=` to match that last value.

## The update is part of the control, not a decoration

```cpp
int i = 1;
while (i <= 5) {
    cout << i << " ";
}
```

`i` stays `1`, the condition stays true, and the program prints `1` forever. An infinite loop is not a crash you can catch with `if`. Stop it from the terminal if you run one, and fix the missing update.

Where you write `++` changes which numbers are included. These two loops do not add the same values. Both start with `i` equal to `1` and `sum` equal to `0`.

```cpp
while (i <= 5)
    sum = sum + i++;
```

The postfix expression yields the current `i` and then increments. The added values are `1, 2, 3, 4, 5`. After adding `5`, `i` becomes `6` and the test fails. `sum` is `15`.

```cpp
int i = 1;
int sum = 0;
while (i <= 5)
    sum = sum + ++i;
```

The prefix expression increments first. The first addition is `2`, not `1`. The loop continues while the value at the test is still `<= 5`. When `i` is `5` the test succeeds, `++i` makes `6`, and `6` is added. `sum` is `2 + 3 + 4 + 5 + 6`, which is `20`. Then `i` is `6` and the test fails.

Prefer a layout where the increment is its own statement at the end of the body. It is longer and it is harder to misread.

## Reading exactly n values

The counter can count inputs instead of counting the printed number.

```cpp
int n;
cin >> n;
int i = 1;
int sum = 0;
while (i <= n) {
    int value;
    cin >> value;
    sum = sum + value;
    i = i + 1;
}
```

If the user asks to add `3` values and types `10 20 30`, then `i` runs `1, 2, 3`, `sum` becomes `60`, and the loop stops. If the test is written `i < n`, the third value is never read. If the increment is placed before the read and `i` starts at `0` with test `i < n`, you can still read `n` values, but only because the start and the test were changed together. Copying the increment from one loop into another without rechecking the bounds is how an off-by-one appears.

The sum of `1` through `n` is also `n * (n + 1) / 2`. A loop that is supposed to compute that sum can be checked against the formula for a small `n`. For `n` equal to `5`, both should say `15`. If the loop says `20`, the counter is visiting the wrong set of numbers, which is what the prefix example did.

## A counter hiding in the condition

This is legal and unpleasant. The test both uses `i` and changes it.

```cpp
int i = 1;
while (i++ <= 3)
    cout << i << " ";
```

* Test uses `1`, which is `<= 3`, then `i` becomes `2`. Body prints `2`.
* Test uses `2`, then `i` becomes `3`. Body prints `3`.
* Test uses `3`, then `i` becomes `4`. Body prints `4`.
* Test uses `4`, which fails. `i` becomes `5` anyway, because the postfix update is part of evaluating the test. The body does not run.

Output: `2 3 4`. The printed numbers are not the numbers the condition looked at. That is a good reason to keep the increment in the body, on its own line, until the four pieces are automatic.

---

## Questions

### Question 1

How many times does the body run, and what is printed?

```cpp
int i = 1;
while (i < 10) {
    cout << i << " ";
    i = i + 1;
}
```

Change only the condition so the program prints `1` through `10`.

### Question 2

What does this do, and why does it not stop?

```cpp
int i = 1;
while (i <= 5)
    cout << i << " ";
```

### Question 3

`i` starts at `1` and `sum` starts at `0` before each loop. Give `sum` and the final `i` for both loops. They are separate experiments.

```cpp
while (i <= 5)
    sum = sum + i++;
```

```cpp
while (i <= 5)
    sum = sum + ++i;
```

### Question 4

Trace the hiding increment. What is printed, and what is `i` after the loop?

```cpp
int i = 1;
while (i++ <= 3)
    cout << i << " ";
```

### Question 5

The user types `3` for `n`, then types `10 20 30`. What is `sum` if the test is `i <= n` with `i` starting at `1`? What is `sum` if the only change is `i < n`? Which input is never read in the second version?

### Question 6

Write a counter-controlled `while` loop that prints the even numbers from `2` through `n` inclusive when `n` is even, and through the greatest even number that is still `<= n` when `n` is odd. Trace `n = 7` and `n = 8`. The increment should be its own statement.

### Question 7

`factorial` starts at `1` and `k` starts at `1`. The loop multiplies while `k <= n`. Trace `n = 5` and give the final `factorial`. Then say what the same loop produces for `n = 0` if you do not special-case zero, and whether that answer is mathematically acceptable. `0!` is defined to be `1`.

### Question 8

This loop is supposed to print `5 4 3 2 1`. What does it print instead?

```cpp
int i = 5;
while (i > 1) {
    cout << i << " ";
    i--;
}
```

Repair the condition. Then repair it a second way, by changing the body, so that a condition of `i > 1` still prints all five numbers. Show that second body.

### Question 9

`i` starts at `0` and `n` is `6`. List every `i` for which the body runs.

```cpp
while (i < n) {
    cout << i << " ";
    i = i + 2;
}
```

How many numbers are printed? What is the last number?

### Question 10

A program must read exactly `n` integers and count how many of them are negative. `n` is read first and is at least `0`. Write the loop with a counter, a `count` variable, and an `if` inside the body. Trace `n = 4` and the values `3 -1 0 -8`. Then say what your program does for `n = 0`, and why that is the right number of trips.

---

## Answers

### Answer 1

`i` is `1, 2, 3, 4, 5, 6, 7, 8, 9`. When `i` becomes `10`, `i < 10` is false. The body runs nine times.

```text
1 2 3 4 5 6 7 8 9
```

`i <= 10` includes the trip where `i` is `10`, and the following increment makes the test fail on `11`.

### Answer 2

The body prints the current `i` and does not change it. `i` remains `1`, and `1 <= 5` remains true. The program prints `1 ` without end. The missing piece is the counter update. A condition that is true on entry is not a plan for stopping. Stopping comes from the body changing something the condition depends on.

### Answer 3

Postfix version. The test sees `i` before the increment inside the addition.

| Test sees | Added | `i` after the statement |
| --- | --- | --- |
| 1 | 1 | 2 |
| 2 | 2 | 3 |
| 3 | 3 | 4 |
| 4 | 4 | 5 |
| 5 | 5 | 6 |

`sum` is `15`. Final `i` is `6`.

Prefix version. The increment happens before the addition, and the test still uses the old `i`.

| Test sees | After `++i`, the added value | `i` after the statement |
| --- | --- | --- |
| 1 | 2 | 2 |
| 2 | 3 | 3 |
| 3 | 4 | 4 |
| 4 | 5 | 5 |
| 5 | 6 | 6 |

`sum` is `20`. Final `i` is `6`. The last test fails when `i` is `6`, so `7` is not added. The two loops stop at the same final counter and still total different numbers, because they do not add the same set.

### Answer 4

The postfix increment in the condition always happens when the condition is evaluated, including the evaluation that fails.

* Use `1`, then `i` is `2`, test succeeds, print `2`.
* Use `2`, then `i` is `3`, test succeeds, print `3`.
* Use `3`, then `i` is `4`, test succeeds, print `4`.
* Use `4`, then `i` is `5`, test fails, body skipped.

```text
2 3 4
```

`i` ends at `5`. The printed values are one ahead of the values that were compared with `3`.

### Answer 5

With `i <= n` and `i` starting at `1`, the body runs for `i` equal to `1`, `2`, and `3`. All three inputs are read. `sum` is `60`.

With `i < n`, the body runs for `i` equal to `1` and `2`. It stops when `i` becomes `3`, because `3 < 3` is false. `sum` is `30`. The unread value is `30`, the third input. It is still sitting in the input waiting for a later read, or it is lost if the program ends.

### Answer 6

```cpp
int i = 2;
while (i <= n) {
    cout << i << " ";
    i = i + 2;
}
```

For `n = 7` the values that pass `i <= 7` are `2, 4, 6`. After printing `6`, `i` becomes `8` and stops. Output: `2 4 6`.

For `n = 8` the extra successful test is `8 <= 8`. Output: `2 4 6 8`.

Starting at `2` and stepping by `2` is what keeps the odd numbers out. A step of `1` would need an `if` inside the body. The counter itself can carry that rule when the sequence is regular.

### Answer 7

`factorial` starts at `1`, which is the identity for multiplication. Each trip multiplies by the current `k` and then advances `k`.

| `k` at the test | `factorial` after multiplying |
| --- | --- |
| 1 | 1 |
| 2 | 2 |
| 3 | 6 |
| 4 | 24 |
| 5 | 120 |

Then `k` is `6` and `6 <= 5` fails. `factorial` is `120`, which is `5!`.

For `n = 0`, the test `k <= n` is `1 <= 0` on the first check. The body never runs. `factorial` stays `1`. That is the correct value of `0!`. The initialization did the empty case for you. You would get a wrong answer only if you had started `factorial` at `0`, because then an empty loop would report `0`.

### Answer 8

`i > 1` fails when `i` is `1`, so the body never prints `1`.

```text
5 4 3 2
```

First repair: `while (i >= 1)`. The trip with `i` equal to `1` now runs, prints `1`, and then `i` becomes `0` and the test fails.

Second repair, keeping `i > 1`. Print the decremented value, and print the original `5` before the loop, or print after decrementing and start one higher. One body that works with `i > 1` and still begins at `5` is:

```cpp
int i = 5;
while (i > 1) {
    cout << i << " ";
    i--;
}
cout << i << " ";
```

The loop prints `5 4 3 2`, leaves `i` at `1`, and the statement after the loop prints that last value. Output: `5 4 3 2 1`. The last number is no longer the loop’s job. Changing the condition is the smaller repair. This second version shows that “the loop stopped” and “the last value was printed” are not the same event.

### Answer 9

`i` starts at `0`. The body runs while `i` is `0, 2, 4`. After printing `4`, `i` becomes `6`, and `6 < 6` is false.

```text
0 2 4
```

Three numbers are printed. The last number is `4`, not `6`. `n` is the first value that fails the test, not the last value that is printed, because the step is `2` and the comparison is `<`.

### Answer 10

```cpp
int n;
cin >> n;
int i = 1;
int count = 0;
while (i <= n) {
    int value;
    cin >> value;
    if (value < 0)
        count = count + 1;
    i = i + 1;
}
cout << count << "\n";
```

For `3 -1 0 -8` and `n` equal to `4`, the negative values are `-1` and `-8`. `0` is not negative. `count` is `2`. The output is `2`.

For `n = 0`, `i` starts at `1` and `1 <= 0` is false. The body runs zero times. No read is attempted, and `count` stays `0`. That is the right number of trips: the user asked for zero integers, so there are zero negatives among them.
