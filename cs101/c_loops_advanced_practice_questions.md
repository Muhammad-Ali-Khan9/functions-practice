# C++ While and Do-While Loops: Advanced Freshman-Level Practice

---

## Part A: While Loops

### Question 1: Off-by-One and Compound Condition

#### Problem Statement
Analyze the following C++ code snippet. Determine the final value of `count` after the loop terminates:

```cpp
int x = 15;
int y = 3;
int count = 0;

while (x > 0 && y < 20) {
    if (x % y == 0) {
        x -= y;
    } else {
        y += 2;
    }
    count++;
}
```

* **What is Evaluated:** Logical tracing of compound boolean conditions (`&&`), modulo arithmetic, and loop termination criteria.

#### Solution Code & Answer
* **Answer:** `count = 5`
* **Trace / Verification:**
  * **Iteration 1:** $15 \% 3 == 0 \implies x = 12, \text{count} = 1$
  * **Iteration 2:** $12 \% 3 == 0 \implies x = 9, \text{count} = 2$
  * **Iteration 3:** $9 \% 3 == 0 \implies x = 6, \text{count} = 3$
  * **Iteration 4:** $6 \% 3 == 0 \implies x = 3, \text{count} = 4$
  * **Iteration 5:** $3 \% 3 == 0 \implies x = 0, \text{count} = 5$
  * Loop exits because $x > 0$ evaluates to `false`.

---

### Question 2: Short-Circuit Evaluation Trap

#### Problem Statement
Determine the final values of `sum` and `ptr` after executing this C++ code:

```cpp
int sum = 0;
int ptr = 1;
int limit = 10;

while (ptr < limit && (limit / ptr) > 2) {
    sum += limit / ptr;
    ptr += 2;
}
```

* **What is Evaluated:** Short-circuit evaluation behavior of logical operators (`&&`), integer division rules, and index bounds checking.

#### Solution Code & Answer
* **Answer:** `sum = 13`, `ptr = 5`
* **Trace / Verification:**
  * **Iteration 1 (`ptr = 1`):** $1 < 10$ (True) $\&\&$ $10 / 1 > 2$ (True) $\implies \text{sum} = 10, \text{ptr} = 3$
  * **Iteration 2 (`ptr = 3`):** $3 < 10$ (True) $\&\&$ $10 / 3 > 2$ ($3 > 2$, True) $\implies \text{sum} = 10 + 3 = 13, \text{ptr} = 5$
  * **Iteration 3 (`ptr = 5`):** $5 < 10$ (True) $\&\&$ $10 / 5 > 2$ ($2 > 2$, **False**) $\implies$ Short-circuit stops loop execution immediately.

---

### Question 3: Bitwise Operations in Loop Control

#### Problem Statement
Consider the following C++ loop operating on bitwise values. How many iterations (`steps`) does it take for the loop to terminate?

```cpp
int n = 45; // Binary: 101101
int steps = 0;

while (n > 0) {
    if ((n & 1) == 1) {
        n = n >> 1;
    } else {
        n = n >> 2;
    }
    steps++;
}
```

* **What is Evaluated:** Bitwise operators (`&`, `>>`), least significant bit (LSB) checks, and state reduction tracking.

#### Solution Code & Answer
* **Answer:** `4` steps
* **Trace / Verification:**
  * Initial $n = 45$ (`101101`), LSB is `1` $\implies n = 22$, $\text{steps} = 1$
  * $n = 22$ (`10110`), LSB is `0` $\implies n = 5$, $\text{steps} = 2$
  * $n = 5$ (`101`), LSB is `1` $\implies n = 2$, $\text{steps} = 3$
  * $n = 2$ (`10`), LSB is `0` $\implies n = 0$, $\text{steps} = 4$. Loop terminates.

---

### Question 4: State Machine / Nested Logic inside While

#### Problem Statement
Trace the execution of this C++ loop where variables change dynamically. What are the final values of `a`, `b`, and `moves` when the loop terminates?

```cpp
int a = 1;
int b = 16;
int moves = 0;

while (a < b) {
    if (a < 5) {
        a += 3;
    } else {
        b -= 2;
    }
    moves++;
}
```

* **What is Evaluated:** Branching logic inside iterative structures, multi-variable dependency tracking, and termination condition validation.

#### Solution Code & Answer
* **Answer:** `a = 7`, `b = 2`, `moves = 9`
* **Trace / Verification:**
  * `a` increments by 3 twice ($1 \to 4 \to 7$) over 2 moves while $a < 5$.
  * Once $a = 7$, the `else` branch triggers, decrementing `b` by 2 every iteration ($16 \to 14 \to 12 \to 10 \to 8 \to 6 \to 4 \to 2$) over 7 additional moves.
  * Total moves = $2 + 7 = 9$, terminating when $7 < 2$ evaluates to `false`.

---

### Question 5: Floating-Point Precision Trap in While Loop

#### Problem Statement
Analyze this C++ code snippet. Explain why it is dangerous in a freshman programming assignment and what execution behavior occurs:

```cpp
double val = 0.0;
int counter = 0;

while (val != 1.0) {
    val += 0.1;
    counter++;
}
```

* **What is Evaluated:** Understanding of IEEE 754 floating-point limitations, precision rounding errors, and exact inequality traps (`!=`).

