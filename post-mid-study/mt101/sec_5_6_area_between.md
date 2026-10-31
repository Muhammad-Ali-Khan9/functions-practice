# Section 5.6 — Definite Integral Substitutions and the Area Between Curves

A substitution in a definite integral can be finished in two ways. Change the limits when you change the variable, and evaluate in $u$. Or carry the antiderivative back to $x$ and use the original limits. Both are correct. Mixing them, new limits with the old variable, is not.

The same evaluation computes area between curves. Integrate the upper function minus the lower function between intersection points. If the curves cross, split there.

## Changing the limits

If $u = g(x)$, then $du = g'(x)\,dx$. When $x = a$, $u = g(a)$. When $x = b$, $u = g(b)$.

$$
\int_a^b f(g(x))\,g'(x)\,dx = \int_{g(a)}^{g(b)} f(u)\,du
$$

If $g(b) < g(a)$, the new integral runs backward. Do not swap the limits by hand and then drop the minus sign. The evaluation $F(g(b)) - F(g(a))$ already has the correct sign.

Example. $\int_0^2 x(x^2 + 1)^3\,dx$. Let $u = x^2 + 1$, $du = 2x\,dx$. When $x = 0$, $u = 1$. When $x = 2$, $u = 5$.

$$
\frac{1}{2}\int_1^5 u^3\,du = \frac{1}{2}\cdot\frac{u^4}{4}\Big|_1^5 = \frac{1}{8}(625 - 1) = 78
$$

Returning to $x$ instead: $\tfrac{1}{8}(x^2 + 1)^4$ from $0$ to $2$ is $\tfrac{1}{8}(5^4 - 1^4) = 78$. Same number.

## Area between curves

If $f$ and $g$ are continuous and $f(x) \ge g(x)$ on $[a, b]$, the area between them is

$$
A = \int_a^b \bigl(f(x) - g(x)\bigr)\,dx
$$

Upper minus lower. If you integrate lower minus upper, the integral is negative and is not an area. Take the absolute value only after you know which function is on top, or split at the intersections.

To find the limits, solve $f(x) = g(x)$. Sketch or test a sample point in each subinterval to see which graph is above.

Sometimes $x$ is a function of $y$ more cleanly. If the region is described by curves $x = R(y)$ on the right and $x = L(y)$ on the left, from $y = c$ to $y = d$,

$$
A = \int_c^d \bigl(R(y) - L(y)\bigr)\,dy
$$

Right minus left. Use this when the boundary is not the graph of a single function of $x$, or when horizontal slices are rectangles and vertical slices are not.

## Two curves that cross

$y = x$ and $y = x^3$ meet when $x^3 - x = x(x^2 - 1) = 0$, so $x = -1,\ 0,\ 1$. On $[-1, 0]$, $x^3 \ge x$ because $x$ is negative and cubing makes it less negative. On $[0, 1]$, $x \ge x^3$. The area is

$$
\int_{-1}^{0} (x^3 - x)\,dx + \int_{0}^{1} (x - x^3)\,dx
$$

Each piece equals $1/4$. The total area is $1/2$. The single integral $\int_{-1}^{1} (x - x^3)\,dx$ equals $0$, because the two signed pieces cancel. That integral is not the area.

## Mistakes that change the answer

- Changing to $u$ and still writing the limits as the old $x$ values.
- Integrating $f - g$ on an interval where $g$ is above $f$, and reporting a negative area.
- Forgetting a crossing point, so one piece uses the wrong order for the whole interval.
- Using vertical slices when a curve is not a function of $x$. A sideways parabola $x = y^2$ needs $dy$, or a split into upper and lower halves.
- Dropping the constant factor from $du$ and then using new limits. The limits do not repair a missing $1/2$.

---

## Questions

### Question 1

Evaluate $\displaystyle \int_0^{1} \frac{x}{(x^2 + 1)^2}\,dx$ by substitution, changing the limits. Then repeat the evaluation by returning to $x$, and show that the numbers agree.

### Question 2

Evaluate $\displaystyle \int_0^{\pi/2} \sin x\cos x\,dx$ with $u = \sin x$. What are the new limits? Why does $u = \cos x$ give the same value even though the limits run backward?

### Question 3

Find the area between $y = x^2$ and $y = 2x$.

### Question 4

Find the area between $y = \sin x$ and $y = \cos x$ from $x = 0$ to $x = \pi/4$, and say which function is on top.

