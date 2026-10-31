# Section 5.1 — Area and Estimating with Finite Sums

Area under a positive curve is not a new primitive idea. It is the limit of areas of rectangles. Before the limit, a finite number of rectangles gives an estimate. The same sums estimate distance traveled when the curve is a velocity graph.

## Rectangles on a partition

Cut $[a, b]$ into $n$ subintervals, not necessarily of equal length. On the $k$th subinterval, pick a sample height $f(x_k^*)$ and form the rectangle of that height and of width $\Delta x_k$. The sum of the rectangle areas is

$$
\sum_{k = 1}^{n} f(x_k^*)\,\Delta x_k
$$

If $f$ is positive, this estimates the area under the curve. If $f$ changes sign, rectangles below the axis contribute negative terms. The sum estimates signed area: area above the axis minus area below it.

## Left, right, and midpoint

On equal subintervals of width $\Delta x = (b - a)/n$, the sample point can be chosen systematically.

- Left-endpoint sum: height from the left end of each subinterval.
- Right-endpoint sum: height from the right end.
- Midpoint sum: height from the center of each subinterval.

For an increasing positive function, the left sum undershoots the area and the right sum overshoots it. Each rectangle on the left misses a thin region above it, and each rectangle on the right covers a thin region above the curve. For a decreasing function the inequalities reverse. The midpoint sum has no such one-sided guarantee from monotonicity alone, and it is often the more accurate of the three for a smooth curve.

The error of the left and right sums on a monotone function is at most one rectangle of height $\lvert f(b) - f(a) \rvert$ and width $\Delta x$. Refining the partition, which means increasing $n$, drives that error to $0$.

## Distance from velocity

If $v(t) \ge 0$, the area under $y = v(t)$ from $t = a$ to $t = b$ is the distance traveled. A rectangle $v(t_k^*)\Delta t$ is a constant-velocity estimate of displacement on a short interval. Summing them is the same idea as the area sum. If velocity changes sign, the signed sum is net displacement, not total distance. Total distance uses $\lvert v(t) \rvert$.

## A numerical check

Estimate $\int_0^2 x^2\,dx$ with $n = 4$ equal parts, before that integral notation is official. Here $\Delta x = 1/2$. The partition points are $0,\ 1/2,\ 1,\ 3/2,\ 2$.

Left heights: $0,\ 1/4,\ 1,\ 9/4$. Sum:

$$
\frac{1}{2}\left(0 + \frac{1}{4} + 1 + \frac{9}{4}\right) = \frac{1}{2}\cdot\frac{14}{4} = \frac{7}{4} = 1.75
$$

Right heights: $1/4,\ 1,\ 9/4,\ 4$. Sum:

$$
\frac{1}{2}\left(\frac{1}{4} + 1 + \frac{9}{4} + 4\right) = \frac{1}{2}\cdot\frac{30}{4} = \frac{15}{4} = 3.75
$$

The exact area, from the antiderivative later, is $8/3 \approx 2.667$. The left sum is low and the right sum is high, as predicted for an increasing function. Their average is $2.75$, already close.

## Mistakes that change the answer

- Using $n$ in the width and then forgetting to multiply by $\Delta x$. A sum of function values is not an area.
- Taking left endpoints on an increasing function and calling the estimate too big.
- Adding areas of rectangles that cross below the axis as if they were positive, when the question asks for net area.
- Confusing net displacement with total distance when velocity is negative on part of the interval.

---

## Questions

### Question 1

Estimate the area under $y = x$ on $[0, 2]$ with $n = 4$ equal subintervals, using left endpoints and using right endpoints. Compare both with the exact triangular area.

### Question 2

$v(t) = 4 - t$ on $[0, 6]$, in meters per second.

1. Estimate the net displacement with a right-endpoint sum, $n = 3$.
2. The exact net displacement is the signed area. Compute it from geometry.
3. Explain why the total distance traveled is larger than the absolute value of the net displacement.

### Question 3

For $f(x) = 1/x$ on $[1, 5]$, with $n = 4$ equal subintervals, compute the left-endpoint sum and the right-endpoint sum. Which is larger, and why does the monotone rule apply?

### Question 4

A midpoint sum for $f(x) = x^2$ on $[0, 2]$ with $n = 2$ uses the midpoints $x = 1/2$ and $x = 3/2$. Compute it. Is it above or below the exact value $8/3$?

