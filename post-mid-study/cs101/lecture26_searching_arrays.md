# Lecture 26 — Searching Arrays

A search walks an array until it finds a key or runs out of elements. The usual result is the index of a match, or `-1` when the key is absent. Returning `-1` works because a valid index is never negative.

Linear search inspects elements in order. It is correct for any array. Binary search discards half of the remaining range on each comparison. It is correct only when the array is sorted in the order the comparisons assume. This lecture uses ascending order.

## Linear search

```cpp
int linearSearch(const int a[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key)
            return i;
    }
    return -1;
}
```

The first match wins. Later copies of the key are not reported. Searching `{4, 1, 4}` for `4` returns `0`.

An empty range, `n` equal to `0`, never enters the loop and returns `-1`.

If the caller needs every match, the function should not return on the first hit. A loop can count them or collect their indexes. That is a different task from “find one.”

## Binary search

The array must already be sorted ascending. `low` and `high` are the inclusive ends of the range still under consideration.

```cpp
int binarySearch(const int a[], int n, int key) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == key)
            return mid;
        if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
```

`low + (high - low) / 2` is the middle index. It stays inside the range. Using `(low + high) / 2` is the same arithmetic for the small indexes in this course.

When the key is smaller than `a[mid]`, the match cannot sit at `mid` or to its right, so `high` becomes `mid - 1`. When the key is larger, `low` becomes `mid + 1`. Setting `high = mid` or `low = mid` without excluding `mid` can repeat the same middle forever when the key is absent.

Example. The array is `{2, 4, 6, 8, 10, 12, 14}` and the key is `10`.

* `low = 0`, `high = 6`, `mid = 3`, `a[3]` is `8`. The key is larger, so `low = 4`.
* `low = 4`, `high = 6`, `mid = 5`, `a[5]` is `12`. The key is smaller, so `high = 4`.
* `low = 4`, `high = 4`, `mid = 4`, `a[4]` is `10`. Return `4`.

The key `5` never matches. The range shrinks until `low` passes `high`, and the function returns `-1`.

Binary search on an unsorted array can return `-1` for a key that is present, because it discards a half that actually holds the key.

## The length that gets searched

Search `used` elements, not the spare capacity. A key hiding in an uninitialized tail is not data, and a match there is an accident.

## Mistakes that change the program

- Using binary search on unsorted data.
- Updating `high` to `mid` instead of `mid - 1`, then looping forever on a missing key.
- Returning `0` for “not found” when index `0` can be a real match.
- Stopping linear search at the first match when the question asked for a count.
- Searching the capacity instead of the used prefix.

---

## Questions

### Question 1

`int a[6] = {5, 3, 5, 8, 5, 1};`. What does linear search return for key `5`, for key `1`, and for key `7`?

### Question 2

How many comparisons with `==` does linear search perform on that array for key `8`, and how many for key `7`? A comparison here means one evaluation of `a[i] == key`.

### Question 3

The sorted array is `{2, 4, 6, 8, 10, 12, 14}`. Trace binary search for key `14`. List `low`, `high`, and `mid` for each test, and give the returned index.

### Question 4

Trace binary search for key `5` on that same array until the loop ends. What is returned, and what are `low` and `high` when the loop stops?

### Question 5

The unsorted array is `{10, 2, 8, 4}`. Binary search looks for `10`. Show the first step and the half it discards. What does linear search return for the same key?

### Question 6

This binary search sets `high = mid` when the key is smaller. The array is `{1, 3}` and the key is `2`. Show the first two values of `mid` and explain why the loop does not finish.

```cpp
if (key < a[mid])
    high = mid;
else
    low = mid + 1;
```

### Question 7

`used` is `3` in an array of capacity `6`: the filled prefix is `{4, 4, 9}` and the tail was never written. What does linear search for `9` return when the length is `used`? Why is a search with length `6` not a reliable way to look for a value?

### Question 8

True or false.

1. Linear search on a sorted array is allowed.
2. Returning `-1` collides with a stored element whose value is `-1`.
3. If the key occurs three times, the linear search above returns the last index.
4. `low <= high` is the condition that still allows a one-element range to be tested.

### Question 9

Write `int countKey(const int a[], int n, int key)` using a linear scan that does not return early. Trace `{4, 1, 4, 4}` for key `4` and for key `2`.

### Question 10

Binary search finds key `8` at index `3` of `{2, 4, 6, 8, 10, 12, 14}`. A later insertion places `7` at the front and shifts the old elements right, without sorting again, so the array begins `{7, 2, 4, 6, ...}`. Is the array still a legal input for this binary search? Where is `8` now, and which algorithm still finds it?

---

## Answers

### Answer 1

The first `5` is at index `0`, so the key `5` returns `0`. The key `1` is at index `5`. The key `7` is absent, so the result is `-1`.

### Answer 2

Key `8` matches at index `3`. The tests are indexes `0, 1, 2, 3`: four comparisons. Key `7` never matches. The loop tests all six elements: six comparisons.

### Answer 3

* `low = 0`, `high = 6`, `mid = 3`, `a[3]` is `8`. The key is larger, so `low = 4`.
* `low = 4`, `high = 6`, `mid = 5`, `a[5]` is `12`. The key is larger, so `low = 6`.
* `low = 6`, `high = 6`, `mid = 6`, `a[6]` is `14`. Return `6`.

### Answer 4

* `mid = 3`, value `8`. `5 < 8`, so `high = 2`.
* `low = 0`, `high = 2`, `mid = 1`, value `4`. `5 > 4`, so `low = 2`.
* `low = 2`, `high = 2`, `mid = 2`, value `6`. `5 < 6`, so `high = 1`.

Now `low` is `2` and `high` is `1`. `low <= high` is false. The function returns `-1`.

### Answer 5

`low = 0`, `high = 3`, `mid = 1`, and `a[1]` is `2`. The key `10` is greater than `2`, so `low` becomes `2`. Index `0`, which holds `10`, is in the discarded half. Later steps examine `{8, 4}` and never return to index `0`. The search misses a present key.

Linear search returns `0`.

### Answer 6

`low = 0`, `high = 1`, `mid = 0`, `a[0]` is `1`. The key `2` is greater, so `low = 1`. Then `low = 1`, `high = 1`, `mid = 1`, `a[1]` is `3`. The key is smaller, so `high = mid` stores `1` again. The next iteration has the same `low`, `high`, and `mid`. The range never shrinks, and the key is never found.

The repair is `high = mid - 1`. Then `high` becomes `0`, `low` is `1`, and the loop ends with `-1`.

### Answer 7

`9` is at index `2` inside the used prefix, so the search returns `2`. A length of `6` also reads the three uninitialized elements. Those reads are not a search of the input, and a garbage value that happens to equal the key would be reported as a match.

### Answer 8

1. True. Linear search does not require sorted data. Sorted data does not make it incorrect.
2. False. `-1` is the missing-key index. A stored value of `-1` can still sit at a non-negative index such as `0`. The returned index and the stored value are different numbers.
3. False. The function returns at the first match.
4. True. When `low == high`, one element remains and the body still tests it.

### Answer 9

```cpp
int countKey(const int a[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == key)
            count++;
    }
    return count;
}
```

Key `4` occurs three times, so the result is `3`. Key `2` occurs zero times, so the result is `0`.

### Answer 10

The array is no longer sorted, so this binary search is not a legal algorithm for it. The old index `3` held `8`. Shifting every element one place to the right moves `8` to index `4`. Linear search still finds it, because linear search never discards an unexamined half.
