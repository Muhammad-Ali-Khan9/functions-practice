# Section 1.1 — Functions and Their Graphs

A function is a rule that assigns to each allowed input exactly one output. The graph is the set of points $(x, f(x))$ in the plane. Most of calculus is about how that graph rises, falls, and bends, so the definition has to be sharp before any limit is taken.

## What counts as a function

The domain is the set of allowed inputs. The range is the set of outputs that actually occur. If no domain is stated, use the natural domain: every real $x$ for which the formula produces a real number.

These formulas cut the natural domain down:

- A denominator cannot be zero.
- An even root, such as $\sqrt{\ }$, requires a nonnegative inside.
- A later logarithm requires a positive inside. That restriction is section 1.6.

The function $f(x) = 1/\sqrt{x - 1}$ needs $x - 1 > 0$, so the domain is $(1, \infty)$. The endpoint $x = 1$ makes the denominator zero, so it is excluded even though the inside of the root is zero.

A formula can define a function and still fail to be a function of $y$ in terms of $x$ when you rearrange it. The circle $x^2 + y^2 = 4$ pairs $x = 0$ with both $y = 2$ and $y = -2$. One input, two outputs, so the circle is not the graph of a function $y = f(x)$. The upper half $y = \sqrt{4 - x^2}$ is a function. The lower half $y = -\sqrt{4 - x^2}$ is a different function.

The vertical line test says the same thing geometrically. If some vertical line meets the graph twice, that $x$-value has two outputs, and the graph is not a function.

## Piecewise rules

A piecewise function uses different formulas on different parts of the domain. Each $x$ must still have exactly one output, so the pieces should not disagree on an overlap. At a shared endpoint, only one formula is allowed to apply, or both must give the same number.

$$
f(x) =
\begin{cases}
x^2 & \text{if } x < 1 \\
3 - x & \text{if } x \geq 1
\end{cases}
$$

Then $f(1) = 3 - 1 = 2$, because $x = 1$ belongs to the second piece. The first piece is not consulted. $f(0) = 0$ and $f(2) = 1$.

The absolute value is the piecewise function $\lvert x \rvert = x$ for $x \geq 0$ and $\lvert x \rvert = -x$ for $x < 0$. The greatest-integer function $\lfloor x \rfloor$ is the greatest integer less than or equal to $x$. So $\lfloor 2.7 \rfloor = 2$, $\lfloor -1.2 \rfloor = -2$, and $\lfloor 3 \rfloor = 3$. Its graph is a step, constant on each interval $[n, n + 1)$ and jumping at each integer.

## Even, odd, increasing

A function is even when $f(-x) = f(x)$ for every $x$ in the domain. The graph is symmetric about the $y$-axis. Powers $x^2$, $x^4$, and $\lvert x \rvert$ are even. The domain of an even function must be symmetric about zero. Otherwise $f(-x)$ is not always defined when $f(x)$ is.

A function is odd when $f(-x) = -f(x)$ for every $x$ in the domain. The graph has rotational symmetry of $180^\circ$ about the origin, which is the same as symmetry through the origin. Powers $x$, $x^3$, and $1/x$ are odd. An odd function that is defined at $0$ must satisfy $f(0) = 0$, because $f(0) = -f(0)$.

A sum of even functions is even. A sum of odd functions is odd. The product of two evens is even, the product of two odds is even, and the product of an even and an odd is odd. A function can be neither. $f(x) = x + 1$ gives $f(-x) = -x + 1$, which is neither $f(x)$ nor $-f(x)$.

$f$ is increasing on an interval when $x_1 < x_2$ in that interval implies $f(x_1) < f(x_2)$. It is decreasing when $x_1 < x_2$ implies $f(x_1) > f(x_2)$. The test uses every pair in the interval, not just the endpoints. $f(x) = x^2$ is decreasing on $(-\infty, 0]$ and increasing on $[0, \infty)$. It is not increasing on $[-1, 1]$, because $-1 < 1$ but $f(-1) = f(1)$.

## Reading a graph

