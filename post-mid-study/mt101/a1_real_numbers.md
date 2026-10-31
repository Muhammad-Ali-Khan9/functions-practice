# Appendix A.1 — Real Numbers and the Real Line

Calculus asks how a quantity changes when the input moves a tiny amount. That question only makes sense if every point on the line is a number, including the gaps between fractions. This section builds that line: which numbers exist, how they are ordered, how far apart two of them are, and how inequalities are solved without dropping a solution or adding a fake one.

Thomas treats this as self-study. Later limits are written as “$x$ is within $\delta$ of $a$,” which is exactly the absolute-value inequality from this appendix.

## The sets that sit inside the reals

| Set | Symbol | What belongs |
| --- | --- | --- |
| Natural numbers | $\mathbb{N}$ | $1, 2, 3, \ldots$ (some books include $0$) |
| Integers | $\mathbb{Z}$ | $\ldots, -2, -1, 0, 1, 2, \ldots$ |
| Rational numbers | $\mathbb{Q}$ | fractions $p/q$ with $p, q$ integers and $q \neq 0$ |
| Irrational numbers |  | reals that are not rational, such as $\sqrt{2}$ and $\pi$ |
| Real numbers | $\mathbb{R}$ | every point on the continuous line |

Every integer is rational, because $5 = 5/1$. Every rational is real. The irrationals are the reals that cannot be written as a ratio of integers.

A decimal is rational exactly when it terminates or eventually repeats. Terminating decimals are repeating zeros: $0.25 = 0.25000\ldots = 1/4$. A decimal that never settles into a fixed repeating block is irrational. The number $0.101001000100001\ldots$, with one more zero between the ones each time, is built so that it does not repeat, so it is irrational.

$\sqrt{2}$ is irrational. The short proof is by contradiction. Suppose $\sqrt{2} = p/q$ in lowest terms, with $p$ and $q$ integers, $q \neq 0$, and no common factor. Then $p^2 = 2q^2$, so $p^2$ is even, so $p$ is even. Write $p = 2k$. Then $4k^2 = 2q^2$, so $q^2 = 2k^2$, and $q$ is even too. Both $p$ and $q$ are even, which contradicts lowest terms. So no such fraction exists.

The same style of argument shows $\sqrt{3}$, $\sqrt{5}$, and $\sqrt{8} = 2\sqrt{2}$ are irrational. $\sqrt{9} = 3$ is an integer, so it is rational. A square root of an integer is either an integer or irrational. It is never a non-integer fraction.

## Order and intervals

The real line is ordered. For any two reals $a$ and $b$, exactly one of these is true: $a < b$, $a = b$, or $a > b$.

An interval is a connected piece of the line. Endpoints can be included or left out.

| Notation | Inequality | Endpoints |
| --- | --- | --- |
| $(a, b)$ | $a < x < b$ | both open |
| $[a, b]$ | $a \leq x \leq b$ | both closed |
| $[a, b)$ | $a \leq x < b$ | closed on the left |
| $(a, b]$ | $a < x \leq b$ | closed on the right |
| $(a, \infty)$ | $x > a$ | no right endpoint |
| $(-\infty, a]$ | $x \leq a$ | no left endpoint |

The symbols $\infty$ and $-\infty$ are not real numbers. They mark that the interval does not stop. A bracket is never written next to $\infty$.

A set is bounded above if some number $M$ satisfies $x \leq M$ for every $x$ in the set. It is bounded below if some $m$ satisfies $x \geq m$ for every $x$. A set that fails one of these is unbounded. $(0, 1]$ is bounded. $[0, \infty)$ is not bounded above.

The rationals are dense in the reals: between any two reals there is a rational, and also an irrational. That is why a limit can be approached through fractions even when the limit itself is irrational.

## Absolute value and distance

The absolute value of $x$ is its distance from $0$:

