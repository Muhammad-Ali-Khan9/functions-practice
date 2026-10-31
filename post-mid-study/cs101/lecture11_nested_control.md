# Lecture 11 — Nested Control Structures

A control statement’s body is a statement. A block is a statement. Another `if` is a statement. Nesting means putting one decision inside the body of another, instead of only writing decisions one after another.

Sequence still applies inside the block. The inner statement does not run unless the outer condition lets control reach it. That is the difference between nesting and two separate tests.

```cpp
if (loggedIn) {
    if (isAdmin)
        cout << "admin panel\n";
    else
        cout << "user home\n";
} else {
    cout << "please log in\n";
}
```

`isAdmin` is not examined for a visitor who is not logged in. Two separate `if` statements would not give you that. The second test would be free to run even when the first one failed, unless you repeated the first condition with `&&`.

Use `&&` when the inner body is the only extra work and both conditions are ordinary tests:

```cpp
if (loggedIn && isAdmin)
    cout << "admin panel\n";
```

You cannot collapse the structure into one `&&` when the inner `else` and the outer `else` must do different work. The login program has three different messages. One Boolean expression has only two ways to finish: true or false. Three messages need a nested decision, or an `else if` chain that encodes the same nesting.

## The dangling-else rule in a larger nest

An `else` matches the nearest unmatched `if`. This is the same rule as lecture 10, and nesting is where it starts to surprise people, because the indentation can tell a different story from the grammar.

```cpp
if (a)
    if (b)
        cout << "both\n";
else
    cout << "not a\n";
```

The `else` matches `if (b)`, not `if (a)`. The message `not a` is a lie: it is printed when `a` is true and `b` is false. When `a` is false, nothing is printed. The braces that match the English are:

```cpp
if (a) {
    if (b)
        cout << "both\n";
} else {
    cout << "not a\n";
}
```

Write the braces while the decision is still clear. Do not plan to add them after the program misbehaves.

## Nested decisions that are really a chain

A grade ladder is a nested `if`/`else` written in a flat style:

```cpp
if (score >= 85)
    cout << "A\n";
else if (score >= 70)
    cout << "B\n";
else
    cout << "C or below\n";
```

The second `if` is the body of the first `else`. It runs only when the score missed `85`. That is nesting, even though the code does not look deeply indented. Any `else if` chain is this shape.

## A point inside a region, but outside a hole

Nesting is the natural way to say “you got through the outer gate, now apply a second rule.” A point is inside a rectangle and outside an inner rectangle:

```cpp
bool inOuter = x >= 0 && x <= 10 && y >= 0 && y <= 6;
bool inHole = x >= 2 && x <= 4 && y >= 2 && y <= 4;

if (inOuter) {
    if (inHole)
        cout << "hole\n";
    else
        cout << "wall\n";
} else {
    cout << "outside\n";
}
```

`(1, 1)` is on the wall. `(3, 3)` is in the hole. `(11, 1)` is outside. The hole test is not asked for a point that already failed the outer test. That matches the geometry: a hole only exists inside the shape.

## Median of three numbers

The median is the middle value after sorting. With three numbers you can do the sorting with nested decisions. One reliable approach is to order `a` and `b` first, then place `c`.

```cpp
int x = a;
int y = b;
int z = c;
int tmp;

if (x > y) {
    tmp = x;
    x = y;
    y = tmp;
}
if (y > z) {
    tmp = y;
    y = z;
    z = tmp;
}
if (x > y) {
    tmp = x;
    x = y;
    y = tmp;
}
```

After those three decisions, `y` is the median. Each `if` is nested in the sense that later tests see values that earlier tests may have swapped. The third test is required. Swapping `y` and `z` can put a small `z` into `y` and leave it smaller than `x`.

Example: `a = 3`, `b = 1`, `c = 2`.

1. `x > y` is `3 > 1`, so swap. Now the triple is `1, 3, 2`.
2. `y > z` is `3 > 2`, so swap. Now the triple is `1, 2, 3`.
3. `x > y` is false. Median `y` is `2`.

Example: `9, 8, 7`.

1. Swap to `8, 9, 7`.
2. Swap to `8, 7, 9`.
3. `8 > 7`, swap to `7, 8, 9`. Median `8`.

Without the third `if`, the second example would report `7`, which is the minimum, not the median.

## What nesting costs

Every new level multiplies the paths you should trace. Two nested `if`/`else` statements have four paths, not two, unless an inner condition is impossible given the outer one. Before you finish a nested decision, name the paths: outer true and inner true, outer true and inner false, outer false. If you cannot say what each path prints, the nest is not finished.

Loops nest by the same rule: the inner loop’s whole run is one statement of the outer loop. The loop syntax itself is lectures 13–16. The reasoning you practice here is the reasoning those later programs use.

