# Lecture 14 — Sentinel-Controlled Repetition

Counter-controlled repetition needs the trip count before the loop. A lot of real input does not work that way. The user knows the values one at a time and knows when the list is finished, but the program cannot know the count in advance. Sentinel-controlled repetition means: keep reading until a special value says “stop.”

The sentinel is not data. It is a signal. If the legal scores are `0` through `100`, then `0` is a terrible sentinel, because a real score of `0` would end the list. Pick a value that cannot appear as real data. `-1` is a common choice for a list of non-negative numbers.

```cpp
int value;
int sum = 0;
int count = 0;

cout << "Enter a score, or -1 to stop: ";
cin >> value;

while (value != -1) {
    sum = sum + value;
    count = count + 1;
    cout << "Enter a score, or -1 to stop: ";
    cin >> value;
}

cout << "Sum is " << sum << "\n";
```

The first read happens before the loop. That is what gives the condition something to test. Inside the loop the program uses the value only after the sentinel test has failed to see a sentinel, then it reads the next one at the bottom. The sentinel is never added.

Input `10 20 -1`:

| Value just read | Test `value != -1` | `sum` | `count` |
| --- | --- | --- | --- |
| 10 | true | 10 | 1 |
| 20 | true | 30 | 2 |
| -1 | false | 30 | 2 |

If the add is written before the test, the sentinel pollutes the sum. A loop that does `cin` at the top of the body and then adds, with the test only at the `while`, has to be arranged so the sentinel fails the test before the add. The shape above is the one to copy.

## The empty list

If the first value is already `-1`, the body never runs. `sum` is `0` and `count` is `0`. That is a successful empty list, not an error, until you divide by `count`.

An average needs a guard:

```cpp
if (count != 0) {
    double average = static_cast<double>(sum) / count;
    cout << "Average is " << average << "\n";
} else {
    cout << "No scores\n";
}
```

`sum / count` with both variables declared `int` is integer division. `10` and `21` have sum `31` and count `2`. `31 / 2` is `15`, not `15.5`. The cast makes the division happen in floating point. Casting only the result is too late: `static_cast<double>(sum / count)` still divides in integers first and then turns `15` into `15.0`.

`static_cast<double>(sum)` is the C++ cast you should write. `(double) sum` is the older C form. Both change the type used for the division when the cast is applied to one operand before `/`.

## Sentinel versus counter

Use a counter when the problem says “how many” or the count is computed from the data, such as “the first `n` positives.” Use a sentinel when the problem says “until the user enters this stopper” or the length of the list is part of what the user is deciding as they type.

Some problems need both. Read at most `100` scores, but also stop early if the user types `-1`. The loop condition becomes two reasons to continue, joined by `&&`:

```cpp
while (value != -1 && count < 100) {
    sum = sum + value;
    count = count + 1;
    cin >> value;
}
```

The first value must still be read before this test. `count < 100` is the counter. `value != -1` is the sentinel. Either one failing stops the loop. A sentinel sitting in `value` must not be added, which is why the add stays at the top of the body, after the test has already accepted the current `value`.

## A product that starts at the identity

A running sum starts at `0` because adding `0` changes nothing. A running product starts at `1` because multiplying by `1` changes nothing. If the user immediately enters the sentinel, the product should stay `1` only if you have defined the empty product that way and you do not divide or take further roots of it. Say that in the program by initializing `product` to `1` and by not entering the body.

Do not initialize a product to `0`. The first multiplication would lock it at `0` forever.

---

## Questions

### Question 1

The loop below adds first and tests only in the `while` header. The input is `10 20 -1`. What are `sum` and `count` when the loop ends? Why is that wrong for a sentinel?

```cpp
int sum = 0;
int count = 0;
int value = 0;
while (value != -1) {
    cin >> value;
    sum = sum + value;
    count = count + 1;
}
```

### Question 2

