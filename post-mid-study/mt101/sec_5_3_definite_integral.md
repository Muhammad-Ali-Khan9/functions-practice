# Section 5.3 — The Definite Integral

The definite integral is the limit of Riemann sums, when that limit exists. It is a number attached to a function and an interval. It is not a family of antiderivatives. The connection to antiderivatives is the Fundamental Theorem, in the next section.

## Definition

$f$ is integrable on $[a, b]$ when there is a number $I$ such that every Riemann sum approaches $I$ as the norm of the partition approaches $0$. That number is

$$
\int_a^b f(x)\,dx
$$

The variable $x$ is a dummy. $\int_a^b f(x)\,dx$ and $\int_a^b f(t)\,dt$ are the same number.

A function that is continuous on $[a, b]$ is integrable there. A function with finitely many jump discontinuities on $[a, b]$ is also integrable, if it stays bounded. $f(x) = 1/x$ is not integrable on $[0, 1]$, because it is unbounded. $f(x) = 1/\sqrt{x}$ is unbounded on $(0, 1]$ as well. Its improper integral can still exist, but that is a later topic. This section’s definition asks for a bounded function on a closed interval.

## Signed area

If $f \ge 0$, the integral is the area under the graph. If $f \le 0$, the integral is the negative of the area between the graph and the axis. If $f$ changes sign, the integral adds the upper areas and subtracts the lower areas. Total area, the quantity of paint, uses $\int_a^b \lvert f(x) \rvert\,dx$.

Reversing the limits changes the sign:

$$
\int_b^a f(x)\,dx = -\int_a^b f(x)\,dx, \qquad \int_a^a f(x)\,dx = 0
$$

## Properties

For integrable $f$ and $g$, and a constant $c$,

$$
\begin{aligned}
\int_a^b c f(x)\,dx &= c\int_a^b f(x)\,dx \\
\int_a^b \bigl(f(x) + g(x)\bigr)\,dx &= \int_a^b f(x)\,dx + \int_a^b g(x)\,dx \\
\int_a^b f(x)\,dx &= \int_a^c f(x)\,dx + \int_c^b f(x)\,dx
\end{aligned}
$$

The additivity formula holds even when $c$ is not between $a$ and $b$, once reversing limits is allowed.

If $f(x) \le g(x)$ on $[a, b]$, then $\int_a^b f \le \int_a^b g$, provided $a < b$. The inequality flips if you reverse the limits, because both sides change sign.

If $m \le f(x) \le M$ on $[a, b]$ and $a < b$, then

$$
m(b - a) \le \int_a^b f(x)\,dx \le M(b - a)
$$

The integral of a function trapped between two constants is trapped between the areas of the two rectangles.

## Average value

The average value of an integrable function on $[a, b]$ is

$$
f_{\mathrm{avg}} = \frac{1}{b - a}\int_a^b f(x)\,dx
$$

It is the height of the rectangle on the same base whose signed area equals the integral. For a continuous $f$, the Mean Value Theorem for integrals says this height is actually attained: some $c$ in $[a, b]$ has $f(c) = f_{\mathrm{avg}}$. That theorem needs continuity. An integrable function with a jump can have an average that is not a function value.

## Reading an integral off a graph

If you know areas of triangles and circles, you can evaluate integrals of lines and semicircles without an antiderivative. A line from $(0, 0)$ to $(2, 4)$ encloses a triangle of area $4$, so $\int_0^2 2x\,dx = 4$. A semicircle of radius $1$ under $y = \sqrt{1 - x^2}$ has area $\pi/2$.

## Mistakes that change the answer

- Treating $\int_a^b f(x)\,dx$ as an antiderivative. It is a number.
- Dropping the sign of a region below the axis when the question asks for the integral.
- Using $\int \lvert f \rvert$ when the question asks for net area, or the unsigned integral when the question asks for total area.
- Applying $m(b - a) \le \int f$ with $b < a$ without reversing the inequality.
- Averaging the endpoint values and calling that the average value. That is the trapezoid estimate, not the definition, unless $f$ is linear.

---

## Questions

### Question 1

Using geometry, evaluate $\displaystyle \int_{-2}^{2} (2 - \lvert x \rvert)\,dx$ and $\displaystyle \int_{0}^{3} (x - 1)\,dx$. For the second, separate the area above the axis from the area below.

### Question 2

Suppose $\displaystyle \int_0^4 f(x)\,dx = 7$ and $\displaystyle \int_0^4 g(x)\,dx = -3$. Evaluate

1. $\displaystyle \int_0^4 \bigl(2f(x) - g(x)\bigr)\,dx$
2. $\displaystyle \int_4^0 f(x)\,dx$
3. $\displaystyle \int_0^4 \bigl(f(x) + 1\bigr)\,dx$

### Question 3

Use additivity. $\displaystyle \int_0^5 f = 10$ and $\displaystyle \int_0^2 f = 4$. Find $\displaystyle \int_2^5 f$ and $\displaystyle \int_5^2 f$.

### Question 4

$3 \le f(x) \le 7$ on $[1, 5]$. What can you say about $\displaystyle \int_1^5 f(x)\,dx$? Can the integral equal $10$? Can it equal $30$?

### Question 5

Find the average value of $f(x) = 3x$ on $[0, 4]$ from the definition. Then find $c$ in $[0, 4]$ with $f(c)$ equal to that average. Why does such a $c$ have to exist?

### Question 6

True or false, with a reason or a counterexample.