$$
\lvert x \rvert =
\begin{cases}
x & \text{if } x \geq 0 \\
-x & \text{if } x < 0
\end{cases}
$$

So $\lvert -3 \rvert = 3$, and $\lvert x \rvert$ is never negative. The equation $\lvert x \rvert = -3$ has no solution.

These properties are used constantly:

- $\lvert x \rvert \geq 0$, and $\lvert x \rvert = 0$ only when $x = 0$
- $\lvert -x \rvert = \lvert x \rvert$
- $\lvert xy \rvert = \lvert x \rvert \, \lvert y \rvert$
- $\lvert x/y \rvert = \lvert x \rvert / \lvert y \rvert$ when $y \neq 0$
- $\sqrt{x^2} = \lvert x \rvert$, which equals $x$ only when $x \geq 0$
- $- \lvert x \rvert \leq x \leq \lvert x \rvert$

The distance between $a$ and $b$ is $\lvert a - b \rvert$. It does not matter which number is written first: $\lvert a - b \rvert = \lvert b - a \rvert$.

The triangle inequality says a detour is at least as long as the direct path:

$$
\lvert a + b \rvert \leq \lvert a \rvert + \lvert b \rvert
$$

and, for three points,

$$
\lvert a - c \rvert \leq \lvert a - b \rvert + \lvert b - c \rvert.
$$

Equality holds when $a$ and $b$ are on the same side of $0$ (including zero), in the first form. In the second form, equality holds when $b$ lies between $a$ and $c$ on the line.

A later $\varepsilon$ statement, “$f(x)$ is within $\varepsilon$ of $L$,” is the inequality $\lvert f(x) - L \rvert < \varepsilon$. “$x$ is within $\delta$ of $a$, but not equal to $a$,” is $0 < \lvert x - a \rvert < \delta$.

## Solving inequalities

Adding the same number to both sides keeps the inequality direction. Multiplying or dividing by a positive number keeps the direction. Multiplying or dividing by a negative number reverses it. Multiplying by a quantity whose sign you do not know is not a legal step. Factor instead, or split into cases.

The two absolute-value patterns cover almost every later $\varepsilon$ estimate:

- $\lvert A \rvert < c$, with $c > 0$, means $-c < A < c$
- $\lvert A \rvert \leq c$, with $c > 0$, means $-c \leq A \leq c$
- $\lvert A \rvert > c$, with $c > 0$, means $A < -c$ or $A > c$
- $\lvert A \rvert \geq c$, with $c > 0$, means $A \leq -c$ or $A \geq c$
- If $c < 0$, then $\lvert A \rvert < c$ has no solution, and $\lvert A \rvert > c$ is true for every real $A$
- If $c = 0$, then $\lvert A \rvert < 0$ has no solution, and $\lvert A \rvert \leq 0$ only at $A = 0$

“And” is an intersection. “Or” is a union. A quotient inequality such as $1/(x - 2) > 0$ is a sign chart on the intervals determined by the zeros of the numerator and the zeros of the denominator. The denominator zero is never included.

## Mistakes that change the answer

- Treating $\sqrt{x^2}$ as $x$. For $x = -4$, $\sqrt{16} = 4 = \lvert -4 \rvert$, not $-4$.
- Flipping an inequality when multiplying by a positive number, or forgetting to flip when multiplying by a negative number.
- Writing a bracket next to infinity, or including an endpoint where a denominator is zero.
- Solving $\lvert A \rvert > c$ as one continued inequality $-c > A > c$. Those two bounds cannot hold at the same time. It is a union of two rays.
- Cancelling a variable factor before checking where it is zero. $(x - 1)/(x - 1) > 0$ is not “$1 > 0$ for every $x$.” The expression is undefined at $x = 1$.

---

## Questions

### Question 1

Prove that $\sqrt{2}$ is irrational. Then decide whether each number is rational or irrational, and give a reason: $0.\overline{12}$, $\sqrt{9}$, $\sqrt{8}$, $0.101001000100001\ldots$ (one extra zero between successive ones), and $\sqrt{2} + \sqrt{8}$.

