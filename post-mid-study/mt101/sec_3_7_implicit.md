# Section 3.7 — Implicit Differentiation

A curve does not have to be the graph of a single function $y = f(x)$. The circle $x^2 + y^2 = 25$ fails the vertical line test. Near most of its points it is still the graph of some local function, either the upper semicircle or the lower one. Implicit differentiation finds the slope without solving for that function.

## The method

An equation $F(x, y) = c$ can define $y$ as a differentiable function of $x$ near a point when the curve is not vertical there. Differentiate both sides with respect to $x$. Every time a term contains $y$, the chain rule multiplies by $y'$, because $y$ depends on $x$. Then solve for $y'$.

For the circle,

$$
2x + 2y\, y' = 0, \qquad y' = -\frac{x}{y},
$$

provided $y \neq 0$. At $(3, 4)$ the slope is $-3/4$. At $(3, -4)$ the slope is $3/4$. The same $x$-coordinate has two slopes because it has two points. Solving for $y = \pm \sqrt{25 - x^2}$ and differentiating the upper branch gives $y' = -x/y$, the same formula.

At $(5, 0)$ and $(-5, 0)$ the formula divides by zero. The tangent is vertical. The curve is not the graph of a differentiable function of $x$ in any neighborhood of those points.

## Products that contain both variables

A term $xy$ is a product of two functions of $x$. The product rule gives

$$
\frac{d}{dx}(xy) = y + x y'.
$$

A term $x \sin y$ gives $\sin y + x \cos y \cdot y'$. A power $y^5$ gives $5y^4 y'$.

For $x^2 y + y^3 = 8$,

$$
2xy + x^2 y' + 3y^2 y' = 0, \qquad y' = \frac{-2xy}{x^2 + 3y^2},
$$

wherever the denominator is not zero.

## Tangent lines

The point must satisfy the original equation. If it does not, there is no tangent to this curve there. Evaluate $y'$ at the point, then write

$$
Y - y_0 = m(X - x_0).
$$

## Second derivatives

Differentiate $y'$ again, and replace every remaining $y'$ by the expression already found if the answer should be in terms of $x$ and $y$ only. For the circle, $y' = -x/y$, so

