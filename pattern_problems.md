# C++ Star and Other Patterns (Freshman)

Practice set for pattern printing. "Star" patterns are shapes made from `*`. The other patterns use numbers or letters. Every pattern is written as its own function, so this file also practices functions.

Each problem has the question, what it is teaching, a sample run, and a full solution you can copy into a `.cpp` file.

How these loops usually work:

- The **outer loop** prints one row, then moves to the next row.
- An **inner loop** prints the characters on that row.
- A second inner loop is used when a row needs spaces before the stars.

Read `n` as the number of rows. Assume `n` is at least 1.

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

### 1. Solid square

**Question.** Write `void printSquare(int n)` that prints an `n` by `n` block of stars. Every row has exactly `n` stars.

**Concept.** Two nested loops: one for rows, one for columns. Both run `n` times.

**Sample** (`n = 4`)

```text
****
****
****
****
```

**Solution**

```cpp
#include <iostream>
using namespace std;

void printSquare(int n) {
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printSquare(n);
    return 0;
}
```

---

### 2. Left triangle

**Question.** Write `void printLeftTriangle(int n)`. Row 1 has 1 star, row 2 has 2 stars, and row `n` has `n` stars. The stars start at the left edge.

**Concept.** The inner loop runs only up to the current row number.

**Sample** (`n = 4`)

```text
*
**
***
****
```

**Solution**

```cpp
#include <iostream>
using namespace std;

void printLeftTriangle(int n) {
    for (int row = 1; row <= n; row++) {
        for (int star = 1; star <= row; star++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printLeftTriangle(n);
    return 0;
}
```

---

### 3. Inverted left triangle

**Question.** Write `void printInvertedTriangle(int n)`. Row 1 has `n` stars. Each next row has one fewer star. The last row has 1 star.

**Concept.** The outer loop can count downward. The inner loop stops at the current row value.

**Sample** (`n = 4`)

```text
****
***
**
*
```

**Solution**

```cpp
#include <iostream>
using namespace std;

void printInvertedTriangle(int n) {
    for (int row = n; row >= 1; row--) {
        for (int star = 1; star <= row; star++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printInvertedTriangle(n);
    return 0;
}
```

---

### 4. Increasing numbers

**Question.** Write `void printNumberTriangle(int n)`. Row `r` prints the numbers `1 2 3 ... r`, with a space after each number.

**Concept.** The value you print can be the column counter. It does not have to be a star.

**Sample** (`n = 4`)

```text
1
1 2
1 2 3
1 2 3 4
```

**Solution**

```cpp
#include <iostream>
using namespace std;

void printNumberTriangle(int n) {
    for (int row = 1; row <= n; row++) {
        for (int num = 1; num <= row; num++) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printNumberTriangle(n);
    return 0;
}
```

---

### 5. Repeated row number

**Question.** Write `void printRepeatedNumbers(int n)`. Row `r` prints the number `r`, exactly `r` times, with spaces between the numbers.

**Concept.** The printed value stays equal to the row. Only the count of numbers changes.

**Sample** (`n = 4`)

```text
1
2 2
3 3 3
4 4 4 4
```

**Solution**

```cpp
#include <iostream>
using namespace std;

void printRepeatedNumbers(int n) {
    for (int row = 1; row <= n; row++) {
        for (int count = 1; count <= row; count++) {
            cout << row << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printRepeatedNumbers(n);
    return 0;
}
```

---

## Medium

### 6. Centered pyramid

**Question.** Write `void printPyramid(int n)`. The shape is centered. Row `r` has `(n - r)` spaces, then `(2 * r - 1)` stars.

For `n = 4` the star counts are 1, 3, 5, 7.

**Concept.** One row can need two inner loops: spaces first, then stars.

**Sample** (`n = 4`)

```text
   *
  ***
 *****
*******
```

**Solution**

```cpp
#include <iostream>
using namespace std;

void printPyramid(int n) {
    for (int row = 1; row <= n; row++) {
        for (int space = 1; space <= n - row; space++) {
            cout << " ";
        }
        for (int star = 1; star <= 2 * row - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printPyramid(n);
    return 0;
}
```

---

### 7. Right-aligned triangle

**Question.** Write `void printRightTriangle(int n)`. Same star counts as the left triangle (1, 2, 3, ...), but the stars sit on the right. Row `r` prints `(n - r)` spaces, then `r` stars.

**Concept.** Spaces push the stars to the right. The space count shrinks as the star count grows.

**Sample** (`n = 4`)

```text
   *
  **
 ***
****
```

**Solution**

```cpp
#include <iostream>
using namespace std;

void printRightTriangle(int n) {
    for (int row = 1; row <= n; row++) {
        for (int space = 1; space <= n - row; space++) {
            cout << " ";
        }
        for (int star = 1; star <= row; star++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printRightTriangle(n);
    return 0;
}
```

---

### 8. Floyd's triangle

**Question.** Write `void printFloyd(int n)`. Print consecutive integers, and give row `r` exactly `r` numbers. The first row starts at 1.

Keep a variable `next` outside the row loop. Each time you print a number, add 1 to `next`.

**Concept.** A variable can live across rows. The pattern is not restarted at 1 on every row.

**Sample** (`n = 4`)

```text
1
2 3
4 5 6
7 8 9 10
```

**Solution**

```cpp
#include <iostream>
using namespace std;

void printFloyd(int n) {
    int next = 1;
    for (int row = 1; row <= n; row++) {
        for (int count = 1; count <= row; count++) {
            cout << next << " ";
            next++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printFloyd(n);
    return 0;
}
```

---

### 9. Hollow square

