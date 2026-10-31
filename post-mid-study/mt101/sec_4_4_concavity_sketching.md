# Section 4.4 — Concavity and Curve Sketching

The first derivative says whether the graph is rising or falling. The second derivative says whether it is bending upward or downward. A sketch that uses both, together with intercepts and asymptotes, is determined by calculus rather than by plotting a large table.

## Concavity

$f$ is concave up on an interval if $f'$ is increasing there. The tangents turn upward, and the graph lies above its tangents. $f$ is concave down if $f'$ is decreasing. The graph lies below its tangents.

If $f''(x) > 0$ on an open interval, then $f'$ is strictly increasing, so $f$ is concave up. If $f''(x) < 0$, then $f$ is concave down.

The sign chart for $f''$ is built the same way as the sign chart for $f'$. Cut the domain at points where $f''$ is zero or undefined, and test each open interval.

## Inflection points

An inflection point is a point on the graph where the concavity changes, from up to down or from down to up. The tangent may be horizontal, slanted, or vertical. What matters is the change in bending.

$f''(c) = 0$ is not enough. $f(x) = x^4$ has $f''(0) = 0$ and $f''(x) = 12x^2 \ge 0$ on both sides. The concavity does not change. There is no inflection point at the origin, even though the second derivative vanishes.

$f''(c)$ may also fail to exist at an inflection point. $f(x) = x^{1/3}$ has an inflection point at the origin with a vertical tangent.

## The second derivative test

Let $f'(c) = 0$, and suppose $f''$ is continuous near $c$.

- If $f''(c) > 0$, then $f$ has a local minimum at $c$.
- If $f''(c) < 0$, then $f$ has a local maximum at $c$.
- If $f''(c) = 0$, the test says nothing. Use the first derivative test.

The test only applies where the first derivative is zero. A corner with $f'$ undefined is not a place to evaluate $f''$. And $f''(c) = 0$ is inconclusive: $x^4$ has a minimum at $0$, and $-x^4$ has a maximum at $0$, and $x^3$ has neither, and all three have second derivative zero at the origin.

## A sketching list

For a rational or elementary function, collect these before drawing.

1. Domain, and any symmetry: even, odd, or periodic.
2. Intercepts, when they are easy.
3. Vertical asymptotes, from one-sided infinite limits. Horizontal or oblique asymptotes, from limits at $\pm\infty$.
4. Critical points and the sign of $f'$: increasing, decreasing, local extrema.
5. Sign of $f''$: concavity and inflection points.
6. A short table of the special points, then the curve through them with the asymptotes drawn first.

The local extreme values and the inflection values are points you compute. They are not optional decoration.

## A standard rational example

$f(x) = x + 1/x$ for $x \neq 0$. Then $f'(x) = 1 - 1/x^2$ and $f''(x) = 2/x^3$.

Critical points: $x = \pm 1$. On $(0, \infty)$, $f$ decreases on $(0, 1]$ and increases on $[1, \infty)$, with a local minimum $f(1) = 2$. On $(-\infty, 0)$, $f$ decreases on $(-\infty, -1]$ and increases on $[-1, 0)$, with a local maximum $f(-1) = -2$. The two sides of zero are separate components. Do not connect them.

$f''(x) > 0$ for $x > 0$, so the right branch is concave up. $f''(x) < 0$ for $x < 0$, so the left branch is concave down. There is no inflection point, because concavity does not change on either connected piece of the domain. The axes are asymptotes: $x = 0$ is vertical, and $y = x$ is oblique, since $1/x \to 0$.

## Mistakes that change the answer

- Calling every root of $f''$ an inflection point.
- Using the second derivative test when $f''(c) = 0$ and declaring a minimum anyway.
- Connecting a graph across a vertical asymptote.
- Reporting concavity on an interval that contains a point where $f''$ does not exist, without splitting the interval.
- Mixing up the tests: $f''(c) < 0$ is a local maximum only when you already know $f'(c) = 0$.

