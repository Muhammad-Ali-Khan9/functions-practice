# Lecture 21 — Random Number Generation

`rand` returns a pseudorandom `int` in the range `0` through `RAND_MAX`. The sequence is produced by a formula. The same seed produces the same sequence. That is useful for testing and surprising when a game prints the same rolls on every run.

These tools live in `<cstdlib>`. Seeding from the clock uses `<ctime>`.

## rand and the default seed

```cpp
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    cout << rand() << "\n";
    cout << rand() << "\n";
    return 0;
}
```

Without `srand`, the generator starts from seed `1`. Two runs of this program print the same two numbers, in the same order. The numbers depend on the library, so this course does not memorize a particular first value. What you can rely on is the repetition.

`RAND_MAX` is at least `32767`. It is the largest value `rand` can return.

## Scaling to a range

A die has faces `1` through `6`. `rand() % 6` produces `0` through `5`. Adding `1` shifts that range onto the faces.

```cpp
int face = 1 + rand() % 6;
```

The general pattern is

```text
shift + rand() % span
```

`span` is how many different results you want. `shift` is the smallest result. A number from `10` through `15` has span `6` and shift `10`:

```cpp
int n = 10 + rand() % 6;
```

`rand() % 2` is `0` or `1`, which is enough for a coin. Scaling with `%` is the method this lecture uses. For a small span it is the right freshman tool. It is not a perfectly even split when `RAND_MAX + 1` is not divisible by the span. Some remainders can appear one time more often than others. For dice in this course the bias is small enough to ignore. It is not small enough to ignore in a program that must be uniform.

## srand

`srand` sets the seed. Call it once, before the rolls.

```cpp
#include <cstdlib>
#include <ctime>

srand(static_cast<unsigned int>(time(nullptr)));
```

`time(nullptr)` is the current time in seconds. Casting it to `unsigned int` matches `srand`. Different seconds produce different seeds, so two runs usually differ.

Calling `srand` inside the roll loop is a bug. If the clock has not moved to the next second, every call reseeds with the same seed, and every “random” number is the first number of that seed.

```cpp
for (int i = 0; i < 5; i++) {
    srand(static_cast<unsigned int>(time(nullptr))); // reseeds every trip
    cout << (1 + rand() % 6) << " ";
}
```

A fast loop often prints the same face five times.

`srand(n)` followed later by `srand(n)` restarts the sequence. That is how a test can replay a bug: seed with a fixed integer instead of the clock.

```cpp
srand(42);
int first = rand();
srand(42);
int again = rand();   // again == first
```

## Using the rolls

A loop collects many rolls. An array of counts is lecture 24. Until then, separate counters are enough.

```cpp
int sixes = 0;
for (int i = 0; i < 100; i++) {
    if (1 + rand() % 6 == 6)
        sixes++;
}
```

Each trip draws a new value, because `rand` advances the sequence. Reading `face` twice without calling `rand` again repeats the old roll. The generator moves only when `rand` is called.

## Mistakes that change the program

- Forgetting `srand`, then treating a repeated run as a new shuffle.
- Calling `srand` on every roll.
- Using `rand() % 6` and expecting faces `1` through `6`. That expression includes `0` and excludes `6`.
- Writing `rand() % 6 + 1` with the wrong precedence in a larger expression. `%` binds tighter than `+`, so `1 + rand() % 6` is the die. Parentheses make the grouping obvious: `1 + (rand() % 6)`.
- Expecting a particular numeric sequence from the textbook on MinGW. Same seed, same library, same sequence. A different library can print different numbers from the same seed.

---

## Questions

### Question 1

A program prints one die face with `1 + rand() % 6` and never calls `srand`. The first run prints `4`. What can you say about the first face on the next run? What can you say about the second face on the first run?

### Question 2

List every integer that each expression can produce.

1. `rand() % 6`
2. `1 + rand() % 6`
3. `rand() % 6 + 1`
4. `10 + rand() % 15`

### Question 3

This loop is meant to print five die faces. Why can it print `3 3 3 3 3` even though `rand` is in the body? The clock is not advancing during the loop.

```cpp
for (int i = 0; i < 5; i++) {
    srand(static_cast<unsigned int>(time(nullptr)));
    cout << (1 + rand() % 6) << " ";
}
```

Where should `srand` be called instead?