**Question.** Write `void printHollowSquare(int n)`. Only the border is stars. Inside the border, print spaces.

Rules for each cell in row `r`, column `c` (both counted from 1):

- Print `*` when the cell is on the first row, the last row, the first column, or the last column.
- Otherwise print a space.

For `n = 1`, print a single `*`.

**Concept.** A condition inside the inner loop chooses the character. You still visit every cell.

**Sample** (`n = 5`)

```text
*****
*   *
*   *
*   *
*****
```

**Solution**

```cpp
#include <iostream>
using namespace std;

void printHollowSquare(int n) {
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            if (row == 1 || row == n || col == 1 || col == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printHollowSquare(n);
    return 0;
}
```

---

### 10. Letter rows

**Question.** Write `void printLetters(int n)`. Row `r` prints the first `r` capital letters, starting from `A` on every row. Use `n` from 1 to 26 so the letters stay in `A` to `Z`.

Row 1 is `A`. Row 3 is `A B C`.

**Concept.** A `char` can be increased with `++`. `'A' + 1` is `'B'`.

**Sample** (`n = 4`)

```text
A
A B
A B C
A B C D
```

**Solution**

```cpp
#include <iostream>
using namespace std;

void printLetters(int n) {
    if (n > 26) {
        n = 26;
    }

    for (int row = 1; row <= n; row++) {
        char letter = 'A';
        for (int count = 1; count <= row; count++) {
            cout << letter << " ";
            letter++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printLetters(n);
    return 0;
}
```

---

## Hard (still freshman)

These are longer because each row has more than one rule. The loops are the same kind you already used.

### 11. Diamond

**Question.** Write `void printDiamond(int n)`. `n` is the number of rows in the top half, including the middle row.

Build it from two shapes you already know:

1. A pyramid of `n` rows (star counts 1, 3, 5, ...).
2. An upside-down pyramid of `n - 1` rows, so the wide middle row is not printed twice.

You may put both parts in one function, or call two helpers. Spaces on row `r` of the top half are `n - r`. On the bottom half, count a row index `r` from `n - 1` down to 1 and use the same space and star formulas as the pyramid.

**Concept.** A bigger pattern is two smaller patterns stacked. The middle row belongs to only one of them.

**Sample** (`n = 4`)

```text
   *
  ***
 *****
*******
 *****
  ***
   *
```

**Solution**

```cpp
#include <iostream>
using namespace std;

void printDiamond(int n) {
    for (int row = 1; row <= n; row++) {
        for (int space = 1; space <= n - row; space++) {
            cout << " ";
        }
        for (int star = 1; star <= 2 * row - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int row = n - 1; row >= 1; row--) {
        for (int space = 1; space <= n - row; space++) {
            cout << " ";
        }
        for (int star = 1; star <= 2 * row - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printDiamond(n);
    return 0;
}
```

---

### 12. Hollow pyramid

**Question.** Write `void printHollowPyramid(int n)`. Same outline as the centered pyramid, but only the border is filled.

For row `r` from 1 to `n`:

- Always print `n - r` spaces first.
- If this is row 1, print one `*`.
- If this is the last row, print `2 * n - 1` stars.
- Otherwise print one `*`, then `2 * r - 3` spaces, then one `*`.

Check `n = 4` on paper before you run it. Row 2 should be a star, one space, a star. Row 3 should be a star, three spaces, a star.

**Concept.** The first row, the last row, and the middle rows are three different cases. Write the cases down before the code.

**Sample** (`n = 4`)

```text
   *
  * *
 *   *
*******
```

**Solution**

```cpp
#include <iostream>
using namespace std;

void printHollowPyramid(int n) {
    for (int row = 1; row <= n; row++) {
        for (int space = 1; space <= n - row; space++) {
            cout << " ";
        }

        if (row == 1) {
            cout << "*";
        } else if (row == n) {
            for (int star = 1; star <= 2 * n - 1; star++) {
                cout << "*";
            }
        } else {
            cout << "*";
            for (int space = 1; space <= 2 * row - 3; space++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printHollowPyramid(n);
    return 0;
}
```

---

### 13. Pascal's triangle

**Question.** Write `void printPascal(int n)`. Each row is built from the row above. Every inside number is the sum of the two numbers above it. The edges are always 1.

Row 1 (if you start counting at 1): `1`  
Row 4: `1 3 3 1`  
Row 5: `1 4 6 4 1`

Do this without a 2D array. For each row index `row` starting at 0:

- Start `value` at 1 and print it.
- For `k` from 0 up to `row - 1`, update

```text
value = value * (row - k) / (k + 1)
```

Multiply before you divide. The division is exact for these numbers, so integer math is correct. Use `n` up to 12 so the values stay inside a normal `int`.

**Concept.** A running value can produce the next number in the same row. You do not need to store the previous row.

**Sample** (`n = 5`)

```text
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
```

**Solution**

```cpp
#include <iostream>
using namespace std;

void printPascal(int n) {
    if (n > 12) {
        n = 12;
    }

    for (int row = 0; row < n; row++) {
        int value = 1;
        for (int k = 0; k <= row; k++) {
            cout << value << " ";
            value = value * (row - k) / (k + 1);
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printPascal(n);
    return 0;
}
```

---

## What to try after you copy a solution

1. Run each pattern with `n = 1` and `n = 5`. A pattern that only looks right for 4 is usually missing a border case.
2. For the pyramid, change only the space loop and watch the shape slide left or right.
3. After the hollow square works, try a hollow right triangle: print a star on the first column, the slanted edge, and the last row.
4. Put two pattern functions in one file and ask the user which shape to print. That is the same "one function, one job" idea as the function practice file.