---

## Questions

### Question 1

$f(x) = x^3 - 3x^2 + 1$. Find the intervals of concavity and the inflection points. Then use the second derivative test on each critical point.

### Question 2

$f(x) = x^4 - 4x^3 + 10$. Find $f''$, the candidate inflection points, and decide which candidates are real inflection points.

### Question 3

$f(x) = x^{1/3}$. Find $f'$ and $f''$ for $x \neq 0$. Is the origin an inflection point? What does the second derivative test say at $x = 0$?

### Question 4

Sketch the information, not necessarily a picture file, for $f(x) = \dfrac{x}{x - 2}$: domain, asymptotes, intervals of increase, concavity, and intercepts. Does it have a local extremum?

### Question 5

The second derivative test fails for $f(x) = x^4$, $g(x) = -x^4$, and $h(x) = x^3$ at $x = 0$. Show the failure in each case, and classify the point with the first derivative test instead.

### Question 6

$f(x) = \sin x$ on $[0, 2\pi]$. Find the inflection points and the intervals of concavity. Which of those inflection points are also critical points of $f$?

### Question 7

$f(x) = xe^{-x}$. Find the local extrema with the second derivative test, the inflection point, and the horizontal asymptote. State the absolute maximum on $[0, \infty)$.

### Question 8

True or false, with a reason or a counterexample.

1. If $f''(c) = 0$, then $(c, f(c))$ is an inflection point.
2. If $f$ is concave up on $(a, b)$ and $f'(c) = 0$ for some $c$ in $(a, b)$, then $f(c)$ is a local minimum.
3. A graph can cross its horizontal asymptote.
4. If $f''(x) > 0$ on an interval, then $f'(x) > 0$ on that interval.

### Question 9

$f(x) = \dfrac{x^2}{x^2 + 1}$. Find the intervals of increase and decrease, the local extrema, the concavity, and the horizontal asymptote. Identify the inflection points exactly.

### Question 10

A function satisfies $f'(x) = (x - 1)^2(x + 2)$ and $f''$ exists everywhere. Without finding $f$,

1. classify the critical points,
2. find where $f$ is concave up, by differentiating $f'$ ,
3. say whether $x = 1$ is an inflection point.

---

## Answers

### Answer 1

$f'(x) = 3x^2 - 6x = 3x(x - 2)$ and $f''(x) = 6x - 6 = 6(x - 1)$.

$f'' > 0$ when $x > 1$, and $f'' < 0$ when $x < 1$. So $f$ is concave down on $(-\infty, 1)$ and concave up on $(1, \infty)$. The concavity changes at $x = 1$, and $f(1) = 1 - 3 + 1 = -1$. The inflection point is $(1, -1)$.

Critical points: $x = 0$ and $x = 2$, where $f' = 0$. And $f''(0) = -6 < 0$, so $x = 0$ is a local maximum, $f(0) = 1$. And $f''(2) = 6 > 0$, so $x = 2$ is a local minimum, $f(2) = 8 - 12 + 1 = -3$.

### Answer 2

$f'(x) = 4x^3 - 12x^2$ and $f''(x) = 12x^2 - 24x = 12x(x - 2)$. The candidates are $x = 0$ and $x = 2$.

$f''$ does change sign at $x = 0$. For $x < 0$, both $x$ and $x - 2$ are negative, so $f'' > 0$. On $(0, 2)$, $x > 0$ and $x - 2 < 0$, so $f'' < 0$. On $(2, \infty)$, $f'' > 0$.

Concavity changes at both candidates. Inflection points: $f(0) = 10$, so $(0, 10)$, and $f(2) = 16 - 32 + 10 = -6$, so $(2, -6)$.

### Answer 3

$f'(x) = \tfrac{1}{3}x^{-2/3}$ and $f''(x) = \tfrac{1}{3}\cdot(-\tfrac{2}{3})x^{-5/3} = -\tfrac{2}{9} x^{-5/3}$.

