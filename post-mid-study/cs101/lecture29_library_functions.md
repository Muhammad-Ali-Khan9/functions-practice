# Lecture 29 — Library Functions

A library function is a function you call and do not define. Its declaration arrives through a header. The compiler checks the call against that declaration. The linker finds the compiled body in the standard library.

This lecture uses the headers freshman programs include for math, characters, and a few utilities: `<cmath>`, `<cctype>`, and `<cstdlib>`. The names are in namespace `std`. With `using namespace std;` in the `.cpp` file, the calls below can omit the `std::` prefix.

## Math in cmath

`sqrt` and `pow` take `double` arguments and return `double`. `sqrt(2.0)` is about `1.414`. `pow(2.0, 3.0)` is `8.0`. Storing that `8.0` in an `int` truncates it to `8` only after the function has returned a floating value.

`sqrt` of a negative argument is a domain error. Do not call it on untested input.

`fabs` returns the floating absolute value. `fabs(-3.7)` is `3.7`. The integer function `abs` from `<cstdlib>` takes an `int`. `abs(-3)` is `3`. Passing `-3.7` to the integer `abs` truncates the argument to `-3` and returns `3`. Include `<cmath>` and call `fabs` when the value is a `double`.

`ceil` and `floor` return `double`s that are whole numbers.

* `ceil(2.1)` is `3.0`. `floor(2.9)` is `2.0`.
* `ceil(-2.3)` is `-2.0`. `floor(-2.3)` is `-3.0`.

`floor` moves toward negative infinity. `ceil` moves toward positive infinity. Truncating toward zero, which a cast to `int` does, is a third operation. `(int)-2.3` is `-2`, while `floor(-2.3)` is `-3.0`.

`sin` and `cos` take radians. `sin(0.0)` is `0.0`. A call written as `sin(90)` does not mean 90 degrees. `90` radians is a different angle.

## Characters in cctype

These functions take an `int` and expect a character code that fits in an `unsigned char`, or the special value `EOF`. Pass a character literal.

`isdigit('7')` is true. `isdigit(7)` asks about character code `7`, which is not the digit character. It is false. The digit characters are `'0'` through `'9'`.

`isalpha('A')` and `isalpha('b')` are true. `isspace(' ')` is true for the space character, and also for `'\n'` and `'\t'`.

`toupper('a')` returns the `int` code of `'A'`. `toupper('A')` returns `'A'`. Assign the result back to a `char` when you want to store it:

```cpp
char c = 'b';
c = static_cast<char>(toupper(static_cast<unsigned char>(c)));
```

The `unsigned char` cast is the safe way to pass a `char` that might be negative on this compiler, where plain `char` is often signed. For the ordinary letters in these exercises, `toupper(c)` is the call you will see. Store the result if you need the variable to change. `toupper` does not modify `c` by itself.

## Utilities in cstdlib

`abs` is the integer absolute value. `rand` and `srand` are lecture 21. `exit(status)` ends the whole program. Statements after the call, including the rest of `main`, do not run. `exit(0)` means success. A nonzero status means failure. Use it when the program cannot continue. Use `return` when you only want to leave the current function.

## A call is not a rewrite of your types

`pow` returns `double`, so `pow(2, 3)` is not an excuse for integer overflow thinking: the result is floating. For a small integer square, `n * n` stays in integer arithmetic and is the clearer computation. `pow(10, 20)` cannot be an exact `int` in this course’s 32-bit `int`, and the `double` result is not a substitute for an integer type that can hold the value.

## Mistakes that change the program

- Calling `sin` with degrees.
- Using `abs` on a `double` and losing the fraction.
- Confusing `floor` of a negative number with a cast to `int`.
- Testing `isdigit(7)` when the input character is `'7'`.
- Calling `toupper` and forgetting to store the returned value.
- Calling `exit` from a helper and expecting `main` to continue.

---

## Questions

### Question 1

Give the value of each call.

1. `fabs(-4.25)`
2. `abs(-4)`
3. `ceil(4.01)`
4. `floor(4.99)`
5. `ceil(-4.01)`
6. `floor(-4.01)`

### Question 2

`int n = -4.8;` is not the question. This is:

```cpp
double x = -4.8;
int a = abs(x);
double b = fabs(x);
int c = static_cast<int>(x);
```

`abs` here is the `<cstdlib>` function that takes `int`. What are `a`, `b`, and `c`?

