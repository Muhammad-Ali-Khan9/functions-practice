# Section 4.3 — Monotonic Functions and the First Derivative Test

Section 4.1 found candidates. This section reads the sign of $f'$ and decides whether the graph is rising or falling, and whether a critical point is a local maximum, a local minimum, or neither.

## Increasing and decreasing

$f$ is increasing on an interval $I$ when $x_1 < x_2$ in $I$ implies $f(x_1) \le f(x_2)$. It is strictly increasing when the inequality is strict. Decreasing and strictly decreasing reverse the inequality.

The test from the Mean Value Theorem:

- If $f'(x) > 0$ at every point of an open interval, then $f$ is strictly increasing on that interval.
- If $f'(x) < 0$ at every point of an open interval, then $f$ is strictly decreasing on that interval.
- If $f'(x) \ge 0$ and is not identically zero on any subinterval, the function is still strictly increasing for the usual examples. A function can be strictly increasing and have $f' = 0$ at isolated points. $f(x) = x^3$ is strictly increasing on $\mathbb{R}$ and $f'(0) = 0$.

The sign chart uses the critical points to cut the domain into open intervals. On each of those intervals, $f'$ cannot change sign, because a continuous derivative can change sign only by passing through zero, and a derivative that does not exist only at the cuts has already been split there. Test one sample point in each interval.

## The first derivative test

Let $c$ be a critical point.

- If $f'$ changes from positive to negative at $c$, then $f$ has a local maximum at $c$.
- If $f'$ changes from negative to positive at $c$, then $f$ has a local minimum at $c$.
- If $f'$ does not change sign at $c$, then $f$ has no local extremum at $c$.

The test does not need $f'(c) = 0$. It works at a corner. For $f(x) = \lvert x \rvert$, the derivative is $-1$ on the left of $0$ and $+1$ on the right, so $f'$ changes from negative to positive and $x = 0$ is a local minimum.

It also explains $x^3$ at $0$: $f'(x) = 3x^2 \ge 0$ on both sides, so the sign does not change and there is no local extremum.

## Absolute extrema on an open interval

A continuous function on a closed interval was settled in section 4.1. On an open interval, or on the whole line, compare the local extrema with the end behavior.

If $f$ has exactly one critical point on an interval, and that critical point is a local maximum, and $f$ is continuous on the interval, then the local maximum is the absolute maximum on that interval. The same statement holds for a minimum. There is nowhere else for the graph to turn.

If there are several critical points, a local maximum need not be the absolute one. Check the values, and check the limits at the ends of the domain.

## A worked sign chart

$f(x) = x^3 - 3x$. Then $f'(x) = 3(x - 1)(x + 1)$. The critical points are $x = -1$ and $x = 1$.

| Interval | Sample | Sign of $f'$ | Behavior |
| --- | --- | --- | --- |
| $(-\infty, -1)$ | $x = -2$ | $3(-3)(-1) > 0$ | increasing |
| $(-1, 1)$ | $x = 0$ | $3(-1)(1) < 0$ | decreasing |
| $(1, \infty)$ | $x = 2$ | $3(1)(3) > 0$ | increasing |

At $x = -1$, $f'$ changes from $+$ to $-$, a local maximum, $f(-1) = 2$. At $x = 1$, $f'$ changes from $-$ to $+$, a local minimum, $f(1) = -2$. Neither is absolute on $\mathbb{R}$, because $f(x) \to \infty$ as $x \to \infty$ and $f(x) \to -\infty$ as $x \to -\infty$.

## Mistakes that change the answer

- Reading “$f' > 0$” as “$f > 0$.” The derivative’s sign is the direction of the graph, not the sign of the output.
- Calling $x^3$ decreasing somewhere near zero because the derivative vanishes. It is not decreasing on any interval that contains points on both sides in a way that drops. On every interval it is increasing.
- Forgetting an interval created by a vertical asymptote. The sign of $f'$ on $(0, \infty)$ says nothing about $(-\infty, 0)$ for $f(x) = 1/x$.
- Declaring a local maximum to be absolute without looking at the endpoints or the limits at infinity.

---

## Questions

### Question 1

$f(x) = x^3 - 6x^2 + 9x + 1$. Find the intervals of increase and decrease, and classify each critical point by the first derivative test.

### Question 2

$f(x) = x^4 - 4x^3$. Find the critical points. Which are local extrema? Explain the one that is not, using the sign of $f'$.

### Question 3

$f(x) = x + 1/x$ on $(0, \infty)$. Find the local extrema and say whether they are absolute on $(0, \infty)$.

### Question 4

Use the first derivative test on $f(x) = x^{2/3}(x - 4)$. The derivative may be left in factored form after you compute it. Classify $x = 0$ and the other critical point.

### Question 5

True or false, with a reason or a counterexample.