### Question 4

`srand(7);` then `int a = rand();` then `int b = rand();` then `srand(7);` then `int c = rand();`. How does `c` compare with `a` and with `b`?

### Question 5

A coin is “heads” when the draw is even. A student writes

```cpp
if (rand() % 2 == 1)
    cout << "heads\n";
else
    cout << "tails\n";
```

Which face is actually tied to the odd result? Give a condition that prints `heads` for the even result.

### Question 6

`face` was set with `int face = 1 + rand() % 6;`. The next line is `cout << face << " " << face;`. Does this consume two rolls or one? What would consume two?

### Question 7

You need an exam score from `0` through `100`, inclusive. That is `101` possible values. Write the expression. Why is `rand() % 100` the wrong range?

### Question 8

True or false.

1. `srand(static_cast<unsigned int>(time(nullptr)));` guarantees that two runs started in the same second get different sequences.
2. After `srand(1)`, the sequence matches a program that never called `srand`, on the same library.
3. `RAND_MAX` is always `32767`.
4. `rand() % 6` is slightly uneven for some libraries because the number of possible `rand` results is not a multiple of `6`.

### Question 9

A test fails only for some rolls. How do you replay the same rolls without removing `rand` from the program?

### Question 10

Trace the count. `srand` has already been called. The loop runs four times and the faces are `6`, `2`, `6`, `1`, in that order. What is `sixes`?

```cpp
int sixes = 0;
for (int i = 0; i < 4; i++) {
    int face = 1 + rand() % 6;
    if (face == 6)
        sixes++;
}
```

Why is this count more trustworthy than printing four faces once and deciding that six is common?

---

## Answers

### Answer 1

The next run prints `4` again as its first face. The default seed is `1` on every run, so the first draw is fixed for this library.

The second face on the first run is whatever `rand` produces on its second call. It is another value from that same fixed sequence. It is not required to be `4`. One call advances the generator. The next call continues from there.

### Answer 2

1. `0, 1, 2, 3, 4, 5`.
2. `1, 2, 3, 4, 5, 6`.
3. The same as part 2. `%` is evaluated before `+`, so `rand() % 6 + 1` groups as `(rand() % 6) + 1`.
4. Span `15` starting at `10` produces `10` through `24`, inclusive. That is fifteen values. It is not `10` through `15`.

### Answer 3

Each trip calls `srand` with the current second. The second does not change, so each trip installs the same seed and then takes the first `rand` value of that seed. All five faces are that first face.

Call `srand` once, before the loop.

### Answer 4

`c` equals `a`. The second `srand(7)` restarts the generator, so the next `rand` repeats the first draw. `b` was the second draw of the original sequence, so `c` and `b` can differ. They are equal only if this library’s first and second draws happen to be the same number, which you do not assume.

### Answer 5

`rand() % 2 == 1` is the odd result, so the program prints `heads` for the odd draw and `tails` for the even draw. The student’s sentence said the opposite.

```cpp
if (rand() % 2 == 0)
    cout << "heads\n";
else
    cout << "tails\n";
```

### Answer 6

One roll. `face` is an ordinary `int` holding the value already drawn. Printing it twice prints that stored value twice.

A second roll is a second call:

```cpp
cout << (1 + rand() % 6) << " " << (1 + rand() % 6);
```

### Answer 7

```cpp
int score = rand() % 101;
```

`% 101` produces `0` through `100`. `rand() % 100` produces `0` through `99` and never produces `100`.

### Answer 8

1. False. `time` changes once per second. Two runs in that same second pass the same seed.
2. True. The default seed is `1`.
3. False. The standard guarantees that `RAND_MAX` is at least `32767`. A library may use a larger value.
4. True. The remainder trick is the lecture’s scaling method, and the unevenness is real when the span does not divide the number of possible `rand` results. Dice still use it here.

### Answer 9

Call `srand` with a fixed integer, such as `srand(42)`, instead of `time`. Record the seed that produced the failure. A later run that uses that same `srand` argument repeats the sequence, on the same library.

### Answer 10

The faces `6` and `6` increment the counter. `2` and `1` do not. `sixes` is `2`.

Four draws cannot tell you whether six is common. A later loop of hundreds of draws, counted into a variable, can. One short printout is a sample, and a repeated seed will reprint that same sample.