$$
y'' = -\frac{y - x y'}{y^2} = -\frac{y - x(-x/y)}{y^2} = -\frac{y^2 + x^2}{y^3} = -\frac{25}{y^3}
$$

on $x^2 + y^2 = 25$. The sign of $y''$ is opposite the sign of $y$. The upper semicircle bends downward. The lower semicircle bends upward.

## Mistakes that change the answer

- Differentiating $y^2$ as $2y$ and forgetting the factor $y'$.
- Differentiating $xy$ as $y'$ only. The product rule also contributes the term $y$.
- Substituting a point that is not on the curve.
- Using $y' = -x/y$ at a point where $y = 0$.
- Differentiating $-x/y$ while holding $y$ fixed. The variable $y$ is a function of $x$.

---

## Questions

### Question 1

Find $y'$ for $x^2 + xy + y^2 = 7$. Check the points $(1, 2)$ and $(2, -1)$. Evaluate the slope at every one of these points that lies on the curve. If $(2, -1)$ is not on the curve, find the points on the curve with $x = 2$ and give their slopes.

### Question 2

Find the tangent line to $x^3 + y^3 = 9xy$ at $(2, 4)$. Then explain what happens to the differentiated equation at $(0, 0)$.

### Question 3

For $x \cos y = 1$, find $y'$. Find the tangent line at $(2,\ \pi/3)$, after checking that the point is on the curve.

### Question 4

The curve $x^{2/3} + y^{2/3} = 2$ passes through $(1, 1)$.

1. Find $y'$ by implicit differentiation.
2. Evaluate the slope at $(1, 1)$.
3. In the closed first quadrant, including the axes, the intercepts are $(2\sqrt{2},\ 0)$ and $(0,\ 2\sqrt{2})$, because $2^{3/2} = 2\sqrt{2}$. What slope does your formula approach at each intercept? These intercepts are cusps. The limiting slope is the tangent slope of the cusp.

### Question 5

Find $y''$ for $x^2 + y^2 = 4$ in terms of $x$ and $y$ only. Evaluate $y''$ at $(0, 2)$ and at $(0, -2)$, and match the signs with concavity.

### Question 6

The curve $e^{y} + xy = e$ passes through $(0, 1)$. Find the tangent line there. Give $y'$ at a general point and state where that formula fails.

### Question 7

Differentiate both sides of $x = \tan y$, assuming $y$ is a differentiable function of $x$ with values in $(-\pi/2,\ \pi/2)$. Solve for $y'$ and rewrite the answer in terms of $x$ only.

### Question 8

A student differentiates $x^2 y^2 = 1$ and gets $2x y^2 = 0$. The original equation forbids both $x = 0$ and $y = 0$. Where is the mistake, and what is the correct $y'$?

### Question 9

Find every point on $x^2 + y^2 - 2x - 4y = 4$ where the tangent is horizontal, and every point where the tangent is vertical. Complete the square first and use the center and radius to check the count.

### Question 10

The equation $y^5 + 2xy + x^2 = 9$ defines $y$ as a differentiable function of $x$ near $(2, 1)$.

1. Check the point.
2. Find $y'(2)$.
3. Use the tangent line to approximate $y$ when $x = 2.1$.

---

## Answers

### Answer 1

Differentiate: $2x + y + x y' + 2y y' = 0$. So

$$
y' = \frac{-2x - y}{x + 2y},
$$

provided $x + 2y \neq 0$.

At $(1, 2)$: $1 + 2 + 4 = 7$, so the point is on the curve. The slope is $(-2 - 2)/(1 + 4) = -4/5$.

At $(2, -1)$: $4 + 2(-1) + 1 = 3 \neq 7$. The point is not on the curve.

With $x = 2$, the curve equation is $4 + 2y + y^2 = 7$, so $y^2 + 2y - 3 = 0$, so $(y + 3)(y - 1) = 0$. The points are $(2, 1)$ and $(2, -3)$.

Slope at $(2, 1)$: $(-4 - 1)/(2 + 2) = -5/4$.

Slope at $(2, -3)$: $(-4 - (-3))/(2 - 6) = (-1)/(-4) = 1/4$.

### Answer 2

$3x^2 + 3y^2 y' = 9y + 9x y'$. Divide by $3$:

$$
y' = \frac{3y - x^2}{y^2 - 3x},
$$

when the denominator is not zero.

At $(2, 4)$: $8 + 64 = 72$ and $9 \cdot 2 \cdot 4 = 72$, so the point is on the curve. The slope is $(12 - 4)/(16 - 6) = 8/10 = 4/5$. The tangent line is $Y - 4 = \frac{4}{5}(X - 2)$.

At $(0, 0)$ the original equation holds, but the differentiated equation becomes $0 = 0$, and the solved formula is $0/0$. The folium crosses itself at the origin and does not have a single tangent line there.

### Answer 3

Check: $2 \cos(\pi/3) = 2 \cdot (1/2) = 1$. The point is on the curve.

Differentiate: $\cos y + x(-\sin y)\, y' = 0$, so

$$
y' = \frac{\cos y}{x \sin y},
$$

provided $\sin y \neq 0$ and $x \neq 0$. At $(2,\ \pi/3)$,

$$
y' = \frac{1/2}{2 \cdot \sqrt{3}/2} = \frac{1/2}{\sqrt{3}} = \frac{1}{2\sqrt{3}}.
$$

The tangent line is $Y - \pi/3 = \dfrac{1}{2\sqrt{3}}(X - 2)$.

### Answer 4

1. $\frac{2}{3} x^{-1/3} + \frac{2}{3} y^{-1/3} y' = 0$, so

$$
y' = -\left(\frac{y}{x}\right)^{1/3},
$$

wherever $x \neq 0$ and $y \neq 0$.

2. At $(1, 1)$ the slope is $-1$.

3. As $(x, y) \to (2\sqrt{2},\ 0)$ along the curve in the first quadrant, $y' \to 0$. The cusp at the right intercept has a horizontal tangent. As $(x, y) \to (0,\ 2\sqrt{2})$, the formula $(y/x)^{1/3}$ grows without bound, so $y' \to -\infty$ from the first quadrant. The cusp at the top intercept has a vertical tangent. The differentiated equation itself is not defined exactly at either intercept, because it contains $x^{-1/3}$ or $y^{-1/3}$. The tangent is read from the limit of $y'$.

### Answer 5

From $2x + 2y y' = 0$, $y' = -x/y$ for $y \neq 0$. Then

$$
y'' = -\frac{y - x y'}{y^2} = -\frac{y - x(-x/y)}{y^2} = -\frac{y^2 + x^2}{y^3} = -\frac{4}{y^3}.
$$

At $(0, 2)$, $y'' = -4/8 = -1/2 < 0$, so the graph is concave down. That is the top of the circle. At $(0, -2)$, $y'' = -4/(-8) = 1/2 > 0$, so the graph is concave up. That is the bottom of the circle.

### Answer 6

Check: $e^{1} + 0 = e$. Differentiate:

$$
e^{y} y' + y + x y' = 0, \qquad y' = \frac{-y}{e^{y} + x},
$$

provided $e^{y} + x \neq 0$. At $(0, 1)$, $y' = -1/e$. The tangent line is $Y - 1 = -\dfrac{1}{e} X$, or $Y = 1 - X/e$.

### Answer 7

$\sec^2 y \cdot y' = 1$, so $y' = 1/\sec^2 y$. On $(-\pi/2,\ \pi/2)$, $\sec^2 y = 1 + \tan^2 y = 1 + x^2$. Therefore

$$
y' = \frac{1}{1 + x^2}.
$$

This is the derivative of $\tan^{-1} x$, which is the inverse function being constructed here.

### Answer 8

The term $x^2 y^2$ is a product. Differentiating only the $x^2$ factor drops the chain-rule contribution of $y^2$. The correct step is

$$
2x y^2 + x^2 \cdot 2y y' = 0, \qquad y' = -\frac{y}{x},
$$

for $x \neq 0$ and $y \neq 0$, which is the whole curve $xy = \pm 1$. The student’s equation $2x y^2 = 0$ has no solution on the curve, which is the signal that a term was lost.

### Answer 9

Complete the square: $(x - 1)^2 + (y - 2)^2 = 9$. The curve is the circle of radius $3$ centered at $(1, 2)$.

Implicit differentiation: $2x + 2y y' - 2 - 4y' = 0$, so

$$
y' = \frac{1 - x}{y - 2},
$$

when $y \neq 2$.

Horizontal tangents: numerator zero and denominator nonzero, so $x = 1$ and $(y - 2)^2 = 9$. Thus $y = 5$ or $y = -1$. The points are $(1, 5)$ and $(1, -1)$, the top and bottom of the circle.

Vertical tangents: denominator zero and numerator nonzero, so $y = 2$ and $(x - 1)^2 = 9$. Thus $x = 4$ or $x = -2$. The numerator $1 - x$ is $-3$ or $3$, not zero. The points are $(4, 2)$ and $(-2, 2)$, the right and left ends of the circle.

### Answer 10

1. $1^5 + 2(2)(1) + 2^2 = 1 + 4 + 4 = 9$. The point is on the curve.

2. $5y^4 y' + 2y + 2x y' + 2x = 0$, so

$$
y' = \frac{-2(x + y)}{5y^4 + 2x}.
$$

At $(2, 1)$, $y' = -2(3)/(5 + 4) = -6/9 = -2/3$.

3. The tangent line gives $y \approx 1 + \left(-\dfrac{2}{3}\right)(0.1) = 1 - \dfrac{1}{15} = \dfrac{14}{15}$.