The $y$-intercept is $f(0)$, when $0$ is in the domain. The $x$-intercepts are the solutions of $f(x) = 0$. A graph can cross the $x$-axis, touch it and turn back, or miss it.

The domain is the set of $x$-coordinates that appear. The range is the set of $y$-coordinates that appear. An open circle means that point is missing. A closed dot means that point is included. A vertical asymptote is not part of the graph. The curve approaches the line and does not cross that missing $x$-value.

## Familiar graphs worth memorizing

- Constant $y = c$: horizontal line.
- Linear $y = mx + b$: slope $m$, intercept $b$.
- $y = x^2$: parabola, vertex at the origin, range $[0, \infty)$.
- $y = x^3$: increasing on $\mathbb{R}$, flattened near the origin, odd.
- $y = \sqrt{x}$: domain $[0, \infty)$, range $[0, \infty)$, starts with a vertical tangent.
- $y = 1/x$: domain $(-\infty, 0) \cup (0, \infty)$, hyperbola, odd.
- $y = \lvert x \rvert$: V shape, corner at the origin.

Polynomials have domain $\mathbb{R}$. A rational function is a quotient of polynomials. Its domain is every real except the zeros of the denominator.

## Mistakes that change the answer

- Reading a table or a graph that repeats an $x$ with two different $y$-values and still calling it a function.
- Using the horizontal line test here. That test detects one-to-one functions, which is section 1.6. The vertical line test is the function test.
- Including endpoints where a denominator is zero.
- Writing $\sqrt{x - 1}$ with domain $x > 1$ only. The root allows the inside to be zero, so $x = 1$ belongs.
- Calling $x^2$ increasing on $[-2, 2]$ because it ends higher than it starts. The pair $x = -2$ and $x = 0$ already breaks the definition.
- Evaluating a piecewise function with the wrong piece at the boundary.

---

## Questions

### Question 1

Find the natural domain of each function.

1. $f(x) = \dfrac{\sqrt{4 - x}}{x - 1}$
2. $g(x) = \sqrt{x^2 - x - 6}$
3. $h(x) = \dfrac{1}{\sqrt{x^2 - 4}}$

### Question 2

Which of these graphs are graphs of functions of $x$? For the ones that are not, name an input with two outputs. For the ones that are, give the domain and range from the description.

1. The circle $(x - 1)^2 + y^2 = 9$.
2. $y = \begin{cases} -1 & x < 0 \\ 1 & x \geq 0 \end{cases}$
3. The set of points where $x = y^2$.
4. $y = \lfloor x \rfloor$ on $[-1.5,\ 1.5]$.

### Question 3

Let

$$
f(x) =
\begin{cases}
x + 2 & \text{if } x < -1 \\
x^2 & \text{if } -1 \leq x < 2 \\
5 & \text{if } x \geq 2.
\end{cases}
$$

Compute $f(-2)$, $f(-1)$, $f(1)$, and $f(2)$. Is there any $x$ that the rule tries to send to two different numbers?

### Question 4

Determine whether each function is even, odd, or neither. The domain is the natural domain.

1. $f(x) = x^3 - x$
2. $g(x) = x^2 + \lvert x \rvert$
3. $h(x) = x^2 + x$
4. $k(x) = \dfrac{x}{x^2 + 1}$

### Question 5

Show from the definition that $f(x) = x^2$ is decreasing on $(-\infty, 0]$ and is not decreasing on $(-\infty, 1]$. Then decide whether $g(x) = 1/x$ is decreasing on $(0, \infty)$, and whether it is decreasing on its full domain $(-\infty, 0) \cup (0, \infty)$.

### Question 6

The table is claimed to be a function of $x$.

| $x$ | $-2$ | $-1$ | $0$ | $1$ | $1$ | $2$ |
| --- | --- | --- | --- | --- | --- | --- |
| $y$ | $4$ | $1$ | $0$ | $1$ | $3$ | $4$ |

1. Why does the table fail?
2. Delete one row-pair so that the remaining table is a function, and say whether that function could be even.
3. Is $y$ a function of $x$ for the points $(0, 1)$, $(2, 3)$, $(0, 1)$? What about $x$ as a function of $y$?