### Question 5

True or false, with a reason.

1. Doubling $n$ always halves the left-sum error for every continuous function.
2. For a positive decreasing function, the right-endpoint sum is less than the area.
3. A Riemann sum can be negative.
4. The width $\Delta x$ depends on the sample point chosen inside the subinterval.

### Question 6

The table gives a velocity in m/s at equal $2$-second intervals.

| $t$ | $0$ | $2$ | $4$ | $6$ | $8$ |
| --- | --- | --- | --- | --- | --- |
| $v$ | $3$ | $5$ | $6$ | $4$ | $2$ |

Estimate the distance traveled from $t = 0$ to $t = 8$ with a left-endpoint sum and with a right-endpoint sum. There are four subintervals. Why is this only an estimate?

### Question 7

Show that for $f(x) = c$, a constant, every Riemann sum on $[a, b]$ equals $c(b - a)$, no matter how the partition and the sample points are chosen. What area is that?

### Question 8

On $[0, 1]$, compare the left and right sums for $f(x) = 1 - x$ with $n = 4$. Then explain the relation between these sums and the sums for $g(x) = x$ on the same interval.

### Question 9

A car’s velocity is positive and increasing. A left-endpoint estimate with $\Delta t = 0.5\,\mathrm{s}$ gives $40\,\mathrm{m}$ of distance over a $10\,\mathrm{s}$ interval. A right-endpoint estimate gives $46\,\mathrm{m}$. What can you say about the true distance? What is the maximum possible error of either estimate, using the monotone-function bound described in the notes?

### Question 10

Why does the area of the triangles that sit between an increasing curve and its left-endpoint rectangles add up to at most $\lvert f(b) - f(a) \rvert \Delta x$, rather than $n$ times that quantity? Use one picture in words for two adjacent rectangles.

---

## Answers

### Answer 1

$\Delta x = 2/4 = 1/2$. Left heights at $0,\ 1/2,\ 1,\ 3/2$:

$$
L = \frac{1}{2}\left(0 + \frac{1}{2} + 1 + \frac{3}{2}\right) = \frac{1}{2}\cdot 3 = \frac{3}{2}
$$

Right heights at $1/2,\ 1,\ 3/2,\ 2$:

$$
R = \frac{1}{2}\left(\frac{1}{2} + 1 + \frac{3}{2} + 2\right) = \frac{1}{2}\cdot 5 = \frac{5}{2}
$$

The exact area of the triangle is $\tfrac{1}{2}(2)(2) = 2$. The left sum is short by $1/2$. The right sum is high by $1/2$.

### Answer 2

1. $\Delta t = 2$. Right endpoints $t = 2, 4, 6$ give velocities $2,\ 0,\ -2$.

$$
R = 2(2 + 0 + (-2)) = 0
$$

2. The graph is a line from $(0, 4)$ to $(6, -2)$. It crosses zero at $t = 4$. The triangle above the axis has base $4$ and height $4$, area $8$. The triangle below has base $2$ and height $2$, signed area $-2$. Net displacement is $6\,\mathrm{m}$. The right sum $0$ is a coarse estimate of $6$.

3. Total distance adds the absolute areas: $8 + 2 = 10\,\mathrm{m}$. The object travels $8\,\mathrm{m}$ forward and $2\,\mathrm{m}$ backward. Net displacement cancels the backward piece against part of the forward piece. Distance does not cancel.

### Answer 3

$\Delta x = 1$. Left heights at $1, 2, 3, 4$:

$$
L = 1 + \frac{1}{2} + \frac{1}{3} + \frac{1}{4} = \frac{12 + 6 + 4 + 3}{12} = \frac{25}{12}
$$

Right heights at $2, 3, 4, 5$:

$$
R = \frac{1}{2} + \frac{1}{3} + \frac{1}{4} + \frac{1}{5} = \frac{30 + 20 + 15 + 12}{60} = \frac{77}{60}
$$

$25/12 = 125/60 > 77/60$, so the left sum is larger. The function $1/x$ is decreasing, so left rectangles contain the region under the curve and right rectangles sit inside it.

### Answer 4

$\Delta x = 1$. Heights $(1/2)^2 = 1/4$ and $(3/2)^2 = 9/4$.

