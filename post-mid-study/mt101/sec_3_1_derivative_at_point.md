# Section 3.1 — Tangents and the Derivative at a Point

Section 2.1 computed a tangent slope as a limit of secant slopes. This section names that limit the derivative at a point. The number $f'(a)$ is the slope of the graph at $x = a$, and it is also the instantaneous rate of change of $f$ with respect to $x$ at $a$.

## The definition

$$
f'(a) = \lim_{h \to 0} \frac{f(a + h) - f(a)}{h},
$$

when the limit exists. The equivalent form that moves the second point to a coordinate $x$ is

$$
f'(a) = \lim_{x \to a} \frac{f(x) - f(a)}{x - a}.
$$

Both are difference quotients. The first makes the algebra a shift by $h$. The second is convenient when $f(x) - f(a)$ factors as $(x - a)$ times something.

The tangent line at $(a, f(a))$ is

$$
y - f(a) = f'(a)\,(x - a).
$$

If the limit does not exist as a finite number, $f$ is not differentiable at $a$, and there is no tangent line of finite slope.

## What differentiability requires

The limit has to exist from both sides and agree, unless $a$ is an endpoint of the domain and the course is using a one-sided derivative. For an interior point, a corner kills differentiability because the one-sided limits of the difference quotient disagree. A cusp, such as $y = x^{2/3}$ at the origin, does the same with vertical steepness. A jump or a hole kills it because the function values do not even settle. A vertical tangent, such as $y = x^{1/3}$ at the origin, makes the difference quotient unbounded, so the derivative is not a real number.

Differentiability at $a$ implies continuity at $a$. If the difference quotient approaches a finite slope, then $f(a + h) - f(a) = h \cdot (\text{a bounded quantity})$ must approach $0$, so $f(a + h) \to f(a)$. The converse is false. $f(x) = \lvert x \rvert$ is continuous at $0$ and not differentiable there. Continuity is the weaker condition.

## A first calculation

For $f(x) = x^2$ at $x = 3$,

$$
\frac{(3 + h)^2 - 9}{h} = \frac{6h + h^2}{h} = 6 + h \to 6.
$$

So $f'(3) = 6$, and the tangent line is $y - 9 = 6(x - 3)$, or $y = 6x - 9$.

The same calculation at a general point produces $f'(a) = 2a$. That pattern becomes the power rule in section 3.3. Here the job is to compute the limit, not to quote the rule, unless the question says the rule is allowed.

## Rates

If $s(t)$ is position, $s'(t_0)$ is instantaneous velocity. If $C(x)$ is cost, $C'(x_0)$ is marginal cost at production level $x_0$: the instantaneous rate at which cost changes per extra unit. The units of $f'(a)$ are always the units of $f$ divided by the units of $x$.

## Mistakes that change the answer

- Cancelling $h$ and then forgetting the limit, so the answer stays “$6 + h$” instead of $6$.
- Using $f(a + h) - f(h)$ or $f(a + h) - a$ in the numerator.
- Claiming a corner is differentiable because the function is continuous.
- Writing the tangent line as $y = f'(a)\, x$, which passes through the origin rather than through the point of tangency, unless the point happens to force that.
- Treating an infinite slope as a real derivative. Vertical tangent means not differentiable.

---

## Questions

### Question 1

Use the definition to find $f'(2)$ for $f(x) = x^2 - 3x$, and write the tangent line at $x = 2$.

### Question 2

Use the definition to find $g'(a)$ for $g(x) = 1/(x + 1)$ at a point $a \neq -1$. Then write the tangent line at $x = 1$.

### Question 3

Let $f(x) = \lvert x - 2 \rvert$. Compute the difference quotient at $x = 2$ from the right and from the left. Is $f$ differentiable at $2$? Is it continuous there?

### Question 4

Show that $f(x) = \sqrt{x}$ is not differentiable at $x = 0$, and that it is differentiable at $x = 9$. Give $f'(9)$ and the tangent line.

### Question 5

Prove the general fact: if $f'(a)$ exists, then $f$ is continuous at $a$. Then give a function that shows the converse fails.

### Question 6

Position is $s(t) = t^3 - 6t$ meters at time $t$ seconds. Use the definition to find the velocity at $t = 1$ and at the time when the particle is instantaneously at rest. You may first find $s'(a)$ for general $a$.

### Question 7

The function $f(x) = x^{1/3}$ has difference quotient

$$
\frac{(a + h)^{1/3} - a^{1/3}}{h}
$$

at $x = a$. For $a = 0$ this is $h^{-2/3}$. What is $\lim_{h \to 0} h^{-2/3}$, and what does that say about a tangent line at the origin? For $a \neq 0$, the derivative is $(1/3) a^{-2/3}$. You may use that formula only in the second part. Find the tangent line at $x = 8$.

### Question 8

Match each graph feature at $x = a$ with the correct conclusion about $f'(a)$.

1. A corner, continuous, with left slope $2$ and right slope $-1$.
2. A hole at $x = a$, and a straight line of slope $4$ on either side.
3. A smooth turning point where the tangent is horizontal.
4. A vertical tangent.

### Question 9

Use the $x \to a$ form of the definition to compute $f'(1)$ for $f(x) = x^3$.

### Question 10

A cost function is $C(x) = 200 + 15x + x^2$ dollars for $x$ kilograms of product.

1. Find $C'(10)$ from the definition, or from the general derivative $C'(a)$ you compute first.
2. Write a sentence that a production manager can use, including units.
3. Why is $C(11) - C(10)$ close to $C'(10)$ but not equal to it? Compute the difference.