---

## Questions

### Question 1

`a` is true and `b` is false. What is printed? Then answer the same question when `a` is false and `b` is true.

```cpp
if (a)
    if (b)
        cout << "both\n";
else
    cout << "not a\n";
```

Rewrite it with braces so `not a` is printed only when `a` is false.

### Question 2

Trace `score` values `90`, `70`, and `40`.

```cpp
if (score >= 85)
    cout << "A\n";
else if (score >= 50)
    cout << "Pass\n";
else
    cout << "F\n";
```

How many conditions run for a score of `40`? How many run for a score of `90`?

### Question 3

Using the rectangle-and-hole program in the notes, classify the points `(0, 0)`, `(3, 3)`, `(4, 2)`, and `(10, 7)`. `(4, 2)` sits on the hole’s right edge. Treat the hole tests as inclusive, the way they are written.

### Question 4

The indentation says the `else` belongs to the outer `if`. What does the language actually do for `x` equal to `5`? Show the output, then show the output after braces are added so the indentation becomes the truth.

```cpp
int x = 5;
if (x > 0)
    if (x % 2 == 0)
        cout << "pos even\n";
else
    cout << "not positive\n";
```

### Question 5

Find the median of `4, 4, 1` and of `2, 5, 2` with the three-swap procedure from the notes. Show the triple after each `if`.

### Question 6

A bank screen has three messages, and they must stay three messages:

* not logged in: `please log in`
* logged in, not admin: `user home`
* logged in and admin: `admin panel`

Explain why one `if (loggedIn && isAdmin)` cannot produce all three messages. Write the nested `if`/`else`. Trace the three cases `(false, true)`, `(true, false)`, and `(true, true)` for `(loggedIn, isAdmin)`.

### Question 7

This fragment is supposed to print `teenager` for ages `13` through `19` inclusive, and `other` for every other age, including ages that fail `age >= 0`. What does it print for `15`, for `10`, and for `-1`? Repair it.

```cpp
if (age >= 0)
    if (age >= 13 && age <= 19)
        cout << "teenager\n";
else
    cout << "other\n";
```

### Question 8

Write a nested decision that prints one of these labels for integers `m` and `n`:

* `both zero` when both are `0`
* `m only` when `m` is `0` and `n` is not
* `n only` when `n` is `0` and `m` is not
* `neither` when neither is `0`

Trace `(0, 0)`, `(0, 4)`, `(4, 0)`, and `(4, 5)`.

### Question 9

The author claims this prints the middle value of three distinct numbers. `a` is `1`, `b` is `3`, `c` is `2`. Walk through it. Is the claim true for this input? Then try `a = 5`, `b = 1`, `c = 4`. If it fails, say which assumption it depends on.

```cpp
if (a < b) {
    if (b < c)
        cout << b << "\n";
    else
        cout << c << "\n";
} else {
    cout << a << "\n";
}
```

### Question 10

Rewrite the repaired teenager test from Question 7 as a single `if`/`else` that is not nested, using `&&`. Then say which version can grow an extra message for negative ages without repeating a comparison, and write that three-message version.

---

## Answers

### Answer 1

The `else` matches `if (b)`.

When `a` is true and `b` is false, the outer body is entered and the inner condition fails, so the matching `else` prints `not a`. That text is wrong for this input, which is why the rule matters.

When `a` is false, the outer body is skipped. The inner `if` and its `else` do not run. Nothing is printed, even though `b` is true. `b` is never looked at.

```cpp
if (a) {
    if (b)
        cout << "both\n";
} else {
    cout << "not a\n";
}
```

Now the first input prints nothing, and the second input prints `not a`.

### Answer 2

* `90`: `90 >= 85` is true. Output `A`. The later tests do not run. One condition is evaluated.
* `70`: the first test is false, so the `else if` runs. `70 >= 50` is true. Output `Pass`. Two conditions are evaluated.
* `40`: the first test is false, the second test is false, and the final `else` prints `F`. Two conditions are evaluated. The final `else` is not a condition.

A score of `90` costs one comparison because the first success ends the chain. A score of `40` costs both comparisons because each failure is what opens the next branch.

### Answer 3

`inOuter` is `x` from `0` through `10` and `y` from `0` through `6`, all inclusive. `inHole` is `x` from `2` through `4` and `y` from `2` through `4`, all inclusive.

* `(0, 0)` is on the outer boundary and not in the hole. Output `wall`.
* `(3, 3)` is in both. The inner `if` prints `hole`.
* `(4, 2)` has `x == 4` and `y == 2`, so it is inside the inclusive hole. Output `hole`.
* `(10, 7)` has `y == 7`, which fails `y <= 6`. Output `outside`. The hole test does not run.

