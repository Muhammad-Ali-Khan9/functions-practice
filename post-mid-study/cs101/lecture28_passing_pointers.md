# Lecture 28 — Passing Pointers as Function Parameters

A pointer parameter receives a copy of an address. The copy is pass-by-value. The `int` at that address is not copied. Writing through `*p` changes the caller’s object. Assigning a new address to `p` changes only the function’s copy of the pointer.

The call passes an address: `&x`, an existing pointer, or the name of an array. This is the explicit form of what lecture 25 did with `int a[]`.

## Changing the object

```cpp
void increment(int* p) {
    if (p != nullptr)
        *p = *p + 1;
}

int x = 4;
increment(&x);
```

The parameter `p` holds the address of `x`. `*p` is `x`. After the call, `x` is `5`. The caller’s pointer, if it had one, is a separate variable and was not passed here. The call passed `&x` as a temporary address.

A null check belongs in any function that is allowed to receive `nullptr`. `increment(nullptr)` then returns without dereferencing.

## Swap through pointers

```cpp
void swapPtr(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int x = 3;
int y = 8;
swapPtr(&x, &y);
```

`x` is `8` and `y` is `3`. Forgetting `*` assigns addresses to addresses and does not compile when the types disagree, or it swaps the pointer copies when both sides are pointers. The `int`s swap only through `*`.

`swapPtr(&x, &x)` swaps `x` with itself and leaves `x` unchanged, provided the function uses a temporary in the usual way.

## The pointer copy

```cpp
void retarget(int* p) {
    p = nullptr;
}

int x = 5;
int* q = &x;
retarget(q);
```

`q` still holds the address of `x`. `retarget` set its own copy to `nullptr`. The caller’s pointer changes only if the function receives a way to reach that pointer: a reference to the pointer, or a pointer to the pointer.

```cpp
void retarget(int*& p) {
    p = nullptr;
}
```

After `retarget(q)`, `q` is `nullptr`. The parameter is a reference to the caller’s pointer. Lecture 20’s `&` is doing the usual reference job, and the type of the object is `int*`.

```cpp
void retarget(int** pp) {
    *pp = nullptr;
}
```

The call is `retarget(&q)`. `pp` points at the pointer `q`, and `*pp = nullptr` assigns to `q`. Both forms work. The reference-to-pointer is the one that keeps the call looking like `retarget(q)`.

## const

`const int* p` can read `*p` and cannot assign to `*p`. Use it for a function that inspects an `int` or an array and must not modify it.

`int* const p` means the function cannot reseat its own copy. That promise is local. The caller’s pointer was already safe from reseating, because the parameter was a copy.

## Compared with reference parameters

`void increment(int& n)` is called as `increment(x)` and assigns `n = n + 1`. `void increment(int* p)` is called as `increment(&x)` and assigns `*p = *p + 1`.

A reference parameter cannot be null and cannot be reseated. A pointer parameter can be null, can be given a different address inside the function, and must be dereferenced to reach the `int`. Choose a reference when the argument must exist. Choose a pointer when “no object” is a real input, or when the surrounding code is already handling addresses.

## Mistakes that change the program

- Calling `increment(x)` when the parameter is `int*`. The argument must be an address.
- Writing `p = p + 1` and expecting the caller’s `int` to increase. That moves the local pointer.
- Forgetting the null check before `*p`.
- Swapping `a` and `b` without `*` and thinking the `int`s moved.
- Expecting `p = nullptr` on a by-value pointer parameter to clear the caller’s pointer.

---

## Questions

### Question 1

`x` is `6`. What is `x` after `doubleIt(&x)`?

```cpp
void doubleIt(int* p) {
    *p = *p * 2;
}
```

### Question 2

`x` is `6` and `int* q = &x`. What is `x`, and what does `q` point at, after `wipe(q)`?

```cpp
void wipe(int* p) {
    *p = 0;
    p = nullptr;
}
```

### Question 3

Rewrite `wipe` so the call `wipe(q)` sets `q` to `nullptr` and also sets the old target to `0` before clearing `q`. `q` starts aimed at `x`, and `x` is `6`. Give `x` and the state of `q` afterward.

### Question 4

Which calls compile? `void f(int* p);` and `int x = 1; int* q = &x;`

1. `f(&x);`
2. `f(x);`
3. `f(q);`
4. `f(nullptr);`

### Question 5

