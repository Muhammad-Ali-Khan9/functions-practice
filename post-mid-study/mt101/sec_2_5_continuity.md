# Section 2.5 — Continuity

A function is continuous at $x = a$ when the limit and the function value are the same number. Nothing jumps, nothing is missing, and nothing blows up at that single point. The graph can be drawn through $(a, f(a))$ without lifting the pencil. The formal test is three checks, and all three are required.

## The three requirements

$f$ is continuous at $a$ when

1. $f(a)$ is defined,
2. $\lim_{x \to a} f(x)$ exists as a real number,
3. $\lim_{x \to a} f(x) = f(a)$.

If the domain only allows one side, continuity at an endpoint uses the matching one-sided limit. $f(x) = \sqrt{x}$ is continuous on $[0, \infty)$, and at $0$ the correct statement is $\lim_{x \to 0^+} \sqrt{x} = \sqrt{0}$.

A function is continuous on an interval when it is continuous at every point of that interval, with one-sided continuity at any included endpoint.

## Building continuous functions

Polynomials are continuous at every real $a$. Direct substitution already computed their limits in section 2.2, and the function value is that same number.

A rational function is continuous at every $a$ where the denominator is not zero. At a denominator zero it is not even defined, so it cannot be continuous there.

Roots are continuous on their domains. So are sine and cosine, on all reals, and the other trigonometric functions on the sets where they are defined. Exponential functions $a^x$ with $a > 0$ are continuous on $\mathbb{R}$. Logarithms are continuous on $(0, \infty)$.

Combinations preserve continuity at a point where every piece going into the combination is continuous, and where a denominator in the combination is not zero. A composition of continuous functions is continuous: if $g$ is continuous at $a$ and $f$ is continuous at $g(a)$, then $f \circ g$ is continuous at $a$. That is why $e^{\sin x}$ and $\ln(x^2 + 1)$ are continuous everywhere. The inside of the log, $x^2 + 1$, is at least $1$, so it stays in the domain of $\ln$.

## Types of discontinuity

If $\lim_{x \to a} f(x)$ exists but $f(a)$ is wrong or missing, the discontinuity is removable. Define or redefine $f(a)$ to be the limit, and the new function is continuous at $a$. The hole in $(x^2 - 4)/(x - 2)$ at $x = 2$ is removable. Filling it with $4$ produces the continuous function $x + 2$.

If the one-sided limits exist and are different, the discontinuity is a jump. The step function at $0$ is the model. Redefining the single value $f(a)$ cannot make the two sides agree, so a jump is not removable.

If a one-sided or two-sided limit is infinite, the discontinuity is infinite. The function $1/x$ at $0$, and $\tan x$ at $\pi/2$, are the models. Section 2.6 writes the infinite limit carefully. The point is still a discontinuity, because a continuous function must approach a finite function value.

Oscillating discontinuities also occur. $\sin(1/x)$ has no limit at $0$, finite or infinite. Whatever value you assign at $0$, the function is discontinuous there, and the discontinuity is not a hole you can fill.

## The intermediate value theorem

If $f$ is continuous on the closed interval $[a, b]$, and $K$ is any number between $f(a)$ and $f(b)$, then some $c$ in $(a, b)$ satisfies $f(c) = K$.

A continuous function on a closed interval takes every intermediate value. It cannot jump over $K$. The theorem guarantees existence. It does not by itself produce a formula for $c$.

The standard use is a sign change. If $f$ is continuous on $[a, b]$, with $f(a) < 0$ and $f(b) > 0$, then $f$ has a root in $(a, b)$. The same holds if the signs are reversed.

The theorem needs continuity on the whole interval. The function $1/x$ satisfies $f(-1) = -1$ and $f(1) = 1$, but it has no root. It is not continuous on $[-1, 1]$, because it is undefined at $0$. A sign change on an interval that hides a discontinuity does not force a root.

The theorem also needs the value $K$ to lie between the endpoint values. Continuity does not say the function takes values outside that range.

## Mistakes that change the answer

- Calling a function continuous at $a$ because the limit exists. The function value must exist and match.
- Calling a hole a jump. If both sides approach the same number, the discontinuity is removable even when $f(a)$ is undefined.
- Applying the intermediate value theorem to a rational function across a vertical asymptote.
- Assuming a sign change produces exactly one root. The theorem says at least one. $x^3 - x$ changes sign on $[-2, 2]$ and has three roots.
- Testing continuity of a piecewise function with only the formula values, and skipping the one-sided limits at the break.

---

## Questions

### Question 1

At which of $x = -1$, $x = 0$, and $x = 2$ is $f$ continuous?