### Answer 4

`else` matches `if (x % 2 == 0)`, not the positive test. `x` is `5`, so the outer test is true. `5 % 2 == 0` is false, so the `else` prints:

```text
not positive
```

`5` is positive. The message is false because the braces are missing.

```cpp
if (x > 0) {
    if (x % 2 == 0)
        cout << "pos even\n";
} else {
    cout << "not positive\n";
}
```

For `x` equal to `5` this prints nothing. `5` is positive and odd, and this version has no message for that path. That is honest. The broken version had a message, and the message was a lie.

### Answer 5

Start with `4, 4, 1`.

1. `4 > 4` is false. The triple stays `4, 4, 1`.
2. `4 > 1` is true. Swap the second and third values. The triple is `4, 1, 4`.
3. `4 > 1` is true. Swap the first and second. The triple is `1, 4, 4`.

The median is `4`.

Start with `2, 5, 2`.

1. `2 > 5` is false. The triple stays `2, 5, 2`.
2. `5 > 2` is true. The triple becomes `2, 2, 5`.
3. `2 > 2` is false. The triple stays `2, 2, 5`.

The median is `2`. The repeated value is the middle once the three positions are ordered.

### Answer 6

`if (loggedIn && isAdmin)` has one body. That body can print `admin panel`. The failure of the `&&` is a single opposite outcome. It cannot tell “not logged in” apart from “logged in but not an admin,” because both of those make the same condition false. Three messages need at least two decisions.

```cpp
if (loggedIn) {
    if (isAdmin)
        cout << "admin panel\n";
    else
        cout << "user home\n";
} else {
    cout << "please log in\n";
}
```

* `(false, true)`: the outer test fails. `isAdmin` is not read. Output `please log in`.
* `(true, false)`: outer success, inner failure. Output `user home`.
* `(true, true)`: both succeed. Output `admin panel`.

### Answer 7

The `else` matches the inner `if`, not `age >= 0`.

* `15`: outer true, inner true. Output `teenager`. This case happens to be right.
* `10`: outer true, inner false, so the attached `else` prints `other`. This case also happens to be right.
* `-1`: outer false, so the whole inner `if`/`else` is skipped. Nothing is printed. The specification asked for `other`.

The negative age is the input that reveals the bug. The positive ages can look correct while the `else` is attached to the wrong `if`.

```cpp
if (age >= 0) {
    if (age >= 13 && age <= 19)
        cout << "teenager\n";
    else
        cout << "other\n";
} else {
    cout << "other\n";
}
```

Now `-1` prints `other`, and `15` and `10` keep the labels they had.

### Answer 8

```cpp
if (m == 0) {
    if (n == 0)
        cout << "both zero\n";
    else
        cout << "m only\n";
} else {
    if (n == 0)
        cout << "n only\n";
    else
        cout << "neither\n";
}
```

* `(0, 0)` prints `both zero`.
* `(0, 4)` prints `m only`.
* `(4, 0)` prints `n only`.
* `(4, 5)` prints `neither`.

The outer test splits “`m` is zero” from “`m` is not.” Each of those branches still has to look at `n`, because each one has two different messages.

### Answer 9

For `1, 3, 2`: `a < b` is true, so the inner test runs. `b < c` is `3 < 2`, which is false, so it prints `c`, which is `2`. The middle value really is `2`. This input works.

For `5, 1, 4`: `a < b` is `5 < 1`, which is false, so the `else` prints `a`, which is `5`. The three numbers in order are `1, 4, 5`. The median is `4`, not `5`. The claim is false.

The fragment assumes that when `a` is not less than `b`, `a` is the median. That is only true for some arrangements. Here `a` is the maximum. The `else` branch never looks at `c`, so it cannot find a middle value that sits between `b` and `a`. The three-swap procedure in the notes looks at all three positions after each swap. This fragment does not.

### Answer 10

Ages `13` through `19` are exactly the ages that satisfy both comparisons. Every other `int` is the opposite branch, including negatives and ages past `19`.

```cpp
if (age >= 13 && age <= 19)
    cout << "teenager\n";
else
    cout << "other\n";
```

This is the better program if `other` really is one message. Nesting becomes the better program when a negative age must print a third message, because that is a different failure from “non-negative but not a teenager.” The single `&&` would have to be rewritten anyway, and the negative test would be repeated if you tried to keep everything flat and still distinguish the two non-teenager cases.

```cpp
if (age < 0)
    cout << "bad age\n";
else if (age >= 13 && age <= 19)
    cout << "teenager\n";
else
    cout << "other\n";
```

`age >= 0` is not repeated inside the teenager test. The `else if` already means “not negative.” That is the nesting, written as a chain.
