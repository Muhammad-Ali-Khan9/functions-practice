# Section 4.6 — Applied Optimization

An optimization problem asks for the largest or smallest value of a quantity that is constrained by geometry, cost, or a physical limit. The calculus step is short once the quantity is a function of one variable on an interval you can name. Most of the work is the translation.

## The setup

1. Draw the diagram and name the variables.
2. Write the quantity $Q$ to be maximized or minimized.
3. Write the constraint that relates the variables.
4. Use the constraint to make $Q$ a function of one free variable.
5. State the domain. Closed intervals come from “at least” and “at most.” Open endpoints appear when a length can approach $0$ but cannot be $0$, or when a variable can grow without bound.
6. Find the critical points in the domain and compare values, including endpoints when the interval is closed. On an open interval, use the first derivative test or the limits at the ends.

A critical point is not automatically the answer. If the interval is closed, an endpoint can win. If there is one critical point and the first derivative changes from positive to negative, that critical point is the maximum on the interval.

## Geometry you will reuse

A rectangle inscribed in a semicircle, a box with a square base, a can, a fence along a river, and the closest point on a curve all become one-variable problems after the constraint replaces one variable.

Distances are easiest after you minimize the square of the distance. The square root is increasing, so $D$ and $D^2$ have their minima at the same input. Differentiating $D^2$ avoids the chain rule on the square root until you need the distance itself.

If two angles or two similar triangles appear, write the relation before you differentiate. Inventing a formula with the wrong similar-triangle ratio is the usual source of a clean, wrong critical point.

## A closed-interval example

A rectangle has its base on the $x$-axis and its upper vertices on $y = 4 - x^2$, with $0 \le x \le 2$ as the right half-width. The width is $2x$ and the height is $4 - x^2$, so

$$
A(x) = 2x(4 - x^2) = 8x - 2x^3, \qquad 0 \le x \le 2
$$

$A'(x) = 8 - 6x^2 = 0$ when $x^2 = 4/3$, so $x = 2/\sqrt{3}$ in the interval. The negative root is outside.

$$
A(0) = 0, \qquad A\left(\frac{2}{\sqrt{3}}\right) = 8\cdot\frac{2}{\sqrt{3}} - 2\cdot\frac{8}{3\sqrt{3}} = \frac{16}{\sqrt{3}} - \frac{16}{3\sqrt{3}} = \frac{32}{3\sqrt{3}} = \frac{32\sqrt{3}}{9}
$$

and $A(2) = 0$. The maximum area is $32\sqrt{3}/9$.

## An open-interval example

Find the point on $y = \sqrt{x}$ closest to $(1, 0)$. For a point $(x, \sqrt{x})$ with $x \ge 0$,

$$
D^2 = (x - 1)^2 + x
$$

Let $S(x) = (x - 1)^2 + x$. Then $S'(x) = 2(x - 1) + 1 = 2x - 1$, so $x = 1/2$. And $S''(x) = 2 > 0$, so this critical point is a minimum. The point is $\bigl(1/2,\ \sqrt{1/2}\bigr) = \bigl(1/2,\ \sqrt{2}/2\bigr)$. As $x \to \infty$, $S(x) \to \infty$, and $S(0) = 1$ is larger than $S(1/2) = 1/4 + 1/2 = 3/4$, so the critical point beats the endpoint as well.

## Mistakes that change the answer

- Maximizing the constraint instead of the quantity the question named.
- Forgetting the domain, then accepting a critical point that makes a length negative.
- Reporting the $x$-value when the question asks for the maximum area, or reporting the area when it asks for the dimensions.
- Minimizing distance with a derivative of $\sqrt{\ }$ and losing the chain-rule factor, instead of minimizing the square.
- Assuming the critical point is a maximum because the problem says “maximum.” Check the sign or the endpoints.

---

## Questions

### Question 1

A farmer has $120\,\mathrm{m}$ of fencing for a rectangular pasture along a straight river. No fence is needed on the river side. Find the dimensions that maximize the area, and the maximum area.

### Question 2

An open box is made by cutting equal squares of side $x$ from the corners of a $12\,\mathrm{cm}$ by $12\,\mathrm{cm}$ sheet and folding up the sides. Find $x$ that maximizes the volume, and the maximum volume.

### Question 3

Find the point on the line $y = 2x + 3$ closest to the origin. Give the point and the distance.

### Question 4

A rectangle is inscribed in a semicircle of radius $2$, with one side along the diameter. Find the maximum area.

### Question 5

A cylindrical can must hold $250\pi\,\mathrm{cm}^3$. The material costs are equal on the side and the two bases, so minimize the surface area. Find the radius and height that do this, and the relation between $h$ and $r$.

### Question 6

Two posts are $6\,\mathrm{m}$ and $8\,\mathrm{m}$ tall and stand $10\,\mathrm{m}$ apart. A wire runs from the top of one post to a point on the ground between them and back up to the top of the other post. Where should the ground point be to minimize the total wire length?

### Question 7

