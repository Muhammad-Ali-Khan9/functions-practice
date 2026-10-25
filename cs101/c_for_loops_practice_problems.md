# C++ For Loops: Advanced Freshman-Level Practice Questions

---

## Question 1: Multiple Loop Control Variables & Comma Operator

### Problem Statement
Analyze the following C++ code snippet. Determine the final value of `sum` after the loop terminates:

```cpp
int sum = 0;
for (int i = 1, j = 10; i < j; i += 2, j -= 3) {
    sum += (i * j);
}
```

* **What is Evaluated:** Multiple control variables initialized and updated simultaneously in a `for` loop header, comma operator mechanics, and loop boundary conditions.

### Solution Code & Answer
* **Answer:** `sum = 31`
* **Trace / Verification:**
  * **Iteration 1 (`i = 1, j = 10`):** $1 < 10$ (True) $\implies \text{sum} += 1 \times 10 = 10$. Updates: `i` becomes `3`, `j` becomes `7`.
  * **Iteration 2 (`i = 3, j = 7`):** $3 < 7$ (True) $\implies \text{sum} += 3 \times 7 = 21$ ($\text{sum} = 31$). Updates: `i` becomes `5`, `j` becomes `4`.
  * **Iteration 3 (`i = 5, j = 4`):** $5 < 4$ (**False**). Loop terminates.
  * Final `sum = 31`.

---

## Question 2: Triangular Nested For Loops & Dependency

### Problem Statement
Determine the final value of `count` after executing this nested `for` loop structure:

```cpp
int count = 0;
for (int i = 0; i < 4; i++) {
    for (int j = i; j < 4; j++) {
        if ((i + j) % 2 == 0) {
            count++;
        }
    }
}
```

* **What is Evaluated:** Dependent/triangular inner loops where the inner loop's start index relies on the outer loop variable (`j = i`), and conditional branching inside nested structures.

### Solution Code & Answer
* **Answer:** `count = 6`
* **Trace / Verification:**
  * **`i = 0`:** Inner runs for `j` from 0 to 3. Matches occur at `j = 0` ($0+0=0$, even) and `j = 2` ($0+2=2$, even) $\implies \text{count} = 2$.
  * **`i = 1`:** Inner runs for `j` from 1 to 3. Matches occur at `j = 1` ($1+1=2$, even) and `j = 3` ($1+3=4$, even) $\implies \text{count} = 2 + 2 = 4$.
  * **`i = 2`:** Inner runs for `j` from 2 to 3. Match occurs at `j = 2` ($2+2=4$, even) $\implies \text{count} = 4 + 1 = 5$.
  * **`i = 3`:** Inner runs for `j = 3`. Match occurs at `j = 3` ($3+3=6$, even) $\implies \text{count} = 5 + 1 = 6$.

---

## Question 3: Geometric / Exponential Increment in Header

### Problem Statement
What is the final value of `total` after the execution of this snippet?

```cpp
int total = 1;
for (int i = 1; i <= 32; i *= 2) {
    for (int j = 0; j < i; j++) {
        total += 1;
    }
}
```

* **What is Evaluated:** Non-linear/geometric loop step increments (`i *= 2`), nested loop workload scaling, and accumulator tracking.

### Solution Code & Answer
* **Answer:** `total = 64`
* **Trace / Verification:**
  * **`i = 1`:** Inner loop runs 1 time $\implies \text{total} = 1 + 1 = 2$.
  * **`i = 2`:** Inner loop runs 2 times $\implies \text{total} = 2 + 2 = 4$.
  * **`i = 4`:** Inner loop runs 4 times $\implies \text{total} = 4 + 4 = 8$.
  * **`i = 8`:** Inner loop runs 8 times $\implies \text{total} = 8 + 8 = 16$.
  * **`i = 16`:** Inner loop runs 16 times $\implies \text{total} = 16 + 16 = 32$.
  * **`i = 32`:** Inner loop runs 32 times $\implies \text{total} = 32 + 32 = 64$.
  * Next update makes $i = 64$, which evaluates $64 \le 32$ to **false**. Loop ends with `total = 64`.

---

## Question 4: Scope Lifetime & Variable Shadowing in For-Loop Headers

### Problem Statement
Examine the scoping rules in this C++ snippet. What is the final value of `sum` after execution?

```cpp
int i = 100;
int sum = 0;
for (int i = 0; i < 5; i++) {
    sum += i;
}
sum += i;
```

* **What is Evaluated:** Block scoping rules introduced by declaring control variables inside the `for` loop header (`int i = 0`), variable shadowing, and variable accessibility outside the loop scope.

### Solution Code & Answer
* **Answer:** `sum = 110`
* **Trace / Verification:**
  * Outer variable `i` is initialized to `100`.
  * The `for` loop header declares a new local variable `i` scoped strictly inside the loop block, taking values `0, 1, 2, 3, 4` and adding them to `sum` ($0 + 1 + 2 + 3 + 4 = 10$).
  * Once the loop terminates, the local loop variable `i` goes out of scope and is destroyed.
  * The outer variable `i` (`100`) comes back into scope.
  * The final statement `sum += i;` adds `100` to `10`, yielding `110`.

---

## Question 5: Bitwise Operations & Loop Bound Manipulation

### Problem Statement
Consider this C++ loop utilizing bitwise operations and dynamic updates. What is the final value of `score` when the loop terminates?

```cpp
int mask = 1;
int score = 0;
for (int i = 0; mask < 16; i++) {
    score += (mask | i);
    mask = mask << 1;
}
```

* **What is Evaluated:** Bitwise OR operations (`|`), bitwise left shift updates (`<<`), and tracking parallel increments of loop counters (`i`) and control flags (`mask`).

### Solution Code & Answer
* **Answer:** `score = 21`
* **Trace / Verification:**
  * **Iteration 1 (`i = 0, mask = 1`):** $1 < 16$ (True) $\implies \text{score} += (1 \mid 0) = 1$. `mask` becomes `2`.
  * **Iteration 2 (`i = 1, mask = 2`):** $2 < 16$ (True) $\implies \text{score} += (2 \mid 1) = 3$ ($\text{score} = 1 + 3 = 4$). `mask` becomes `4`.
  * **Iteration 3 (`i = 2, mask = 4`):** $4 < 16$ (True) $\implies \text{score} += (4 \mid 2) = 6$ ($\text{score} = 4 + 6 = 10$). `mask` becomes `8`.
  * **Iteration 4 (`i = 3, mask = 8`):** $8 < 16$ (True) $\implies \text{score} += (8 \mid 3) = 11$ ($\text{score} = 10 + 11 = 21$). `mask` becomes `16`.
  * **Iteration 5 (`i = 4, mask = 16`):** $16 < 16$ (**False**). Loop terminates. Final `score = 21`.