### Question 2

Solve $\lvert 2x - 3 \rvert \geq 5$ and write the solution in interval notation. Then solve $\lvert 2x - 3 \rvert < -1$ and $\lvert 2x - 3 \rvert > -1$.

### Question 3

Find every real $x$ such that $\lvert x - 1 \rvert + \lvert x + 2 \rvert = 5$. Check each candidate in the original equation.

### Question 4

Solve $\dfrac{x + 1}{x - 2} \geq 0$ with a sign chart. State the values that must be excluded even if a factor cancels.

### Question 5

Describe in words, and as an interval, the set of $x$ satisfying $\lvert x - 3 \rvert < 2$. If you also require $x \neq 3$, what set remains? Why does calculus write the second condition as $0 < \lvert x - 3 \rvert < 2$?

### Question 6

Suppose $\lvert a - b \rvert < 1$ and $\lvert b - c \rvert < 2$. Prove that $\lvert a - c \rvert < 3$. Give numbers $a$, $b$, and $c$ where $\lvert a - c \rvert$ is greater than $2.9$, so the bound $3$ cannot be replaced by a much smaller constant that always works.

### Question 7

Simplify $\sqrt{x^2 - 2x + 1}$ for every real $x$, and simplify $\sqrt{x^2}$ for every real $x$. Evaluate both at $x = -4$.

### Question 8

True or false, with a reason or a counterexample:

1. Between any two rationals there is an irrational.
2. The sum of two irrationals is irrational.
3. The product of a nonzero rational and an irrational is irrational.
4. Every nonempty set of real numbers that is bounded above has a largest element.

### Question 9

Solve the compound inequality $-1 \leq \dfrac{4 - 2x}{3} < 5$, and write the solution as an interval. Say which endpoint is included.

### Question 10

The triangle inequality says $\lvert u + v \rvert \leq \lvert u \rvert + \lvert v \rvert$.

1. Prove $\lvert u \rvert - \lvert v \rvert \leq \lvert u - v \rvert$.
2. Use that result to show that if $\lvert x - 2 \rvert < 0.1$, then $\lvert \lvert x \rvert - 2 \rvert < 0.1$.
3. Why is a statement of this kind needed before you can pass from “$x$ is close to $2$” to “$\lvert x \rvert$ is close to $2$”?

---

## Answers

### Answer 1

Suppose $\sqrt{2} = p/q$ in lowest terms, $q \neq 0$. Then $p^2 = 2q^2$, so $p^2$ is even and $p$ is even. Write $p = 2k$. Substitute: $4k^2 = 2q^2$, hence $q^2 = 2k^2$, so $q$ is even. Both numerator and denominator are even, contradicting lowest terms. Therefore $\sqrt{2}$ is irrational.

$0.\overline{12} = 0.121212\ldots$ repeats, so it is rational. Explicitly, if $r = 0.\overline{12}$, then $100r - r = 12$, so $r = 12/99 = 4/33$.

$\sqrt{9} = 3 = 3/1$, rational.

$\sqrt{8} = \sqrt{4 \cdot 2} = 2\sqrt{2}$. If this were rational, then $\sqrt{2} = \sqrt{8}/2$ would be rational, because the quotient of a rational by the nonzero rational $2$ is rational. That contradicts the proof above, so $\sqrt{8}$ is irrational.

$0.101001000100001\ldots$ does not terminate and does not eventually repeat a fixed block, because the runs of zeros get longer forever. It is irrational.

$\sqrt{2} + \sqrt{8} = \sqrt{2} + 2\sqrt{2} = 3\sqrt{2}$, which is irrational by the same argument as $\sqrt{8}$.

### Answer 2

$\lvert 2x - 3 \rvert \geq 5$ means $2x - 3 \leq -5$ or $2x - 3 \geq 5$.

