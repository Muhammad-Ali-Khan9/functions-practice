# Lecture 18 — Functions: Definition, Prototypes, and Calling

A function is a named piece of a program. `main` is a function. `main` has been doing all of the work in the earlier lectures. A second function lets you name a calculation, do it from more than one place, and read `main` as a list of steps instead of a pile of detail.

This lecture is definition, prototype, and call. Passing by value is the default, and you need that default to understand a call. Lectures 19 and 20 go further into value and reference. They are not repeated here.

## Definition

A definition is the function itself: the result type, the name, the parameters, and the body.

```cpp
int square(int n) {
    return n * n;
}
```

* `int` before the name is the return type. The function must `return` a value of that type.
* `square` is the name used in a call.
* `int n` is a parameter. It is a local variable that receives the value of the argument.
* `return` computes the result and gives it back to the caller. It also ends the function. Statements after a `return` that always runs are not reached.

A function that does work but has no result uses `void`. A `return;` with no value can leave a `void` function early. `return 5;` inside a `void` function is a compile error. Forgetting `return` in a non-`void` function is also an error in this course’s compiler settings, and it is not a result you should use even when a compiler is lenient.

```cpp
void sayHi() {
    cout << "hi\n";
}
```

Parameters and variables declared inside the body are local. They are created when the function is called and thrown away when it returns. A local `count` that starts at `0` on every call does not remember previous calls.

```cpp
void tick() {
    int count = 0;
    count++;
    cout << count << " ";
}
```

Three calls print `1 1 1`, not `1 2 3`.

## Prototype

The compiler reads the file from top to bottom. A call is legal only after the compiler has seen the function’s name and parameter types. You can define the function above `main`. You can also write a prototype above `main` and define the function below it.

A prototype is a declaration. It ends with a semicolon. It has no body.

```cpp
int square(int n);
```

Parameter names in a prototype are optional. `int square(int);` is the same declaration. The definition can use a different parameter name from the prototype. The types and the order of types cannot differ.

```cpp
int square(int n);          // prototype

int main() {
    cout << square(4) << "\n";
    return 0;
}

int square(int value) {     // definition, name changed, type unchanged
    return value * value;
}
```

If `main` calls `square` and neither a prototype nor the definition appears above that call, the compiler reports that `square` was not declared. The full definition later in the file does not repair a call the compiler has already rejected.

A prototype that disagrees with the definition is also an error. `double area(int);` followed by `int area(int r) { ... }` does not match. The return type is part of the function’s type. It is not a suggestion.

## Calling

A call writes the name and gives one argument for each parameter, in order. It does not repeat the types.

```cpp
int area = square(4);   // legal call
int bad = square(int 4); // not a call
```

Arguments are matched by position. `power(2, 3)` and `power(3, 2)` are different calls if `power` treats the first parameter as the base and the second as the exponent.

```cpp
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++)
        result = result * base;
    return result;
}
```

`power(2, 3)` returns `8`. `power(3, 2)` returns `9`.

By default the argument’s value is copied into the parameter. Changing the parameter does not change the caller’s variable.

```cpp
int square(int n) {
    n = n * n;
    return n;
}

int main() {
    int x = 4;
    cout << square(x) << "\n";
    cout << x << "\n";
    return 0;
}
```

The call copies `4` into `n`. The function sets `n` to `16` and returns `16`. `x` is still `4`.

```text
16
4
```

If the argument’s type is not the parameter’s type, the argument is converted before the call, when a standard conversion exists. A `double` argument passed to an `int` parameter is truncated toward zero.

```cpp
int half(int n) {
    return n / 2;
}
```

`half(5)` returns `2`, because `5 / 2` is integer division. `half(5.9)` converts `5.9` to `5` and also returns `2`. The `.9` is already gone before `half` starts.

The same thing happens in the other direction when a `double` result is stored in an `int`:

```cpp
double average(int a, int b) {
    return (a + b) / 2.0;
}
int shown = average(2, 5);   // 3.5 becomes 3
```

`(a + b) / 2.0` is floating division because `2.0` is a `double`. The function returns `3.5`. The assignment to `shown` then truncates that result to `3`. Returning `3.5` did not protect the value after the caller threw the fraction away.

## One function calling another

A call pauses the caller. The callee runs until it returns. Then the caller continues with the returned value.

```cpp
int square(int n) {
    return n * n;
}

int sumOfSquares(int a, int b) {
    return square(a) + square(b);
}
```

