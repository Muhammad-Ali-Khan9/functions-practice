# Lecture 20 — Call by Reference

A reference parameter is another name for the caller’s variable. An assignment to the parameter is an assignment to that variable. This is how a `void` function can change one or more variables in the caller.

The parameter is declared with `&` next to the type. The call site still looks like an ordinary call: you pass the variable, and you do not write `&` there. The `&` in a parameter list is not the address-of operator from the pointer lectures.

## A second name

```cpp
void increment(int& n) {
    n = n + 1;
}

int x = 4;
increment(x);
```

`n` refers to `x`. After the call, `x` is `5`. There is no returned value. The change is in `x` itself.

A function can update several variables. Each one that should change needs its own reference parameter.

```cpp
void divide(int amount, int& quotient, int& remainder) {
    quotient = amount / 10;
    remainder = amount % 10;
}

int q = 0;
int r = 0;
divide(47, q, r);   // q is 4, r is 7
```

`amount` is still a copy. `quotient` and `remainder` are names for `q` and `r`.

## Swap

Swapping needs a temporary, and both parameters must be references. Value parameters would swap the copies and leave the caller untouched.

```cpp
void swapValues(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int x = 3;
int y = 8;
swapValues(x, y);   // x is 8, y is 3
```

`swapValues(x, x)` is legal. Both names refer to `x`. The temporary saves `x`, then the function assigns `x` to `x` twice. `x` is unchanged, which is the correct result of swapping a variable with itself.

## What may be passed

A non-const reference parameter must be bound to a modifiable variable. A literal or an expression has no variable for the function to assign into.

```cpp
void increment(int& n);

increment(x);     // legal
increment(5);     // compile error
increment(x + 1); // compile error
```

A `const` reference can bind to a variable, a literal, or an expression, because the function promises not to assign through it.

```cpp
int larger(const int& a, const int& b) {
    if (a > b)
        return a;
    return b;
}

cout << larger(5, x + 1) << "\n";
```

`const int&` is still an alias when the argument is a variable. The `const` blocks assignment. It does not make a copy that the function is free to modify.

## A reference is not reseated

A reference is fixed to the object it was bound to. There is no later assignment that makes the parameter refer to a different variable. `n = m` copies the value of `m` into the object `n` already names.

```cpp
void retarget(int& n, int m) {
    n = m;   // changes the caller's int
}
```

This does not make `n` an alias for some new object belonging to `m`. `m` was passed by value.

## Do not return a reference to a local

A local variable is destroyed when the function returns. A returned reference would name storage that no longer belongs to the program.

```cpp
int& bad() {
    int local = 5;
    return local;   // local dies at the closing brace
}
```

Return a value instead: `int good()` with `return local;`. The caller receives a copy of `5`, and that copy does not depend on `local` surviving.

Returning a reference to a parameter that is itself a reference is different. That parameter names the caller’s variable, which is still alive after the call.

```cpp
int& largerRef(int& a, int& b) {
    if (a > b)
        return a;
    return b;
}
```

`largerRef(x, y) = 0;` assigns `0` to whichever of `x` or `y` is larger. That is legal because the returned name is the caller’s variable. It is a sharp tool. Returning by value is the ordinary choice until you need this.

## Mistakes that change the program

- Forgetting `&` on a parameter that is supposed to update the caller. The function then compiles and changes a copy.
- Writing `&` at the call, as in `increment(&x)`, when the parameter is `int&`. That is pointer syntax and does not match.
- Passing a literal to a non-const reference.
- Returning a reference to a local variable.
- Assuming `const int&` makes a modifiable copy. It does not.

---

## Questions

### Question 1

`x` is `2` and `y` is `9`. What are they after `swapValues(x, y)`? Then what are they after a second call `swapValues(x, x)`?

```cpp
void swapValues(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
```

### Question 2

Which calls compile? For each legal call, give `x` afterward. `x` starts at `10` before each call, separately.

```cpp
void add(int& n, int amount) {
    n = n + amount;
}
```

1. `add(x, 3);`
2. `add(3, x);`
3. `add(x, x);`

### Question 3

`p` is `4` and `q` is `4`. What does this print, and what are `p` and `q`?

```cpp
void stamp(int& a, int& b) {
    a = a + 1;
    b = b + 1;
    cout << a << " " << b << "\n";
}

stamp(p, p);
```

### Question 4

`pay` is `100`. This is the tax function from lecture 19, now with both outputs specified. What are `pay` and `tax` after the call?

```cpp
void applyTax(int& pay, int& tax) {
    tax = pay / 10;
    pay = pay - tax;
}

int pay = 100;
int tax = 0;
applyTax(pay, tax);
```

### Question 5

Which of these compile? Give the result when the call is legal. `x` is `6` and `y` is `2`.