Find the maximum area of a rectangle inscribed under $y = e^{-x}$ for $0 \le x < \infty$, with one corner at the origin, one on the positive $x$-axis, and the opposite corner on the curve. The width is $x$ and the height is $e^{-x}$.

### Question 8

A Norman window is a rectangle of width $2r$ and height $h$, with a semicircle of radius $r$ on top. The perimeter includes the two vertical sides, the bottom, the diameter between the rectangle and the semicircle, and the semicircular arc. The total perimeter is a fixed number $P$. Show that the area is maximized when $h = r$. Then take $P = 4 + \pi$ and find that common value.

### Question 9

The range of a projectile launched at speed $v_0$ from level ground is $R(\theta) = (v_0^2 \sin 2\theta)/g$ for $0 \le \theta \le \pi/2$. Find the angle that maximizes the range, and the maximum range. This is an optimization of a function you already met in kinematics.

### Question 10

A company sells $x$ items at price $p = 50 - 0.1x$ dollars, and the cost of producing $x$ items is $C(x) = 100 + 10x$ dollars, for $0 \le x \le 400$.

1. Write the profit $P(x)$.
2. Find the production level that maximizes profit, and the maximum profit.
3. Why is the endpoint $x = 400$ not the answer even though more items might sound better?

---

## Answers

### Answer 1

Let the side perpendicular to the river be $x$, and the side parallel to the river be $y$. The fence used is $2x + y = 120$, so $y = 120 - 2x$. The area is $A = xy = x(120 - 2x) = 120x - 2x^2$, with $0 \le x \le 60$.

$A' = 120 - 4x = 0$ gives $x = 30$. Then $y = 60$. And $A(0) = A(60) = 0$, while $A(30) = 1800$. The maximum area is $1800\,\mathrm{m}^2$, from a $30\,\mathrm{m}$ by $60\,\mathrm{m}$ rectangle, with the $60\,\mathrm{m}$ side along the river.

### Answer 2

The base of the box is $12 - 2x$ by $12 - 2x$, and the height is $x$. Need $x > 0$ and $12 - 2x > 0$, so $0 < x < 6$. Including the endpoints where the volume is zero, use $[0, 6]$.

$$
V(x) = x(12 - 2x)^2 = x\cdot 4(6 - x)^2 = 4x(6 - x)^2
$$

$$
V'(x) = 4\bigl[(6 - x)^2 + x\cdot 2(6 - x)(-1)\bigr] = 4(6 - x)\bigl[6 - x - 2x\bigr] = 4(6 - x)(6 - 3x)
$$

So $x = 6$ or $x = 2$. Both are in $[0, 6]$. $V(0) = 0$, $V(6) = 0$, and $V(2) = 2(8)^2 = 128$. The maximum volume is $128\,\mathrm{cm}^3$ when $x = 2\,\mathrm{cm}$.

### Answer 3

A point on the line is $(x,\ 2x + 3)$. Minimize $S(x) = x^2 + (2x + 3)^2$.

$$
S'(x) = 2x + 2(2x + 3)(2) = 2x + 8x + 12 = 10x + 12
$$

$S' = 0$ when $x = -6/5$. Then $y = 2(-6/5) + 3 = 3/5$. The point is $\bigl(-6/5,\ 3/5\bigr)$.

$$
D = \sqrt{\left(\frac{6}{5}\right)^2 + \left(\frac{3}{5}\right)^2} = \sqrt{\frac{36 + 9}{25}} = \sqrt{\frac{45}{25}} = \frac{3\sqrt{5}}{5}
$$

$S''(x) = 10 > 0$, so this critical point is a minimum. As $\lvert x \rvert \to \infty$, the distance grows, so it is the global closest point.

### Answer 4

Put the diameter on $[-2, 2]$. If the right half-width is $x$, the upper right corner is on the circle $x^2 + y^2 = 4$, so $y = \sqrt{4 - x^2}$. The rectangle has width $2x$ and height $y$, and $0 \le x \le 2$.

$$
A(x) = 2x\sqrt{4 - x^2}
$$

Maximize $S = A^2 = 4x^2(4 - x^2) = 16x^2 - 4x^4$, which has the same maximizer on $[0, 2]$.

$$
S' = 32x - 16x^3 = 16x(2 - x^2) = 0
$$

so $x = 0$ or $x = \sqrt{2}$. Then $y = \sqrt{4 - 2} = \sqrt{2}$. The area is $2\sqrt{2}\cdot\sqrt{2} = 4$. The endpoints give area $0$. The maximum area is $4$.

### Answer 5

$V = \pi r^2 h = 250\pi$, so $h = 250/r^2$. The surface area is

$$
A = 2\pi r^2 + 2\pi r h = 2\pi r^2 + 2\pi r\cdot\frac{250}{r^2} = 2\pi r^2 + \frac{500\pi}{r}
$$

for $r > 0$.

$$
A' = 4\pi r - \frac{500\pi}{r^2} = 0 \implies 4r^3 = 500 \implies r^3 = 125 \implies r = 5
$$

