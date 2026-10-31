# Section 4.2 — The Mean Value Theorem

The Mean Value Theorem connects the slope of a secant over a whole interval to the slope of a tangent at one interior point. It is the reason a derivative controls increasing and decreasing behavior, and the reason two antiderivatives of the same function differ by a constant.

## Rolle’s theorem

Suppose $f$ is continuous on $[a, b]$, differentiable on $(a, b)$, and $f(a) = f(b)$. Then some $c$ in $(a, b)$ satisfies $f'(c) = 0$.

The endpoints are at the same height, so the secant is horizontal. Somewhere in between, the tangent is horizontal too. A function can have several such points. The theorem promises at least one.

The hypotheses are necessary. $f(x) = \lvert x \rvert$ on $[-1, 1]$ has $f(-1) = f(1)$ and no point where $f' = 0$. It is not differentiable at $0$. $f(x) = 1/x$ on $[-1, 1]$ is not continuous on the closed interval.

## The Mean Value Theorem

Suppose $f$ is continuous on $[a, b]$ and differentiable on $(a, b)$. Then some $c$ in $(a, b)$ satisfies

$$
f'(c) = \frac{f(b) - f(a)}{b - a}
$$

or, written as a change,

$$
f(b) - f(a) = f'(c)\,(b - a)
$$

The right side of the first form is the slope of the secant from $(a, f(a))$ to $(b, f(b))$. The theorem says the tangent is parallel to that secant at least once. Rolle’s theorem is the special case of a horizontal secant.

The point $c$ is not usually found by a formula in applications. You use the existence of some $c$, or you solve $f'(c) =$ the known secant slope when the question asks for the number.

## What the theorem is for

If $f'(x) = 0$ at every $x$ in an open interval $I$, then $f$ is constant on $I$. Proof: for any $a$ and $b$ in $I$, the Mean Value Theorem gives $f(b) - f(a) = f'(c)(b - a) = 0$.

If $f'(x) = g'(x)$ at every $x$ in $I$, then $f - g$ has derivative zero, so $f(x) = g(x) + C$ on $I$. This is why an indefinite integral is a family of functions, not one function. It is also why an initial condition selects one antiderivative in section 4.8.

If $f'(x) > 0$ at every point of an interval, then $f$ is strictly increasing there: $x_1 < x_2$ implies $f(x_2) - f(x_1) = f'(c)(x_2 - x_1) > 0$. If $f'(x) \ge 0$, then $f$ is increasing, and it may stay flat on pieces. The sign of $f'$ on the whole interval is the hypothesis. A positive derivative at a single point does not, by itself, make $f$ increasing on a neighborhood, unless more is known about $f'$. For the functions in this course, $f'$ is continuous where it exists, and the interval test is the one to use.

## A speed reading

If a car’s position is continuous and differentiable, and the position changes by $150\,\mathrm{km}$ in $2$ hours, then at some instant the speedometer read exactly the average speed, $75\,\mathrm{km/h}$. The theorem does not say the car held that speed. It says the instantaneous rate matched the average at least once.

## Mistakes that change the answer

- Quoting the theorem for a function with a corner. Check differentiability on the open interval.
- Solving $f'(c) = 0$ when the secant slope is not zero. That is Rolle, not the general case.
- Claiming $f'(c) = (f(b) - f(a))/(b - a)$ identifies $c$ uniquely. There may be several.
- Concluding that $f'(x) = 0$ everywhere from $f'(c) = 0$ at one point.
- Dropping the constant when two functions have the same derivative.

---

## Questions

### Question 1

Verify that $f(x) = x^3 - 3x + 2$ satisfies Rolle’s theorem on $[-2, 1]$, and find every $c$ in $(-2, 1)$ with $f'(c) = 0$.

### Question 2

Find every $c$ guaranteed by the Mean Value Theorem for $f(x) = x^2$ on $[1, 3]$. Draw the conclusion in a sentence about slopes.

### Question 3

Explain why the Mean Value Theorem does not apply to $f(x) = \lvert x \rvert$ on $[-2, 2]$. Then apply it on $[1, 4]$ and find $c$.