```cpp
int larger(const int& a, const int& b) {
    if (a > b)
        return a;
    return b;
}
```

1. `larger(x, y)`
2. `larger(6, y + 1)`
3. A body that contains `a = a + 1;` before the comparison

### Question 6

What is wrong with this function, and what should it return instead if the caller only needs the number `5`?

```cpp
int& five() {
    int n = 5;
    return n;
}
```

### Question 7

`x` is `1` and `y` is `2`. Trace `hold(x, y)`.

```cpp
void hold(int& a, int b) {
    b = 10;
    a = b;
}
```

### Question 8

`int& pick(int& a, int& b)` returns `a` when `a >= b`, and otherwise returns `b`. `x` is `3` and `y` is `8`.

1. What does `pick(x, y) = 0;` do to `x` and `y`?
2. Why is `int n = pick(x, y);` a different kind of use, and what is `n` before any later assignment through the reference?

### Question 9

True or false.

1. `void f(int& n)` can be called as `f(5)` if the body never assigns to `n`.
2. `n = m` inside a function retargets reference parameter `n` so that it refers to `m`.
3. Forgetting `&` on a swap parameter makes the swap fail at compile time.
4. A `const int&` parameter can be passed a literal.

### Question 10

Write `void minMax(int a, int b, int& small, int& big)` so that `small` receives the lesser input and `big` the greater. Allow ties. Trace `minMax(4, 4, s, g)` and `minMax(9, 2, s, g)` starting from `s = 0` and `g = 0`.

---

## Answers

### Answer 1

`x` starts at `2`, so `temp` is `2`, `x` becomes `9`, and `y` becomes `2`. After `swapValues(x, y)`, `x` is `9` and `y` is `2`.

The second call binds both parameters to `x`. `temp` saves `9`, then `x` is assigned `9` and assigned `9` again. `x` stays `9` and `y` stays `2`.

### Answer 2

1. Legal. `x` becomes `13`.
2. Illegal. The first parameter is a non-const reference, and `3` is not a variable.
3. Legal. `amount` receives a copy of `x`, which is `10`, and `n` refers to `x`. Then `x` becomes `10 + 10`, so `x` is `20`. The copy of `amount` was taken before `x` changed.

### Answer 3

Both parameters refer to `p`. The first assignment sets `p` to `5`. The second assignment adds one to that same variable, so `p` becomes `6`. The print happens after both assignments.

```text
6 6
```

`q` is never passed, so `q` stays `4`. Passing the same variable twice means the two reference parameters are one object.

### Answer 4

`tax` becomes `100 / 10`, which is `10`. Then `pay` becomes `100 - 10`, which is `90`. Both parameters refer to the caller’s variables, so `pay` is `90` and `tax` is `10`.

### Answer 5

1. Legal. `x` is greater, so the result is `6`. `x` and `y` stay `6` and `2`.
2. Legal. A `const` reference can bind to the literal `6` and to the temporary `y + 1`, which is `3`. The result is `6`.
3. The changed body does not compile. `a` is a reference to const, so `a = a + 1` is rejected.

### Answer 6

`n` is destroyed when `five` returns. The returned reference would name that dead local. Callers that use it have undefined behavior.

Return by value:

```cpp
int five() {
    int n = 5;
    return n;
}
```

The caller gets a copy of `5`.

### Answer 7

`b` is a copy of `y`, so `b = 10` changes the copy and leaves `y` at `2`. `a` refers to `x`, so `a = b` sets `x` to `10`. After the call, `x` is `10` and `y` is `2`.

### Answer 8

1. `y` is larger, so the returned reference names `y`. The assignment stores `0` in `y`. `x` stays `3`.
2. `int n = pick(x, y);` copies the current value of the larger variable into a new `int`. With the original `x` and `y`, `n` is `8`. Later changes to `n` do not change `x` or `y`, because `n` is a separate object. The assignment in part 1 wrote through the reference. This initialization copied a value.

### Answer 9

1. False. The compiler rejects `f(5)` because the parameter is a non-const reference. It does not inspect the body to make an exception.
2. False. `n = m` writes `m`’s value into the variable `n` already refers to.
3. False. The program compiles. Both parameters are copies, the copies are swapped, and the caller’s variables stay as they were. The bug is silent.
4. True. A `const` reference is allowed to bind to a literal.

### Answer 10

```cpp
void minMax(int a, int b, int& small, int& big) {
    if (a < b) {
        small = a;
        big = b;
    } else {
        small = b;
        big = a;
    }
}
```

`minMax(4, 4, s, g)` takes the `else` branch because `a < b` is false. `s` becomes `4` and `g` becomes `4`.

`minMax(9, 2, s, g)` also takes `else`, because `9 < 2` is false. `s` becomes `2` and `g` becomes `9`.