$$
\begin{aligned}
2x &\leq -2 &&\text{or}&& 2x \geq 8 \\
x &\leq -1 &&\text{or}&& x \geq 4.
\end{aligned}
$$

The solution is $(-\infty, -1] \cup [4, \infty)$.

$\lvert 2x - 3 \rvert < -1$ asks a nonnegative number to be strictly negative. No real $x$ works. The solution is the empty set.

$\lvert 2x - 3 \rvert > -1$ compares a nonnegative number with a negative number. Every real $x$ works. The solution is $(-\infty, \infty)$.

### Answer 3

The expressions inside the absolute values change sign at $x = -2$ and $x = 1$. Split there.

For $x < -2$, both $x - 1$ and $x + 2$ are negative:

$$
-(x - 1) - (x + 2) = 5 \implies -2x - 1 = 5 \implies x = -3.
$$

Since $-3 < -2$, this candidate is in the region. Check: $\lvert -3 - 1 \rvert + \lvert -3 + 2 \rvert = 4 + 1 = 5$.

For $-2 \leq x \leq 1$, we have $x + 2 \geq 0$ and $x - 1 \leq 0$:

$$
-(x - 1) + (x + 2) = 3,
$$

which is never $5$. No solution in this piece.

For $x > 1$, both expressions are positive:

$$
(x - 1) + (x + 2) = 5 \implies 2x + 1 = 5 \implies x = 2.
$$

Since $2 > 1$, it is in the region. Check: $\lvert 2 - 1 \rvert + \lvert 2 + 2 \rvert = 1 + 4 = 5$.

The solution set is $\{-3, 2\}$.

### Answer 4

The expression is undefined at $x = 2$. The numerator is zero at $x = -1$. Those two points split the line into $(-\infty, -1)$, $(-1, 2)$, and $(2, \infty)$.

| Interval | Sign of $x + 1$ | Sign of $x - 2$ | Sign of the quotient |
| --- | --- | --- | --- |
| $x < -1$ | $-$ | $-$ | $+$ |
| $-1 < x < 2$ | $+$ | $-$ | $-$ |
| $x > 2$ | $+$ | $+$ | $+$ |

The inequality is $\geq 0$, so include the zero of the numerator and both positive intervals. Exclude $x = 2$.

The solution is $(-\infty, -1] \cup (2, \infty)$.

Nothing cancels in this particular fraction. The warning still matters for a problem such as $(x - 1)^2 / (x - 1) \geq 0$. After cancelling, the simplified expression is $x - 1$ for $x \neq 1$, so $x = 1$ stays out of the domain even though the cancelled form is zero there.

### Answer 5

$\lvert x - 3 \rvert < 2$ means the distance from $x$ to $3$ is less than $2$, so $1 < x < 3$ is wrong and the correct translation is

$$
-2 < x - 3 < 2 \implies 1 < x < 5.
$$

The interval is $(1, 5)$.

Removing the center leaves $(1, 3) \cup (3, 5)$. The inequality $0 < \lvert x - 3 \rvert < 2$ says the same thing: distance to $3$ is positive and less than $2$. Limits use the punctured version because the value at the single point $x = 3$ is not part of the limit.

### Answer 6

The triangle inequality gives

$$
\lvert a - c \rvert = \lvert (a - b) + (b - c) \rvert \leq \lvert a - b \rvert + \lvert b - c \rvert < 1 + 2 = 3.
$$

Both given bounds are strict, so the sum is strict: $\lvert a - c \rvert < 3$.

Take $a = 0$, $b = 0.95$, and $c = 2.9$. Then $\lvert a - b \rvert = 0.95 < 1$, $\lvert b - c \rvert = 1.95 < 2$, and $\lvert a - c \rvert = 2.9$. Any claimed universal bound of $2.9$ or less already fails for these three numbers. The constant $3$ is sharp in the sense that values arbitrarily close to $3$ occur, even though $3$ itself is not reached under the strict hypotheses.

