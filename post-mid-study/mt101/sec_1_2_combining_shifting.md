# Section 1.2 — Combining Functions; Shifting and Scaling Graphs

New functions are built from old ones in two ways. Algebra combines their outputs: sum, difference, product, quotient, and composition. Geometry moves the graph: shift, reflect, stretch, and compress. Both constructions tell you the domain of the result, and the geometric ones tell you how to read a formula without plotting fifty points.

## Algebraic combinations

If $f$ and $g$ share an input $x$, define

$$
\begin{aligned}
(f + g)(x) &= f(x) + g(x) \\
(f - g)(x) &= f(x) - g(x) \\
(fg)(x) &= f(x)\, g(x) \\
\left(\frac{f}{g}\right)(x) &= \frac{f(x)}{g(x)}.
\end{aligned}
$$

The domain of a sum, difference, or product is the intersection of the domains. The quotient also excludes every $x$ where $g(x) = 0$.

Composition feeds the output of one function into the other:

$$
(f \circ g)(x) = f(g(x)).
$$

The domain of $f \circ g$ is the set of $x$ in the domain of $g$ such that $g(x)$ is in the domain of $f$. That second check is the one most often missed. If $g(x) = x - 1$ and $f(x) = \sqrt{x}$, then $f(g(x)) = \sqrt{x - 1}$ only for $x \geq 1$. The formula $x - 1$ is defined everywhere, but the outer root is not.

Composition is not commutative. $f \circ g$ and $g \circ f$ are different functions whenever the two orders produce different formulas or different domains. If $f(x) = x^2$ and $g(x) = x + 1$, then $(f \circ g)(x) = (x + 1)^2$ and $(g \circ f)(x) = x^2 + 1$.

## Shifts

Let $c > 0$.

| Formula | Movement of the graph of $y = f(x)$ |
| --- | --- |
| $y = f(x) + c$ | up by $c$ |
| $y = f(x) - c$ | down by $c$ |
| $y = f(x - c)$ | right by $c$ |
| $y = f(x + c)$ | left by $c$ |

A change outside the function moves the output, so it is vertical. A change added to $x$ before the function acts moves the input, so it is horizontal, and the direction is opposite to the sign you see. $f(x - 2)$ waits until $x$ is $2$ units larger before it feeds $f$ the old input. The graph moves right.

## Reflections and stretches

| Formula | Effect, $c > 1$ |
| --- | --- |
| $y = -f(x)$ | reflect across the $x$-axis |
| $y = f(-x)$ | reflect across the $y$-axis |
| $y = c\, f(x)$ | vertical stretch by $c$ |
| $y = \dfrac{1}{c} f(x)$ | vertical compression by $c$ |
| $y = f(cx)$ | horizontal compression by $c$ |
| $y = f(x/c)$ | horizontal stretch by $c$ |

Vertical stretch by $c$ pulls $y$-coordinates away from the $x$-axis. Points on the $x$-axis stay fixed. Horizontal compression by $c$ pushes $x$-coordinates toward the $y$-axis. The point that used to be at $x = c$ is now at $x = 1$, because $f(c \cdot (1)) = f(c)$.

A negative factor combines a stretch with a reflection. $y = -2f(x)$ stretches vertically by $2$ and reflects across the $x$-axis. $y = f(-2x)$ compresses horizontally by $2$ and reflects across the $y$-axis.

## Order of transformations

Work from the inside of the formula outward, and write the inside in factored form before you read a horizontal shift.

The expression $f(2x - 6)$ is not “stretch by $2$, then shift right by $6$” in the $x$ that is written. Factor first:

$$
2x - 6 = 2(x - 3), \qquad f(2x - 6) = f(2(x - 3)).
$$

The graph is compressed horizontally by $2$ and shifted right by $3$. If you shift by $6$ before the compression, the shift is also compressed and you land in the wrong place.

For $y = -3f(2x - 6) + 1$, the order on the graph of $y = f(x)$ is:

1. Compress horizontally by $2$.
2. Shift right by $3$.
3. Stretch vertically by $3$ and reflect across the $x$-axis.
4. Shift up by $1$.

The vertical pieces commute with each other in a limited way, but they do not commute with the horizontal pieces. Doing the upward shift before the vertical stretch multiplies that shift by $3$ as well.

## A worked reading

Start with $y = \sqrt{x}$.

The function $y = -\sqrt{2x - 4} + 5$ factors as $y = -\sqrt{2(x - 2)} + 5$.

- Domain of $\sqrt{u}$ is $u \geq 0$, so $2(x - 2) \geq 0$, so $x \geq 2$.
- The original half-parabola is compressed horizontally by $2$, moved right by $2$, reflected across the $x$-axis, and moved up by $5$.
- The starting point $(0, 0)$ goes to $(2, 5)$. The range of $\sqrt{\ }$ is $[0, \infty)$, then the minus sign and the $+5$ turn it into $(-\infty,\ 5]$.

## Mistakes that change the answer