1. If $f'(c) = 0$, then $f$ changes from increasing to decreasing at $c$.
2. If $f$ is strictly increasing on $[0, 1]$, then $f'(x) > 0$ for every $x$ in $(0, 1)$.
3. A positive derivative on $(-\infty, 0)$ and on $(0, \infty)$ implies $f$ is increasing on $(-\infty, \infty)$, provided $f$ is defined at $0$.
4. If $f'$ changes from negative to positive at $c$, then $f(c)$ is a local minimum even if $f'(c)$ does not exist.

### Question 6

$f(x) = \dfrac{x}{x^2 + 1}$. Find $f'(x)$, the intervals of increase and decrease, and the absolute maximum and minimum on $\mathbb{R}$, if they exist.

### Question 7

The derivative of a function is $f'(x) = (x - 2)^2(x + 1)$. You are not given $f$.

1. Find the critical points.
2. Classify each by the first derivative test.
3. On which intervals is $f$ increasing?

### Question 8

$f(x) = e^{-x^2}$. Without a full sketch, determine the intervals of increase and decrease and the absolute maximum value.

### Question 9

A population model is $P(t) = \dfrac{100}{1 + 4e^{-t}}$ for $t \ge 0$. Show that $P$ is increasing, and find $\lim_{t \to \infty} P(t)$. Does $P$ have a maximum value on $[0, \infty)$?

### Question 10

$f(x) = \ln(x^2 + 1) - x$ on $\mathbb{R}$. Find the critical points and classify them. Then decide whether $f$ has an absolute maximum.

---

## Answers

### Answer 1

$f'(x) = 3x^2 - 12x + 9 = 3(x^2 - 4x + 3) = 3(x - 1)(x - 3)$. The critical points are $x = 1$ and $x = 3$.

On $(-\infty, 1)$, both factors are negative, so $f' > 0$. On $(1, 3)$, $(x - 1) > 0$ and $(x - 3) < 0$, so $f' < 0$. On $(3, \infty)$, both factors are positive, so $f' > 0$.

$f$ is increasing on $(-\infty, 1]$ and on $[3, \infty)$, and decreasing on $[1, 3]$. At $x = 1$, $f'$ changes from $+$ to $-$, a local maximum: $f(1) = 1 - 6 + 9 + 1 = 5$. At $x = 3$, $f'$ changes from $-$ to $+$, a local minimum: $f(3) = 27 - 54 + 27 + 1 = 1$.

### Answer 2

$f'(x) = 4x^3 - 12x^2 = 4x^2(x - 3)$. The critical points are $x = 0$ and $x = 3$.

The factor $4x^2$ is positive on both sides of $0$. The factor $(x - 3)$ is negative on both sides of $0$, since $0$ is far from $3$. So $f'$ is negative on $(-\infty, 0)$ and on $(0, 3)$. The sign does not change at $x = 0$. There is no local extremum there. The graph flattens and keeps falling.

On $(3, \infty)$, $f' > 0$. At $x = 3$, $f'$ changes from $-$ to $+$, a local minimum: $f(3) = 81 - 4(27) = 81 - 108 = -27$.

### Answer 3

$f'(x) = 1 - 1/x^2 = (x^2 - 1)/x^2$. On $(0, \infty)$ the denominator is positive, so the sign of $f'$ is the sign of $x^2 - 1$. Thus $f' < 0$ on $(0, 1)$ and $f' > 0$ on $(1, \infty)$.

The only critical point in the domain piece is $x = 1$. It changes from $-$ to $+$, a local minimum, $f(1) = 2$.

As $x \to 0^+$, $1/x \to +\infty$, so $f(x) \to +\infty$. As $x \to \infty$, $f(x) \to \infty$. The local minimum value $2$ is smaller than the values near both ends, and it is the only turning point, so it is the absolute minimum on $(0, \infty)$. There is no absolute maximum.

### Answer 4

Write $f(x) = x^{5/3} - 4x^{2/3}$. Then

$$
f'(x) = \frac{5}{3}x^{2/3} - 4\cdot\frac{2}{3}x^{-1/3} = \frac{5x - 8}{3x^{1/3}}
$$

after the common denominator $3x^{1/3}$. The derivative is zero when $5x - 8 = 0$, so $x = 8/5$, provided we are not at the undefined point. It is undefined at $x = 0$, which is in the domain. Both are critical points.

For $x < 0$, the denominator $x^{1/3}$ is negative and $5x - 8 < 0$, so $f' > 0$. For $0 < x < 8/5$, the denominator is positive and $5x - 8 < 0$, so $f' < 0$. For $x > 8/5$, both are positive, so $f' > 0$.

At $x = 0$, $f'$ changes from $+$ to $-$, a local maximum, $f(0) = 0$. At $x = 8/5$, $f'$ changes from $-$ to $+$, a local minimum.

### Answer 5

