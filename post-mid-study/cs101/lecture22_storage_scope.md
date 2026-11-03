# Lecture 22 — Storage Classes and Scope Rules

Storage duration says how long an object lives. Scope says which lines of the program are allowed to use its name. A variable can be alive and still be invisible, and a name can be visible while hiding a different object with the same spelling.

The storage classes this course uses are automatic, static, and external. The old `register` keyword is not part of the C++ this course compiles.

## Automatic locals

A variable declared inside a function without `static` has automatic storage. It is created when execution enters its block and destroyed when execution leaves that block. The next call creates a new one.

```cpp
void tick() {
    int count = 0;
    count++;
    cout << count << " ";
}
```

Three calls print `1 1 1`. Each call’s `count` starts at `0` because it is a new variable.

An automatic local with no initializer has an indeterminate value. Reading it before an assignment is not a zero. It is not a value you may use.

Parameters are automatic. They are created for the call and destroyed at the return. A reference parameter does not create a second `int`. It names the caller’s `int`, and that caller’s object has its own lifetime.

## Static locals

`static` on a local variable means one object for the whole run. The initializer runs once, on the first entry. Later calls see the value left behind.

```cpp
void tick() {
    static int count = 0;
    count++;
    cout << count << " ";
}
```

Three calls print `1 2 3`.

If the initializer uses a parameter, only the first call supplies it.

```cpp
void remember(int n) {
    static int saved = n;
    cout << saved << " ";
}
```

`remember(10)` prints `10` and initializes `saved`. `remember(3)` prints `10` again. The `3` does not reinitialize `saved`.

A static local with no initializer is set to `0` once. That zero is part of static storage, not a habit of every local.

## Globals and extern

A variable declared outside every function has static storage duration and global namespace scope. It is created before `main` and lives until the program ends. A global with no initializer is `0`.

```cpp
int total = 0;

void add(int n) {
    total = total + n;
}
```

Any function below this declaration can name `total`. That convenience is also the hazard. Any call can change it, so a bug in `total` is no longer local to one function. Prefer a parameter, a return value, or a reference parameter when the value belongs to one calculation.

`extern int total;` declares that `total` exists somewhere else. It does not create the object. One definition, `int total = 0;`, must appear in one source file. Two definitions of the same global are a link error.

`static` on a global, `static int helper = 0;`, gives the name internal linkage. Other source files cannot refer to it. In a one-file program the visible effect is small. The important difference from a non-static global is that this name is private to the file.

## Scope and hiding

A name is visible from its declaration to the end of the block that contains it.

```cpp
int n = 1;

void show() {
    int n = 2;
    cout << n << " " << ::n << "\n";
}
```

The local `n` hides the global `n` for the rest of `show`. The output is `2 1`. `::n` is the global. Inside the function, the bare name `n` is the local.

A nested block can hide a function-local name as well.

```cpp
int x = 1;
{
    int x = 2;
    cout << x << " ";
}
cout << x;
```

This prints `2 1`. The inner `x` is destroyed at the inner closing brace.

A `for` loop’s counter, declared in the header, belongs to the loop. After the loop, that name is not in scope.

```cpp
for (int i = 0; i < 3; i++)
    cout << i << " ";
// cout << i;   // i is not declared here
```

The parameter of a function hides a global with the same name for the whole body. Prototype scope is narrower: a name written in a prototype is visible only in that prototype. It does not create a variable you can use in `main`.

## Mistakes that change the program

- Expecting an automatic local to remember the previous call.
- Expecting a `static` local to reset when the function is called with a new argument.
- Reading an uninitialized automatic local.
- Hiding a global with a local and then updating the wrong one.
- Defining the same global in two files, or using `extern` and never defining it.
- Using a `for` counter after the loop.

---

## Questions

### Question 1

What does three calls to `tick()` print? Then rewrite the one word that makes a later call continue from the previous count, and give the new output.

```cpp
void tick() {
    int count = 0;
    count++;
    cout << count << " ";
}
```

### Question 2

What is printed? The calls are `remember(4); remember(9); remember(1);`.

```cpp
void remember(int n) {
    static int saved = n;
    saved++;
    cout << saved << " ";
}
```

### Question 3

`total` is a global initialized to `0`. What does this print?

```cpp
int total = 0;

void add(int n) {
    int total = n;
    total = total + 1;
    cout << total << " " << ::total << "\n";
}

int main() {
    add(5);
    cout << total << "\n";
    return 0;
}
```