#### Solution Code & Answer
* **Answer:** **Infinite Loop**
* **Explanation:** Decimals like `0.1` cannot be stored with exact finite binary precision under the IEEE 754 standard. Repeatedly adding `0.1` accumulates rounding errors, causing `val` to step over `1.0` (e.g., landing on a value like `1.0000000000000002`), meaning the condition `val != 1.0` never evaluates to `false`.

---

## Part B: Do-While Loops

### Question 1: Guaranteed Execution with Post-Condition Check

#### Problem Statement
What is the final printed output of `total` when this C++ `do-while` loop executes?

```cpp
int total = 50;
int step = 10;

do {
    total -= step;
    step -= 5;
} while (total > 100);

std::cout << total;
```

* **What is Evaluated:** Knowledge that a `do-while` loop always executes its block at least once regardless of the initial condition.

#### Solution Code & Answer
* **Answer:** `40`
* **Trace / Verification:**
  * Body executes once: `total` becomes $50 - 10 = 40$, `step` becomes $10 - 5 = 5$.
  * Condition check: `while (40 > 100)` evaluates to **false**, terminating the loop immediately after 1 iteration.

---

### Question 2: Input Validation / Menu State Machine

#### Problem Statement
Consider a C++ `do-while` loop used for state simulation. What are the final values of `attempts` and `input` when the loop exits?

```cpp
int attempts = 0;
int passcode = 4821;
int input = 1234;

do {
    attempts++;
    if (input % 2 == 0) {
        input = (input / 2) + 1000;
    } else {
        input = input * 2;
    }
} while (input != passcode && attempts < 5);
```

* **What is Evaluated:** Iterative state transformation, post-condition loop structure, and multi-condition loop breaking.

#### Solution Code & Answer
* **Answer:** `attempts = 3`, `input = 4821`
* **Trace / Verification:**
  * **Iteration 1 (`input = 1234` even):** $\text{input} = (1234 / 2) + 1000 = 1617$, $\text{attempts} = 1$
  * **Iteration 2 (`input = 1617` odd):** $\text{input} = 1617 \times 2 = 3234$, $\text{attempts} = 2$
  * **Iteration 3 (`input = 3234` even):** $\text{input} = (3234 / 2) + 1000 = 4821$, $\text{attempts} = 3$
  * Condition `input != passcode` ($4821 \neq 4821$) evaluates to **false**, exiting the loop.

---

### Question 3: Scope and Variable Shadowing in Do-While

#### Problem Statement
Examine the scoping quirk in this C++ snippet. What value is printed to the console at the end?

```cpp
int x = 10;
do {
    int x = 20;
    x += 5;
} while (x < 15);

std::cout << x;
```

* **What is Evaluated:** Block scoping rules, variable shadowing (`int x` declared inside block vs. outer block), and scope lifetime.

#### Solution Code & Answer
* **Answer:** `10`
* **Trace / Verification:**
  * The inner `int x = 20;` shadows the outer `x = 10`.
  * Modifications inside the loop only affect the local inner variable.
  * The `while (x < 15)` condition evaluates the *outer* variable (`10 < 15` is true), but the outer variable itself was never altered, so printing `x` outside outputs `10`.

---

### Question 4: Nested Loops with Break/Continue

#### Problem Statement
Determine the final value of `accumulator` after this nested C++ structure finishes executing:

```cpp
int accumulator = 0;
int i = 0;

do {
    int j = 3;
    do {
        if (j == 2) {
            j--;
            continue;
        }
        accumulator += (i + j);
        j--;
    } while (j > 0);
    i++;
} while (i < 2);
```

* **What is Evaluated:** Control transfer statements (`continue`), nested loop execution order, and index manipulation inside post-condition loops.

#### Solution Code & Answer
* **Answer:** `10`
* **Trace / Verification:**
  * **`i = 0`:** Adds when $j = 3$ ($0 + 3 = 3$) and $j = 1$ ($0 + 1 = 1$). Skips $j = 2$ via `continue`. Subtotal = $4$.
  * **`i = 1`:** Adds when $j = 3$ ($1 + 3 = 4$) and $j = 1$ ($1 + 1 = 2$). Skips $j = 2$ via `continue`. Subtotal = $6$.
  * Total accumulator = $4 + 6 = 10$.

---

### Question 5: Native Do-While Post-Condition State Mutation

#### Problem Statement
Consider this native C++ `do-while` loop. What are the final values of `result` and `val` upon termination?

```cpp
int val = 7;
int result = 0;

do {
    result += val;
    val -= 3;
} while (val > 0);
```

* **What is Evaluated:** Precise tracking of post-increment/decrement execution order and condition evaluation timing.

#### Solution Code & Answer
* **Answer:** `result = 12`, `val = -2`
* **Trace / Verification:**
  * **Iteration 1:** $\text{result} = 0 + 7 = 7$, $\text{val} = 7 - 3 = 4$. Check $4 > 0$ (True).
  * **Iteration 2:** $\text{result} = 7 + 4 = 11$, $\text{val} = 4 - 3 = 1$. Check $1 > 0$ (True).
  * **Iteration 3:** $\text{result} = 11 + 1 = 12$, $\text{val} = 1 - 3 = -2$. Check $-2 > 0$ (**False** $\implies$ loop terminates).