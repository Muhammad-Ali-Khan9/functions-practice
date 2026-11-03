# Lecture 19 — Call by Value

A call copies each argument into the matching parameter. The parameter is a new local variable. Assignments to that variable stay inside the function. The caller’s variable keeps the value it had at the call.

Lecture 18 already used this default. This lecture is the rule itself: what is copied, what a change inside the function can affect, and why a `return` is the way to hand a result back.

## The copy

```cpp
int cube(int n) {
    n = n * n * n;
    return n;
}

int main() {
    int x = 4;
    cout << cube(x) << "\n";
    cout << x << "\n";
    return 0;
}
```

`cube(x)` copies `4` into `n`. The assignment changes `n` to `64`. The `return` sends `64` back. `x` is a different object, so it is still `4`.

```text
64
4
```

The argument can be a variable, a literal, or an expression. The expression is evaluated first. The result of that evaluation is what gets copied.

```cpp
cout << cube(2) << "\n";      // copies 2, returns 8
cout << cube(x + 1) << "\n";  // x is 4, so this copies 5 and returns 125
```

`x + 1` does not create a variable named in `main`. There is nothing in the caller for `cube` to modify except through the returned value, and only if `main` stores that value.

## One result comes back through return

Pass-by-value gives the function its own inputs. It does not give the function a way to write into the caller’s variables. If the caller needs a new number, the function returns it and the caller assigns it.

```cpp
int x = 4;
x = cube(x);   // x becomes 64
```

A function has one return value. Two results need two calls, a later reference parameter, or a later array. Setting two parameters inside a pass-by-value function and expecting both caller variables to change will compile and still leave the caller unchanged.

```cpp
void both(int a, int b) {
    a = a + 1;
    b = b + 1;
}

int p = 3;
int q = 8;
both(p, q);   // p is still 3, q is still 8
```

## Argument order and conversion

Parameters are matched by position. The names in the definition do not look for matching names in the caller.

```cpp
int difference(int left, int right) {
    return left - right;
}
```

`difference(10, 4)` returns `6`. `difference(4, 10)` returns `-6`.

If the argument type can convert to the parameter type, the conversion happens before the body runs. A `double` passed to an `int` parameter is truncated toward zero.

```cpp
int whole(int n) {
    return n;
}
```

`whole(5.9)` copies `5`. `whole(-5.9)` copies `-5`. The fraction is already gone when the body starts.

The copy runs the other way on the way out as well. A `double` return stored in an `int` variable is truncated by that assignment.

## const on a value parameter

`const int n` still receives a copy. `const` means the function is not allowed to assign to that copy. It does not create a second channel back to the caller.

```cpp
int show(const int n) {
    // n = n + 1;   // compile error: n is const
    return n + 1;
}
```

`show(x)` can return `x + 1`. It cannot change `x`.

## Mistakes that change the program

- Treating a change to the parameter as a change to the caller’s variable.
- Forgetting to use the returned value: `cube(x);` computes `64` and throws it away, and `x` stays `4`.
- Swapping the argument order and expecting the parameter names to sort it out.
- Passing a `double` to an `int` parameter and expecting the fraction to survive.
- Writing a `void` function that “returns” extra results by assigning to value parameters.

---

## Questions

### Question 1

`x` starts at `5`. What is printed?

```cpp
int bump(int n) {
    n = n + 1;
    return n;
}

int main() {
    int x = 5;
    cout << bump(x) << "\n";
    cout << x << "\n";
    return 0;
}
```

### Question 2

`x` starts at `5`. What is printed, and why is the third line different from the first?

```cpp
int bump(int n) {
    n = n + 1;
    return n;
}

int main() {
    int x = 5;
    cout << bump(x) << "\n";
    cout << x << "\n";
    x = bump(x);
    cout << x << "\n";
    return 0;
}
```

### Question 3

What does `shift(a, b)` print, and what are `a` and `b` afterward? `a` starts at `2` and `b` starts at `9`.

```cpp
void shift(int first, int second) {
    first = second;
    second = 0;
    cout << first << " " << second << "\n";
}
```

### Question 4

`left` is `8` and `right` is `3`. Give the value of each call.

```cpp
int gap(int left, int right) {
    return left - right;
}
```

1. `gap(left, right)`
2. `gap(right, left)`
3. `gap(left + 1, right)`

### Question 5

What does each call return?

```cpp
int cut(int n) {
    return n / 2;
}
```

1. `cut(7)`
2. `cut(7.9)`
3. `cut(-7.9)`

### Question 6

