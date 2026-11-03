# Lecture 27 — Pointers

A pointer stores the address of an object. The address-of operator `&` produces that address. The dereference operator `*` reaches the object at the address. These are the same symbols lecture 20 used for reference parameters, and they mean something else in a pointer expression.

## A pointer to an int

```cpp
int x = 5;
int* p = &x;
*p = 9;
```

`p` holds the address of `x`. `*p` is `x`. After the assignment, `x` is `9`. Printing `p` prints an address. Printing `*p` prints `9`.

`int* p, q;` declares `p` as a pointer and `q` as an `int`. The `*` binds to the name. One pointer per declaration is the readable form:

```cpp
int* p;
int* q;
```

## nullptr and uninitialized pointers

`nullptr` is a pointer value that points at no object. Dereferencing it is undefined.

```cpp
int* p = nullptr;
if (p != nullptr)
    cout << *p << "\n";
```

An uninitialized pointer is worse than `nullptr`, because it does not reliably compare equal to `nullptr` and it does not name an object you own. Initialize a pointer before you dereference it.

## Pointer assignment shares an object

```cpp
int x = 3;
int* p = &x;
int* q = p;
*q = 8;
```

`q = p` copies the address. `p` and `q` both name `x`. `*q = 8` sets `x` to `8`, and `*p` is `8` as well.

`q = &y` aims `q` at a different object. That assignment changes `q`. It does not change `p`, and it does not change `x`.

## const

`const int* p` is a pointer to a const `int`. `*p = 4` is illegal. `p = &other` is legal. The pointer can move. The object cannot be modified through this pointer.

`int* const p = &x` is a const pointer. `p` cannot later point elsewhere. `*p = 4` is legal and changes `x`.

Read the `const` next to the type it freezes. `const int*` freezes the `int`. `int* const` freezes the pointer.

## Arrays and pointers

In most expressions, the name of an array converts to the address of its first element. `scores`, `&scores[0]`, and a parameter `int a[]` from lecture 25 are the same kind of address.

```cpp
int scores[3] = {10, 20, 30};
int* p = scores;
cout << *p << "\n";     // 10
cout << *(p + 1) << "\n"; // 20
cout << p[1] << "\n";   // 20
```

`p[1]` means `*(p + 1)`. Adding `1` to an `int*` advances one `int`, not one byte. `p + 1` is the address of `scores[1]`.

The array object itself is not a pointer variable. You can aim `p` at something else. You cannot write `scores = p`.

## Mistakes that change the program

- Declaring `int* p, q` and then using `q` as a pointer.
- Dereferencing `nullptr` or an uninitialized pointer.
- Confusing `p`, which is an address, with `*p`, which is the object.
- Writing `*p = &x` when `p` is `int*`. The right-hand side is an address and the left-hand side is an `int`.
- Assuming `q = p` makes a second `int`. It makes a second name for the same `int`.

---

## Questions

### Question 1

`int x = 4; int* p = &x; *p = *p + 3;`. What are `x` and `*p`?

### Question 2

What does each declaration mean?

```cpp
int* a, b;
int* c, * d;
const int* e;
int* const f = &x;
```

`x` is an existing `int`. Say which names are pointers, and which of `e` and `f` can be reseated.

### Question 3

`int x = 1; int y = 2; int* p = &x; int* q = &y; q = p; *q = 7;`. What are `x` and `y`?

### Question 4

Which lines compile? `int x = 5; const int* p = &x; int* const q = &x;`

1. `*p = 8;`
2. `p = nullptr;`
3. `*q = 8;`
4. `q = nullptr;`

### Question 5

`int a[4] = {3, 6, 9, 12}; int* p = a;`. Evaluate `*p`, `*(p + 2)`, and `p[3]`. What is `*(p + 4)`?

### Question 6

`int* p = nullptr;`. Why is `if (p != nullptr) cout << *p;` safe, and why is `cout << *p;` by itself not?

### Question 7

`int x = 10; int* p; *p = &x;`. What is wrong with the second assignment? Write the two lines that make `p` point at `x` and then set `x` to `10` through `p`. `x` is already `10`; the assignment through `p` may set it to `12` so the change is visible.

### Question 8

True or false.

1. `&x` is an address. `*p` is an `int` when `p` has type `int*`.
2. `int* p = nullptr` creates an `int` initialized to `0`.
3. `p + 1` advances one byte when `p` is `int*`.
4. The array name `a` in `int a[3]` can appear on the left of `=` as `a = p`.

### Question 9

`void show(const int* p, int n)` prints `n` elements starting at `p`, and prints nothing when `p` is `nullptr`. `int a[3] = {1, 2, 3};`. What does `show(a, 3)` print? What does `show(nullptr, 3)` print?

### Question 10

`int x = 1; int* p = &x; int* q = &x; *p = *p + 1; *q = *q + 1;`. What is `x`? How is this different from two reference parameters in one call that both increment the same variable once each, as in lecture 20’s `stamp(p, p)`? Compare the final value only: two increments happened here as well.

---

## Answers

### Answer 1

`*p + 3` reads `4` and adds `3`. The assignment stores `7` in `x`. `x` is `7` and `*p` is `7`, because they are the same object.

### Answer 2

`a` is a pointer. `b` is an `int`. `c` and `d` are both pointers. `e` is a pointer to a const `int`, so `e` can be reseated and `*e` cannot be assigned. `f` is a const pointer aimed at `x`, so `f` cannot be reseated and `*f` can be assigned.

### Answer 3

`q = p` copies the address of `x` into `q`. `*q = 7` sets `x` to `7`. `y` is still `2`. Nothing in this fragment assigns to `y`.

### Answer 4

1. Illegal. `p` points at a const `int`.
2. Legal. `p` itself is not const.
3. Legal. `*q = 8` sets `x` to `8`.
4. Illegal. `q` is a const pointer.

### Answer 5

`*p` is `3`. `*(p + 2)` is `9`. `p[3]` is `12`. `*(p + 4)` is one past the last element. Dereferencing it is not a defined element of `a`.

### Answer 6

The condition is false, so the true branch does not evaluate `*p`. A bare `cout << *p` dereferences `nullptr`.

### Answer 7

`p` was never aimed at an object, so `*p` is not an `int` you may assign. The right-hand side `&x` is an address, and `*p` would be an `int` only after `p` pointed at an `int`. The types do not match, and the pointer is uninitialized.

```cpp
int x = 10;
int* p = &x;
*p = 12;
```

`x` is `12`.

### Answer 8

1. True.
2. False. The pointer is null. No `int` was created by that declaration.
3. False. `p + 1` advances one `int`.
4. False. The array name is not a modifiable pointer.

### Answer 9

```cpp
void show(const int* p, int n) {
    if (p == nullptr)
        return;
    for (int i = 0; i < n; i++)
        cout << p[i] << " ";
}
```

`show(a, 3)` prints `1 2 3`. `show(nullptr, 3)` prints nothing and does not dereference the pointer.

### Answer 10

`*p` increments `x` from `1` to `2`. `*q` increments the same `x` from `2` to `3`. `x` is `3`.

Lecture 20’s `stamp` on one variable also applied two increments to that variable. The final change is two increments in both stories. The mechanism here is two pointer objects that happen to hold the same address. The reference version was two parameter names bound to one variable for a single call.
