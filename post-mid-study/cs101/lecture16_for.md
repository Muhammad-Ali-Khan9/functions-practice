# Lecture 16 — for Repetition Statement

`for` is counter-controlled repetition with the four pieces written in one header. It does not do a new kind of work. It makes the counter harder to forget.

```cpp
for (initialization; condition; update) {
    body
}
```

The initialization runs once. Then the loop repeats this cycle: test the condition, run the body if it is true, run the update. When the condition is false, the update does not run and the body does not run.

This prints `1` through `5`:

```cpp
for (int i = 1; i <= 5; i = i + 1)
    cout << i << " ";
```

The matching `while` is:

```cpp
int i = 1;
while (i <= 5) {
    cout << i << " ";
    i = i + 1;
}
```

Those two are the same only when the body does not use `continue`. Lecture 17 shows why: `continue` in a `for` still performs the update in the header, because the update is not a line the `continue` can jump over. Keep that exception in mind. For a body that only uses ordinary statements, the translation above is exact.

## Scope of the counter

If the counter is declared in the header, it exists only for the `for` statement.

```cpp
for (int i = 0; i < 3; i++)
    cout << i << " ";
cout << i;   // compile error: i is not declared here
```

Declare `i` before the loop when the program still needs the final counter afterward:

```cpp
int i;
for (i = 0; i < 3; i++)
    cout << i << " ";
cout << " stopped at " << i << "\n";
```

That prints `0 1 2 ` and then `stopped at 3`. The final `i` is the first value that failed the test, not the last value that was printed.

A semicolon after the header swallows the body:

```cpp
int i;
for (i = 0; i < 3; i++);
cout << i << "\n";
```

The body is empty. `i` still walks from `0` to `3`. Then one print runs, after the loop, and shows `3`. The loop did not print `0 1 2`.

## Several counters

The comma operator runs expressions from left to right. It belongs in a `for` header when two counters move together. It is a bad way to pack unrelated work into the body.

```cpp
for (int i = 0, j = 10; i < j; i++, j--)
    cout << i << " " << j << "\n";
```

* `i` is `0`, `j` is `10`. `0 < 10`, print `0 10`. Then `i` becomes `1` and `j` becomes `9`.
* `1 < 9`, print `1 9`. Then `i` is `2` and `j` is `8`.
* `2 < 8`, print `2 8`. Then `i` is `3` and `j` is `7`.
* `3 < 7`, print `3 7`. Then `i` is `4` and `j` is `6`.
* `4 < 6`, print `4 6`. Then `i` is `5` and `j` is `5`.
* `5 < 5` is false.

Five lines. The loop stops when the counters meet, not when `i` reaches `10`.

## The update can be more than ++

`i += i` replaces `i` with `i + i`, so the counter doubles after each body.

```cpp
for (int i = 1; i <= 10; i += i)
    cout << i << " ";
```

Bodies run for `1`, `2`, `4`, and `8`. After `8`, the update stores `16`, and `16 <= 10` fails.

```text
1 2 4 8
```

Changing the counter inside the body as well as in the header skips values, or repeats them, or never ends. If the header already says `i++` and the body also says `i++`, the counter moves by two. Do one of those, and know which one.

## Nested for loops

The inner `for` is one statement of the outer `for`. The inner loop runs from the beginning on every outer trip. It does not resume where it stopped last time. Its counter is created again.

```cpp
for (int row = 1; row <= 3; row++) {
    for (int star = 1; star <= row; star++)
        cout << "*";
    cout << "\n";
}
```

* `row` is `1`. The inner loop prints one star. Newline.
* `row` is `2`. The inner counter starts at `1` again and prints two stars. Newline.
* `row` is `3`. Three stars, then a newline.

```text
*
**
***
```

A common off-by-one here is `star < row`, which prints a blank first line when `row` is `1`, because `1 < 1` is false.

## Reading n numbers

If `n` is `4` and the header is `for (int i = 0; i <= n; i++)`, the body runs for `0, 1, 2, 3, 4`. That is five trips. The program asks for one more number than the user announced. `i < n` is the test that runs `n` times when `i` starts at `0`. `i <= n` is the test that runs `n` times when `i` starts at `1` and the last wanted value is `n`.

---

## Questions

### Question 1

Rewrite this as a `while` loop that has the same output. Then state the output.

```cpp
for (int i = 1; i <= 4; i++)
    cout << i * i << " ";
```

### Question 2

Does this compile? If the declaration of `i` is moved before the loop so that it does compile, what is printed?

```cpp
for (int i = 0; i < 3; i++)
    cout << i << " ";
cout << "end " << i << "\n";
```

### Question 3

What is printed? The semicolon is intentional in the question.

```cpp
int i;
for (i = 0; i < 3; i++);
    cout << i << " ";
cout << "done\n";
```

### Question 4

List every pair `(i, j)` that is printed.

```cpp
for (int i = 0, j = 10; i < j; i++, j--)
    cout << i << " " << j << "\n";
```

How many lines are there?

### Question 5

What does this print?

```cpp
for (int i = 1; i <= 10; i += i)
    cout << i << " ";
```

Give the value of `i` that fails the condition. That value is not printed.

### Question 6

Show the exact output, including line breaks.

```cpp
for (int row = 1; row <= 3; row++) {
    for (int star = 1; star < row; star++)
        cout << "*";
    cout << ".\n";
}
```

How does one character of the inner condition change a blank-looking first line into `*`?

### Question 7

`n` is `4`. The body reads one integer and adds it. How many integers does each header read?

```cpp
for (int i = 0; i <= n; i++)
for (int i = 0; i < n; i++)
for (int i = 1; i <= n; i++)
```

