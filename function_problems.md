# C++ Function Problems (Freshman)

Practice set for functions. Each problem has the question, what it is teaching, a sample run, and a full solution you can copy into a `.cpp` file.

Concepts covered, from simpler to slightly harder:

- return values and `bool` functions
- pass by value vs pass by reference
- default arguments
- function overloading
- `const` so a function cannot change the original
- arrays passed into functions
- one function calling another
- recursion (a function that calls itself)

Compile any solution with:

```text
g++ solution.cpp -o solution
./solution
```

On Windows PowerShell:

```text
g++ solution.cpp -o solution.exe
.\solution.exe
```

---

## Easy

### 1. Absolute value

**Question.** Write a function `int absolute(int n)` that returns the absolute value of `n`. Do not use `abs` from the library. If the number is negative, return it as positive. If it is already positive or zero, return it unchanged.

In `main`, read one integer and print the result.

**Concept.** A function that takes a copy of a value and returns a new value.

**Sample**

```text
Enter a number: -14
Absolute value: 14
```

**Solution**

```cpp
#include <iostream>
using namespace std;

int absolute(int n) {
    if (n < 0) {
        return -n;
    }
    return n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Absolute value: " << absolute(n) << endl;
    return 0;
}
```

---

### 2. Even or odd

**Question.** Write a function `bool isEven(int n)` that returns `true` when `n` is even and `false` when `n` is odd. A number is even when the remainder after dividing by 2 is 0.

In `main`, read one integer and print `Even` or `Odd`.

**Concept.** A function can return `true` or `false`. `main` decides what text to print.

**Sample**

```text
Enter a number: 7
Odd
```

**Solution**

```cpp
#include <iostream>
using namespace std;

bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isEven(n)) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
    return 0;
}
```

---

### 3. Swap two numbers

**Question.** Write a function `void swapValues(int &a, int &b)` that swaps the two numbers. The function returns nothing. After the call, the variables in `main` must have traded values.

Read two integers, call the function, and print both numbers after the swap.

**Concept.** Pass by reference (`int &`) lets the function change the original variables. Pass by value would only change copies, and `main` would still see the old numbers.

**Sample**

```text
Enter two numbers: 4 9
After swap: 9 4
```

**Solution**

```cpp
#include <iostream>
using namespace std;

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    swapValues(x, y);

    cout << "After swap: " << x << " " << y << endl;
    return 0;
}
```

---

### 4. Overloaded area

**Question.** Write two functions with the same name:

- `double area(double radius)` returns the area of a circle: `3.14159 * radius * radius`
- `double area(double length, double width)` returns the area of a rectangle: `length * width`

C++ picks the correct one from the number of arguments. In `main`, read a radius and print the circle area, then read a length and width and print the rectangle area.

**Concept.** Function overloading: same name, different parameter lists.

**Sample**

```text
Enter radius: 2
Circle area: 12.5664
Enter length and width: 3 5
Rectangle area: 15
```

**Solution**

```cpp
#include <iostream>
using namespace std;

double area(double radius) {
    return 3.14159 * radius * radius;
}

double area(double length, double width) {
    return length * width;
}

int main() {
    double radius, length, width;

    cout << "Enter radius: ";
    cin >> radius;
    cout << "Circle area: " << area(radius) << endl;

    cout << "Enter length and width: ";
    cin >> length >> width;
    cout << "Rectangle area: " << area(length, width) << endl;

    return 0;
}
```

---

### 5. Power with a default exponent

**Question.** Write `int power(int base, int exp = 2)` that returns `base` raised to `exp`. Use a loop. Multiplication starts at 1. If the caller does not pass an exponent, the exponent is 2 (so the function squares the number).

In `main`:

- read a base and print `power(base)` (uses the default)
- read a base and an exponent and print `power(base, exp)`

Assume the exponent is 0 or positive. `power(anything, 0)` should return 1.

**Concept.** Default arguments. The default belongs on the function definition here because the function is written above `main` in the same file.

**Sample**

```text
Enter a base to square: 5
Squared: 25
Enter base and exponent: 2 4
Power: 16
```

**Solution**

```cpp
#include <iostream>
using namespace std;

int power(int base, int exp = 2) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exp;

    cout << "Enter a base to square: ";
    cin >> base;
    cout << "Squared: " << power(base) << endl;

    cout << "Enter base and exponent: ";
    cin >> base >> exp;
    cout << "Power: " << power(base, exp) << endl;

    return 0;
}
```

---

## Medium

### 6. Smallest and largest of three numbers

**Question.** Write one function:

```cpp
void minMax(int a, int b, int c, int &smallest, int &largest)
```

It looks at `a`, `b`, and `c`, then stores the smallest in `smallest` and the largest in `largest`. Those last two parameters are references, so `main` can see both answers. A function can return only one value with `return`, so references are how you send two results back.

Read three integers and print the smallest and the largest.

**Concept.** Mix of pass by value (the three numbers are only read) and pass by reference (two results are written back).

**Sample**

```text
Enter three numbers: 8 3 11
Smallest: 3
Largest: 11
```