$$
f(x) =
\begin{cases}
\dfrac{x^2 - 1}{x + 1} & \text{if } x \neq -1 \\
4 & \text{if } x = -1
\end{cases}
$$

### Question 2

Classify the discontinuity, and remove it when that is possible.

1. $f(x) = \dfrac{x^2 - 4}{x - 2}$
2. $g(x) = \begin{cases} x + 1 & x < 0 \\ 2 - x & x \geq 0 \end{cases}$
3. $h(x) = 1/(x - 3)^2$

### Question 3

Find the value of $c$ that makes $f$ continuous at $x = 2$.

$$
f(x) =
\begin{cases}
cx + 1 & \text{if } x < 2 \\
x^2 - c & \text{if } x \geq 2
\end{cases}
$$

### Question 4

Use the intermediate value theorem to prove that $x^3 + x - 1 = 0$ has a root in $(0, 1)$. Then explain why the same argument does not show that $1/x = 0$ has a root in $[-1, 1]$, even though the function is negative at $-1$ and positive at $1$.

### Question 5

Determine the intervals of continuity.

1. $\dfrac{x + 1}{x^2 - 4}$
2. $\ln(x - 2)$
3. $\tan x$
4. $\sqrt{4 - x^2}$

### Question 6

Let $f(x) = \begin{cases} x \sin(1/x) & x \neq 0 \\ 0 & x = 0. \end{cases}$ Is $f$ continuous at $0$? Use a squeeze argument for the limit.

### Question 7

Suppose $f$ is continuous at $2$, $f(2) = 5$, and $g(x) = f(x)/(x - 2)$. Can $g$ be continuous at $2$? Suppose instead $f(2) = 0$ and $f(x) = (x - 2)h(x)$ where $h$ is continuous and $h(2) = 4$. What value of $g(2)$ removes the discontinuity?

### Question 8

True or false, with a reason or a counterexample.

1. If $f$ is continuous at $a$, then $\lvert f \rvert$ is continuous at $a$.
2. If $\lvert f \rvert$ is continuous at $a$, then $f$ is continuous at $a$.
3. If $f$ and $g$ are discontinuous at $a$, then $f + g$ is discontinuous at $a$.
4. A continuous function on $[0, 1]$ that is never zero has constant sign.

### Question 9

Show that $e^x = 2 - x$ has at least one real solution. Name the continuous function you apply the intermediate value theorem to, and the interval you use.

### Question 10

The postage example of a jump: a function $C(w)$ equals $2$ for $0 < w \leq 1$ and equals $3$ for $1 < w \leq 2$, in some currency, for weight $w$ in kilograms. It is undefined for $w \leq 0$.

1. Is $C$ continuous at $w = 1$? At $w = 1.5$?
2. Why does redefining the single number $C(1)$ fail to produce continuity on $(0, 2]$?
3. A laboratory replaces the jump by $C(w) = 2 + w$. What continuity property was gained, and what modeling fact was lost?

---

## Answers

### Answer 1

For $x \neq -1$, $f(x) = (x - 1)(x + 1)/(x + 1) = x - 1$. So $\lim_{x \to -1} f(x) = -2$. But $f(-1) = 4 \neq -2$. The limit exists and the value exists, and they differ. $f$ is discontinuous at $x = -1$. The discontinuity is removable: defining $f(-1) = -2$ would repair it.

At $x = 0$, $f(0) = 0 - 1 = -1$, and the simplified expression $x - 1$ shows the limit is $-1$. Continuous at $0$.

At $x = 2$, $f(2) = 1$, and the limit is $1$. Continuous at $2$. The only candidate people worry about is the algebraic hole, and that hole is at $-1$, not at $2$.

### Answer 2

1. The expression equals $x + 2$ for $x \neq 2$, so the limit is $4$, and $f(2)$ is undefined. Removable. Define $f(2) = 4$.
2. Left-hand limit $1$, right-hand limit $2$. Jump discontinuity. No single definition of $g(0)$ makes the two sides agree. The given value $g(0) = 2$ matches only the right.
3. As $x \to 3$, the denominator approaches $0$ through positive values, so $h(x) \to +\infty$. Infinite discontinuity. It is not removable.

### Answer 3

The left-hand limit is $2c + 1$. The right-hand limit and the value $f(2)$ are both $4 - c$. Continuity needs

$$
2c + 1 = 4 - c \implies 3c = 3 \implies c = 1.
$$

Then both sides equal $3$. Check: left formula at the limit gives $2(1) + 1 = 3$, and $2^2 - 1 = 3$.

### Answer 4