The user typed `10 20 30 40` and then stopped typing. Which header is waiting for a fifth number?

### Question 8

The header updates `i`, and the body updates `i` as well. List the printed values. `i` starts at `0`.

```cpp
for (int i = 0; i < 8; i++) {
    cout << i << " ";
    i++;
}
```

### Question 9

Write a nested `for` that prints this rectangle of width `w` and height `h`. Use `w = 4` and `h = 2` as the trace.

```text
****
****
```

The inner loop must run all the way across on every row. Say what bug would leave the second row shorter if you forgot to restart the inner counter. A `for` header does that restart for you. A hand-written counter might not.

### Question 10

`for (int i = 5; i >= 1; i--)` prints a countdown. Change only the condition to `i > 1` and state the new output. Then write a `for` whose update is `i = i - 2`, starting at `7`, that prints `7 5 3 1` and does not print `-1`. Give the condition you used.

---

## Answers

### Answer 1

```cpp
int i = 1;
while (i <= 4) {
    cout << i * i << " ";
    i++;
}
```

`i` is `1, 2, 3, 4`. The squares are `1, 4, 9, 16`.

```text
1 4 9 16
```

The update is after the print, matching the `for` cycle: body first, then update, then test again.

### Answer 2

It does not compile. `i` was declared in the `for` header, so the statement after the loop cannot see `i`.

Move the declaration out:

```cpp
int i;
for (i = 0; i < 3; i++)
    cout << i << " ";
cout << "end " << i << "\n";
```

The body prints `0 1 2 `. The loop stops when `i` becomes `3` and the test `i < 3` fails. The last line prints that `3`.

```text
0 1 2 end 3
```

### Answer 3

The semicolon is the whole body. The header still initializes `i` to `0`, tests `i < 3`, and increments, three successful times and a failing test. `i` ends at `3`. The `cout` is indented, but it is the next statement after the loop, so it runs once.

```text
3 done
```

There is a space after `3` because the string in the print is `" "`, then `done` and a newline. The numbers `0`, `1`, and `2` are never sent to `cout`.

### Answer 4

The printed pairs are the values at the start of the body, before that trip’s update.

```text
0 10
1 9
2 8
3 7
4 6
```

Five lines. The next update would make `i` equal to `5` and `j` equal to `5`, and `5 < 5` stops the loop before a sixth print. The pair `5 5` is not printed.

### Answer 5

| Start of body | Update `i += i` afterward |
| --- | --- |
| 1 | 2 |
| 2 | 4 |
| 4 | 8 |
| 8 | 16 |

`16 <= 10` is false, so `16` is not printed.

```text
1 2 4 8
```

The failing value is `16`.

### Answer 6

`star < row` is false on the entire first row, because `row` is `1` and the inner counter starts at `1`. The inner body prints nothing. The dot and the newline still run, because they belong to the outer loop.

* Row `2`: one star, because `star` equal to `1` is the only success.
* Row `3`: stars for `star` equal to `1` and `2`.

```text
.
*.
**.
```

Changing `<` to `<=` lets `star == row` succeed. The first row prints one star before the dot:

```text
*.
**.
***.
```

One comparison character is the whole first line.

### Answer 7

* `i = 0; i <= n; i++` runs for `0, 1, 2, 3, 4`. Five integers.
* `i = 0; i < n; i++` runs for `0, 1, 2, 3`. Four integers.
* `i = 1; i <= n; i++` runs for `1, 2, 3, 4`. Four integers.

The user provided four numbers. The header `i <= n` with a start of `0` is the one waiting for a fifth number. The other two headers match a request for `n` values. They use different starts and different comparisons, and those choices cancel out. Copying only the comparison from one of them onto the other start is what creates the extra read.

### Answer 8

The header increments once per trip, and the body increments once per trip. From a printed value, the next printed value is two larger, as long as the test still passes.

* Print `0`. Body makes `i` equal to `1`. Header makes `i` equal to `2`.
* Print `2`. Body makes `3`. Header makes `4`.
* Print `4`. Body makes `5`. Header makes `6`.
* Print `6`. Body makes `7`. Header makes `8`.
* `8 < 8` fails.

```text
0 2 4 6
```

`8` is not printed. If the body had not touched `i`, the loop would have printed `0` through `7`.

### Answer 9

```cpp
for (int row = 0; row < h; row++) {
    for (int col = 0; col < w; col++)
        cout << "*";
    cout << "\n";
}
```

With `h = 2` and `w = 4`, the outer loop runs twice. Each time the inner loop is a new `for`, so `col` starts at `0` again and prints four stars.

```text
****
****
```

If you used one counter by hand and did not set it back to `0` at the start of the second row, the second row would see a counter that had already finished the first row. The inner `for` declaration avoids that by initializing `col` on every entry. Forgetting that reset is the bug. The header’s initialization is the reset.

### Answer 10

`for (int i = 5; i > 1; i--)` prints while `i` is greater than `1`. The body runs for `5, 4, 3, 2`. It does not run for `1`.

```text
5 4 3 2
```

The step of `-2` from `7`:

```cpp
for (int i = 7; i >= 1; i = i - 2)
    cout << i << " ";
```

* Print `7`, then `i` is `5`.
* Print `5`, then `i` is `3`.
* Print `3`, then `i` is `1`.
* Print `1`, then `i` is `-1`.
* `-1 >= 1` fails, so `-1` is not printed.

```text
7 5 3 1
```

The condition `i >= 1` is what keeps the update’s overshoot out of the output. The update is allowed to produce `-1`. The test is what refuses to print it.