`sumOfSquares(3, 4)` calls `square(3)` and gets `9`, calls `square(4)` and gets `16`, then returns `25`. `main` does not see the inner calls unless it made them itself.

A function may call functions that already have prototypes or definitions above the call. A function does not contain the definition of another function in the C++ this course compiles. Define them separately and call them.

## What belongs in the prototype

The signature used to tell functions apart at a call is the name plus the parameter types, in order. `int f(int)` and `int f(double)` are not the same declaration. You do not need several versions of one name yet. You do need the prototype you wrote to be the function you defined.

`main` returns `int`. `return 0;` tells the operating system the program finished normally. The calls you add to `main` are ordinary calls. `main` is not exempt from the rule that a function must be declared before it is used. The compiler already knows `main` because it is the start of the program, not because it is exempt from declarations. Your functions are not known until you declare them.

---

## Questions

### Question 1

This file does not compile. What is missing, and where can it go? Give one repair that uses a prototype and one repair that uses no prototype.

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << square(4) << "\n";
    return 0;
}

int square(int n) {
    return n * n;
}
```

### Question 2

Which of these pairs compile, and which pair fails? The prototype is above `main`, and the definition is below it.

Pair A:

```cpp
int square(int);
int square(int value) { return value * value; }
```

Pair B:

```cpp
double area(int);
int area(int r) { return r * r; }
```

Pair C:

```cpp
int add(int, int);
int add(int b, int a) { return a + b; }
```

### Question 3

Point at the call that is illegal, and say what a legal call looks like.

```cpp
int add(int a, int b) {
    return a + b;
}

int main() {
    cout << add(2, 3) << "\n";
    cout << add(int a, int b) << "\n";
    return 0;
}
```

### Question 4

Each of these definitions has a return problem. Name it.

```cpp
void shout(int n) {
    cout << n << "\n";
    return n;
}
```

```cpp
int identity(int n) {
    n = n;
}
```

```cpp
void done() {
    return;
}
```

### Question 5

What is printed? Explain why the second number is not `16`.

```cpp
int square(int n) {
    n = n * n;
    return n;
}

int main() {
    int x = 4;
    cout << square(x) << "\n";
    cout << x << "\n";
    return 0;
}
```

### Question 6

`tick` is the function in the notes, with a local `count` starting at `0`. What is printed by three calls in a row? Why is the output not `1 2 3`?

### Question 7

Using `power` from the notes, what do `power(2, 3)` and `power(3, 2)` return? Then what does `power(2, 0)` return, and which part of the function makes that answer without a special case?

### Question 8

What does each call return or store?

```cpp
int half(int n) {
    return n / 2;
}

double average(int a, int b) {
    return (a + b) / 2.0;
}
```

The calls are `half(5)`, `half(5.9)`, and `int shown = average(2, 5);`. Explain both places where a fraction can disappear in the third call’s relatives, and say whether `average` itself lost the fraction.

### Question 9

Trace `sumOfSquares(3, 4)` from the notes. List the calls in the order they start, the value each `square` returns, and the value `sumOfSquares` returns. Does `main` call `square`?

### Question 10

`n` in `main` is `10`. The parameter is also named `n`. What is printed, and which `n` does the function see?

```cpp
int bump(int n) {
    n = n + 1;
    return n;
}

int main() {
    int n = 10;
    cout << bump(n + 1) << "\n";
    cout << n << "\n";
    return 0;
}
```

Then change the prototype story: the prototype says `int bump(int);` but a second definition `int bump(double n)` is written instead. Does that file compile? This is not two useful versions of `bump`. Say what the compiler is complaining about.

---

## Answers

### Answer 1

`main` calls `square` before the compiler has seen a declaration of `square`. The definition below `main` is too late for that call.

Repair with a prototype above `main`:

```cpp
int square(int n);

int main() {
    cout << square(4) << "\n";
    return 0;
}

