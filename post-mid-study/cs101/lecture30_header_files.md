# Lecture 30 — Header Files

`#include` pastes a file into the current file before compilation continues. A header holds declarations that more than one source file needs: function prototypes, constants, and later class declarations. The matching function bodies live in a `.cpp` file.

Standard headers use angle brackets. Your own headers use quotes.

```cpp
#include <iostream>
#include "stats.h"
```

Angle brackets search the compiler’s include paths. Quotes search the project directory first, then those same paths. `<iostream>` is the standard header. `<iostream.h>` is a pre-standard name and is not the header this course includes.

## What belongs in the header

`stats.h` declares the functions. It does not define them.

```cpp
#ifndef STATS_H
#define STATS_H

int maxOf(int a, int b);
int minOf(int a, int b);

#endif
```

`stats.cpp` includes that header and defines the functions.

```cpp
#include "stats.h"

int maxOf(int a, int b) {
    if (a > b)
        return a;
    return b;
}

int minOf(int a, int b) {
    if (a < b)
        return a;
    return b;
}
```

`main.cpp` includes the header and calls the functions. It does not need the bodies in front of it. The linker connects the calls to `stats.cpp`.

A prototype may appear more than once in one translation unit. A full definition may not. If `maxOf`’s body is placed in the header and two `.cpp` files include it, the linker sees two definitions and rejects the program.

## Include guards

The lines `#ifndef STATS_H`, `#define STATS_H`, and `#endif` are the include guard. The first inclusion defines the macro `STATS_H` and keeps the declarations. A later inclusion of the same header sees the macro and skips the body.

Guards matter as soon as one header includes another that includes the first, or one `.cpp` includes a header twice through two different paths. A repeated prototype is often harmless. A repeated class definition, or a repeated function body, is not. Guard every header you write.

The macro name should be specific to the file. `STATS_H` is tied to `stats.h`. Reusing one macro name in two headers makes the second header disappear whenever the first was included earlier.

`#pragma once` is a common compiler extension that means “include this file once.” This course’s portable form is the `#ifndef` guard.

## Constants and globals

In C++, a namespace-scope `const` object has internal linkage unless you mark it `extern`. A header may contain

```cpp
const int CAPACITY = 20;
```

Each `.cpp` that includes the header gets its own internal constant with the same value. That is a reasonable way to share a size.

A non-const global in a header is a definition in every file that includes it:

```cpp
int calls = 0;   // multiple definitions when two cpp files include this
```

Declare it in the header and define it in one `.cpp`:

```cpp
extern int calls;     // in the header
int calls = 0;        // in exactly one cpp file
```

## using in a header

`using namespace std;` in a header applies to every file that includes that header. Those files lose control of which `std` names are imported. Put `using namespace std;` in the `.cpp` files that want it, or call `std::cout` explicitly. Leave it out of the header.

## The compiler and the linker

A missing header produces a compile error at the call: the name was not declared. A header that is present, with a prototype, and a missing `stats.cpp` in the link produces a linker error: the name was declared and never defined.

```text
g++ main.cpp stats.cpp -o stats
```

Compiling only `main.cpp` can compile cleanly and still fail at the link when the bodies are in `stats.cpp`.

## Mistakes that change the program

- Putting function bodies in a header and including that header from two `.cpp` files.
- Forgetting the include guard and then defining a type twice through nested includes.
- Using `<iostream.h>`.
- Defining a non-const global in a header.
- Putting `using namespace std;` in a header.
- Compiling `main.cpp` alone and treating the linker error as a prototype problem.

---

## Questions

### Question 1

`stats.h` contains only `int maxOf(int a, int b);` inside a correct include guard. `main.cpp` includes it and calls `maxOf(3, 9)`. The build command is `g++ main.cpp -o main`. The compiler accepts the call. Why does the build still fail?

### Question 2

The same prototype is correct, and `stats.cpp` defines `maxOf`. Which command links, and which command is missing a file?

1. `g++ main.cpp stats.cpp -o main`
2. `g++ main.cpp -o main`

### Question 3

This header is included twice in one `.cpp` file. What happens with the guard present, and what happens if the guard is removed and the header instead contains the full function body of `maxOf`?

### Question 4

Which of these belong in `stats.h`, and which belong in `stats.cpp`?

1. `int maxOf(int a, int b);`
2. `int maxOf(int a, int b) { return a > b ? a : b; }`
3. `const int CAPACITY = 20;`
4. `int calls = 0;`