### Question 7

Solve $f(x) = 1$ and find the range of $f$ when $f(x) = (x + 1)/(x - 2)$.

### Question 8

A graph passes the vertical line test. A horizontal line $y = 3$ meets it twice, and the horizontal line $y = 0$ misses it. What do you know about the function, and what do you not yet know about invertibility? Where is this distinction used?

### Question 9

For $f(x) = \sqrt{4 - x^2}$, find the domain, the range, $f(0)$, the $x$-intercepts, and say whether $f$ is even, odd, or neither. Identify the graph.

### Question 10

Give an example of each, or explain why none exists.

1. An odd function with $f(0) = 4$.
2. An even function with domain $[0, \infty)$.
3. A function that is both even and odd.
4. Two different functions with the same domain and the same range.

---

## Answers

### Answer 1

1. Need $4 - x \geq 0$ and $x - 1 \neq 0$, and the root is in the denominator so the root itself cannot be zero. Thus $4 - x > 0$ and $x \neq 1$, so $x < 4$ and $x \neq 1$. The domain is $(-\infty, 1) \cup (1, 4)$.
2. $x^2 - x - 6 = (x - 3)(x + 2) \geq 0$. The product is nonnegative outside the roots: $x \leq -2$ or $x \geq 3$. The domain is $(-\infty, -2] \cup [3, \infty)$.
3. $x^2 - 4 > 0$, because the root is in the denominator. So $(x - 2)(x + 2) > 0$, which holds for $x < -2$ or $x > 2$. The domain is $(-\infty, -2) \cup (2, \infty)$. The endpoints make the denominator zero.

### Answer 2

1. Not a function. The vertical line $x = 1$ meets the circle at $y = 3$ and $y = -3$.
2. A function. Domain $\mathbb{R}$, range $\{-1, 1\}$. Each $x$ has one output. At $x = 0$ the output is $1$.
3. Not a function of $x$. The input $x = 4$ gives $y = 2$ and $y = -2$. It is a sideways parabola.
4. A function. On $[-1.5,\ 1.5]$ the outputs are $-2$ on $[-1.5, -1)$, $-1$ on $[-1, 0)$, $0$ on $[0, 1)$, and $1$ on $[1, 1.5]$. Domain $[-1.5,\ 1.5]$, range $\{-2, -1, 0, 1\}$.

### Answer 3

$f(-2) = -2 + 2 = 0$, using the first piece.

$f(-1) = (-1)^2 = 1$, using the second piece. The first piece does not include $x = -1$.

$f(1) = 1^2 = 1$.

$f(2) = 5$, using the third piece.

The cuts are placed so each $x$ falls in exactly one piece. There is no overlap, so no input is assigned two outputs. The formulas do not need to agree at the cuts for the rule to be a function. Agreement matters later, for continuity.

### Answer 4

1. $f(-x) = (-x)^3 - (-x) = -x^3 + x = -(x^3 - x) = -f(x)$. Odd.
2. $g(-x) = (-x)^2 + \lvert -x \rvert = x^2 + \lvert x \rvert = g(x)$. Even.
3. $h(-x) = x^2 - x$. This equals $h(x) = x^2 + x$ only if $x = 0$, and it equals $-h(x) = -x^2 - x$ only if $x^2 = 0$. Neither.
4. $k(-x) = (-x)/((-x)^2 + 1) = -x/(x^2 + 1) = -k(x)$. Odd. The domain is all reals, which is symmetric.

### Answer 5

Take $x_1 < x_2 \leq 0$. Then $x_2 - x_1 > 0$ and $x_1 + x_2 < 0$, because both numbers are nonpositive and they are not equal, so their sum is negative. Therefore

$$
f(x_2) - f(x_1) = (x_2 - x_1)(x_2 + x_1) < 0,
$$

so $f(x_2) < f(x_1)$. That is the definition of decreasing on $(-\infty, 0]$.