### Question 5

Find the area of the region bounded by $y = x^2 - 4$ and $y = 4 - x^2$.

### Question 6

Find the area between $x = y^2$ and $x = y + 2$ by integrating with respect to $y$. Then set up the same area with respect to $x$, including the split, and show that the two setups agree.

### Question 7

Evaluate $\displaystyle \int_{-2}^{2} x e^{x^2}\,dx$. Explain the result from symmetry, and again from the substituted limits.

### Question 8

Find the area between $y = e^{x}$ and $y = e^{-x}$ from $x = 0$ to $x = 1$.

### Question 9

True or false, with a reason.

1. $\displaystyle \int_a^b (f - g) = \int_a^b f - \int_a^b g$ always gives the area between the curves when $f$ and $g$ are continuous.
2. If $u = g(x)$ decreases from $g(a)$ to $g(b)$, you must swap the limits back to increasing order before integrating.
3. The area between a curve and the $x$-axis on $[a, b]$ is $\displaystyle \int_a^b \lvert f(x) \rvert\,dx$.
4. Changing limits and substituting back are two complete methods. Using the new limits on the antiderivative in $x$ is a third correct method.

### Question 10

A region is bounded by $y = \sqrt{x}$, $y = 0$, and $x = 4$. One integral is $\displaystyle \int_0^{4} \sqrt{x}\,dx$. Another is $\displaystyle \int_0^{2} (4 - y^2)\,dy$. Evaluate both, and name the slice direction in each.

---

## Answers

### Answer 1

$u = x^2 + 1$, $du = 2x\,dx$. Limits: $x = 0$ gives $u = 1$, and $x = 1$ gives $u = 2$.

$$
\frac{1}{2}\int_1^2 u^{-2}\,du = \frac{1}{2}\left[-\frac{1}{u}\right]_1^2 = \frac{1}{2}\left(-\frac{1}{2} + 1\right) = \frac{1}{4}
$$

Back in $x$: $-\dfrac{1}{2(x^2 + 1)}$ from $0$ to $1$ is $-\dfrac{1}{4} - \bigl(-\dfrac{1}{2}\bigr) = \dfrac{1}{4}$.

### Answer 2

$u = \sin x$, $du = \cos x\,dx$. At $x = 0$, $u = 0$. At $x = \pi/2$, $u = 1$.

$$
\int_0^1 u\,du = \frac{1}{2}
$$

With $u = \cos x$, $du = -\sin x\,dx$, so $\sin x\,dx = -du$. At $x = 0$, $u = 1$. At $x = \pi/2$, $u = 0$.

$$
\int_1^0 -u\,du = \int_0^1 u\,du = \frac{1}{2}
$$

The backward limits supply a minus, and $du = -\sin x\,dx$ supplies another minus. They cancel. Swapping the limits by hand and also keeping the minus from $du$ would flip the sign an extra time and produce $-1/2$.

### Answer 3

$x^2 = 2x$ gives $x^2 - 2x = 0$, so $x = 0$ or $x = 2$. On $[0, 2]$, $2x \ge x^2$.

$$
A = \int_0^2 (2x - x^2)\,dx = \left[x^2 - \frac{x^3}{3}\right]_0^2 = 4 - \frac{8}{3} = \frac{4}{3}
$$

### Answer 4

On $[0, \pi/4]$, $\cos x \ge \sin x$, because $\tan x \le 1$. They meet at $\pi/4$.

$$
A = \int_0^{\pi/4} (\cos x - \sin x)\,dx = \bigl[\sin x + \cos x\bigr]_0^{\pi/4} = \left(\frac{\sqrt{2}}{2} + \frac{\sqrt{2}}{2}\right) - (0 + 1) = \sqrt{2} - 1
$$

### Answer 5

$x^2 - 4 = 4 - x^2$ gives $2x^2 = 8$, so $x = \pm 2$. The downward parabola $4 - x^2$ is above $x^2 - 4$ between the intersections.

$$
A = \int_{-2}^{2} \bigl((4 - x^2) - (x^2 - 4)\bigr)\,dx = \int_{-2}^{2} (8 - 2x^2)\,dx
$$

The integrand is even, so