$$
M = 1\left(\frac{1}{4} + \frac{9}{4}\right) = \frac{10}{4} = 2.5
$$

And $8/3 \approx 2.667$. The midpoint sum is below the exact area. For $x^2$ on $[0, 2]$ the curve is concave up, and midpoint rectangles for a concave-up graph under-estimate. The notes did not claim the midpoint sum lies on a particular side from monotonicity alone. This computation is the check.

### Answer 5

1. False as a universal claim. The error bound for a monotone function is proportional to $\Delta x$, hence to $1/n$, so doubling $n$ halves that bound. The actual error need not be exactly half for a general continuous function, and the bound itself is not the error. A constant function has error zero for every $n$, so doubling $n$ does not halve a zero error in a meaningful way, and it certainly does not produce a new error.
2. True. On a decreasing positive function each right rectangle lies under the curve.
3. True. If the sample heights are negative, or if negative heights outweigh positive ones, the sum is negative. Signed area allows this.
4. False. $\Delta x_k$ is the length of the subinterval. The sample point chooses the height, not the width.

### Answer 6

Four intervals, $\Delta t = 2$. Left uses $t = 0, 2, 4, 6$:

$$
L = 2(3 + 5 + 6 + 4) = 36\,\mathrm{m}
$$

Right uses $t = 2, 4, 6, 8$:

$$
R = 2(5 + 6 + 4 + 2) = 34\,\mathrm{m}
$$

The velocity is known only at the sample times. Between them it could curve. Both sums pretend the velocity is constant on each $2$-second block. They are estimates of the integral of a continuous velocity that passes through these values, not a measurement of every intermediate speed.

### Answer 7

Every sample height is $c$, so

$$
\sum_{k = 1}^{n} c\,\Delta x_k = c\sum_{k = 1}^{n} \Delta x_k = c(b - a)
$$

The rectangles form a single rectangle of height $c$ and width $b - a$, regardless of the cuts. That is the area of the rectangle under the horizontal line $y = c$.

### Answer 8

$\Delta x = 1/4$. Left heights of $1 - x$ at $0,\ 1/4,\ 1/2,\ 3/4$ are $1,\ 3/4,\ 1/2,\ 1/4$.

$$
L = \frac{1}{4}\left(1 + \frac{3}{4} + \frac{1}{2} + \frac{1}{4}\right) = \frac{1}{4}\cdot\frac{10}{4} = \frac{10}{16} = \frac{5}{8}
$$

Right heights at $1/4,\ 1/2,\ 3/4,\ 1$ are $3/4,\ 1/2,\ 1/4,\ 0$.

$$
R = \frac{1}{4}\left(\frac{3}{4} + \frac{1}{2} + \frac{1}{4} + 0\right) = \frac{1}{4}\cdot\frac{6}{4} = \frac{3}{8}
$$

For $g(x) = x$, the left heights are the right heights of $1 - x$ reversed in order, and the sums match: the left sum of $x$ is $3/8$ and the right sum of $x$ is $5/8$. In general $1 - x$ on $[0, 1]$ is the decreasing twin of $x$, and left and right swap roles.

### Answer 9

The function is increasing, so the left sum is too small and the right sum is too big. The true distance $D$ satisfies $40 \le D \le 46$. The gap between them is $6\,\mathrm{m}$. Each estimate is off by at most that gap, because the true value lies between them. The notes’ bound $\lvert f(b) - f(a) \rvert \Delta t$ is exactly the difference between the left and right sums for equal spacing: each subinterval contributes an error that telescopes to one rectangle of width $\Delta t$ and height equal to the total rise. Here that difference is $6$, so the bound is $6\,\mathrm{m}$. You cannot say the error is $3\,\mathrm{m}$ without more information. You can say it is at most $6\,\mathrm{m}$.

### Answer 10

Stack the thin error regions from the subintervals. For an increasing function, the leftover above the left rectangles on one subinterval has height at most the rise of $f$ on that subinterval. Slide those leftovers horizontally into a single rectangle of width $\Delta x$. Their heights add up to the total rise $f(b) - f(a)$, not $n$ copies of the total rise. Adjacent leftovers do not each have the full height $f(b) - f(a)$. They share that rise among them. The combined error region fits in one rectangle of area $\lvert f(b) - f(a) \rvert \Delta x$.