- Shifting $f(x + 2)$ to the right. The plus sign inside moves the graph left.
- Reading $f(2x + 4)$ as a shift of $4$ after a compression by $2$. Factor to $f(2(x + 2))$, which is a shift of $2$.
- Taking the domain of $f/g$ to be only the intersection, and forgetting $g(x) \neq 0$.
- Taking the domain of $f \circ g$ to be the domain of the simplified formula after algebra that cancelled a factor. Simplifying can hide a hole.
- Compressing vertically when the factor $c > 1$ is inside, next to $x$. Inside is horizontal.

---

## Questions

### Question 1

Let $f(x) = \sqrt{x + 3}$ and $g(x) = x^2 - 4$. Find $(f + g)(x)$, $(fg)(x)$, and $(f/g)(x)$, each with its domain.

### Question 2

With the same $f$ and $g$, find $(f \circ g)(x)$ and $(g \circ f)(x)$, each with its domain. Then compute $(f \circ g)(2)$ and $(g \circ f)(1)$, or say why one of them is undefined.

### Question 3

Describe the graph of $y = -2(x + 1)^2 - 3$ as transformations of $y = x^2$, in an order that lands on the correct vertex. State the vertex and the range.

### Question 4

Write $y = \lvert 3x - 6 \rvert + 1$ in the form $a\,\lvert x - h \rvert + k$ and describe the transformations of $y = \lvert x \rvert$. Find the zeros, if any, and the minimum value.

### Question 5

The point $(2, -4)$ lies on $y = f(x)$. Where does this point go under each transformation?

1. $y = f(x - 3) + 1$
2. $y = -f(x)$
3. $y = f(-x)$
4. $y = 2f(x/2)$

### Question 6

Find the domain of $h(x) = \sqrt{ \dfrac{x - 1}{x + 2} }$. Be careful at the endpoints and at the vertical asymptote of the inside.

### Question 7

Suppose $f(x) = 1/x$ and $g(x) = x - 1$.

1. Write $(f \circ g)(x)$ and its domain.
2. Someone simplifies $x/(x - 1) - 1/(x - 1)$ and also computes $(g \cdot f)(x) = 1 - 1/x$. Those are different constructions. Compute both $(g \circ f)(x)$ and $(fg)(x)$ and compare domains.
3. Is $(f \circ g)(1)$ defined? Is $(g \circ f)(0)$ defined?

### Question 8

Match each function to the description of its graph relative to $y = \sqrt{x}$.

1. $y = \sqrt{x - 4}$
2. $y = \sqrt{x} - 4$
3. $y = \sqrt{-x}$
4. $y = 4\sqrt{x}$
5. $y = \sqrt{4x}$

Say which two are actually the same function, if any.

### Question 9

Let $f(x) = x^2 - 1$ and $g(x) = \sqrt{x}$. Solve $(f \circ g)(x) = 0$ and $(g \circ f)(x) = 0$. Explain why the solution sets differ.

### Question 10

A graph of $y = f(x)$ has domain $[-2, 2]$ and range $[0, 3]$. State the domain and range of each new function, or say what cannot be determined.

1. $y = f(x) + 5$
2. $y = f(x - 5)$
3. $y = -2f(x)$
4. $y = f(-x)$
5. $y = f(2x)$

---

## Answers

### Answer 1

$(f + g)(x) = \sqrt{x + 3} + x^2 - 4$, domain $[-3, \infty)$, the domain of $f$. The polynomial does not restrict it further.

$(fg)(x) = \sqrt{x + 3}\,(x^2 - 4)$, same domain $[-3, \infty)$.

$(f/g)(x) = \sqrt{x + 3}/(x^2 - 4)$. Need $x \geq -3$ and $x^2 \neq 4$. Both $x = -2$ and $x = 2$ lie in $[-3, \infty)$ and make the denominator zero, so both are removed. The domain is $[-3, -2) \cup (-2, 2) \cup (2, \infty)$.

### Answer 2

$(f \circ g)(x) = \sqrt{(x^2 - 4) + 3} = \sqrt{x^2 - 1}$. This requires $x^2 - 4$ to be in the domain of $f$, that is $x^2 - 4 \geq -3$, so $x^2 \geq 1$. The domain is $(-\infty, -1] \cup [1, \infty)$.

$(g \circ f)(x) = (\sqrt{x + 3})^2 - 4 = x + 3 - 4 = x - 1$, but only for $x$ in the domain of $f$, namely $x \geq -3$. You may not extend this simplified formula to all reals. The domain is $[-3, \infty)$.

$(f \circ g)(2) = \sqrt{4 - 1} = \sqrt{3}$.

$(g \circ f)(1) = 1 - 1 = 0$. Both inputs are in the domains just found.

### Answer 3

$y = x^2$ shifted left by $1$, stretched vertically by $2$, reflected across the $x$-axis, then shifted down by $3$.

The vertex of $x^2$ is $(0, 0)$. After the left shift it is $(-1, 0)$. The vertical stretch and reflection keep the $x$-coordinate and send the $y$-coordinate to $0$. The final downward shift puts the vertex at $(-1, -3)$.