### Question 3

`pow(2, 3)` is used as `int n = pow(2, 3);`. What is `n`? What is printed by `cout << pow(2, 3);` if the stream prints the `double` in a default style that shows `8`? Why is `n * n` preferable to `pow(n, 2)` when `n` is an `int` and the square still fits in an `int`?

### Question 4

Which calls are true?

1. `isdigit('7')`
2. `isdigit(7)`
3. `isalpha('7')`
4. `isspace('\n')`

### Question 5

`char c = 'g'; toupper(c); cout << c;`. What is printed? Write the assignment that prints `G`.

### Question 6

A student converts degrees to radians with `radians = degrees * 3.14159265 / 180.0` and then calls `sin(radians)`. For `degrees` equal to `0`, what does `sin` return? Why does `sin(90)` fail to compute the sine of a right angle?

### Question 7

`double root(double x)` should return the square root of a non-negative `x` and return `-1.0` without calling `sqrt` when `x` is negative. Write it. What does `root(-4.0)` return, and what does `root(9.0)` return?

### Question 8

True or false.

1. `floor` and a cast to `int` agree for every negative non-integer.
2. `toupper('Q')` is `'Q'`.
3. `exit(1)` returns control to the next line in `main`.
4. `pow` and `sqrt` are available after `#include <cmath>`.

### Question 9

`int score(char grade)` maps `'A'` to `4`, `'B'` to `3`, `'C'` to `2`, and anything else to `0`. Comparisons should accept lowercase too. Use `toupper`. Trace `'b'`, `'A'`, and `'z'`.

### Question 10

A program reads characters until `'.'`. It counts digits using `isdigit`. The input is `a7 3.`. How many digits does it count, and why is the space not a digit? The dot ends the loop and is not counted.

---

## Answers

### Answer 1

1. `4.25`.
2. `4`.
3. `5.0`.
4. `4.0`.
5. `-4.0`. The next whole number toward positive infinity is `-4`.
6. `-5.0`. The next whole number toward negative infinity is `-5`.

### Answer 2

`abs` takes `int`, so `-4.8` becomes `-4` and `a` is `4`. `fabs` keeps the fraction, so `b` is `4.8`. The cast truncates toward zero, so `c` is `-4`.

### Answer 3

`pow(2, 3)` returns `8.0`. Stored in an `int`, `n` is `8`. The stream prints that `double`, which appears as `8`.

`n * n` uses integer arithmetic and the type the rest of the calculation already has. `pow(n, 2)` converts to `double` and back. For a square that fits in `int`, the multiplication is exact and does not depend on a floating library result.

### Answer 4

1. True. The character `'7'` is a digit.
2. False. The integer `7` is a character code, not the character `'7'`.
3. False. `'7'` is a digit, not a letter.
4. True. The newline character is whitespace.

### Answer 5

`toupper` returns `'G'` and does not assign to `c`. The print is `g`.

```cpp
c = static_cast<char>(toupper(static_cast<unsigned char>(c)));
cout << c;
```

That prints `G`.

### Answer 6

`sin(0.0)` returns `0.0`. `sin(90)` interprets `90` as radians. A right angle is `π/2` radians, about `1.5708`, not `90`.

### Answer 7

```cpp
double root(double x) {
    if (x < 0.0)
        return -1.0;
    return sqrt(x);
}
```

`root(-4.0)` returns `-1.0` and does not call `sqrt`. `root(9.0)` returns `3.0`.

### Answer 8

1. False. `(int)-2.3` is `-2`. `floor(-2.3)` is `-3.0`.
2. True. An uppercase letter is already in the form `toupper` returns.
3. False. `exit` ends the program. The next line in `main` does not run.
4. True.

### Answer 9

```cpp
int score(char grade) {
    char g = static_cast<char>(toupper(static_cast<unsigned char>(grade)));
    if (g == 'A')
        return 4;
    if (g == 'B')
        return 3;
    if (g == 'C')
        return 2;
    return 0;
}
```

`'b'` becomes `'B'` and returns `3`. `'A'` stays `'A'` and returns `4`. `'z'` becomes `'Z'` and returns `0`.

### Answer 10

The characters before the dot are `'a'`, `'7'`, `' '`, and `'3'`. `isdigit` is true for `'7'` and `'3'`. The letter and the space fail the test. The count is `2`.