This function is supposed to replace `pay` with the taxed amount and also report the tax. `pay` starts at `100`. What are `pay` and `tax` after the call? Why did the tax report work while `pay` stayed the same?

```cpp
int applyTax(int pay, int& tax) {
    tax = pay / 10;
    pay = pay - tax;
    return pay;
}

int pay = 100;
int tax = 0;
int net = applyTax(pay, tax);
```

The reference parameter is the subject of the next lecture. Use only what this call does to each argument.

### Question 7

Which calls compile? For the ones that compile, what do they print? `x` starts at `4`.

```cpp
int reveal(const int n) {
    cout << n << "\n";
    return n + 1;
}
```

1. `cout << reveal(x) << "\n";` followed by printing `x`
2. A body changed to `n = n + 1; return n;`
3. `cout << reveal(x + 3) << "\n";`

### Question 8

`scale` returns a `double`. What is stored in each variable?

```cpp
double scale(int n) {
    return n / 2.0;
}

int a = scale(5);
double b = scale(5);
```

### Question 9

True or false.

1. After `f(x)` where `f` takes `int n` by value and assigns `n = 0`, `x` is `0`.
2. `f(x + 1)` can change `x` if `f` assigns to its parameter.
3. A pass-by-value function can still give the caller a new number.
4. `const` on a value parameter means assignments to that parameter change the caller and assignments inside the function are forbidden.

### Question 10

Write `void reset(int n)` so that a reader might think `reset(x)` sets `x` to `0`. Show the call with `x` equal to `6`, show what `x` is afterward, and write the one-line change in `main` that does set `x` to `0` using a function `int zero()` that returns `0`.

---

## Answers

### Answer 1

The call copies `5` into `n`. `n` becomes `6`, and that `6` is returned. `x` was never assigned in `main`. The output is

```text
6
5
```

### Answer 2

The first call prints `6` and leaves `x` at `5`, so the second line is `5`. The third line assigns the returned `6` to `x`, so it prints `6`.

```text
6
5
6
```

The first call discards the result. The assignment stores it.

### Answer 3

The call copies `2` into `first` and `9` into `second`. Then `first` becomes `9` and `second` becomes `0`. The function prints

```text
9 0
```

`a` is still `2` and `b` is still `9`. Those assignments targeted the copies.

### Answer 4

1. `8 - 3` is `5`.
2. The first parameter receives `3` and the second receives `8`, so the result is `3 - 8`, which is `-5`.
3. `left + 1` is evaluated to `9` before the call. The copies are `9` and `3`, so the result is `6`. `left` itself stays `8`.

### Answer 5

1. Integer division `7 / 2` is `3`.
2. `7.9` is converted to the `int` parameter `7` before the body runs. The result is `3`.
3. `-7.9` converts toward zero to `-7`. Then `-7 / 2` is `-3`, because C++ integer division truncates toward zero.

### Answer 6

`pay` is passed by value, so the assignment `pay = pay - tax` changes the copy. The caller’s `pay` stays `100`. `tax` is a reference, so `tax = pay / 10` writes `10` into the caller’s `tax`. The returned copy is `90`, stored in `net`.

After the call, `pay` is `100`, `tax` is `10`, and `net` is `90`. The reference was the only parameter that named the caller’s own variable.

### Answer 7

1. The call compiles. It prints `4` from inside `reveal`, then prints the returned `5`. `x` stays `4`.

```text
4
5
4
```

2. The changed body does not compile. `n` is `const`, so `n = n + 1` is rejected.
3. The call compiles. `x + 3` is `7`. It prints `7`, then prints the returned `8`. `x` stays `4`.

### Answer 8

`n / 2.0` is floating division, so the function returns `2.5`. `a` is an `int`, so the assignment stores `2`. `b` is a `double`, so it stores `2.5`. The return type protected the fraction only until the caller chose a variable that cannot hold it.

### Answer 9

1. False. The assignment sets the parameter’s copy to `0`. `x` is unchanged.
2. False. `x + 1` is a temporary value. The function receives a copy of that value. There is no caller variable behind the expression for the function to assign.
3. True. `return` sends one value back, and the caller can store it.
4. False. `const` forbids assigning to the parameter. The parameter is still a copy, so those forbidden assignments were never a path back to the caller.

### Answer 10

```cpp
void reset(int n) {
    n = 0;
}

int zero() {
    return 0;
}

int x = 6;
reset(x);       // x is still 6
x = zero();     // x is 0
```

`reset(x)` copies `6` and sets that copy to `0`. `x = zero();` stores the returned `0` in the caller’s variable.