For $x > 0$, $x^{-5/3} > 0$, so $f'' < 0$. For $x < 0$, $x^{-5/3} = 1/(x^{5/3})$ and $x^{1/3}$ is negative, so $x^{5/3} = (x^{1/3})^5$ is negative, and $f'' = -\tfrac{2}{9}$ times a negative number, so $f'' > 0$. Concavity changes from up on the left to down on the right. The origin is an inflection point. The tangent there is vertical because $f'(x) \to +\infty$ as $x \to 0$.

The second derivative test does not apply at $x = 0$. First, $f'(0)$ does not exist, so the hypothesis $f'(c) = 0$ fails. Second, $f''(0)$ does not exist either.

### Answer 4

The domain is $x \neq 2$. There is no $x$-intercept other than the origin, and $f(0) = 0$. The $y$-intercept is $0$.

$f'(x) = \dfrac{(x - 2) - x}{(x - 2)^2} = \dfrac{-2}{(x - 2)^2} < 0$ wherever it exists. So $f$ is decreasing on $(-\infty, 2)$ and decreasing on $(2, \infty)$. There is no critical point and no local extremum. The separate branches each decrease. The function is not decreasing on the union, because values on the right branch are not a continuation of the left.

A vertical asymptote is $x = 2$: as $x \to 2^-$, $f(x) \to -\infty$, and as $x \to 2^+$, $f(x) \to +\infty$.

Divide: $x/(x - 2) = 1 + 2/(x - 2)$. So $y = 1$ is a horizontal asymptote on both ends.

$f''(x) = (-2)\cdot(-2)(x - 2)^{-3} = 4/(x - 2)^3$. This is negative on $(-\infty, 2)$ and positive on $(2, \infty)$. The left branch is concave down. The right branch is concave up. No inflection point lies in the domain.

### Answer 5

For all three, the second derivative at $0$ is $0$, so the test refuses to classify the point.

$f(x) = x^4$ has $f'(x) = 4x^3$, negative on the left and positive on the right. First derivative test: local minimum.

$g(x) = -x^4$ has $g'(x) = -4x^3$, positive on the left and negative on the right. Local maximum.

$h(x) = x^3$ has $h'(x) = 3x^2 \ge 0$ on both sides. No sign change, so no local extremum.

### Answer 6

$f'(x) = \cos x$ and $f''(x) = -\sin x$. On $(0, 2\pi)$, $f'' = 0$ at $x = \pi$. And $f'' < 0$ on $(0, \pi)$, because $\sin x > 0$, and $f'' > 0$ on $(\pi, 2\pi)$. Concavity changes at $x = \pi$. The inflection point is $(\pi, 0)$.

The critical points of $f$ on $(0, 2\pi)$ are where $\cos x = 0$, namely $x = \pi/2$ and $x = 3\pi/2$. Neither is $x = \pi$. The inflection point is not a critical point. The tangent there has slope $\cos \pi = -1$, not zero.

### Answer 7

$f'(x) = e^{-x} - xe^{-x} = e^{-x}(1 - x)$. The only critical point is $x = 1$.

$f''(x) = -e^{-x}(1 - x) + e^{-x}(-1) = e^{-x}(-1 + x - 1) = e^{-x}(x - 2)$.

Then $f''(1) = e^{-1}(1 - 2) < 0$, so $x = 1$ is a local maximum, $f(1) = 1/e$.

$f'' = 0$ at $x = 2$, and $f''$ changes from negative to positive there. The inflection point is $(2,\ 2e^{-2})$.

As $x \to \infty$, $xe^{-x} \to 0$, so $y = 0$ is a horizontal asymptote. As $x \to -\infty$, $e^{-x} \to \infty$ and $x$ is a large negative number, so $f(x) \to -\infty$.

On $[0, \infty)$, $f(0) = 0$, the critical value is $1/e$, and $f(x) \to 0$ at infinity. The absolute maximum is $1/e$ at $x = 1$.

