# Lecture 24 — Array Examples

Declaring an array does not process it. The work is a loop that visits every used index. The same loop shape sums a list, finds a minimum, tallies die faces, and prints a bar chart. The index is the counter. The element is the data.

Throughout this lecture the size is a constant and every slot in the loop has been initialized.

## Sum and average

```cpp
const int SIZE = 5;
int a[SIZE] = {8, 6, 7, 5, 4};

int sum = 0;
for (int i = 0; i < SIZE; i++)
    sum = sum + a[i];
```

`sum` is `30`. The average has to be a floating value. Integer division of `sum / SIZE` is `6` and drops the remainder.

```cpp
double average = static_cast<double>(sum) / SIZE;   // 6.0 here, and not truncated in general
```

The cast must apply to a value in the division. `static_cast<double>(sum / SIZE)` divides first and casts the already truncated result.

## Minimum and maximum

Keep the best-so-far, and start it at element `0` after you know the array is non-empty.

```cpp
int best = a[0];
for (int i = 1; i < SIZE; i++) {
    if (a[i] > best)
        best = a[i];
}
```

Starting `best` at `0` is wrong when every element is negative. The maximum of `{-4, -1, -7}` is `-1`, and a search that starts at `0` reports `0`, which is not in the array.

The minimum uses `<`. One loop can track both.

## Frequency and a bar chart

`rand` from lecture 21 produces a face from `1` to `6`. A count array indexed by the face stores how often each face appeared. Index `0` stays unused so that face `3` lives at index `3`.

```cpp
const int FACES = 7;          // indexes 0..6, face values use 1..6
int count[FACES] = {};

for (int roll = 0; roll < 100; roll++) {
    int face = 1 + rand() % 6;
    count[face]++;
}
```

A bar chart prints that many marks:

```cpp
for (int face = 1; face <= 6; face++) {
    cout << face << ": ";
    for (int star = 0; star < count[face]; star++)
        cout << '*';
    cout << "\n";
}
```

Two dice use sums from `2` through `12`, so the count array needs indexes through `12`. A size of `13` leaves index `0` and `1` unused. `count[sum]++` is safe only when `sum` is inside `0` through `12`.

## A used length inside a larger array

A capacity of `20` does not mean the user typed `20` numbers. Store the filled count in `used`, and loop to `used`.

```cpp
const int CAPACITY = 20;
int a[CAPACITY];
int used = 0;

while (used < CAPACITY && cin >> a[used])
    used++;
```

If extraction fails, the loop stops and the failed read does not count as an element. Later algorithms must use `used`, not `CAPACITY`, or they will treat unfilled slots as data. Those slots are indeterminate if you did not zero the array.

## Mistakes that change the program

- Dividing two `int`s and then casting the quotient.
- Seeding a maximum search with `0`.
- Charting index `0` as if it were die face `0`.
- Looping to `CAPACITY` after the user filled only `used` slots.
- Writing `count[face]++` when `face` can be outside the array.

---

## Questions

### Question 1

`int a[4] = {1, 2, 3, 4};`. Give `sum`, the integer quotient `sum / 4`, and the floating average.

### Question 2

`int a[4] = {-8, -3, -5, -3};`. A student sets `int best = 0;` and updates `best` when `a[i] > best`. What does the student report, and what is the actual maximum? Write the start of a correct search.

### Question 3

One hundred rolls use `count[7]`, and `count` starts at all zeros. After the rolls, `count` is `{0, 14, 18, 16, 17, 19, 16}` from index `0` through `6`.

1. How many times did face `4` appear?
2. Why is `count[0]` zero in a correct program?
3. What is the sum of `count[1]` through `count[6]`, and why must it be `100`?

### Question 4

Two dice each contribute `1 + rand() % 6`. The sum is stored with `count[sum]++`. What array size is required so index `12` exists? Which indexes can stay zero for the entire experiment?

### Question 5