Because of the reflection, the parabola opens downward. The range is $(-\infty, -3]$.

Doing the vertical stretch after a downward shift of $3$ would have produced a different function, $-2((x + 1)^2 - 3) = -2(x + 1)^2 + 6$. The written formula has $+(-3)$ outside the factor $-2$, so the shift by $3$ is last.

### Answer 4

$$
\lvert 3x - 6 \rvert + 1 = \lvert 3(x - 2) \rvert + 1 = 3\,\lvert x - 2 \rvert + 1.
$$

Start with $y = \lvert x \rvert$. Compress horizontally by $3$, which is the same as a vertical stretch by $3$ for this particular V shape, then shift right by $2$ and up by $1$. The factored form $3\lvert x - 2 \rvert + 1$ makes the vertical reading immediate: stretch vertically by $3$, right by $2$, up by $1$.

The minimum is $1$, at $x = 2$. The equation $3\lvert x - 2 \rvert + 1 = 0$ gives $3\lvert x - 2 \rvert = -1$, which is impossible. There are no zeros. The range is $[1, \infty)$.

### Answer 5

1. $(x, y)$ moves to $(x + 3,\ y + 1)$, so $(2, -4)$ goes to $(5, -3)$.
2. $(x, y)$ moves to $(x, -y)$, so $(2, 4)$.
3. $(x, y)$ moves to $(-x, y)$, so $(-2, -4)$.
4. $y = 2f(x/2)$ stretches horizontally by $2$ and vertically by $2$. The point $(x, y)$ on the old graph corresponds to the point $(2x,\ 2y)$ on the new graph, because the new input $2x$ feeds $f$ the old input $x$, and the output is doubled. So $(2, -4)$ goes to $(4, -8)$.

### Answer 6

Need $(x - 1)/(x + 2) \geq 0$ and $x \neq -2$.

The critical points are $x = 1$ and $x = -2$. The quotient is positive for $x < -2$ and for $x > 1$, and it is zero at $x = 1$. Zero is allowed under the square root. The point $x = -2$ is undefined.

The domain is $(-\infty, -2) \cup [1, \infty)$.

### Answer 7

1. $(f \circ g)(x) = 1/(x - 1)$, domain $(-\infty, 1) \cup (1, \infty)$.
2. $(g \circ f)(x) = 1/x - 1 = (1 - x)/x$, domain $(-\infty, 0) \cup (0, \infty)$.

The product is $(fg)(x) = (1/x)(x - 1) = (x - 1)/x = 1 - 1/x$, domain all reals except $0$.

For these two functions, $(g \circ f)$ and $fg$ happen to agree. The expression $x/(x - 1)$ is neither of them.

3. $(f \circ g)(1) = 1/(1 - 1)$ is undefined. $(g \circ f)(0)$ requires $f(0)$, which is undefined.

### Answer 8

1. Shift $y = \sqrt{x}$ right by $4$. Domain $[4, \infty)$.
2. Shift it down by $4$. Domain $[0, \infty)$.
3. Reflect it across the $y$-axis. Domain $(-\infty, 0]$.
4. Stretch it vertically by $4$. A point $(a, \sqrt{a})$ becomes $(a, 4\sqrt{a})$.
5. $y = \sqrt{4x} = \sqrt{4}\,\sqrt{x} = 2\sqrt{x}$ for $x \geq 0$. This is a vertical stretch by $2$, which is also a horizontal compression by $4$, because $\sqrt{4x} = \sqrt{4(x)}$. It is not the same function as $4\sqrt{x}$.

No two items in the list are the same function. Item 5 equals $2\sqrt{x}$, which was not offered as a separate choice. In particular $\sqrt{4x} \neq 4\sqrt{x}$.

### Answer 9

$(f \circ g)(x) = (\sqrt{x})^2 - 1 = x - 1$ for $x \geq 0$. Set equal to $0$: $x = 1$. That input is in the domain. The only solution is $x = 1$.

$(g \circ f)(x) = \sqrt{x^2 - 1}$. Set equal to $0$: $x^2 - 1 = 0$, so $x = \pm 1$, and both satisfy $x^2 - 1 \geq 0$. The solutions are $x = -1$ and $x = 1$.

The first equation only sees nonnegative inputs, because $g$ outputs a square root and $f$ is then applied. The second applies $f$ first, and both $x = -1$ and $x = 1$ produce $0$, whose square root is $0$.

### Answer 10

1. Domain unchanged, $[-2, 2]$. Range $[5, 8]$.
2. The graph moves right by $5$. Domain $[3, 7]$. Range unchanged, $[0, 3]$.
3. Domain unchanged, $[-2, 2]$. The outputs $0, 3$ become $0, -6$, and the interval reverses: range $[-6, 0]$.
4. Replacing $x$ by $-x$ reflects the domain about zero. The domain $[-2, 2]$ is already symmetric, so it stays $[-2, 2]$. The range stays $[0, 3]$.
5. $f(2x)$ is defined when $2x \in [-2, 2]$, so $x \in [-1, 1]$. The outputs are the same set. Range $[0, 3]$.