1. If $\displaystyle \int_a^b f(x)\,dx = 0$, then $f(x) = 0$ on $[a, b]$.
2. If $f$ is continuous on $[a, b]$, then $f$ is integrable there.
3. $\displaystyle \int_a^b f(x)\,dx$ depends on the name of the dummy variable.
4. If $f(x) \le 0$ on $[a, b]$, then $\displaystyle \int_a^b f(x)\,dx \le 0$ when $a < b$.

### Question 7

The graph of $f$ consists of the line from $(0, 2)$ to $(2, 0)$ and the line from $(2, 0)$ to $(4, 2)$. Evaluate $\displaystyle \int_0^4 f(x)\,dx$ and the average value. Is the average equal to $f(2)$?

### Question 8

Explain why $\displaystyle \int_0^1 x^{-1}\,dx$ is not a definite integral in the sense of this section. Then explain why $\displaystyle \int_0^1 x\,dx$ is, and give its value from a Riemann-sum limit or from geometry.

### Question 9

Suppose $f$ is odd and integrable on $[-a, a]$. Argue from areas, or from the definition, that $\displaystyle \int_{-a}^{a} f(x)\,dx = 0$. Then compute $\displaystyle \int_{-2}^{2} (x^3 + 1)\,dx$ by splitting the odd part from the even part. You may use geometry or known areas of $y = 1$.

### Question 10

A velocity $v(t)$ satisfies $-2 \le v(t) \le 5$ on $[0, 3]$, in m/s. Bound the net displacement. Is the bound the same as a bound on the total distance? Give an example of a velocity in this range whose distance traveled is larger than the absolute value of its own net displacement.

---

## Answers

### Answer 1

$y = 2 - \lvert x \rvert$ from $-2$ to $2$ is a triangle of base $4$ and height $2$. The area is $\tfrac{1}{2}\cdot 4\cdot 2 = 4$. The integral is $4$.

$y = x - 1$ on $[0, 3]$ is negative on $[0, 1]$ and positive on $[1, 3]$. The left triangle has area $1/2$. The right triangle has base $2$ and height $2$, area $2$. The integral is $-1/2 + 2 = 3/2$.

### Answer 2

1. $2(7) - (-3) = 17$.
2. $-7$.
3. $\int_0^4 f + \int_0^4 1 = 7 + 4 = 11$.

### Answer 3

$\int_0^5 f = \int_0^2 f + \int_2^5 f$, so $10 = 4 + \int_2^5 f$ and $\int_2^5 f = 6$. Reversing limits gives $\int_5^2 f = -6$.

### Answer 4

The length of the interval is $4$, so $3\cdot 4 \le \int_1^5 f \le 7\cdot 4$, that is $12 \le \int f \le 28$. The value $10$ is too small. The value $30$ is too big. Both are impossible.

### Answer 5

The integral is the area of a triangle of base $4$ and height $12$, which is $24$. The average is $24/4 = 6$. Then $3c = 6$ and $c = 2$, which lies in $[0, 4]$. Continuity of $3x$ guarantees that the average value is attained, by the Mean Value Theorem for integrals.

### Answer 6

1. False. $\int_{-1}^{1} x\,dx = 0$, and $x$ is not identically zero. The areas cancel.
2. True. Continuity on a closed bounded interval implies integrability.
3. False. Renaming the dummy does not change the number.
4. True when $a < b$. The integral is a limit of sums of nonpositive terms.

### Answer 7

From $(0, 2)$ to $(2, 0)$ the line encloses a triangle of area $2$. From $(2, 0)$ to $(4, 2)$ another triangle of area $2$. The integral is $4$. The average value is $4/(4 - 0) = 1$. And $f(2) = 0$, which is not the average. The average is attained elsewhere: the line on the left is $f(x) = 2 - x$, so $2 - x = 1$ at $x = 1$. Continuity says at least one such point exists. It does not say every special point, such as the corner, equals the average.

### Answer 8

$1/x$ is unbounded on $(0, 1]$. The Riemann-sum definition in this section is for bounded functions on closed intervals. The integral of $1/x$ down to $0$ is improper and diverges. It is not a number produced by this section’s limit.

$y = x$ on $[0, 1]$ is continuous, hence integrable. The area is the triangle of area $1/2$.

### Answer 9

An odd function satisfies $f(-x) = -f(x)$. The region on $[-a, 0]$ is the mirror of the region on $[0, a]$ with the sign flipped, so the signed areas cancel. The integral over a symmetric interval is $0$.

$x^3$ is odd and $1$ is even. $\int_{-2}^{2} x^3\,dx = 0$. And $\int_{-2}^{2} 1\,dx = 4$. The sum is $4$.

### Answer 10

Net displacement is $\int_0^3 v(t)\,dt$, and $-2\cdot 3 \le \int v \le 5\cdot 3$, so the net displacement lies between $-6\,\mathrm{m}$ and $15\,\mathrm{m}$.

Total distance is $\int_0^3 \lvert v(t) \rvert\,dt$, which can be as large as $15\,\mathrm{m}$ if $v = 5$ always, and can also be large when the velocity changes sign. The upper bound $15$ still holds because $\lvert v \rvert \le 5$, so distance is at most $15\,\mathrm{m}$. The lower comparison is different: distance is at least $0$, not at least $-6$.

Let $v = 5$ for $1.5\,\mathrm{s}$ and $v = -2$ for $1.5\,\mathrm{s}$. Distance is $5(1.5) + 2(1.5) = 10.5\,\mathrm{m}$. Net displacement is $7.5 - 3 = 4.5\,\mathrm{m}$. The distance is larger than the absolute value of this motion’s own net displacement, and both numbers lie inside the bounds above.