Using the correct sentinel loop from the notes, with sentinel `-1`, give `sum` and `count` for each input sequence: `10 20 -1`, `-1`, and `5 -1 9`.

### Question 3

`sum` is `31` and `count` is `2`, both `int`. What is printed by each line?

```cpp
cout << sum / count << "\n";
cout << static_cast<double>(sum / count) << "\n";
cout << static_cast<double>(sum) / count << "\n";
```

### Question 4

Scores from `0` to `100` are valid, including `0`. A classmate picks `0` as the sentinel. Give a concrete list of real scores that this program cannot accept, and choose a sentinel that can accept that list.

### Question 5

The first value read is `-1`. Describe what the correct loop does, and what goes wrong if the average is computed as `sum / count` with no `if`.

### Question 6

Write a sentinel loop that multiplies positive integers until the user enters `0`. Start `long long product` at `1`. The value `0` is the sentinel, not a factor. Trace the input `2 5 0` and the input `0`.

### Question 7

A program reads at most `3` values and also stops on `-1`. The read-before-loop pattern from the notes is used, and the condition is `value != -1 && count < 3`. Trace the input `4 5 6 7`. Then trace `4 -1 6`. Give `sum` and `count` for both. Is `7` read? Is `6` read in the second trace?

### Question 8

Explain, for one problem statement each, whether you would choose a counter or a sentinel.

* “Read `n`, then read `n` temperatures.”
* “Read temperatures until the user enters `-99`.”
* “The cashier scans prices until a price of `0`.”

### Question 9

This average program looks guarded, but the cast is in the wrong place and the sentinel is added. Input is `10 21 -1`. What average does it print if it gets that far, and which of those two bugs changes the numeric result? Walk through `sum` and `count`.

```cpp
int value;
int sum = 0;
int count = 0;
cin >> value;
while (value != -1) {
    cin >> value;
    sum = sum + value;
    count = count + 1;
}
if (count != 0)
    cout << static_cast<double>(sum / count) << "\n";
```

Assume the first `cin` reads `10`.

### Question 10

Write one loop that reads integers until `-1` and counts how many of the real values are greater than `100`. The sentinel must not be counted as a large value. Trace `20 150 100 101 -1` and trace a list that is only `-1`. Print the count.

---

## Answers

### Answer 1

`value` starts at `0`, so the loop is entered.

* Read `10`. Add `10`. `sum` is `10`, `count` is `1`.
* Read `20`. Add `20`. `sum` is `30`, `count` is `2`.
* Read `-1`. Add `-1` before any test can refuse it. `sum` is `29`, `count` is `3`.
* The `while` test then sees `-1` and stops.

The sentinel was treated as data. The sum is `29` instead of `30`, and the count is `3` instead of `2`. Any later average divides by the wrong count and starts from the wrong total. The test has to reject the sentinel before the addition, which is why the notes read the next value at the bottom of the loop and add at the top.

### Answer 2

* `10 20 -1`: both real values are accepted. `sum` is `30`, `count` is `2`.
* `-1`: the test fails immediately. `sum` is `0`, `count` is `0`.
* `5 -1 9`: `5` is accepted, then `-1` fails the test. `9` is never read by this loop. `sum` is `5`, `count` is `1`.

A sentinel does not mean “skip this number and keep going.” It means the list is over. Anything the user typed after it is not part of this loop’s data.

### Answer 3

`31 / 2` in integer arithmetic is `15`.

* The first line prints `15`.
* The second line divides in integers first, gets `15`, then casts that result to `15`. It prints `15`.
* The third line casts `sum` to `double` before the division, so the division is `31.0 / 2`, which is `15.5`. It prints `15.5`.

The parentheses, or the lack of them, decide whether the cast can still save the fraction. `static_cast<double>(sum / count)` casts too late.

### Answer 4

The list `100 0 90` cannot be accepted if `0` is the sentinel. The `0` is a real score, and it would end the loop before `90` is read. The program would report a total of `100` and a count of `1`.