### Question 4

Suppose $f(2) = 5$, $f(6) = 17$, and $f'(x) \le 2$ for every $x$ in $[2, 6]$. Is this possible? Use the Mean Value Theorem.

### Question 5

Prove that the equation $2x - \sin x = 1$ has exactly one real root. You may use the Intermediate Value Theorem for existence and the Mean Value Theorem, or Rolle’s theorem, for uniqueness.

### Question 6

Suppose $f'(x) = 3x^2$ for every $x$, and $f(1) = 4$. Find $f(x)$. Where did the constant come from, in terms of this section?

### Question 7

A car’s position along a highway satisfies $s(1) = 20\,\mathrm{km}$ and $s(3) = 180\,\mathrm{km}$, with $s$ differentiable. A camera shows the speed never reached $70\,\mathrm{km/h}$ on $(1, 3)$. Is that report possible?

### Question 8

Let $f(x) = \sqrt{x}$ on $[0, 4]$.

1. Does the Mean Value Theorem apply? The derivative blows up at $0$.
2. If you restrict to $[1, 4]$, find $c$.
3. What goes wrong if someone solves $f'(c) = (f(4) - f(0))/4$ and accepts a $c$ outside $(0, 4)$?

### Question 9

Suppose $f$ is continuous on $[a, b]$, differentiable on $(a, b)$, and $f'(x) \neq 0$ for every $x$ in $(a, b)$. Prove that $f(a) \neq f(b)$. Then determine how many real roots $e^x = x + 2$ has.

### Question 10

Two runners finish a race in the same time, and their position functions are differentiable. Prove that at some instant they had the same velocity. State the function you apply Rolle’s theorem to.

---

## Answers

### Answer 1

$f$ is a polynomial, so it is continuous on $[-2, 1]$ and differentiable on $(-2, 1)$. And $f(-2) = -8 + 6 + 2 = 0$, $f(1) = 1 - 3 + 2 = 0$. The hypotheses hold.

$f'(x) = 3x^2 - 3 = 3(x^2 - 1) = 0$ when $x = \pm 1$. Both lie in $(-2, 1)$? $x = 1$ is an endpoint, not in the open interval. $x = -1$ is inside. So $c = -1$.

Check the factorization again: $3x^2 - 3 = 3(x - 1)(x + 1)$. The only root in $(-2, 1)$ is $c = -1$. Rolle asks for an interior point, so the endpoint $x = 1$ is not one of the points the theorem produces, even though $f'(1) = 0$ happens to be true.

### Answer 2

$f(x) = x^2$ is continuous on $[1, 3]$ and differentiable on $(1, 3)$. The secant slope is

$$
\frac{f(3) - f(1)}{3 - 1} = \frac{9 - 1}{2} = 4
$$

Set $f'(c) = 2c = 4$, so $c = 2$, which is in $(1, 3)$. The tangent at $x = 2$ has slope $4$, the same slope as the chord from $(1, 1)$ to $(3, 9)$.

### Answer 3

$f(x) = \lvert x \rvert$ is continuous on $[-2, 2]$, but it is not differentiable at $0$, which lies in $(-2, 2)$. The Mean Value Theorem does not apply. The secant from $(-2, 2)$ to $(2, 2)$ has slope $0$, and there is no point where $f' = 0$. The corner is exactly the missing hypothesis.

On $[1, 4]$, $f(x) = x$, which is differentiable. The secant slope is $(4 - 1)/(4 - 1) = 1$, and $f'(c) = 1$ for every $c$ in $(1, 4)$. Every such $c$ works.

### Answer 4

If the data were possible, the Mean Value Theorem would give a $c$ in $(2, 6)$ with

$$
f'(c) = \frac{17 - 5}{6 - 2} = \frac{12}{4} = 3
$$

But $3 \le 2$ is false. No such function exists. A derivative bounded above by $2$ cannot produce a net rise of $12$ over an interval of length $4$. The largest possible rise would be $2 \cdot 4 = 8$, from $5$ up to at most $13$.

### Answer 5