int square(int n) {
    return n * n;
}
```

Repair without a prototype by moving the whole definition above `main`. The definition is then the declaration. Both repairs print `16`. A prototype is the one you want when several functions call each other and you do not want the whole program ordered by those calls.

### Answer 2

Pair A compiles. The prototype omits the parameter name. The definition uses `value`. The type list is one `int` in both places.

Pair B does not compile. The prototype promises that `area` returns `double`. The definition says it returns `int`. Those are not the same function declaration.

Pair C compiles. The prototype says two `int` parameters and an `int` result. The definition’s parameter names are `b` and `a`, which is confusing for a reader and invisible to the compiler. `return a + b` adds the two parameters. The names do not swap the argument positions. The first argument still arrives in the first parameter, which this definition happens to call `b`.

### Answer 3

`add(2, 3)` is a legal call. Arguments are values, in parameter order. It prints `5`.

`add(int a, int b)` is not a call. Types and parameter declarations belong in the prototype and the definition, not at the call. The compiler sees `int` where it needs an expression.

A legal second call looks like the first one: `add(2, 3)`, or `add(x, y)` if `x` and `y` are variables already declared in the caller.

### Answer 4

`shout` is `void`, so it has no value to return. `return n;` tries to return an `int`. That is a compile error. `return;` would be legal if the function needed to leave early. A `void` function may also just end, with no `return` at all.

`identity` promises an `int` and never returns one. Assigning `n = n` does not return `n`. The function needs `return n;`.

`done` is `void` and `return;` returns no value. That definition is fine. It returns control to the caller and produces no result.

### Answer 5

```text
16
4
```

The call copies `x` into the parameter `n`. `n = n * n` changes that copy to `16`. `return n` sends `16` back, and that is what the first line prints. `x` is a different variable in `main`. Nothing in `square` assigned to `x`. The second line prints the original `4`.

Returning a new value and modifying the caller’s variable are different operations. This function does the first one. Lecture 20 is about the second one.

### Answer 6

Each call creates a new local `count`, sets it to `0`, then increments it to `1`. The previous call’s `count` has already been destroyed.

```text
1 1 1
```

The output is not `1 2 3` because `count` is not stored anywhere that survives the return. A local variable is not a memory of past calls. Keeping a running total across calls is a later topic, under storage classes. It is not what an ordinary local variable does.

### Answer 7

`power(2, 3)` starts `result` at `1` and multiplies by `2` three times: `2`, then `4`, then `8`. It returns `8`.

`power(3, 2)` multiplies by `3` twice: `3`, then `9`. It returns `9`. The same function, the other argument order, a different result. Position is the only thing that tells `base` from `exp`.

`power(2, 0)` does not enter the loop, because `i < 0` is false immediately. `result` is still the `1` it started as. The function returns `1`. The initialization is the empty-product case. No extra `if` is required for a zero exponent, as long as the exponent is not negative. A negative exponent would also skip the loop and return `1`, which would be a wrong reading of this integer function. The loop as written is for an exponent of `0` or more.

### Answer 8

`half(5)` divides `5 / 2` in integers and returns `2`.

`half(5.9)` converts the argument to the `int` parameter `5` before the body runs, then returns `2`. The fraction is lost at the call, not inside the division. The division would have lost it anyway.

`average(2, 5)` computes `(2 + 5) / 2.0`, which is `7 / 2.0`, which is `3.5`. The function’s own result still has the fraction. `average` did not lose it. `int shown = average(2, 5)` then stores that `double` into an `int`, which truncates `3.5` to `3`. The fraction disappears at the assignment in the caller.

If `average` had returned `(a + b) / 2`, both operands of `/` would be `int`, the function would return `3.0` after converting that integer `3` to `double`, and the fraction would have been lost inside the function. The `.0` on `2.0` is what stops that from happening.

### Answer 9

`sumOfSquares(3, 4)` starts. Its body needs `square(3)`. That call starts, returns `9`, and `sumOfSquares` can continue. It then needs `square(4)`. That call starts, returns `16`, and `sumOfSquares` adds `9 + 16` and returns `25`.

The order of calls starting is `sumOfSquares`, then `square` for `3`, then `square` for `4`. `main` called only `sumOfSquares`. It did not call `square`. The inner calls are still real calls. Their parameters are separate from `main`’s variables.

### Answer 10

The argument is `n + 1`, using `main`’s `n`. That expression is `11`. The call copies `11` into `bump`’s parameter, which is a different `n`. The function adds one and returns `12`. `main`’s `n` is never assigned, so it stays `10`.

```text
12
10
```

The shared spelling `n` does not make them the same object. The parameter hides the name `n` inside `bump`. `bump` cannot see `main`’s `n` under that name anyway, because `main`’s locals are not visible in another function.

Replacing the definition with `int bump(double n)` while the prototype still says `int bump(int)` does not compile. The prototype and the definition disagree about the parameter type. This is not a second version of `bump` that the call can choose. It is one name with two conflicting declarations. The parameter type in the prototype has to be the parameter type in the definition.