### Question 5

`main.cpp` includes `stats.h` and then includes `util.h`. `util.h` also includes `stats.h`. The guard macro is `STATS_H`. How many times is the prototype of `maxOf` actually pasted into `main.cpp`? What goes wrong if `util.h` uses the same macro name `STATS_H` for its own guard?

### Question 6

A header contains `using namespace std;` and `#include <iostream>`. `report.cpp` includes that header and has a function of its own named `count`. Why can that `using` directive cause a later call to become ambiguous? Where should the `using` directive go?

### Question 7

`#include <iostream.h>` fails on this course’s g++. What is the include that provides `cout`, and how do you name `cout` if the `.cpp` file has no `using` directive?

### Question 8

True or false.

1. A prototype may be repeated in one translation unit.
2. A function body may be repeated in one translation unit.
3. Quotes and angle brackets search in exactly the same order.
4. `extern int calls;` in a header creates the `int` and sets it to `0`.

### Question 9

`const int CAPACITY = 20;` is in `stats.h`. Both `main.cpp` and `stats.cpp` include `stats.h` and print `CAPACITY`. Does this link? What changes if `const` is removed and the header says `int CAPACITY = 20;`?

### Question 10

Write the complete `stats.h` guard and prototype for `int clamp(int value, int low, int high);`, and write a `stats.cpp` definition that returns `low` when `value` is below `low`, `high` when `value` is above `high`, and `value` otherwise. Trace `clamp(5, 0, 10)`, `clamp(-3, 0, 10)`, and `clamp(12, 0, 10)`.

---

## Answers

### Answer 1

The prototype made the call legal to the compiler. The body of `maxOf` was never compiled into this link. The linker fails because `maxOf` is undefined. Add `stats.cpp` to the `g++` command, with the function defined there.

### Answer 2

Command 1 links, provided `stats.cpp` defines `maxOf`. Command 2 compiles `main.cpp` and then fails at the link for the same missing definition.

### Answer 3

With the guard, the second inclusion is skipped. The prototype is seen once.

Without the guard, and with the function body in the header, the second inclusion defines `maxOf` again in the same translation unit. That redefinition is a compile error.

### Answer 4

1. Header. It is a declaration.
2. `stats.cpp`, unless you have a specific reason and a plan for the one-definition rule. A body in the header is the multiple-definition hazard.
3. Header. A namespace-scope `const` has internal linkage and can be shared this way.
4. Not as a definition in the header. Put `extern int calls;` in the header and `int calls = 0;` in one `.cpp` file.

### Answer 5

The first inclusion of `stats.h` defines `STATS_H` and pastes the prototype. The inclusion that arrives through `util.h` sees the macro and pastes nothing. The prototype is pasted once.

If `util.h` is guarded by the same `STATS_H`, then the order matters. After `stats.h` has defined that macro, `util.h`’s guard fails and `util.h` contributes no declarations. The two headers need different macro names.

### Answer 6

The directive dumps every `std` name into the file that included the header. A function named `count` can collide with `std::count` once both are visible as `count`. Callers then have two candidates.

Put `using namespace std;` in `report.cpp` if that file wants it, or write `std::cout` and leave the header free of the directive.

### Answer 7

```cpp
#include <iostream>
std::cout << "ok\n";
```

`<iostream>` is the standard header. `std::cout` names the stream without a `using` directive.

### Answer 8

1. True.
2. False. Two bodies for the same function in one translation unit are a redefinition.
3. False. Quotes search the project directory first. Angle brackets start with the compiler’s include paths.
4. False. `extern` declares `calls`. One `.cpp` file must define it.

### Answer 9

It links. Each translation unit has its own internal `CAPACITY` with the value `20`, and both prints show `20`.

Removing `const` makes `int CAPACITY = 20;` a definition with external linkage in every file that includes the header. Two such files produce a multiple-definition link error.

### Answer 10

```cpp
#ifndef STATS_H
#define STATS_H

int clamp(int value, int low, int high);

#endif
```

```cpp
#include "stats.h"

int clamp(int value, int low, int high) {
    if (value < low)
        return low;
    if (value > high)
        return high;
    return value;
}
```

`clamp(5, 0, 10)` returns `5`. `clamp(-3, 0, 10)` returns `0`. `clamp(12, 0, 10)` returns `10`.
