# Lecture 23 — Array Declaration

An array is a sequence of objects of one type, stored contiguously and named by one identifier. The size is fixed when the array is created. An individual object in the sequence is an element. The position of an element is its index, and the first index is `0`.

## Declaring a fixed size

The size in the brackets must be a constant expression. A named constant is the usual way to keep that number in one place.

```cpp
const int SIZE = 5;
int scores[SIZE];
```

`scores` has five `int` elements: `scores[0]` through `scores[4]`. There is no `scores[5]`. Using index `5` compiles and then reads or writes memory that is not part of the array. The language does not check the index at run time.

A local array with no initializer contains indeterminate `int`s. Do not read an element until the program has assigned it. A global array with no initializer is filled with zeros, because globals have static storage.

This course’s standard C++ does not accept a size that is an ordinary variable.

```cpp
int n;
cin >> n;
int scores[n];   // not standard C++
```

g++ may accept that line as an extension. The programs in this course use a constant size.

## Initialization

An initializer lists values from index `0`.

```cpp
int scores[5] = {90, 80, 70, 60, 50};
```

A short list zeros the rest.

```cpp
int scores[5] = {90, 80};   // 90, 80, 0, 0, 0
```

Empty braces zero the whole array, including a local one.

```cpp
int scores[5] = {};
```

If every initial value is present, the compiler can count them and the brackets may be empty.

```cpp
int scores[] = {90, 80, 70};   // size is 3
```

You cannot later write `scores = other;`. An array is not assigned as a unit. Copy it with a loop, element by element, when you need a second sequence.

## The length and the last index

The last valid index is `SIZE - 1`. A loop that wants every element uses `< SIZE`, not `<= SIZE`.

```cpp
for (int i = 0; i < SIZE; i++)
    scores[i] = 0;
```

`sizeof(scores)` is the number of bytes in the whole array. `sizeof(scores[0])` is the number of bytes in one element. Their quotient is the element count, and it is valid here because `scores` is the array itself.

```cpp
int count = sizeof(scores) / sizeof(scores[0]);
```

That quotient is a tool for an array object in the current scope. Lecture 25 shows why the same expression inside a function parameter is the wrong size.

## Elements are ordinary objects

`scores[i]` is an `int`. It can be passed by value, used in arithmetic, and assigned.

```cpp
scores[2] = scores[0] + 1;
```

If `scores[0]` is `90`, then `scores[2]` becomes `91`. The other elements stay as they were. Assigning one element does not shift the array.

## Mistakes that change the program

- Starting indexes at `1` and never storing index `0`, or looping `i <= SIZE` and touching one past the end.
- Reading a local array before initializing it.
- Using a runtime `n` as the array size.
- Assigning one array to another with `=`.
- Treating `sizeof(scores)` as the element count. It is a byte count.

---

## Questions

### Question 1

`const int SIZE = 4;` and `int a[SIZE];` is local to `main`, with no initializer. Which indexes are valid? What is wrong with printing `a[0]` immediately? What changes if the same declaration is global?

### Question 2

Give every element of each array.

1. `int a[4] = {3, 1};`
2. `int b[4] = {};`
3. `int c[] = {3, 1, 4};`
4. `int d[4] = {3, 1, 4, 1, 5};`

### Question 3

`int a[5] = {2, 4, 6, 8, 10};`. What does this loop print, and which index is the bug?

```cpp
for (int i = 1; i <= 5; i++)
    cout << a[i] << " ";
```

### Question 4

`int a[3] = {1, 2, 3};` and `int b[3];`. Why is `b = a;` illegal? Write a loop that copies `a` into `b`.

### Question 5

`int a[6] = {8, 6, 4, 2, 0, 9};`. Evaluate these.

1. `a[0]`
2. `a[5]`
3. `sizeof(a) / sizeof(a[0])`
4. `a[sizeof(a) / sizeof(a[0])]`

### Question 6

A student reads `n` from the user and writes `double vals[n];` so the array matches the input count. What is wrong with that declaration in standard C++, and what declaration does this course use when the program will store at most 20 values?

### Question 7

`int a[4] = {5, 5, 5, 5};`. Trace the loop.

```cpp
for (int i = 0; i < 4; i++)
    a[i] = a[i] + i;
```

### Question 8

True or false.

1. The last index of `int a[10]` is `10`.
2. `int a[5] = {1, 2};` leaves the last three elements indeterminate.
3. An array can be returned from a function by writing `return a;` when `a` is a local array. You may answer from the declaration rules: an array is not copied by assignment.
4. `int a[] = {1, 2, 3, 4};` has size `4`.

### Question 9

How many elements does each declaration create, and what is stored at index `0`?

1. `int a[1] = {7};`
2. `int b[1] = {};`
3. `char word[] = {'h', 'i'};`

### Question 10

`const int SIZE = 5;` and `int a[SIZE] = {4, 8, 3, 8, 1};`. Write a loop that counts how many elements are equal to `8`. State the count, and state the indexes where those elements sit.

---

## Answers

### Answer 1

Valid indexes are `0, 1, 2, 3`. Printing `a[0]` immediately reads an indeterminate local. A global `int a[4];` with no initializer contains `0, 0, 0, 0`.

### Answer 2

1. `3, 1, 0, 0`.
2. `0, 0, 0, 0`.
3. `3, 1, 4`. The size is `3` because the compiler counted the list.
4. Illegal. The initializer has five values and the declared size is four.

### Answer 3

The loop starts at `1`, so it skips `a[0]`, which is `2`. It then prints `a[1]` through `a[4]`, which are `4 6 8 10`. The condition `i <= 5` also evaluates the body when `i` is `5`. `a[5]` is past the end. That access is the bug. The in-range part of the print is `4 6 8 10`, and the extra access is not a defined element.

### Answer 4

An array cannot be assigned with `=`. Copy the elements:

```cpp
for (int i = 0; i < 3; i++)
    b[i] = a[i];
```

After the loop, `b` is `1, 2, 3`.

### Answer 5

1. `8`.
2. `9`.
3. `6`. The array occupies `6 * sizeof(int)` bytes, and dividing by the size of one `int` yields the element count.
4. Index `6` is past the end. `a[6]` is not an element.

### Answer 6

The size must be a constant expression. `n` is a runtime value. Declare a fixed upper bound and remember how many slots the user actually filled:

```cpp
const int CAPACITY = 20;
double vals[CAPACITY];
int used = 0;
```

`used` stays between `0` and `20`. The array still has `20` slots when the user types a smaller count.

### Answer 7

`i` runs through `0, 1, 2, 3`.

* Index `0`: `5 + 0` is `5`.
* Index `1`: `5 + 1` is `6`.
* Index `2`: `5 + 2` is `7`.
* Index `3`: `5 + 3` is `8`.

The array becomes `5, 6, 7, 8`.

### Answer 8

1. False. The last index is `9`.
2. False. A short initializer zeros the remaining elements. The array is `1, 2, 0, 0, 0`.
3. False. A local array is not copied back by `return a;`. Lecture 25 handles the parameter form. The declaration rule already says an array is not assigned as a unit.
4. True. Four initializers and empty brackets produce size `4`.

### Answer 9

1. One element, and index `0` holds `7`.
2. One element, and index `0` holds `0`.
3. Two elements. Index `0` holds `'h'`. This array is not a C string yet, because there is no `'\0'` after the letters.

### Answer 10

```cpp
int count = 0;
for (int i = 0; i < SIZE; i++) {
    if (a[i] == 8)
        count++;
}
```

`count` is `2`. The value `8` sits at indexes `1` and `3`.