1. False. $f(x) = x^3$ has $f'(0) = 0$ and does not change from increasing to decreasing.
2. False. $f(x) = x^3$ on $[0, 1]$ is strictly increasing, and $f'(0) = 0$. The derivative need not be positive at every point. The counterexample’s zero is at the endpoint. Interior: $f(x) = x^3$ on $[-1, 1]$ is strictly increasing and $f'(0) = 0$ is interior. So even an interior zero of $f'$ is possible for a strictly increasing function.
3. False. Let $f(x) = -1/x$ for $x \neq 0$ and $f(0) = 0$. Then $f'(x) = 1/x^2 > 0$ on each side, but $f(-1) = 1 > 0 = f(0)$, so $f$ is not increasing on any interval that crosses $0$. The gap in the derivative’s domain, or a jump in the function, blocks the conclusion. Continuity on the whole interval is part of a correct global statement, and even continuity is not enough if you only know the sign on the pieces and the function drops across the hole. A continuous example needs a different construction. For this course the safe statement is: positive derivative on a single open interval implies increasing on that interval. Do not paste two intervals together across a point you did not check.
4. True. That is the first derivative test. Differentiability at $c$ is not required. The sign change of $f'$ is the information.

### Answer 6

$$
f'(x) = \frac{(1)(x^2 + 1) - x(2x)}{(x^2 + 1)^2} = \frac{1 - x^2}{(x^2 + 1)^2}
$$

The denominator is always positive. So $f' > 0$ on $(-1, 1)$ and $f' < 0$ on $(-\infty, -1)$ and on $(1, \infty)$. Critical points: $x = \pm 1$.

At $x = -1$, $f'$ changes from $-$ to $+$, a local minimum, $f(-1) = -1/2$. At $x = 1$, $f'$ changes from $+$ to $-$, a local maximum, $f(1) = 1/2$.

As $x \to \pm\infty$, $f(x) \to 0$. The local maximum $1/2$ is the absolute maximum, and the local minimum $-1/2$ is the absolute minimum, because the graph comes from $0$, falls to $-1/2$, rises to $1/2$, and returns to $0$.

### Answer 7

1. $f'(x) = 0$ at $x = 2$ and $x = -1$.
2. The factor $(x - 2)^2$ does not change sign at $x = 2$. It is nonnegative everywhere. The factor $(x + 1)$ is negative on both sides of $x = 2$, since $2 \neq -1$. So $f'$ is negative on both sides of $x = 2$. No local extremum at $x = 2$.

At $x = -1$, $(x - 2)^2 > 0$. The factor $(x + 1)$ changes from negative to positive. So $f'$ changes from $-$ to $+$, a local minimum.

3. $f' > 0$ only when $x + 1 > 0$, because the square factor is positive elsewhere and zero at $x = 2$. So $f$ is increasing on $[-1, \infty)$. On $(-\infty, -1]$ it is decreasing. The flat point $x = 2$ does not create a decrease.

### Answer 8

$f'(x) = e^{-x^2}\cdot(-2x) = -2x e^{-x^2}$. The exponential is always positive, so the sign of $f'$ is the sign of $-x$. Thus $f' > 0$ on $(-\infty, 0)$ and $f' < 0$ on $(0, \infty)$.

$f$ increases on $(-\infty, 0]$ and decreases on $[0, \infty)$. The only critical point $x = 0$ is an absolute maximum, because it is the unique peak. The value is $f(0) = 1$. There is no absolute minimum: $f(x) \to 0$ as $\lvert x \rvert \to \infty$ and $f(x) > 0$ everywhere.

### Answer 9

$$
P'(t) = 100\cdot\frac{0 - 4e^{-t}(-1)}{(1 + 4e^{-t})^2} = \frac{400 e^{-t}}{(1 + 4e^{-t})^2}
$$

The numerator and the denominator are positive for every real $t$. So $P'(t) > 0$ and $P$ is increasing on $[0, \infty)$.

As $t \to \infty$, $e^{-t} \to 0$, so $P(t) \to 100/(1 + 0) = 100$. The population approaches $100$ and never reaches it, because $4e^{-t} > 0$. An increasing function that approaches $100$ from below has no maximum value on $[0, \infty)$. Every later time gives a larger population, still less than $100$.

### Answer 10

$f'(x) = \dfrac{2x}{x^2 + 1} - 1 = \dfrac{2x - (x^2 + 1)}{x^2 + 1} = \dfrac{-x^2 + 2x - 1}{x^2 + 1} = \dfrac{-(x - 1)^2}{x^2 + 1}$.

The denominator is positive. The numerator is negative for $x \neq 1$ and zero at $x = 1$. So $f'(x) < 0$ on both sides of $x = 1$. The only critical point is not a local extremum. $f$ is strictly decreasing on $\mathbb{R}$.

A strictly decreasing function that is not constant has no absolute maximum and no absolute minimum on $\mathbb{R}$. As $x \to -\infty$, $-x \to +\infty$ dominates $\ln(x^2 + 1)$, so $f(x) \to +\infty$. As $x \to \infty$, $f(x) \to -\infty$. The values are all of $\mathbb{R}$, with no largest value.