On $(-\infty, 1]$ the pair $x_1 = 0$ and $x_2 = 1$ has $f(0) = 0 < 1 = f(1)$, so the outputs go up. A decreasing function cannot do that.

On $(0, \infty)$, if $0 < x_1 < x_2$, then $1/x_1 > 1/x_2$. So $g$ is decreasing on $(0, \infty)$. It is not decreasing on the full domain. Take $x_1 = -1$ and $x_2 = 1$. Then $x_1 < x_2$ but $g(-1) = -1 < 1 = g(1)$, so the output increased. The gap at zero lets the left branch sit entirely below the right branch.

### Answer 6

1. The input $x = 1$ is listed with $y = 1$ and with $y = 3$. A function cannot do that.
2. Delete the pair $(1, 3)$. The remaining outputs at $\pm 2$ and $\pm 1$ match, and $f(0) = 0$, so these five points could be part of an even function. Deleting $(1, 1)$ instead leaves $(1, 3)$ and $(-1, 1)$, which cannot belong to an even function.
3. The list $(0, 1)$, $(2, 3)$, $(0, 1)$ repeats the same pair. As a set of points it is $\{(0, 1), (2, 3)\}$, and $y$ is a function of $x$. Each $y$ also occurs once, so $x$ is a function of $y$ on this set as well.

### Answer 7

$(x + 1)/(x - 2) = 1$ gives $x + 1 = x - 2$ after multiplying by $x - 2$, provided $x \neq 2$. Then $1 = -2$, which is impossible. There is no solution. The graph never meets the line $y = 1$.

For the range, set $y = (x + 1)/(x - 2)$ and solve for $x$:

$$
y(x - 2) = x + 1 \implies xy - 2y = x + 1 \implies xy - x = 2y + 1 \implies x(y - 1) = 2y + 1.
$$

If $y \neq 1$, then $x = (2y + 1)/(y - 1)$, and this $x$ is not $2$, because $(2y + 1)/(y - 1) = 2$ would force $2y + 1 = 2y - 2$. So every $y \neq 1$ is hit. The range is $(-\infty, 1) \cup (1, \infty)$.

### Answer 8

The vertical line test says it is a function. Missing $y = 0$ says $0$ is not in the range. Meeting $y = 3$ twice says two different inputs share the output $3$, so the function is not one-to-one. A one-to-one function is required before an inverse function exists. The horizontal line test is the test for that property. Passing the vertical line test says nothing about the horizontal one.

### Answer 9

Need $4 - x^2 \geq 0$, so $x^2 \leq 4$, so $x \in [-2, 2]$. As $x$ runs over that interval, $4 - x^2$ runs over $[0, 4]$, and the square root runs over $[0, 2]$. The range is $[0, 2]$.

$f(0) = 2$. The equation $f(x) = 0$ gives $4 - x^2 = 0$, so $x = \pm 2$.

$f(-x) = \sqrt{4 - x^2} = f(x)$, and the domain is symmetric, so $f$ is even.

The equation $y = \sqrt{4 - x^2}$ squares to $x^2 + y^2 = 4$ with $y \geq 0$. The graph is the upper semicircle of radius $2$ centered at the origin.

### Answer 10

1. None exists if the domain contains $0$. An odd function defined at $0$ satisfies $f(0) = -f(0)$, so $f(0) = 0$, not $4$.
2. None exists, except in the empty sense that the evenness identity cannot be checked for a positive $x$, because $-x$ is not in the domain. The definition requires $f(-x) = f(x)$ for every $x$ in the domain. For $x = 1$ in $[0, \infty)$, $-1$ is not in the domain, so no function with exactly that domain is even.
3. $f(x) = 0$ on a symmetric domain, including the zero function on $\mathbb{R}$. Then $f(-x) = 0 = f(x)$ and $f(-x) = 0 = -f(x)$. If $f$ is both even and odd, $f(x) = -f(x)$, so $f(x) = 0$ everywhere it is defined.
4. $f(x) = x$ and $g(x) = x^3$ on the domain $\mathbb{R}$. Both have range $\mathbb{R}$, and they are different because $f(2) = 2$ while $g(2) = 8$.