---

## Answers

### Answer 1

$$
\frac{f(2 + h) - f(2)}{h} = \frac{((2 + h)^2 - 3(2 + h)) - (4 - 6)}{h} = \frac{4 + 4h + h^2 - 6 - 3h + 2}{h} = \frac{h + h^2}{h} = 1 + h.
$$

$f(2) = -2$. The limit is $1$, so $f'(2) = 1$. The tangent line is $y - (-2) = 1(x - 2)$, or $y = x - 4$.

### Answer 2

$$
\frac{g(a + h) - g(a)}{h} = \frac{\frac{1}{a + h + 1} - \frac{1}{a + 1}}{h} = \frac{(a + 1) - (a + h + 1)}{h(a + h + 1)(a + 1)} = \frac{-1}{(a + h + 1)(a + 1)}.
$$

Let $h \to 0$. Then $g'(a) = -1/(a + 1)^2$.

At $a = 1$, $g'(1) = -1/4$ and $g(1) = 1/2$. The tangent line is $y - 1/2 = (-1/4)(x - 1)$.

### Answer 3

For $h > 0$, $\lvert 2 + h - 2 \rvert / h = h/h = 1$. For $h < 0$, $\lvert h \rvert / h = -1$.

The one-sided limits of the difference quotient are $1$ and $-1$. They disagree, so $f'(2)$ does not exist.

$\lim_{x \to 2} \lvert x - 2 \rvert = 0 = f(2)$, so $f$ is continuous at $2$. Continuity did not produce a derivative.

### Answer 4

At $x = 0$, for $h > 0$, $(\sqrt{h} - 0)/h = 1/\sqrt{h}$, which tends to $+\infty$. The derivative is not a real number. Negative $h$ is outside the domain, so there is not even a two-sided difference quotient.

At $x = 9$,

$$
\frac{\sqrt{9 + h} - 3}{h} = \frac{1}{\sqrt{9 + h} + 3} \to \frac{1}{6}.
$$

So $f'(9) = 1/6$. The point is $(9, 3)$. The tangent line is $y - 3 = \frac{1}{6}(x - 9)$.

### Answer 5

Assume $f'(a)$ exists. Write

$$
f(a + h) - f(a) = h \cdot \frac{f(a + h) - f(a)}{h}
$$

for $h \neq 0$. As $h \to 0$, the fraction approaches the finite number $f'(a)$, and $h$ approaches $0$, so the product approaches $0$. Therefore $\lim_{h \to 0} f(a + h) = f(a)$. That is continuity at $a$.

The converse fails for $f(x) = \lvert x \rvert$ at $x = 0$, which is continuous and not differentiable, as Question 3 shows with the corner moved to the origin: the same one-sided slopes are $1$ and $-1$.

### Answer 6

$$
\frac{s(a + h) - s(a)}{h} = \frac{(a + h)^3 - 6(a + h) - a^3 + 6a}{h} = \frac{3a^2 h + 3ah^2 + h^3 - 6h}{h} = 3a^2 + 3ah + h^2 - 6.
$$

So $s'(a) = 3a^2 - 6$. Then $s'(1) = 3 - 6 = -3$ m/s. The velocity is zero when $3a^2 - 6 = 0$, so $a^2 = 2$, so $a = \sqrt{2}$ or $a = -\sqrt{2}$, if negative time is allowed by the model. At those times the particle is instantaneously at rest.

### Answer 7

$h^{-2/3} = 1 / h^{2/3}$ tends to $+\infty$ as $h \to 0$ from either side, because $h^{2/3} = \lvert h \rvert^{2/3}$ in the real cube-root sense: the square of the cube root is positive. The difference quotient is unbounded. There is no finite derivative at $0$. The tangent line is vertical: the $y$-axis, $x = 0$.

At $x = 8$, $f(8) = 2$ and $f'(8) = (1/3) \cdot 8^{-2/3} = (1/3) \cdot (1/4) = 1/12$, because $8^{1/3} = 2$ and $8^{2/3} = 4$. The tangent line is $y - 2 = \frac{1}{12}(x - 8)$.

### Answer 8

1. $f'(a)$ does not exist. The one-sided derivatives exist and are unequal.
2. $f'(a)$ does not exist, because $f(a)$ is missing, so the difference quotient is not defined. The hole also means $f$ is not continuous at $a$, which already forbids a derivative.
3. $f'(a) = 0$.
4. $f'(a)$ does not exist as a real number. The tangent is vertical.

### Answer 9

$$
\frac{x^3 - 1}{x - 1} = \frac{(x - 1)(x^2 + x + 1)}{x - 1} = x^2 + x + 1
$$

for $x \neq 1$. The limit is $1 + 1 + 1 = 3$. So $f'(1) = 3$.

### Answer 10

1. The same expansion as for $x^2$ gives $C'(a) = 15 + 2a$. Thus $C'(10) = 15 + 20 = 35$.

2. At a production level of $10$ kg, cost is increasing at an instantaneous rate of $35$ dollars per kilogram.

3. $C(11) - C(10) = (200 + 165 + 121) - (200 + 150 + 100) = 486 - 450 = 36$ dollars per one extra kilogram. The derivative $35$ is the instantaneous rate at $10$, which is the limit of average rates over shorter and shorter intervals. Over a whole extra kilogram the rate itself is changing, because $C'(x) = 15 + 2x$ is not constant, so the average over $[10, 11]$ is $36$, not $35$.