Let $f(x) = x^3 + x - 1$. It is a polynomial, so it is continuous on $[0, 1]$. And $f(0) = -1 < 0$, $f(1) = 1 > 0$. By the intermediate value theorem there exists $c$ in $(0, 1)$ with $f(c) = 0$.

The function $1/x$ is not continuous on $[-1, 1]$. It is undefined at $0$, so the hypothesis of the theorem is not satisfied. The sign change across a break does not force a zero. In fact $1/x$ is never $0$.

### Answer 5

1. Discontinuous where $x^2 - 4 = 0$, so at $x = \pm 2$. Continuous on $(-\infty, -2)$, $(-2, 2)$, and $(2, \infty)$.
2. Continuous on $(2, \infty)$, the domain. Undefined on $(-\infty, 2]$.
3. Continuous on each interval $\left((n - \tfrac{1}{2})\pi,\ (n + \tfrac{1}{2})\pi\right)$ for $n \in \mathbb{Z}$, and discontinuous at the odd multiples of $\pi/2$.
4. Continuous on its domain $[-2, 2]$, including the endpoints in the one-sided sense.

### Answer 6

For $x \neq 0$, $- \lvert x \rvert \leq x \sin(1/x) \leq \lvert x \rvert$, because $\lvert \sin(1/x) \rvert \leq 1$. Both $- \lvert x \rvert$ and $\lvert x \rvert$ approach $0$, so the squeeze theorem gives $\lim_{x \to 0} f(x) = 0$. The defined value is $f(0) = 0$. All three continuity requirements hold. $f$ is continuous at $0$.

The oscillation is still there, but the factor $x$ damps it enough for a limit. Without that factor, $\sin(1/x)$ would be discontinuous at $0$ no matter how the value at $0$ was filled in.

### Answer 7

If $f$ is continuous at $2$ and $f(2) = 5$, then near $x = 2$ the numerator is near $5$ and the denominator is near $0$. The quotient cannot approach a finite limit: the values become large positive on one side and large negative on the other, or large with a fixed sign if the numerator did not change sign, but here the numerator stays near $5$ and the denominator does change sign. So $\lim_{x \to 2} g(x)$ is not a real number. Defining $g(2)$ cannot create continuity. There is an infinite discontinuity.

In the second situation, $g(x) = h(x)$ for $x \neq 2$. The limit is $h(2) = 4$. Defining $g(2) = 4$ removes the discontinuity.

### Answer 8

1. True. Absolute value is continuous on $\mathbb{R}$, and a composition of continuous functions is continuous. Explicitly, $\lvert \lvert f(x) \rvert - \lvert f(a) \rvert \rvert \leq \lvert f(x) - f(a) \rvert$, so if $f(x)$ is forced close to $f(a)$, then $\lvert f(x) \rvert$ is forced close to $\lvert f(a) \rvert$.
2. False. Let $f(x) = 1$ for $x \geq 0$ and $f(x) = -1$ for $x < 0$. Then $\lvert f(x) \rvert = 1$ is continuous at $0$, but $f$ has a jump at $0$.
3. False. Let $f$ be $1$ at $x \geq 0$ and $-1$ at $x < 0$, and let $g = -f$. Both jump at $0$, but $f + g = 0$ is continuous everywhere.
4. True. If it took both a positive value and a negative value, the intermediate value theorem would force a zero between them. So on a connected interval, a continuous function that never zero keeps a constant sign. The closed interval in the statement is connected, so the claim holds.

### Answer 9

Let $f(x) = e^x + x - 2$. This is continuous on $\mathbb{R}$, being a sum of continuous functions. And $f(0) = 1 + 0 - 2 = -1 < 0$, while $f(1) = e + 1 - 2 = e - 1 > 0$. By the intermediate value theorem, $f(c) = 0$ for some $c$ in $(0, 1)$. That equation is $e^c = 2 - c$.

### Answer 10

1. At $w = 1$, the value is $2$. The left-hand limit is $2$. The right-hand limit is $3$. The two-sided limit does not exist, so $C$ is not continuous at $1$. At $w = 1.5$, both sides use the constant formula $3$, and $C(1.5) = 3$, so $C$ is continuous there.
2. A new value at the single point $w = 1$ can match the left limit or the right limit or neither. It cannot match both, because $2 \neq 3$. The jump remains on every interval that contains weights on both sides of $1$, including $(0, 2]$.
3. $C(w) = 2 + w$ is a polynomial, continuous on $(0, 2]$. The postage model lost the flat price inside each weight class. A continuous model charges a different price for every different weight, which is a different rule from a stamp table.