`int a[5] = {4, 1, 4, 2, 4};`. Trace a loop that builds a bar of `*` for each element, one row per element. How many stars are on the first row, and how many rows are printed?

### Question 6

`sum` is `7` and `SIZE` is `2`. What is the value of each expression?

1. `static_cast<double>(sum) / SIZE`
2. `static_cast<double>(sum / SIZE)`
3. `sum / static_cast<double>(SIZE)`

### Question 7

`CAPACITY` is `5`, the array starts zeroed, and the user types `8 3 9` and then end-of-file. The loop is

```cpp
int used = 0;
while (used < CAPACITY && cin >> a[used])
    used++;
```

What is `used`, and what does a later sum from `0` to `used - 1` equal? What would a sum from `0` to `CAPACITY - 1` add that the input did not contain?

### Question 8

True or false.

1. The average of `{1, 2}` computed as `sum / 2` with `int sum` is `1`.
2. A bar-chart inner loop `for (int star = 0; star <= count[face]; star++)` prints one extra star.
3. For a non-empty array, starting the maximum at `a[0]` and looping from `i = 1` still finds a maximum that sits at index `0`.
4. `count[face]++` both reads and updates the same element.

### Question 9

Find both the minimum and the maximum of `{5, 1, 5, 0, 2}` in one loop. State the values and one index where each occurs.

### Question 10

A histogram of exam scores uses buckets `0` through `10`, where bucket `k` counts scores from `10 * k` through `10 * k + 9`, except bucket `10`, which counts the score `100` only. Which bucket receives `100`, which receives `99`, and which receives `0`? Why is an array of size `10` too small?

---

## Answers

### Answer 1

`sum` is `10`. `sum / 4` is `2`. The floating average is `10 / 4.0`, which is `2.5`.

### Answer 2

No element is greater than `0`, so `best` stays `0`. That value is not in the array. The maximum is `-3`.

```cpp
int best = a[0];
for (int i = 1; i < 4; i++) {
    if (a[i] > best)
        best = a[i];
}
```

### Answer 3

1. Face `4` is index `4`, so it appeared `17` times.
2. Faces are produced from `1` to `6`. A correct roll never increments index `0`.
3. `14 + 18 + 16 + 17 + 19 + 16 = 100`. Each of the `100` rolls increments exactly one face counter.

### Answer 4

The largest index is `12`, so the size is `13`. Indexes `0` and `1` cannot occur as a sum of two faces in `1` through `6`, so those counters stay zero.

### Answer 5

Five rows. The first element is `4`, so the first row is `****`. The later rows have `1`, `4`, `2`, and `4` stars.

### Answer 6

1. `7.0 / 2` is `3.5`.
2. `sum / SIZE` is the integer quotient `3`, and the cast preserves `3.0`.
3. `7 / 2.0` is `3.5`.

### Answer 7

Three successful extractions increment `used` to `3`. The stored prefix is `8, 3, 9`, and the sum through `used - 1` is `20`. A sum through index `4` also adds the two leftover zeros, and the total is still `20` only because this array was zeroed. If those slots were indeterminate, that longer sum would not be a sum of the input.

### Answer 8

1. True. `3 / 2` is `1`.
2. True. `star <= count[face]` runs once when `star` equals the count, after the correct `count[face]` stars have already been printed.
3. True. The value at index `0` is already in `best`, and later elements replace it only when they are strictly greater.
4. True. `count[face]++` uses the current value and then stores one more.

### Answer 9

Start both trackers at `5`. The minimum becomes `1`, then `0`. The maximum stays `5`. The minimum is `0` at index `3`. The maximum is `5` at indexes `0` and `2`.

### Answer 10

`100` goes in bucket `10`. `99` goes in bucket `9`, because `99 / 10` is `9` in integer division. `0` goes in bucket `0`. Size `10` provides indexes `0` through `9` and has no slot for `100`. The array needs size `11`.