Then $h = 250/25 = 10$. So $h = 2r$. For a closed cylinder with equal material cost, the minimum surface area occurs when the height equals the diameter.

$A' < 0$ for $r < 5$ and $A' > 0$ for $r > 5$, so this critical point is a minimum. The second derivative $A'' = 4\pi + 1000\pi/r^3 > 0$ says the same thing.

### Answer 6

Let $x$ be the distance from the base of the $6\,\mathrm{m}$ post to the ground point, so the other piece of ground is $10 - x$, with $0 \le x \le 10$.

$$
L(x) = \sqrt{x^2 + 36} + \sqrt{(10 - x)^2 + 64}
$$

$$
L'(x) = \frac{x}{\sqrt{x^2 + 36}} - \frac{10 - x}{\sqrt{(10 - x)^2 + 64}}
$$

Set $L' = 0$:

$$
\frac{x}{\sqrt{x^2 + 36}} = \frac{10 - x}{\sqrt{(10 - x)^2 + 64}}
$$

Square both sides. The equation says the cosines of the angles with the vertical are equal, or, after squaring,

$$
x^2\bigl((10 - x)^2 + 64\bigr) = (10 - x)^2(x^2 + 36)
$$

$$
64x^2 = 36(10 - x)^2
$$

$$
8x = 6(10 - x) \quad \text{or} \quad 8x = -6(10 - x)
$$

The positive version, because both horizontal pieces are nonnegative, is $8x = 60 - 6x$, so $14x = 60$ and $x = 30/7\,\mathrm{m}$. The negative version gives a point outside the segment between the posts. The endpoints are longer: this interior critical point is the minimum because $L(x) \to$ the straight long paths at the ends and $L'$ changes from negative to positive. Reflection in the ground line is the geometric reason the angles with the ground match.

### Answer 7

$A(x) = xe^{-x}$ for $x \ge 0$. From section 4.4, $A'(x) = e^{-x}(1 - x)$, so the only critical point is $x = 1$, a maximum, $A(1) = 1/e$. As $x \to \infty$, $A(x) \to 0$, and $A(0) = 0$. The maximum area is $1/e$.

### Answer 8

Let the rectangle have width $2r$ and height $h$, so the semicircle of radius $r$ sits on the width. The perimeter includes the two heights, the bottom, the diameter, and the curved semicircle:

$$
P = 2h + 2r + \pi r
$$

The bottom and the diameter each contribute $2r$. So $2h = P - (2 + \pi)r$ and $h = \bigl(P - (2 + \pi)r\bigr)/2$, with $0 \le r \le P/(2 + \pi)$.

$$
A = 2rh + \tfrac{1}{2}\pi r^2 = r\bigl(P - (2 + \pi)r\bigr) + \tfrac{1}{2}\pi r^2 = Pr - (2 + \pi)r^2 + \tfrac{1}{2}\pi r^2
$$

$$
A = Pr - 2r^2 - \pi r^2 + \tfrac{1}{2}\pi r^2 = Pr - 2r^2 - \tfrac{1}{2}\pi r^2
$$

$$
A' = P - 4r - \pi r = 0 \implies r(4 + \pi) = P \implies r = \frac{P}{4 + \pi}
$$

Then $h = \bigl(P - (2 + \pi)P/(4 + \pi)\bigr)/2$. Compute the numerator:

$$
P\left(1 - \frac{2 + \pi}{4 + \pi}\right) = P\cdot\frac{4 + \pi - 2 - \pi}{4 + \pi} = P\cdot\frac{2}{4 + \pi}
$$

so $h = P/(4 + \pi) = r$. The height equals the radius.

For $P = 4 + \pi$, the radius is $1$, and the height is $1$.

### Answer 9

$R'(\theta) = (v_0^2 / g)\cdot 2\cos 2\theta = 0$ when $\cos 2\theta = 0$, so $2\theta = \pi/2$ and $\theta = \pi/4$, the only solution in $(0, \pi/2)$. At the endpoints $R = 0$. The maximum range is $v_0^2 / g$, because $\sin(\pi/2) = 1$.

### Answer 10

1. Revenue is $xp = 50x - 0.1x^2$. Profit is

$$
P(x) = 50x - 0.1x^2 - 100 - 10x = 40x - 0.1x^2 - 100
$$

2. $P'(x) = 40 - 0.2x = 0$ gives $x = 200$. And $P''(x) = -0.2 < 0$, a maximum. $P(200) = 40(200) - 0.1(40000) - 100 = 8000 - 4000 - 100 = 3900$ dollars.

3. At $x = 400$, the price is $50 - 40 = 10$, equal to the marginal production cost already, and $P(400) = 40(400) - 0.1(160000) - 100 = 16000 - 16000 - 100 = -100$. Selling the maximum number of items loses the fixed cost and makes no variable profit. The price has fallen to the point where extra items do not help. The vertex at $x = 200$ is inside the interval, and the parabola opens downward.
