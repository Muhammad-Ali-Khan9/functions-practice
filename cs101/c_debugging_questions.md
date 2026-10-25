# 5 Hard C++ Debugging Questions (Freshman Level)

These questions target classic, subtle conceptual traps like unsigned underflow, integer division, uninitialized variables, dangling references, and off-by-one errors.

---

### Question 1: The Infinite Countdown
**The Scenario:** A student wants to print an array of numbers in reverse order using a `size_t` index, but the program gets stuck in an infinite loop or crashes with a segmentation fault.

```cpp
#include <iostream>
using namespace std;

void printReverse(int arr[], size_t size) {
    for (size_t i = size - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    printReverse(numbers, 5);
    return 0;
}
```

* **The Bug:** `size_t` is an **unsigned** integer type. When `i` reaches `0` and the loop executes `--i`, `i` does not become `-1`. Instead, it underflows to the maximum possible value of `size_t` (`SIZE_MAX`), making `i >= 0` permanently true and causing an infinite loop or out-of-bounds access.
* **The Fix:** Use a signed integer type for the loop counter, or change the loop condition:
  ```cpp
  for (int i = static_cast<int>(size) - 1; i >= 0; --i) {
      cout << arr[i] << " ";
  }
  ```

---

### Question 2: The Mysterious Zero Average
**The Scenario:** A student is writing a function to calculate a student's final score percentage. Even when `obtained = 45` and `total = 50`, the function outputs `0` instead of `90`.

```cpp
#include <iostream>
using namespace std;

double calculatePercentage(int obtained, int total) {
    double percentage = (obtained / total) * 100;
    return percentage;
}

int main() {
    cout << "Percentage: " << calculatePercentage(45, 50) << "%" << endl;
    return 0;
}
```

* **The Bug:** **Integer division**. Because both `obtained` and `total` are `int` types, the expression `obtained / total` performs integer division ($45 / 50 = 0$). Only after that truncation occurs is it multiplied by `100`.
* **The Fix:** Explicitly cast at least one operand to a `double` before dividing:
  ```cpp
  double percentage = (static_cast<double>(obtained) / total) * 100;
  ```

---

### Question 3: The Flawed Multiplier
**The Scenario:** A function is supposed to calculate the factorial of a number $n$, but the output is wildly unpredictable or garbage values on every run.

```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    int result; // Uninitialized variable
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    cout << "Factorial of 5 is: " << factorial(5) << endl;
    return 0;
}
```

* **The Bug:** **Uninitialized local variable**. The variable `result` is declared on the stack without an initial value. In C++, local variables contain whatever arbitrary "garbage" data was previously stored at that memory location.
* **The Fix:** Explicitly initialize the accumulator variable to `1`:
  ```cpp
  int result = 1;
  ```

---

### Question 4: The Vanishing Data
**The Scenario:** A student writes a helper function to retrieve a default network port, but when printed in `main()`, the output contains random or corrupted numbers.

```cpp
#include <iostream>
using namespace std;

int& getDefaultPort() {
    int port = 8080;
    return port; // Returning reference to local variable
}

int main() {
    int& p = getDefaultPort();
    cout << "Port: " << p << endl;
    cout << "System ready." << endl; 
    cout << "Port after another call: " << p << endl;
    return 0;
}
```

* **The Bug:** **Dangling reference**. The local variable `port` exists on the function's stack frame. When `getDefaultPort()` finishes executing, its stack frame is popped and invalidated. Returning a reference to a deallocated local variable results in **undefined behavior**.
* **The Fix:** Return the value directly by value rather than by reference:
  ```cpp
  int getDefaultPort() {
      int port = 8080;
      return port;
  }
  ```

---

### Question 5: The Phantom Crash
**The Scenario:** A program meant to take 5 test scores from the user crashes unexpectedly or produces invalid memory errors upon entering the 5th score.

```cpp
#include <iostream>
using namespace std;

int main() {
    int scores[5];
    cout << "Enter 5 scores:" << endl;
    
    for (int i = 1; i <= 5; ++i) {
        cin >> scores[i];
    }

    cout << "Scores entered successfully!" << endl;
    return 0;
}
```

* **The Bug:** **Off-by-one / Buffer Overflow**. C++ arrays are 0-indexed. An array of size 5 has valid indices `0, 1, 2, 3, 4`. By starting the loop at `i = 1` and continuing while `i <= 5`, the program attempts to write to `scores[5]`, which is outside the bounds of the array.
* **The Fix:** Adjust the loop bounds to start at `0` and run while `i < 5`:
  ```cpp
  for (int i = 0; i < 5; ++i) {
      cin >> scores[i];
  }
  ```