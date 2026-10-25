# 10 Hard C++ Function Problems (Primitive Types & Pure Logic Only)

This problem set is designed to test algorithmic thinking, control flow, recursion, and mathematical reasoning using **only primitive C++ types** (`int`, `long long`, `double`, `bool`, `char`). **No arrays, vectors, strings, or data structures are permitted.**

---

## Problem 1: Reversing an Integer safely

**Focus:** Pass-by-reference, integer overflow checking, arithmetic logic

### Description

Write a function `bool reverseInteger(int n, int& reversed)` that takes an integer `n` and stores its reversed digit representation inside the output parameter `reversed`.

### Requirements

* If reversing `n` causes an integer overflow/underflow (exceeding standard 32-bit signed integer limits `INT_MAX` or `INT_MIN`), the function must return `false` and leave `reversed` unchanged.
* If successful, return `true` and update `reversed`.
* Do not convert the number to a string or array.

### Sample

* Input: `n = 12345` $\rightarrow$ Returns `true`, `reversed = 54321`
* Input: `n = 1534236469` $\rightarrow$ Returns `false` (overflow)

### Solution

```cpp
#include <climits>

bool reverseInteger(int n, int& reversed) {
    int temp = n;
    int rev = 0;

    while (temp != 0) {
        int pop = temp % 10;
        temp /= 10;

        // Overflow / Underflow check before multiplying by 10
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return false;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return false;

        rev = rev * 10 + pop;
    }

    reversed = rev;
    return true;
}
```

---

## Problem 2: Collatz Sequence Max Peak

**Focus:** Loops, recursion/iteration, tracking metrics across function calls

### Description

Write a function `long long getCollatzMax(long long start)` that tracks the Collatz sequence starting at `start` and returns the **highest peak value** reached before the sequence inevitably hits `1`.

* Collatz Rule:
  * If $n$ is even: $n \to n / 2$
  * If $n$ is odd: $n \to 3n + 1$

### Requirements

* Use `long long` to prevent early overflow.
* Return `start` if `start <= 1`.

### Sample

* Call: `getCollatzMax(7)`
* Sequence: $7 \to 22 \to 11 \to 34 \to 17 \to 52 \to 26 \to 13 \to 40 \to 20 \to 10 \to 5 \to 16 \to 8 \to 4 \to 2 \to 1$
* Output: `52`

### Solution

```cpp
long long getCollatzMax(long long start) {
    if (start <= 1) return start;

    long long current = start;
    long long maxVal = start;

    while (current > 1) {
        if (current % 2 == 0) {
            current /= 2;
        } else {
            current = 3 * current + 1;
        }

        if (current > maxVal) {
            maxVal = current;
        }
    }

    return maxVal;
}
```

---

## Problem 3: Square Root via Binary Search (Pure Logic)

**Focus:** Numeric methods, floating-point precision, loops

### Description

Write a function `double computeSquareRoot(double x, double precision)` that calculates $\sqrt{x}$ using the binary search method without using `<cmath>` or `std::sqrt`.

### Requirements

* If `x < 0`, return `-1.0` to indicate an error.
* Keep refining the search space $[0, x]$ (or $[0, 1]$ if $x < 1$) until the absolute difference $\vert{}mid^2 - x\vert{} < precision$.

### Sample

* Call: `computeSquareRoot(2.0, 0.00001)`
* Output: `~1.41421`

### Solution

```cpp
double computeSquareRoot(double x, double precision) {
    if (x < 0) return -1.0;
    if (x == 0) return 0.0;

    double low = 0.0;
    double high = (x < 1.0) ? 1.0 : x;
    double mid = 0.0;

    while (high - low > precision) {
        mid = low + (high - low) / 2.0;
        double diff = mid * mid - x;

        // Manual absolute value check
        if (diff < 0) diff = -diff;
        
        if (diff < precision) {
            return mid;
        }

        if (mid * mid < x) {
            low = mid;
        } else {
            high = mid;
        }
    }

    return mid;
}
```

---

## Problem 4: Digit Permutations & Kaprekar's Constant Routine

**Focus:** Digit extraction, sorting digits without arrays, loops

### Description

Write a function `int kaprekarStep(int n)` that takes a 4-digit number (with at least two distinct digits) and returns the result of:

$$
\text{Largest number formed by digits} - \text{Smallest number formed by digits}
$$

### Requirements

* You must extract and sort the 4 digits purely using arithmetic division `/` and modulus `%` (e.g., swapping primitive variable values).
* Treat leading zeros correctly (e.g., $0357$).

### Sample