$$
A = 2\int_0^2 (8 - 2x^2)\,dx = 2\left[8x - \frac{2x^3}{3}\right]_0^2 = 2\left(16 - \frac{16}{3}\right) = 2\cdot\frac{32}{3} = \frac{64}{3}
$$

### Answer 6

$y^2 = y + 2$ gives $y^2 - y - 2 = 0$, so $(y - 2)(y + 1) = 0$. Thus $y = -1$ and $y = 2$. For a fixed $y$ between them, $x = y + 2$ is to the right of $x = y^2$.

$$
A = \int_{-1}^{2} \bigl((y + 2) - y^2\bigr)\,dy = \left[\frac{y^2}{2} + 2y - \frac{y^3}{3}\right]_{-1}^{2}
$$

At $2$: $2 + 4 - 8/3 = 10/3$. At $-1$: $1/2 - 2 + 1/3 = -7/6$. The difference is

$$
\frac{10}{3} - \left(-\frac{7}{6}\right) = \frac{20}{6} + \frac{7}{6} = \frac{9}{2}
$$

With respect to $x$, the parabola is $y = \pm \sqrt{x}$. The curves meet at $(1, -1)$ and $(4, 2)$. From $x = 0$ to $x = 1$ a vertical slice runs from the lower half of the parabola to the upper half. From $x = 1$ to $x = 4$ a vertical slice runs from the line $y = x - 2$ up to $y = \sqrt{x}$.

$$
A = \int_0^1 2\sqrt{x}\,dx + \int_1^4 \bigl(\sqrt{x} - (x - 2)\bigr)\,dx
$$

The first integral is $\bigl[\tfrac{4}{3}x^{3/2}\bigr]_0^1 = 4/3$. The second has antiderivative $\tfrac{2}{3}x^{3/2} - x^2/2 + 2x$. At $4$ that is $16/3$. At $1$ it is $2/3 - 1/2 + 2 = 13/6$. So the second integral is $16/3 - 13/6 = 19/6$.

$$
\frac{4}{3} + \frac{19}{6} = \frac{8}{6} + \frac{19}{6} = \frac{9}{2}
$$

Horizontal slices need one integral. Vertical slices need the split at $x = 1$, where the lower boundary changes from the parabola to the line.

### Answer 7

$f(x) = xe^{x^2}$ is odd, because $f(-x) = -f(x)$, and the interval is symmetric. The integral of an odd integrable function over $[-a, a]$ is $0$.

By substitution, $u = x^2$ gives $du = 2x\,dx$. The endpoints $x = -2$ and $x = 2$ both give $u = 4$. The integral becomes $\tfrac{1}{2}\int_4^4 e^{u}\,du = 0$. A definite integral from a number to itself is zero. The substitution makes the symmetry visible as identical limits.

### Answer 8

On $[0, 1]$, $e^{x} \ge e^{-x}$.

$$
A = \int_0^1 \bigl(e^{x} - e^{-x}\bigr)\,dx = \bigl[e^{x} + e^{-x}\bigr]_0^1 = \left(e + \frac{1}{e}\right) - 2
$$

### Answer 9

1. False. The identity for the difference of integrals is true, but the result is signed area. If $g$ is above $f$ on part of the interval, that part contributes a negative number. Area requires the upper function minus the lower function on each piece.
2. False. You may evaluate from the larger limit down to the smaller one. Swapping without a compensating minus changes the sign.
3. True. The absolute value turns every region between the curve and the axis into a positive contribution.
4. False. The new limits belong to $u$. The original limits belong to $x$. Putting the $u$-limits into an antiderivative that is still written in $x$ mixes the two methods. Either change the limits and stay in $u$, or return to $x$ and keep $a$ and $b$.

### Answer 10

$\int_0^4 \sqrt{x}\,dx$ uses vertical slices. Each slice at $x$ has height $\sqrt{x}$ and thickness $dx$.

$$
\left[\frac{2}{3}x^{3/2}\right]_0^4 = \frac{2}{3}\cdot 8 = \frac{16}{3}
$$

$\int_0^2 (4 - y^2)\,dy$ uses horizontal slices. Solving $y = \sqrt{x}$ gives $x = y^2$, and $y$ runs from $0$ to $2$. A horizontal slice from the parabola to the line $x = 4$ has length $4 - y^2$.

$$
\left[4y - \frac{y^3}{3}\right]_0^2 = 8 - \frac{8}{3} = \frac{16}{3}
$$

Both integrals measure the same region.