Let $f(x) = 2x - \sin x - 1$. Then $f(0) = -1 < 0$ and $f(1) = 2 - \sin 1 - 1 = 1 - \sin 1 > 0$, because $\sin 1 < 1$. By the Intermediate Value Theorem there is at least one root in $(0, 1)$.

$f'(x) = 2 - \cos x \ge 2 - 1 = 1 > 0$. So $f$ is strictly increasing on $\mathbb{R}$ and the root is unique. Equivalently, two roots would give, by Rolle’s theorem, a point where $f' = 0$, and $f'$ is never zero.

### Answer 6

The general function with derivative $3x^2$ is $f(x) = x^3 + C$, because $\frac{d}{dx}(x^3 + C) = 3x^2$ and section 4.2 says any two such functions differ by a constant. Then $f(1) = 1 + C = 4$, so $C = 3$ and $f(x) = x^3 + 3$.

### Answer 7

The average velocity is $(180 - 20)/(3 - 1) = 160/2 = 80\,\mathrm{km/h}$. The Mean Value Theorem says some instant in $(1, 3)$ has velocity exactly $80\,\mathrm{km/h}$. A report that the speed never reached $70\,\mathrm{km/h}$ is impossible, because $80 > 70$. The car must have reached at least the average.

### Answer 8

1. $f'(x) = 1/(2\sqrt{x})$ for $x > 0$, and this limit is infinite as $x \to 0^+$. The derivative does not exist as a real number at the interior? The endpoint $x = 0$ is not required to be an interior point of differentiability. The Mean Value Theorem asks for differentiability on $(0, 4)$, not at $0$. On $(0, 4)$, $1/(2\sqrt{x})$ exists. Continuity on $[0, 4]$ also holds. So the theorem does apply on $[0, 4]$.

The secant slope is $(2 - 0)/4 = 1/2$. Set $1/(2\sqrt{c}) = 1/2$, so $\sqrt{c} = 1$ and $c = 1$, which is in $(0, 4)$.

2. On $[1, 4]$ the secant slope is $(2 - 1)/(4 - 1) = 1/3$. Then $1/(2\sqrt{c}) = 1/3$, so $2\sqrt{c} = 3$, $\sqrt{c} = 3/2$, and $c = 9/4 = 2.25$, which is in $(1, 4)$.

3. The $c$ from part 1 is legal for $[0, 4]$. If a solved $c$ landed outside the open interval, it would not be a point the theorem is talking about. For example, a sign error that produced $c = -1$ would be outside the domain. The theorem’s conclusion is an interior point of the interval you started with.

### Answer 9

If $f(a) = f(b)$, Rolle’s theorem would give a point where $f' = 0$, contradicting the hypothesis. Therefore $f(a) \neq f(b)$.

For $e^x = x + 2$, let $f(x) = e^x - x - 2$. Then $f'(x) = e^x - 1$, which is zero at $x = 0$, so the first result does not apply to this $f$. In fact $f'(x) < 0$ on $(-\infty, 0)$ and $f'(x) > 0$ on $(0, \infty)$, so $f$ decreases to $f(0) = 1 - 2 = -1 < 0$ and then increases. $f(0) = -1$ and $f(2) = e^2 - 4 > 0$, so there is a root in $(0, 2)$. Also $f(-2) = e^{-2} + 2 - 2 = e^{-2} > 0$, and $f$ goes from positive to negative on $(-\infty, 0)$, so there is a root in $(-2, 0)$. There are two real roots. The argument that would allow at most one root needs $f'$ never zero, and that hypothesis fails here.

### Answer 10

Let $s_1(t)$ and $s_2(t)$ be the positions, both starting at the same start line at time $t = a$ and both finishing at the same finish line at time $t = b$. Then $s_1(a) = s_2(a)$ and $s_1(b) = s_2(b)$.

Let $f(t) = s_1(t) - s_2(t)$. Then $f(a) = f(b) = 0$, and $f$ is continuous on $[a, b]$ and differentiable on $(a, b)$. Rolle’s theorem gives a $c$ in $(a, b)$ with $f'(c) = 0$. That says $s_1'(c) = s_2'(c)$. At that instant the velocities are equal.