**Solution**

```cpp
#include <iostream>
using namespace std;

void minMax(int a, int b, int c, int &smallest, int &largest) {
    smallest = a;
    largest = a;

    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;

    if (b > largest) largest = b;
    if (c > largest) largest = c;
}

int main() {
    int a, b, c, smallest, largest;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    minMax(a, b, c, smallest, largest);

    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;
    return 0;
}
```

---

### 7. Sum and average of an array

**Question.** Write:

```cpp
int sumArray(const int arr[], int size)
```

`const` means the function may read the array but must not change it. The array name and the size are both required, because a function does not know how long an array is by itself.

Also write:

```cpp
double averageArray(const int arr[], int size)
```

This function should call `sumArray` and return the average as a `double`. If `size` is 0, return 0.

In `main`, read `n` (1 to 100), then read `n` integers into an array, then print the sum and the average.

**Concept.** Arrays as parameters, `const`, and one function calling another.

**Sample**

```text
How many numbers: 4
Enter numbers: 10 20 30 40
Sum: 100
Average: 25
```

**Solution**

```cpp
#include <iostream>
using namespace std;

int sumArray(const int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

double averageArray(const int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    return static_cast<double>(sumArray(arr, size)) / size;
}

int main() {
    const int MAX = 100;
    int arr[MAX];
    int n;

    cout << "How many numbers: ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Please enter a size from 1 to " << MAX << endl;
        return 0;
    }

    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Sum: " << sumArray(arr, n) << endl;
    cout << "Average: " << averageArray(arr, n) << endl;
    return 0;
}
```

---

### 8. Recursive factorial

**Question.** Write `long long factorial(int n)` using recursion.

- If `n` is 0 or 1, return 1. That is the base case, which stops the recursion.
- Otherwise return `n * factorial(n - 1)`.

`factorial(4)` works like this: `4 * factorial(3)` → `4 * 3 * factorial(2)` → `4 * 3 * 2 * factorial(1)` → `4 * 3 * 2 * 1`.

Read `n`. If `n` is negative, print an error. Otherwise print the factorial. Keep `n` small (0 to 20). `20!` already fits in `long long`; bigger values overflow.

**Concept.** Recursion. Every recursive function needs a base case, or it calls itself forever.

**Sample**

```text
Enter n: 5
Factorial: 120
```

**Solution**

```cpp
#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Enter a number from 0 to 20" << endl;
        return 0;
    }

    cout << "Factorial: " << factorial(n) << endl;
    return 0;
}
```

---

### 9. Count vowels in a sentence

**Question.** Write:

```cpp
int countVowels(const string &text)
```

Count `a, e, i, o, u` in both uppercase and lowercase. Pass the string by `const` reference: `const` blocks changes, and `&` avoids copying the whole string.

Also write a helper:

```cpp
bool isVowel(char ch)
```

`countVowels` should call `isVowel` for each character. Spaces and punctuation are not vowels.

Read one full line (it may contain spaces) and print the vowel count.

**Concept.** `string`, `const` reference, and a small helper function.

**Sample**

```text
Enter a sentence: Hello World
Vowels: 3
```

**Solution**

```cpp
#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(static_cast<unsigned char>(ch));
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int countVowels(const string &text) {
    int count = 0;
    for (int i = 0; i < static_cast<int>(text.size()); i++) {
        if (isVowel(text[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    string text;
    cout << "Enter a sentence: ";
    getline(cin, text);

    cout << "Vowels: " << countVowels(text) << endl;
    return 0;
}
```

`tolower` needs `#include <cctype>`. Add that include at the top if your compiler complains. `static_cast<unsigned char>` keeps `tolower` safe for every possible `char` value.

---

### 10. Primes between two numbers

**Question.** Write `bool isPrime(int n)`.

- Numbers less than 2 are not prime.
- 2 is prime.
- If `n` is divisible by any integer from 2 up to `n / 2`, it is not prime. You can stop at `n / 2`; checking all the way to `n - 1` also works, it is just slower.

Then write `void printPrimes(int start, int end)`. It prints every prime from `start` to `end` inclusive, separated by spaces. It must call `isPrime`. If `start` is greater than `end`, swap them first (you can call a small swap, or swap inside this function).

Read two integers and print the primes.

**Concept.** A function used as a building block by another function. This is how larger programs stay readable.

**Sample**

```text
Enter start and end: 10 20
11 13 17 19
```

**Solution**

```cpp
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void printPrimes(int start, int end) {
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    for (int n = start; n <= end; n++) {
        if (isPrime(n)) {
            cout << n << " ";
        }
    }
    cout << endl;
}

int main() {
    int start, end;
    cout << "Enter start and end: ";
    cin >> start >> end;
    printPrimes(start, end);
    return 0;
}
```

---

## Hard (still freshman)

These use the same ideas as above. They are longer because each one combines two or three ideas.

### 11. GCD and LCM

**Question.** The greatest common divisor (GCD) of two positive integers is the largest integer that divides both. Euclid's method:

- `gcd(a, b)` is `a` when `b` is 0
- otherwise it is `gcd(b, a % b)`

Example: `gcd(48, 18)` → `gcd(18, 12)` → `gcd(12, 6)` → `gcd(6, 0)` → `6`.

Write a recursive function `int gcd(int a, int b)`. Work with positive values: if the user types a negative number, make it positive before the call.

Then write `int lcm(int a, int b)`. The least common multiple is:

```text
lcm(a, b) = a / gcd(a, b) * b
```

Divide before multiplying so the product is less likely to overflow an `int`. `lcm` must call `gcd`. If either number is 0, return 0.

Read two integers and print both GCD and LCM.

**Concept.** Recursion with two parameters, plus a second function that reuses the first.

**Sample**

```text
Enter two positive numbers: 48 18
GCD: 6
LCM: 144
```

**Solution**

```cpp
#include <iostream>
using namespace std;

int absolute(int n) {
    if (n < 0) {
        return -n;
    }
    return n;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    return a / gcd(a, b) * b;
}

int main() {
    int a, b;
    cout << "Enter two positive numbers: ";
    cin >> a >> b;

    a = absolute(a);
    b = absolute(b);

    cout << "GCD: " << gcd(a, b) << endl;
    cout << "LCM: " << lcm(a, b) << endl;
    return 0;
}
```

---

### 12. Binary search

**Question.** Write:

```cpp
int binarySearch(const int arr[], int size, int target)
```

The array is sorted from smallest to largest. Return the index of `target`, or `-1` if it is not in the array.

Binary search keeps a `left` index and a `right` index:

1. While `left <= right`, compute `mid = left + (right - left) / 2`.
2. If `arr[mid]` equals `target`, return `mid`.
3. If `arr[mid]` is smaller than `target`, the target can only be to the right, so set `left = mid + 1`.
4. Otherwise set `right = mid - 1`.
5. If the loop ends, return `-1`.

Why `left + (right - left) / 2` instead of `(left + right) / 2`? For huge indexes, `left + right` can overflow. You will not hit that in class, but this form is the one to learn.

In `main`, read `n` (1 to 100) and `n` integers. You may assume the user types them already sorted. Then read a target and print the index or `Not found`.

**Concept.** A classic function over an array. The function does not print; it returns an index so `main` can decide the message.

**Sample**

```text
How many numbers: 5
Enter sorted numbers: 2 5 9 14 21
Enter target: 14
Found at index: 3
```

**Solution**

```cpp
#include <iostream>
using namespace std;

int binarySearch(const int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    const int MAX = 100;
    int arr[MAX];
    int n, target;

    cout << "How many numbers: ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Please enter a size from 1 to " << MAX << endl;
        return 0;
    }

    cout << "Enter sorted numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target: ";
    cin >> target;

    int index = binarySearch(arr, n, target);
    if (index == -1) {
        cout << "Not found" << endl;
    } else {
        cout << "Found at index: " << index << endl;
    }
    return 0;
}
```

---

### 13. Reverse an array with recursion

**Question.** Write two functions:

```cpp
void reverseHelper(int arr[], int left, int right)
void reverseArray(int arr[], int size)
```

`reverseArray` should do nothing when `size` is less than 2. Otherwise it calls `reverseHelper(arr, 0, size - 1)`.

`reverseHelper` swaps `arr[left]` and `arr[right]`, then calls itself with `left + 1` and `right - 1`. Stop when `left >= right`. That is the base case: the two sides have met in the middle.

Example for `{1, 2, 3, 4}`:

- swap index 0 and 3 → `{4, 2, 3, 1}`
- swap index 1 and 2 → `{4, 3, 2, 1}`
- now `left > right`, stop

Also write `void printArray(const int arr[], int size)`.

Read `n` and `n` integers, reverse the array, and print it. The array parameter is not `const` in the reverse functions because they must change the elements. `printArray` should be `const` because it only reads.

**Concept.** Recursion on an array, a public function plus a helper, and choosing `const` only when the function does not modify data.

**Sample**

```text
How many numbers: 5
Enter numbers: 1 2 3 4 5
Reversed: 5 4 3 2 1
```

**Solution**

```cpp
#include <iostream>
using namespace std;

void reverseHelper(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }

    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    reverseHelper(arr, left + 1, right - 1);
}

void reverseArray(int arr[], int size) {
    if (size < 2) {
        return;
    }
    reverseHelper(arr, 0, size - 1);
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int MAX = 100;
    int arr[MAX];
    int n;

    cout << "How many numbers: ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Please enter a size from 1 to " << MAX << endl;
        return 0;
    }

    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, n);

    cout << "Reversed: ";
    printArray(arr, n);
    return 0;
}
```

---

## What to try after you copy a solution

1. Type the function yourself before looking at the solution. The `main` in each solution is only there so you can run it.
2. Change the sample input. Try `0`, negatives, and an empty-looking case such as size `1`.
3. For problem 3, remove the `&` and run it again. The numbers in `main` will not swap. That is the difference between a copy and a reference.
4. For problem 8, delete the base case in your head and see why the function would never stop.