`void add(const int* p, int* total)` adds `*p` into `*total` when both pointers are non-null. `x` is `4` and `sum` is `10`. Trace `add(&x, &sum)`. Why is `p` declared `const int*` while `total` is `int*`?

### Question 6

Trace `swapPtr(&a, &b)` for `a = 1` and `b = 2`. Then say what `badSwap` exchanges. The function compiles.

```cpp
void badSwap(int* a, int* b) {
    int* temp = a;
    a = b;
    b = temp;
}
```

What does `badSwap` actually exchange?

### Question 7

`void fill(int* p, int n, int value)` writes `value` into `n` elements starting at `p`. `int a[4] = {1, 1, 1, 1};`. What is `a` after `fill(a + 1, 2, 9)`? What is wrong with `fill(a + 3, 2, 9)`?

### Question 8

True or false.

1. A pointer parameter gives the function a copy of the caller’s pointer variable, so `*p = 1` cannot affect the caller.
2. `increment(nullptr)` is safe when `increment` returns immediately on `nullptr`.
3. `int*&` is a reference to a pointer.
4. An array argument `a` passed to `int* p` is the address of `a[0]`.

### Question 9

`int vals[3] = {2, 4, 6};`. `int sum(const int* p, int n)` adds `n` elements. What does `sum(vals, 3)` return? What does `sum(vals, 0)` return? What does `sum(nullptr, 0)` return if the function checks `n` before it checks `p`, and the loop does not run when `n` is `0`?

### Question 10

Write `void minMax(const int* a, int n, int* small, int* big)` for a non-empty array and non-null `small` and `big`. Trace `{3, 1, 3}` so that `*small` becomes `1` and `*big` becomes `3`.

---

## Answers

### Answer 1

`*p` reads `6` and stores `12`. `x` is `12`.

### Answer 2

`*p = 0` sets `x` to `0`. `p = nullptr` clears the function’s copy. `q` still points at `x`. After the call, `x` is `0` and `*q` is `0`.

### Answer 3

```cpp
void wipe(int*& p) {
    if (p != nullptr)
        *p = 0;
    p = nullptr;
}
```

`*p = 0` sets `x` to `0` while `p` still names `q` and `q` still aims at `x`. Then `p = nullptr` sets `q` to `nullptr`. `x` is `0`. `q` is null.

### Answer 4

1. Legal. `&x` is `int*`.
2. Illegal. `x` is an `int`.
3. Legal. `q` is already `int*`.
4. Legal. `nullptr` converts to `int*`. The body must not dereference it.

### Answer 5

`*total` becomes `10 + 4`, so `sum` is `14`. `x` stays `4`.

`p` is an input. `const` blocks `*p = ...`. `total` is an output. The function must be able to assign `*total`.

### Answer 6

`temp` saves `1`, `a`’s target becomes `2`, and `b`’s target becomes `1`. The variables are `a = 2` and `b = 1`.

`badSwap` compiles. `temp`, `a`, and `b` are all `int*`. The function swaps its copies of the addresses and returns. The caller’s `int`s stay `1` and `2`, and the caller’s pointer variables are unchanged because they were passed by value. The exchange is local to the function.

### Answer 7

`a + 1` is the address of index `1`. Two writes store `9` at indexes `1` and `2`. The array becomes `{1, 9, 9, 1}`.

`a + 3` is the last element. A length of `2` writes index `3` and index `4`. Index `4` is past the end.

### Answer 8

1. False. The pointer is copied. The `int` it points at is shared, so `*p = 1` changes the caller’s `int`.
2. True. The function returns before `*p`.
3. True.
4. True. The array name converts to the address of the first element.

### Answer 9

`sum(vals, 3)` returns `12`. `sum(vals, 0)` returns `0` because the loop does not run. `sum(nullptr, 0)` also returns `0` when the loop is guarded by `n` and never dereferences `p`. A length of `0` is an empty range. A non-zero length with `nullptr` would be unsafe.

### Answer 10

```cpp
void minMax(const int* a, int n, int* small, int* big) {
    *small = a[0];
    *big = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < *small)
            *small = a[i];
        if (a[i] > *big)
            *big = a[i];
    }
}
```

Index `0` sets both results to `3`. Index `1` replaces `*small` with `1`. Index `2` equals `*big` and does not replace it. `*small` is `1` and `*big` is `3`.