### Answer 7

$x^2 - 2x + 1 = (x - 1)^2$, so

$$
\sqrt{x^2 - 2x + 1} = \sqrt{(x - 1)^2} = \lvert x - 1 \rvert.
$$

Likewise $\sqrt{x^2} = \lvert x \rvert$.

At $x = -4$,

$$
\sqrt{(-4)^2} = 4, \qquad \sqrt{(-4)^2 - 2(-4) + 1} = \sqrt{16 + 8 + 1} = \sqrt{25} = 5 = \lvert -4 - 1 \rvert.
$$

Replacing either square root by the signed expression $x$ or $x - 1$ would give $-4$ and $-5$, and a principal square root cannot be negative.

### Answer 8

1. True. Between $a < b$ rational, the number $a + (b - a)/\sqrt{2}$ is a weighted shift by an irrational scale and lands strictly between them, and it is irrational. A standard concrete case: between $0$ and $1$ sits $\sqrt{2}/2$.
2. False. $\sqrt{2} + (-\sqrt{2}) = 0$, which is rational. The sum of two irrationals can also be irrational, as $\sqrt{2} + \sqrt{3}$ is, so there is no general rule.
3. True. Let $r \neq 0$ be rational and $s$ irrational. If $rs$ were rational, then $s = (rs)/r$ would be rational. So $rs$ is irrational.
4. False. The open interval $(0, 1)$ is bounded above by $1$, and by any larger number, but it has no largest element. For every $x$ in $(0, 1)$, the number $(x + 1)/2$ is still in $(0, 1)$ and is larger than $x$.

### Answer 9

Multiply through by the positive number $3$. The direction stays the same:

$$
-3 \leq 4 - 2x < 15.
$$

Subtract $4$:

$$
-7 \leq -2x < 11.
$$

Divide by $-2$ and reverse both inequalities:

$$
\frac{7}{2} \geq x > -\frac{11}{2},
$$

which is the same statement as

$$
-\frac{11}{2} < x \leq \frac{7}{2}.
$$

The interval is $(-11/2,\ 7/2]$. The right endpoint is included because the left part of the original compound inequality was $\leq$. The right part was strict, so $-11/2$ is not included.

Check the endpoints in the original expression. At $x = 7/2$, $(4 - 7)/3 = -1$, and $-1 \leq -1 < 5$ is true. At $x = -11/2$, $(4 - 2(-11/2))/3 = (4 + 11)/3 = 5$, and $-1 \leq 5 < 5$ is false.

### Answer 10

1. Start from $u = (u - v) + v$. The triangle inequality gives $\lvert u \rvert \leq \lvert u - v \rvert + \lvert v \rvert$, so $\lvert u \rvert - \lvert v \rvert \leq \lvert u - v \rvert$. The same argument with $u$ and $v$ swapped gives $\lvert v \rvert - \lvert u \rvert \leq \lvert u - v \rvert$. A number and its negative are both at most $\lvert u - v \rvert$, so their absolute value is too:

$$
\lvert \lvert u \rvert - \lvert v \rvert \rvert \leq \lvert u - v \rvert.
$$

The one-sided form asked in the question is the first rearrangement.

2. Apply the result with $u = x$ and $v = 2$:

$$
\lvert \lvert x \rvert - \lvert 2 \rvert \rvert \leq \lvert x - 2 \rvert < 0.1.
$$

Since $\lvert 2 \rvert = 2$, this is $\lvert \lvert x \rvert - 2 \rvert < 0.1$.

3. The function $g(x) = \lvert x \rvert$ turns nearby inputs into nearby outputs. Part 2 is the estimate that makes that precise at $x = 2$. Continuity of a function at a point is exactly this kind of control: if the input is close enough to $a$, the output is forced close to the output at $a$.
