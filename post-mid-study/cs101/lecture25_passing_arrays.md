# Lecture 25 — Passing Arrays to Functions

The name of an array, in a call, becomes the address of its first element. The function does not receive a copy of the elements. It receives a way to reach the caller’s array. That is why the function also needs the length. The parameter itself does not remember how many elements were declared.

## The parameter

```cpp
void printAll(const int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int scores[5] = {10, 20, 30, 40, 50};
printAll(scores, 5);
```

`const` means the function will not assign to `a[i]`. Drop `const` when the function’s job is to modify the caller’s array.

```cpp
void zeroAll(int a[], int n) {
    for (int i = 0; i < n; i++)
        a[i] = 0;
}
```

After `zeroAll(scores, 5)`, every element of `scores` in `main` is `0`. No return is required. The elements were never copied.

`int a[]` and `int* a` are the same parameter type in this position. Lecture 27 names the pointer. The call and the index loop are the same either way.

## The length is a separate argument

Inside `printAll`, `sizeof(a) / sizeof(a[0])` does not compute `5`. The parameter is a pointer to the first element, and `sizeof` on that parameter yields the size of a pointer. On this course’s 64-bit g++ that is `8`, not `5 * sizeof(int)`. Pass `n` and trust `n`.

Passing the wrong `n` walks off the array or ignores real elements. The compiler does not compare `n` with the declared size.

A single element is different. `printOne(scores[2])` passes the `int` `30` by value. Changing that parameter does not change `scores[2]`.

```cpp
void printOne(int value) {
    value = 0;          // the caller's element is unchanged
    cout << value;
}
```

## A slice starts at a later element

`printAll(scores + 2, 3)` or `printAll(&scores[2], 3)` starts at index `2` and visits `3` elements: `30, 40, 50`. The function still sees an address and a length. It does not know that two elements were skipped, and it must not be given a length that runs past the real array.

## Do not return a local array

A local array is destroyed when the function returns. Returning its name would hand the caller an address into dead storage.

```cpp
int* bad() {
    int local[3] = {1, 2, 3};
    return local;
}
```

Fill an array that the caller owns, and pass that array in. The caller’s array is still alive after the function returns.

## Mistakes that change the program

- Computing the length with `sizeof` on a parameter.
- Forgetting `const` on a function that only reads, or keeping `const` on a function that must store into the array.
- Passing an element when the function expected the whole array, or passing the array when the function expected one `int`.
- Returning the address of a local array.
- Looping to the capacity when only `used` slots are filled.

---

## Questions

### Question 1

`int a[4] = {1, 2, 3, 4};`. What is in `a` after `fill(a, 4)`?

```cpp
void fill(int data[], int n) {
    for (int i = 0; i < n; i++)
        data[i] = i * 10;
}
```

### Question 2

`int a[4] = {1, 2, 3, 4};`. What is in `a` after `stamp(a[1])`?

```cpp
void stamp(int value) {
    value = 99;
}
```

### Question 3

`void show(const int a[], int n)` prints `n` elements separated by spaces. Which calls compile, and what do the legal ones print? `int a[4] = {5, 6, 7, 8};`.

1. `show(a, 4);`
2. `show(a, 2);`
3. A body that contains `a[0] = 0;`

### Question 4

Inside `void f(int a[], int n)`, `sizeof(a)` is `8` and `sizeof(int)` is `4` on this compiler. What is `sizeof(a) / sizeof(int)`, and why is that not the element count of `int scores[5]` passed as `f(scores, 5)`?

### Question 5

`int a[5] = {2, 4, 6, 8, 10};`. `sumRange` adds `n` elements starting at the address it receives. What does `sumRange(&a[1], 3)` return? What is wrong with `sumRange(&a[3], 3)`?

```cpp
int sumRange(const int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum = sum + a[i];
    return sum;
}
```

### Question 6

Write `int maxOf(const int a[], int n)` for a non-empty array. Trace it on `{4, 9, 2, 9}` and say which index it effectively selects when the maximum appears twice. The function returns the value, not the index.

### Question 7

Why is this return unsafe?

```cpp
int* ones() {
    int a[3] = {1, 1, 1};
    return a;
}
```

How should `main` obtain an array of three ones instead?

### Question 8

True or false.

1. `void clear(int a[], int n)` can set the caller’s elements to `0` without returning the array.
2. Passing `a[i]` uses pass-by-value when the parameter is `int`.
3. `const int a[]` still allows `a[0] = 1` because the array belongs to the caller.
4. The function can detect the declared size of the caller’s array from the parameter alone.

### Question 9

`void reverse(int a[], int n)` swaps elements from the outside inward. Trace `{1, 2, 3, 4}` and `{1, 2, 3}`. Stop at the middle so pairs are not swapped twice.

### Question 10

`used` is `3` and the capacity is `6`. The first three elements are `5, 5, 5`, and the rest are indeterminate. `zeroAll(a, 6)` and `zeroAll(a, used)` do different work. Describe both results.

---

## Answers

### Answer 1

The parameter refers to `a` in the caller. The elements become `0, 10, 20, 30`.

### Answer 2

`a[1]` is passed by value. `stamp` sets its copy to `99`. The array remains `1, 2, 3, 4`.

### Answer 3

1. Legal. It prints `5 6 7 8`.
2. Legal. It prints the first two elements, `5 6`.
3. Illegal. `a` is a pointer to const elements, so `a[0] = 0` is rejected.

### Answer 4

`8 / 4` is `2`. That `2` is a pointer size divided by an `int` size. The array has `5` elements. The `5` arrived in `n`, and `sizeof` on the parameter cannot recover it.

### Answer 5

`&a[1]` starts at `4`. Three elements are `4, 6, 8`, and the sum is `18`.

`&a[3]` starts at `8`. A length of `3` asks for indexes `3, 4,` and `5` of the original array. Index `5` does not exist. The call walks off the end.

### Answer 6

```cpp
int maxOf(const int a[], int n) {
    int best = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > best)
            best = a[i];
    }
    return best;
}
```

The result is `9`. The first `9` is stored when `i` is `1`. The later `9` is not greater, so it does not replace `best`. The returned value is `9` either way. This function does not say which index produced it.

### Answer 7

`a` is destroyed when `ones` returns. The returned address would point at that finished local.

`main` owns the storage:

```cpp
int a[3];
void fillOnes(int a[], int n) {
    for (int i = 0; i < n; i++)
        a[i] = 1;
}
fillOnes(a, 3);
```

### Answer 8

1. True. The function writes through the address of the caller’s first element.
2. True. The argument is one `int`, copied into the parameter.
3. False. `const` on the parameter forbids assignment through that parameter, including assignment to the caller’s elements.
4. False. The length has to be passed separately.

### Answer 9

```cpp
void reverse(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}
```

For `{1, 2, 3, 4}`, `n / 2` is `2`. Swap indexes `0` and `3`, then `1` and `2`. The array becomes `{4, 3, 2, 1}`.

For `{1, 2, 3}`, `n / 2` is `1`. Swap indexes `0` and `2`. The middle `2` stays. The array becomes `{3, 2, 1}`.

### Answer 10

`zeroAll(a, used)` sets the first three elements to `0` and leaves the indeterminate tail alone. `zeroAll(a, 6)` sets all six elements to `0`. The second call is defined only because those extra slots belong to the array. It is the wrong call when the task was to clear the filled prefix and the tail was not part of the data.