* Call: `kaprekarStep(3524)`
* Descending digits: $5432$, Ascending digits: $2345$
* Calculation: $5432 - 2345 = 3087$
* Output: `3087`

### Solution

```cpp
int kaprekarStep(int n) {
    // Extract 4 digits
    int d1 = (n / 1000) % 10;
    int d2 = (n / 100) % 10;
    int d3 = (n / 10) % 10;
    int d4 = n % 10;

    // Sort 4 primitives using manual bubble-style comparisons
    if (d1 > d2) { int t = d1; d1 = d2; d2 = t; }
    if (d2 > d3) { int t = d2; d2 = d3; d3 = t; }
    if (d3 > d4) { int t = d3; d3 = d4; d4 = t; }
    if (d1 > d2) { int t = d1; d1 = d2; d2 = t; }
    if (d2 > d3) { int t = d2; d2 = d3; d3 = t; }
    if (d1 > d2) { int t = d1; d1 = d2; d2 = t; }

    // d1 <= d2 <= d3 <= d4
    int asc = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
    int desc = d4 * 1000 + d3 * 100 + d2 * 10 + d1;

    return desc - asc;
}
```

---

## Problem 5: N-th Prime Generator

**Focus:** Primality testing, nested loops, functional decomposition

### Description

Write two functions:

1. `bool isPrime(long long n)`: Returns `true` if `n` is prime, `false` otherwise. Optimized up to $\sqrt{n}$.
2. `long long getNthPrime(int n)`: Returns the $n$-th prime number (where 1st prime = 2, 2nd prime = 3, etc.).

### Requirements

* Do not use pre-calculated tables or arrays.
* Handle base cases correctly ($n \le 0$ returns `-1`).

### Sample

* Call: `getNthPrime(10)`
* Output: `29`

### Solution

```cpp
bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    // Check factors up to sqrt(n)
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

long long getNthPrime(int n) {
    if (n <= 0) return -1;

    int count = 0;
    long long candidate = 2;

    while (true) {
        if (isPrime(candidate)) {
            count++;
            if (count == n) return candidate;
        }
        candidate++;
    }
}
```

---

## Problem 6: Bitwise Division without Multiplication or Division

**Focus:** Bitwise operators, integer limits, fast subtraction

### Description

Write a function `long long divideWithoutOperators(long long dividend, long long divisor)` that divides two integers **without** using `/`, `*`, or `%`.

### Requirements

* Use bitwise shifting (`<<`, `>>`) and subtraction.
* Return `0` if `divisor == 0`.
* Properly preserve the sign of the quotient.

### Sample

* Call: `divideWithoutOperators(43, 5)`
* Output: `8`

### Solution

```cpp
long long divideWithoutOperators(long long dividend, long long divisor) {
    if (divisor == 0) return 0;
    if (dividend == 0) return 0;

    // Determine sign of quotient
    bool negative = (dividend < 0) ^ (divisor < 0);

    // Work with absolute values
    long long absDividend = (dividend < 0) ? -dividend : dividend;
    long long absDivisor = (divisor < 0) ? -divisor : divisor;

    long long quotient = 0;

    // Exponential shift logic
    for (int i = 62; i >= 0; --i) {
        if ((absDividend >> i) >= absDivisor) {
            quotient += (1LL << i);
            absDividend -= (absDivisor << i);
        }
    }

    return negative ? -quotient : quotient;
}
```

---

## Problem 7: Recursive Digit Sum Reduction (Digital Root)

**Focus:** Recursion, pass-by-value, state tracking

### Description

Write a recursive function `int getDigitalRoot(long long n)` that repeatedly sums all digits of a number until a single-digit integer remains.

### Requirements

* Must be implemented recursively without loops (`for`, `while`).
* Auxiliary helper functions are permitted as long as they are also pure logic/recursion.

### Sample

* Call: `getDigitalRoot(9875)`
* Step 1: $9 + 8 + 7 + 5 = 29$
* Step 2: $2 + 9 = 11$
* Step 3: $1 + 1 = 2$
* Output: `2`

### Solution

```cpp
// Helper recursive function to calculate digit sum
long long sumDigitsRecursive(long long n) {
    if (n == 0) return 0;
    return (n % 10) + sumDigitsRecursive(n / 10);
}

int getDigitalRoot(long long n) {
    if (n < 0) n = -n;
    if (n < 10) return static_cast<int>(n);

    long long sum = sumDigitsRecursive(n);
    return getDigitalRoot(sum);
}
```

---

## Problem 8: Next Permutation of a 3-Digit Number

**Focus:** Value swaps, reference parameters, conditional logic

### Description

