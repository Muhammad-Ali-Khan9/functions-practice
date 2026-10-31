# Section 4.1 — Extreme Values of Functions

An extreme value is a highest or lowest output. On a closed interval, a continuous function always attains both, and the candidates are a short list: the endpoints, and the interior points where the derivative is zero or does not exist. That list is the whole method.

## Absolute and local extrema

$f(c)$ is an absolute maximum on a set $D$ when $f(c) \ge f(x)$ for every $x$ in $D$. It is an absolute minimum when $f(c) \le f(x)$ for every $x$ in $D$. These compare the point with the entire set you were given, not with a neighborhood.

$f(c)$ is a local maximum when the inequality holds on some open interval around $c$ that sits inside the domain. A local minimum is the same idea with the inequality reversed. An endpoint of a closed interval can be an absolute extremum. It is not a local extremum in the interior sense, because a local test needs points of the domain on both sides.

The Extreme Value Theorem says that if $f$ is continuous on the closed, bounded interval $[a, b]$, then $f$ attains an absolute maximum and an absolute minimum on that interval. Continuity is required. $f(x) = 1/x$ on $(0, 1]$ has no absolute maximum. The interval is not closed at $0$, and the function is not continuous on any closed interval that includes $0$. A continuous function on an open interval can also fail: $f(x) = x$ on $(0, 1)$ gets arbitrarily close to $0$ and to $1$ and never reaches either.

## Critical points

Fermat’s theorem: if $f$ has a local extremum at an interior point $c$, and if $f'(c)$ exists, then $f'(c) = 0$.

The useful restatement is about where to look. An interior local extremum can occur only at a critical point: a point of the domain where $f'(c) = 0$ or where $f'(c)$ does not exist.

The converse is false. $f(x) = x^3$ has $f'(0) = 0$ and no local extremum there. The graph flattens and keeps rising. $f(x) = x^{1/3}$ has a vertical tangent at $0$, so $f'(0)$ does not exist, and there is still no local extremum. A critical point is a candidate. The function values decide whether it wins.

Endpoints are not called critical points. They are still candidates for the absolute extrema on a closed interval, because Fermat’s theorem does not apply at an endpoint.

## The closed-interval method

To find the absolute maximum and minimum of a continuous function on $[a, b]$:

1. Find every critical point in $(a, b)$.
2. Evaluate $f$ at those critical points and at $a$ and $b$.
3. The largest value is the absolute maximum. The smallest is the absolute minimum.

You compare function values, not derivative values. A critical point where $f'$ changes from positive to negative is often the maximum, but on a closed interval an endpoint can still be higher. The derivative test of section 4.3 classifies local extrema. This section only needs the list of values.

## Two examples

$f(x) = x^3 - 3x$ on $[-2, 2]$. Then $f'(x) = 3x^2 - 3 = 3(x - 1)(x + 1)$, so the critical points in the interval are $x = -1$ and $x = 1$.

$$
f(-2) = -2, \quad f(-1) = 2, \quad f(1) = -2, \quad f(2) = 2
$$

The absolute maximum is $2$, attained at both $x = -1$ and $x = 2$. The absolute minimum is $-2$, attained at both $x = 1$ and $x = -2$.

$g(x) = \lvert x - 1 \rvert$ on $[0, 3]$ is continuous. It is not differentiable at $x = 1$, because the one-sided derivatives are $-1$ and $1$. So $x = 1$ is a critical point. The values are $g(0) = 1$, $g(1) = 0$, and $g(3) = 2$. The absolute minimum is $0$. The absolute maximum is $2$, at the right endpoint, not at the corner.

## Mistakes that change the answer

- Treating $f'(c) = 0$ as proof of a maximum or a minimum.
- Forgetting a point where $f'$ does not exist. Absolute value, cusps, and vertical tangents hide there.
- Comparing the derivatives instead of the function values.
- Applying the Extreme Value Theorem on an open interval, or on a closed interval where the function blows up.
- Listing an endpoint as a critical point, then forgetting to evaluate it anyway.

---

## Questions

### Question 1

Find the absolute maximum and minimum of $f(x) = x^4 - 8x^2$ on $[-3, 1]$. Identify every $x$ where each value is attained.

### Question 2

Find the absolute extrema of $f(x) = x^{2/3}$ on $[-1, 8]$. Explain why $x = 0$ has to be checked even though it is not a stationary point.