`-1` cannot be a valid score on a `0` to `100` scale, so it can stop the list `100 0 90 -1` without eating a real value. Any other integer outside `0` through `100` would also work. The rule is not “use `-1`.” The rule is “the signal must be impossible as data.”

### Answer 5

The condition fails on the first test, so the body runs zero times. `sum` and `count` stay `0`. The program should report that there were no scores.

`sum / count` is `0 / 0`. Integer division by zero does not produce an average of `0`. It is a failing operation. The `if (count != 0)` guard is what keeps the empty list from reaching that division. The empty list is a normal outcome of a sentinel loop, so the guard belongs in the program, not in a hope that the user will type at least one value.

### Answer 6

```cpp
long long product = 1;
int value;
cin >> value;
while (value != 0) {
    product = product * value;
    cin >> value;
}
cout << product << "\n";
```

Input `2 5 0`. First `value` is `2`, which is not the sentinel. `product` becomes `2`. Next read is `5`. `product` becomes `10`. Next read is `0`. The test fails. Output is `10`. The `0` is not a factor. Multiplying by the sentinel would have forced the product to `0`.

Input `0`. The first test fails. `product` stays `1`. Output is `1`. That is the empty product, which matches the initialization. It is not the product of the sentinel.

### Answer 7

The first value is read before the loop. Each accepted value is counted, and the next value is read at the bottom. The test then decides whether that new value may enter.

Input `4 5 6 7`:

* Start with `4`. Accept it. `sum` is `4`, `count` is `1`. Read `5`.
* Accept `5`. `sum` is `9`, `count` is `2`. Read `6`.
* Accept `6`. `sum` is `15`, `count` is `3`. Read `7`.
* `value` is `7`, but `count < 3` is false. Stop.

`sum` is `15` and `count` is `3`. `7` was read into `value` and then rejected by the counter, so it is not in the sum. It has been consumed from the input. A later part of the program would see it as the current `value`, not as unread input.

Input `4 -1 6`:

* Accept `4`. `sum` is `4`, `count` is `1`. Read `-1`.
* The sentinel test fails. Stop.

`sum` is `4` and `count` is `1`. `6` is not read. The sentinel ended the loop before the counter was full.

### Answer 8

* “Read `n`, then read `n` temperatures” is counter-controlled. The trip count is known as soon as `n` has been read.
* “Read temperatures until the user enters `-99`” is sentinel-controlled. `-99` is the signal, and the count is discovered by the loop.
* “The cashier scans prices until a price of `0`” is sentinel-controlled, and it is only correct if a real price is never `0`. If free items are possible, `0` is data and a different sentinel is required.

### Answer 9

The first read gets `10`, but the body immediately reads again before adding. The `10` is thrown away.

* Body reads `21`, adds `21`. `sum` is `21`, `count` is `1`.
* Body reads `-1`, adds `-1`. `sum` is `20`, `count` is `2`.
* The test then stops.

Both bugs are present. The discarded `10` and the included `-1` are what produce `sum` of `20` and `count` of `2`. The integer division `20 / 2` is `10`, and casting that result still prints `10`.

The cast is not what changes this particular numeric result, because `20 / 2` has no lost fraction. The sentinel bug is what changes the result: the real average of `10` and `21` is `15.5`, and this program prints `10`. On a different input the late cast would also be able to hide a fraction, but here the damaged `sum` is the bug you can see in the output.

### Answer 10

```cpp
int value;
int count = 0;
cin >> value;
while (value != -1) {
    if (value > 100)
        count = count + 1;
    cin >> value;
}
cout << count << "\n";
```

Input `20 150 100 101 -1`. The values that pass `value > 100` are `150` and `101`. `100` is not greater than `100`. `-1` fails the loop test and never reaches the `if`. Output is `2`.

Input `-1`. The loop body does not run. Output is `0`. The sentinel is not “a value greater than 100 that we forgot to count.” It never enters the counting statement.