Write a function `bool nextNumberPermutation(int& n)` that takes a positive 3-digit integer `n` by reference and updates it to the next lexicographically larger number formed by the exact same 3 digits.

### Requirements

* If no larger permutation exists (e.g., `321`), leave `n` unchanged and return `false`.
* If a larger permutation exists, update `n` to the next highest arrangement and return `true`.

### Sample

* Call: `int val = 132; nextNumberPermutation(val);`
* Result: Returns `true`, `val = 213`
* Call: `int val = 321; nextNumberPermutation(val);`
* Result: Returns `false`, `val = 321`

### Solution

```cpp
bool nextNumberPermutation(int& n) {
    int d1 = (n / 100) % 10;
    int d2 = (n / 10) % 10;
    int d3 = n % 10;

    // Check permutations for 3 digits: d1, d2, d3
    // Case 1: d1 < d2 < d3 (e.g. 123) -> 132
    // Case 2: d1 < d3, d2 > d3 (e.g. 132) -> 213
    // Case 3: d1 > d2, d2 < d3 (e.g. 213) -> 231
    // Case 4: d1 < d2, d2 > d3, d1 > d3 doesn't occur directly; check pivot logic:

    // Standard Next Permutation Algorithm for 3 variables:
    // Step 1: Find largest index i such that arr[i] < arr[i+1]
    if (d2 < d3) { // pivot at index 1 (d2)
        // Swap d2 with smallest digit larger than d2 to its right (d3)
        int t = d2; d2 = d3; d3 = t;
        n = d1 * 100 + d2 * 10 + d3;
        return true;
    } else if (d1 < d2) { // pivot at index 0 (d1)
        // Find element to swap with d1
        if (d1 < d3) {
            int t = d1; d1 = d3; d3 = t;
        } else {
            int t = d1; d1 = d2; d2 = t;
        }
        // Reverse suffix (d2 and d3)
        int t = d2; d2 = d3; d3 = t;
        n = d1 * 100 + d2 * 10 + d3;
        return true;
    }

    // No higher permutation possible (e.g., 321)
    return false;
}
```

---

## Problem 9: Fast Modular Exponentiation

**Focus:** Binary exponentiation, arithmetic optimization

### Description

Write a function `long long powerMod(long long base, long long exp, long long mod)` that calculates $(base^{exp}) \pmod{mod}$ efficiently in $O(\log exp)$ time.

### Requirements

* You cannot call `pow()` or perform naive loop multiplication (as $exp$ could be up to $10^{12}$).
* Must use binary exponentiation (repeated squaring).

### Sample

* Call: `powerMod(2, 10, 1000)` $\rightarrow$ $2^{10} \pmod{1000} = 1024 \pmod{1000} = 24$
* Output: `24`

### Solution

```cpp
long long powerMod(long long base, long long exp, long long mod) {
    if (mod == 1) return 0;

    long long result = 1;
    base = base % mod;

    while (exp > 0) {
        // If exp is odd, multiply base with result
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }

        // exp must be even now
        exp /= 2; // exp = exp >> 1
        base = (base * base) % mod;
    }

    return result;
}
```

---

## Problem 10: Date Difference Calculator (In Days)

**Focus:** Multi-variable logic, leap year arithmetic, accumulator patterns

### Description

Write a function `int daysBetween(int d1, int m1, int y1, int d2, int m2, int y2)` that calculates the total number of days between two valid dates without using any external library.

### Requirements

* Must account for leap years (A year is a leap year if divisible by 4, except for end-of-century years not divisible by 400).
* Assume Date 1 is always chronologically on or before Date 2.
* Use basic arithmetic and conditional checks (`if`/`else` or `switch`).

### Sample

* Call: `daysBetween(28, 2, 2024, 1, 3, 2024)` (2024 is a leap year)
* Output: `2`

### Solution

```cpp
bool isLeapYear(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int getDaysInMonth(int m, int y) {
    switch (m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(y) ? 29 : 28;
        default:
            return 0;
    }
}

// Convert a full date to total days since year 0
long long totalDaysFromZero(int d, int m, int y) {
    long long days = d;

    // Add days for complete years
    for (int i = 1; i < y; ++i) {
        days += isLeapYear(i) ? 366 : 365;
    }

    // Add days for complete months in current year
    for (int i = 1; i < m; ++i) {
        days += getDaysInMonth(i, y);
    }

    return days;
}

int daysBetween(int d1, int m1, int y1, int d2, int m2, int y2) {
    long long total1 = totalDaysFromZero(d1, m1, y1);
    long long total2 = totalDaysFromZero(d2, m2, y2);

    return static_cast<int>(total2 - total1);
}
```