### Question 3

Does $f(x) = 1/(x - 1)$ attain an absolute maximum or minimum on $[0, 2]$? On $[2, 4]$? Use the hypotheses of the Extreme Value Theorem, not a graph from a calculator.

### Question 4

True or false, with a reason or a counterexample.

1. If $f'(c) = 0$, then $f$ has a local extremum at $c$.
2. If $f$ has a local extremum at an interior point $c$ and $f'(c)$ exists, then $f'(c) = 0$.
3. A continuous function on $(0, 1)$ attains an absolute maximum.
4. An absolute maximum on $[a, b]$ is also a local maximum when it occurs at an interior point.

### Question 5

$f(x) = \sin x$ on $[0, 5\pi/4]$. Find the absolute extrema and the $x$-values. Use exact values.

### Question 6

$f(x) = xe^{-x}$ on $[0, 4]$. Find the critical points and the absolute extrema. You may use the product rule.

### Question 7

The function $f(x) = \begin{cases} x^2 & 0 \le x < 1 \\ 2 - x & 1 \le x \le 2 \end{cases}$ is continuous on $[0, 2]$. Find its absolute maximum and minimum. Is $x = 1$ a critical point?

### Question 8

Show that $f(x) = x^3 + x - 1$ has exactly one real root, by combining the Intermediate Value Theorem with a statement about critical points. You do not need to find the root.

### Question 9

A particle’s position is $s(t) = t^3 - 6t^2 + 9t + 1$ for $0 \le t \le 4$. Find the greatest and least positions. Then say whether the greatest position is the same event as the greatest speed.

### Question 10

$f(x) = \ln x$ on $[1/e,\ e]$. Find the absolute extrema. Why does the closed-interval method not apply to $\ln x$ on $(0, \infty)$, even though the derivative $1/x$ is never zero?

---

## Answers

### Answer 1

$f'(x) = 4x^3 - 16x = 4x(x^2 - 4) = 4x(x - 2)(x + 2)$. The roots are $x = -2$, $x = 0$, and $x = 2$. Only $x = -2$ and $x = 0$ lie in $(-3, 1)$.

$$
\begin{aligned}
f(-3) &= 81 - 8(9) = 81 - 72 = 9 \\
f(-2) &= 16 - 8(4) = 16 - 32 = -16 \\
f(0) &= 0 \\
f(1) &= 1 - 8 = -7
\end{aligned}
$$

The absolute maximum is $9$ at $x = -3$. The absolute minimum is $-16$ at $x = -2$. The critical point $x = 0$ is neither.

### Answer 2

$f(x) = (x^{1/3})^2$. For $x \neq 0$,

$$
f'(x) = \frac{2}{3} x^{-1/3} = \frac{2}{3\sqrt[3]{x}}
$$

This is never zero. It is undefined at $x = 0$, and $0$ is in the domain, so $x = 0$ is a critical point. The one-sided picture is a cusp: the derivative goes to $-\infty$ from the left and $+\infty$ from the right.

$$
f(-1) = 1, \qquad f(0) = 0, \qquad f(8) = 4
$$

The absolute minimum is $0$ at $x = 0$. The absolute maximum is $4$ at $x = 8$.

### Answer 3

On $[0, 2]$ the function is undefined at $x = 1$, so it is not continuous on the closed interval. The Extreme Value Theorem does not apply. As $x \to 1^-$, $f(x) \to -\infty$, and as $x \to 1^+$, $f(x) \to +\infty$. There is no absolute maximum and no absolute minimum.

On $[2, 4]$ the function is continuous: the denominator runs from $1$ to $3$ and never vanishes. The theorem guarantees both extrema. Here $f'(x) = -1/(x - 1)^2 < 0$, so $f$ is decreasing. The maximum is $f(2) = 1$ and the minimum is $f(4) = 1/3$. There is no interior critical point. Both extrema are at endpoints.

### Answer 4

1. False. $f(x) = x^3$ has $f'(0) = 0$ and is strictly increasing, so $0$ is not a local extremum.
2. True. This is Fermat’s theorem.
3. False. $f(x) = x$ on $(0, 1)$ is continuous and has no absolute maximum. The values get arbitrarily close to $1$ and never reach it. The Extreme Value Theorem needs a closed bounded interval.
4. True. An interior absolute maximum is greater than or equal to every value on $[a, b]$, hence greater than or equal to every value in a small neighborhood. It is a local maximum.