### Question 4

Which lines are illegal, and what do the legal prints produce?

```cpp
void test() {
    int x;
    static int y;
    cout << y << "\n";
    x = 3;
    cout << x << "\n";
}
```

### Question 5

What is printed?

```cpp
int n = 10;

void show() {
    cout << n << "\n";
    int n = 4;
    cout << n << "\n";
    cout << ::n << "\n";
}
```

### Question 6

Does this compile? If it compiles, what is printed?

```cpp
int main() {
    for (int i = 0; i < 3; i++)
        cout << i << " ";
    cout << "\n";
    cout << i << "\n";
    return 0;
}
```

### Question 7

`helper` is defined in `a.cpp` as `int helper = 2;`. `b.cpp` contains `extern int helper;` and prints `helper`. The program links and prints `2`.

1. What changes if `a.cpp` instead says `static int helper = 2;`?
2. What changes if both files contain `int helper = 2;` with no `static` and no `extern`?

### Question 8

A student puts `int calls = 0;` inside `log()` so the function can report how many times it has been called. Three calls each print `1`. Why, and what is the smallest change that prints `1`, `2`, and `3`?

### Question 9

True or false.

1. A global `int` with no initializer starts at an indeterminate value, just like an automatic local.
2. `extern int total;` creates `total` and sets it to `0`.
3. A name declared in a prototype can be used in `main` after the prototype.
4. A reference parameter’s lifetime is the lifetime of the caller’s variable, not the lifetime of the function’s stack frame.

### Question 10

`x` starts as a global `7`. Trace the prints.

```cpp
int x = 7;

void f() {
    cout << x << " ";
    int x = 1;
    cout << x << " ";
    {
        int x = 4;
        cout << x << " ";
    }
    x = x + 1;
    cout << x << " ";
    cout << ::x << "\n";
}
```

---

## Answers

### Answer 1

Each call creates a new `count` at `0` and increments it. The output is

```text
1 1 1
```

Change `int` to `static int`. The initializer runs once, and the increments accumulate:

```text
1 2 3
```

### Answer 2

The first call initializes `saved` to `4`, then increments it to `5` and prints `5`. The later calls do not run the initializer. They increment the same `saved` to `6` and then `7`.

```text
5 6 7
```

The arguments `9` and `1` are ignored after the first entry.

### Answer 3

Inside `add`, the local `total` hides the global. It is initialized to `5` and then becomes `6`. `::total` is still the global `0`. After `add` returns, the local is gone, and `main` prints the global, which was never assigned.

```text
6 0
0
```

### Answer 4

`cout << y` is legal. `y` is static and has no initializer, so it is `0`. The print of `x` is legal only because `x = 3` happens first. Reading `x` before that assignment would use an indeterminate value. Moving the print of `x` above the assignment is the illegal use.

```text
0
3
```

### Answer 5

The first `cout` is above the local declaration, so it prints the global `10`. After `int n = 4;`, the bare name is the local, so the second line is `4`. `::n` is the global `10`.

```text
10
4
10
```

### Answer 6

It does not compile. `i` is declared in the `for` header, so its scope is the loop. The final `cout << i` names a variable that is not in scope.

### Answer 7

1. `static` gives `helper` internal linkage. `b.cpp`’s `extern` declaration no longer finds a global named `helper`. The link fails.
2. Both files define the same external `helper`. The link fails with a multiple-definition error. One file should define it, and the other should only declare it with `extern`.

### Answer 8

`int calls = 0;` inside the function is automatic. Every call starts a new `calls` at `0` and prints `1`.

```cpp
static int calls = 0;
```

The same object survives, so the three prints are `1 2 3`.

### Answer 9

1. False. A global `int` with no initializer is `0`. An automatic local with no initializer is indeterminate.
2. False. `extern` declares a name defined elsewhere. It does not create the object.
3. False. A prototype parameter name exists only in the prototype.
4. True. The reference is another name for the argument. Destroying the function’s frame does not destroy that argument.

### Answer 10

The first print is above the local declaration, so it uses the global `7`. The local `x` then prints `1`. The inner block’s `x` prints `4` and ends. Back in the function, `x = x + 1` updates the function-local `x` from `1` to `2`. `::x` is still `7`.

```text
7 1 4 2 7
```