### Answer 8

1. False. $f(x) = x^4$ has $f''(0) = 0$ and no change in concavity.
2. True. Concave up means $f'$ is increasing. If $f'(c) = 0$ and $f'$ is increasing, then $f'$ is negative on the left and positive on the right, so the first derivative test gives a local minimum. This is the geometry behind the second derivative test.
3. True. A horizontal asymptote describes the end behavior. $f(x) = \sin x / x$, for a later limit, or simply $f(x) = e^{-x}\sin x$ as $x \to \infty$, crosses $y = 0$ infinitely often while approaching it. Even $f(x) = x/(x^2 + 1)$ was seen to approach $0$ after reaching $\pm 1/2$. Crossing at a finite $x$ does not cancel the limit at infinity.
4. False. $f(x) = x^2$ has $f''(x) = 2 > 0$ everywhere, while $f'(x) = 2x$ is negative on $(-\infty, 0)$. Concavity up means the slopes are increasing. Those slopes may still be negative.

### Answer 9

$$
f'(x) = \frac{2x(x^2 + 1) - x^2(2x)}{(x^2 + 1)^2} = \frac{2x}{(x^2 + 1)^2}
$$

The denominator is positive. So $f' < 0$ on $(-\infty, 0)$ and $f' > 0$ on $(0, \infty)$. Local, and absolute, minimum at $x = 0$, value $0$. No local maximum. As $\lvert x \rvert \to \infty$, $f(x) \to 1$, so $y = 1$ is a horizontal asymptote. The minimum $0$ is absolute. There is no absolute maximum, because $f(x) < 1$ for every finite $x$ and the values approach $1$.

Differentiate $f'(x) = 2x(x^2 + 1)^{-2}$ by the product rule:

$$
f''(x) = 2(x^2 + 1)^{-2} + 2x\cdot(-2)(x^2 + 1)^{-3}\cdot 2x = \frac{2(x^2 + 1) - 8x^2}{(x^2 + 1)^3} = \frac{2 - 6x^2}{(x^2 + 1)^3}
$$

$f'' = 0$ when $6x^2 = 2$, so $x = \pm 1/\sqrt{3}$. The denominator is positive. $f'' > 0$ when $\lvert x \rvert < 1/\sqrt{3}$, and $f'' < 0$ when $\lvert x \rvert > 1/\sqrt{3}$. Concavity changes at both points. They are inflection points. The $y$-coordinates are

$$
f\left(\frac{1}{\sqrt{3}}\right) = \frac{1/3}{1/3 + 1} = \frac{1/3}{4/3} = \frac{1}{4}
$$

and the function is even, so both inflection points have $y = 1/4$: $\bigl(\pm 1/\sqrt{3},\ 1/4\bigr)$.

### Answer 10

1. $f'(x) = 0$ at $x = 1$ and $x = -2$. The square factor does not change sign at $x = 1$, and $x + 2$ is positive on both sides of $1$, so $f'$ stays nonnegative there. No local extremum at $x = 1$. At $x = -2$, $(x - 1)^2 > 0$ and $(x + 2)$ changes from negative to positive, so $f'$ changes from $-$ to $+$. Local minimum at $x = -2$.

2. $f''(x) = 2(x - 1)(x + 2) + (x - 1)^2 = (x - 1)\bigl(2(x + 2) + (x - 1)\bigr) = (x - 1)(3x + 3) = 3(x - 1)(x + 1)$.

$f'' > 0$ when both factors are positive or both are negative: $x > 1$ or $x < -1$. So $f$ is concave up on $(-\infty, -1)$ and on $(1, \infty)$, and concave down on $(-1, 1)$.

3. At $x = 1$, $f''$ changes from negative to positive. The concavity changes, so $x = 1$ is an inflection point even though it is also a critical point that is not a local extremum. The graph flattens and keeps the same vertical direction while the bending reverses.