### Answer 5

$f'(x) = \cos x = 0$ when $x = \pi/2$ inside $(0,\ 5\pi/4)$. The next zero of cosine is $3\pi/2$, which is larger than $5\pi/4 = 1.25\pi$, so it is outside the interval.

$$
f(0) = 0, \qquad f(\pi/2) = 1, \qquad f(5\pi/4) = \sin(5\pi/4) = -\sqrt{2}/2
$$

The absolute maximum is $1$ at $x = \pi/2$. The absolute minimum is $-\sqrt{2}/2$ at $x = 5\pi/4$.

### Answer 6

$f'(x) = e^{-x} - xe^{-x} = e^{-x}(1 - x)$. The exponential is never zero, so the only critical point is $x = 1$, and it lies in $(0, 4)$.

$$
f(0) = 0, \qquad f(1) = e^{-1} = \frac{1}{e}, \qquad f(4) = 4e^{-4}
$$

Since $e^4 > 16$, we have $4e^{-4} < 4/16 = 1/4 < 1/e$. Also $4e^{-4} > 0$. The absolute maximum is $1/e$ at $x = 1$. The absolute minimum is $0$ at $x = 0$.

### Answer 7

On $[0, 1)$, $f'(x) = 2x$, which is zero only at $x = 0$. The point $x = 0$ is an endpoint, not an interior critical point. On $(1, 2]$, $f'(x) = -1$, never zero. At $x = 1$ the left-hand derivative is $2$ and the right-hand derivative is $-1$, so $f'(1)$ does not exist. The point is in the domain, so it is a critical point.

$$
f(0) = 0, \qquad f(1) = 1, \qquad f(2) = 0
$$

Check the pieces: $x^2$ on $[0, 1]$ runs from $0$ to $1$, and $2 - x$ on $[1, 2]$ runs from $1$ down to $0$. The absolute maximum is $1$ at $x = 1$. The absolute minimum is $0$, at both endpoints.

### Answer 8

$f(0) = -1 < 0$ and $f(1) = 1 > 0$. Continuity and the Intermediate Value Theorem give at least one root in $(0, 1)$.

$f'(x) = 3x^2 + 1 \ge 1 > 0$ for every $x$. There is no critical point, and $f$ is strictly increasing on $\mathbb{R}$. A strictly increasing continuous function crosses zero only once. So the root is unique.

### Answer 9

$s'(t) = 3t^2 - 12t + 9 = 3(t^2 - 4t + 3) = 3(t - 1)(t - 3)$. The critical points in $(0, 4)$ are $t = 1$ and $t = 3$.

$$
\begin{aligned}
s(0) &= 1 \\
s(1) &= 1 - 6 + 9 + 1 = 5 \\
s(3) &= 27 - 54 + 27 + 1 = 1 \\
s(4) &= 64 - 96 + 36 + 1 = 5
\end{aligned}
$$

The greatest position is $5$, at $t = 1$ and at $t = 4$. The least position is $1$, at $t = 0$ and at $t = 3$.

Speed is $\lvert s'(t) \rvert$. At the greatest position $t = 1$, the velocity is zero, so the speed is zero. The greatest position is not the greatest speed. Speed is largest where $\lvert v(t) \rvert$ is largest, which for this cubic velocity happens at an endpoint of the velocity’s own range. At $t = 4$, $s'(4) = 3(16) - 48 + 9 = 9$, so the speed is $9$. That is larger than the speed $0$ at the high points of position.

### Answer 10

$f'(x) = 1/x \neq 0$ on $[1/e,\ e]$. There is no interior critical point.

$$
f(1/e) = -1, \qquad f(e) = 1
$$

The absolute minimum is $-1$ at $x = 1/e$. The absolute maximum is $1$ at $x = e$. The function is increasing, so the endpoints decide.

On $(0, \infty)$ the interval is not closed and not bounded. $\ln x \to -\infty$ as $x \to 0^+$ and $\ln x \to \infty$ as $x \to \infty$. There is no absolute maximum and no absolute minimum, which is compatible with a derivative that never vanishes. The closed-interval method needs the Extreme Value Theorem’s hypotheses.
