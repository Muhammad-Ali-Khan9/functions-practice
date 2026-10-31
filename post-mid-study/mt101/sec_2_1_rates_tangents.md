# Section 2.1 — Rates of Change and Tangents to Curves

The derivative is a slope. This section builds that slope before it has a name. An average rate of change is the slope of a secant line through two points of the graph. An instantaneous rate is the number those secant slopes approach as the second point slides into the first. That number is also the slope of the tangent line.

Thomas marks this section as self-study. Sections 3.1 and 3.2 turn the same limit into the definition of the derivative.

## Average rate of change

For $y = f(x)$ between $x = x_0$ and $x = x_0 + h$ with $h \neq 0$,

$$
\text{average rate} = \frac{f(x_0 + h) - f(x_0)}{h}.
$$

This is the slope of the secant through $(x_0, f(x_0))$ and $(x_0 + h, f(x_0 + h))$. The units are output units per input unit. If $s(t)$ is position in meters and $t$ is seconds, the average rate is average velocity in meters per second.

The sign carries direction. A negative average velocity means the net change in position is negative. It does not mean the object never moved forward during the interval. The average only sees the endpoints.

If the same change is written with two coordinates $x_1$ and $x_2$,

$$
\frac{f(x_2) - f(x_1)}{x_2 - x_1}.
$$

Swapping the two points changes the sign of the numerator and the denominator together, so the slope is the same.

## From secant to tangent

Hold $x_0$ fixed and let $h$ approach $0$. If the secant slopes approach a single number $m$, that number is the slope of the tangent line at $x_0$:

$$
m = \lim_{h \to 0} \frac{f(x_0 + h) - f(x_0)}{h}.
$$

The tangent line then has equation

$$
y - f(x_0) = m(x - x_0).
$$

It passes through the point of tangency and has slope $m$. It is not defined as “the line that meets the curve only once.” A tangent can cross the curve. The line $y = 0$ meets $y = x^3$ at the origin and crosses it, and it is still the tangent there, because the limit of the secant slopes is $0$. A vertical line can meet a parabola once and still fail to be the tangent, because the secant slopes approach a finite number, not a vertical line.

If the limit does not exist, there is no tangent of this kind. A corner, such as the origin on $y = \lvert x \rvert$, produces different secant slopes from the left and from the right. A vertical tangent produces slopes that grow without bound.

## A position example

Suppose a particle has position $s(t) = t^2$, in meters, at time $t$ seconds. From $t = 1$ to $t = 1 + h$,

$$
\frac{(1 + h)^2 - 1}{h} = \frac{2h + h^2}{h} = 2 + h,
$$

provided $h \neq 0$. The average velocity over that interval is $2 + h$ meters per second. As $h \to 0$, the average approaches $2$. The instantaneous velocity at $t = 1$ is $2$ m/s. The tangent line to the graph at $(1, 1)$ is $y - 1 = 2(x - 1)$, or $y = 2x - 1$.

At $h = 0$ the difference quotient is $0/0$, which is not a number. Cancel $h$ first. The limit uses small nonzero $h$.

## One limit, two pictures

Speed at an instant and the slope of a tangent look like different questions. Both ask for a ratio of a small change in output to a small change in input, then ask what happens when the change in input is driven to zero. One limit answers both.

## Mistakes that change the answer

- Substituting $h = 0$ before cancelling. You get $0/0$ and stop.
- Reporting an average rate as an instantaneous rate. They agree only after the limit.
- Deciding a tangent by counting intersection points. The limit of secant slopes decides.
- Writing a line with the right slope that does not pass through $(x_0, f(x_0))$.
- Dropping units in an applied rate. A slope number needs the units of both axes.

---

## Questions

### Question 1

For $f(x) = x^2 + x$, compute the average rate of change from $x = 1$ to $x = 4$, and from $x = 1$ to $x = 1 + h$ with $h \neq 0$. Then take $h \to 0$ and write the tangent line at $x = 1$.

### Question 2

A particle moves on a line with position $s(t) = 4t - t^2$ meters, $t$ in seconds.

1. Find the average velocity on $[1, 3]$ and on $[2, 2 + h]$ for $h \neq 0$.
2. Find the instantaneous velocity at $t = 2$.
3. Find the instantaneous velocity at a general time $t = a$, and the time when that velocity is zero.

### Question 3

Use the limit definition to find the slope of $y = 1/x$ at $x = 2$, and write the tangent line. Then find the slope at a general $x = a$ with $a \neq 0$.

### Question 4

For $f(x) = \lvert x \rvert$, compute the difference quotient at $x = 0$ for $h > 0$ and for $h < 0$. Explain why there is no tangent line at the origin in the sense of this section.

### Question 5

Use the definition to find the tangent slope of $f(x) = x^3 - 3x + 3$ at $x = 0$. The horizontal line $y = 3$ passes through $(0, 3)$ and meets the graph again. Is that horizontal line the tangent? How many times does it meet the graph?

### Question 6

Temperature along a wire is $T(x) = 20 + 2x - x^2$ degrees at position $x$ centimeters.

1. Find the average rate of change from $x = 0$ to $x = 2$.
2. Find the instantaneous rate at $x = 1$.
3. Complete the square for $T(x)$ and say what the rate $0$ means on the wire.

### Question 7

Show that the tangent line to $y = x^2$ at $x = a$ is $y = 2ax - a^2$. Find every $a$ for which this tangent passes through $(1, 0)$.

### Question 8

Position downward from a release point is $s(t) = 4.9 t^2$ meters, $t$ in seconds.

1. Find the average velocity on $[1, 2]$ and the instantaneous velocity at $t = 1$ and at $t = 2$.
2. Compare the average velocity with the average of those two instantaneous velocities.
3. Repeat the comparison for $s(t) = t^3$ on $[1, 2]$, and say why the two models behave differently.

### Question 9

For $f(x) = \sqrt{x}$, simplify the difference quotient at $x = 4$ by rationalizing, then find the tangent slope. What happens to the difference quotient as $h \to 0^+$ when the same limit is tried at $x = 0$?

### Question 10

A secant of $y = x^2$ passes through $(1, 1)$ and $(1 + h, (1 + h)^2)$.

1. Find its slope as a function of $h \neq 0$.
2. What goes wrong if you substitute $h = 0$ before cancelling, and what number do you get if you cancel first and then substitute?
3. The vertical line $x = 1$ meets the parabola only once. Use the secant slopes to explain why it is not the tangent line.

---

## Answers

### Answer 1

$$
\frac{f(4) - f(1)}{4 - 1} = \frac{(16 + 4) - (1 + 1)}{3} = \frac{18}{3} = 6.
$$

$$
\frac{f(1 + h) - f(1)}{h} = \frac{(1 + 2h + h^2 + 1 + h) - 2}{h} = \frac{3h + h^2}{h} = 3 + h.
$$

As $h \to 0$, the slope approaches $3$. Since $f(1) = 2$, the tangent line is $y - 2 = 3(x - 1)$, or $y = 3x - 1$.

### Answer 2

1. $s(1) = 3$ and $s(3) = 12 - 9 = 3$, so the average velocity on $[1, 3]$ is $0$. The particle ends the interval where it began.

$s(2) = 4$ and $s(2 + h) = 4(2 + h) - (2 + h)^2 = 8 + 4h - 4 - 4h - h^2 = 4 - h^2$. The difference quotient is

$$
\frac{(4 - h^2) - 4}{h} = -h.
$$

2. As $h \to 0$, the instantaneous velocity at $t = 2$ is $0$.

3. At a general time $a$,

$$
\frac{s(a + h) - s(a)}{h} = 4 - 2a - h,
$$

so the instantaneous velocity is $4 - 2a$. It is zero when $a = 2$, and then $s(2) = 4$.

### Answer 3

$$
\frac{\frac{1}{2 + h} - \frac{1}{2}}{h} = \frac{\frac{2 - (2 + h)}{2(2 + h)}}{h} = \frac{-1}{2(2 + h)}
$$

for $h \neq 0$. As $h \to 0$, the slope approaches $-1/4$. The point on the curve is $(2, 1/2)$. The tangent line is

$$
y - \frac{1}{2} = -\frac{1}{4}(x - 2), \qquad y = -\frac{1}{4}x + 1.
$$

At general $a \neq 0$, the same algebra gives $-1/(a(a + h))$, which approaches $-1/a^2$.

### Answer 4

For $h > 0$, $\lvert h \rvert / h = 1$. For $h < 0$, $\lvert h \rvert / h = -1$.

The secant slopes approach $1$ from the right and $-1$ from the left. There is no single limiting slope, so the graph has no tangent line at the origin. The picture is a corner.

### Answer 5

$$
\frac{f(h) - f(0)}{h} = \frac{(h^3 - 3h + 3) - 3}{h} = h^2 - 3.
$$

As $h \to 0$, the slope approaches $-3$. The tangent line is $y - 3 = -3x$, or $y = -3x + 3$.

The horizontal line $y = 3$ has slope $0$, not $-3$, so it is not the tangent. Solving $x^3 - 3x + 3 = 3$ gives $x(x^2 - 3) = 0$, so the line meets the graph at $x = 0$, $x = \sqrt{3}$, and $x = -\sqrt{3}$. Three intersections do not decide the tangent. The limit does.

### Answer 6

1. $T(0) = 20$ and $T(2) = 20 + 4 - 4 = 20$. The average rate is $0$ degrees per centimeter.

2. $T(1) = 21$ and

$$
T(1 + h) = 20 + 2(1 + h) - (1 + 2h + h^2) = 21 - h^2.
$$

The difference quotient is $-h$, so the instantaneous rate at $x = 1$ is $0$ degrees per centimeter.

3. $T(x) = 21 - (x - 1)^2$. The temperature reaches a maximum of $21$ at $x = 1$. The rate $0$ is the turn from rising temperatures, on the left, to falling temperatures, on the right.

### Answer 7

$$
\frac{(a + h)^2 - a^2}{h} = 2a + h \to 2a.
$$

The tangent line is $y - a^2 = 2a(x - a)$, which rearranges to $y = 2ax - a^2$.

Require that $(1, 0)$ lies on it: $0 = 2a(1) - a^2$, so $a^2 - 2a = 0$, so $a(a - 2) = 0$. Thus $a = 0$ or $a = 2$.

At $a = 0$ the tangent is $y = 0$, which contains $(1, 0)$. At $a = 2$ the tangent is $y = 4x - 4$, and $y(1) = 0$.

### Answer 8

1. $s(2) - s(1) = 4.9(4 - 1) = 14.7$, so the average velocity on $[1, 2]$ is $14.7$ m/s downward. The difference quotient at time $a$ simplifies to $4.9(2a + h)$ and approaches $9.8a$. The instantaneous velocities are $9.8$ m/s at $t = 1$ and $19.6$ m/s at $t = 2$.

2. The average of the endpoint velocities is $(9.8 + 19.6)/2 = 14.7$, the same as the average velocity.

3. For $s(t) = t^3$, the average velocity on $[1, 2]$ is $(8 - 1)/(2 - 1) = 7$. The instantaneous velocity is the limit of $(3a^2 h + 3ah^2 + h^3)/h = 3a^2 + 3ah + h^2$, so it is $3t^2$. The endpoint values are $3$ and $12$, and their average is $7.5$, not $7$.

In the falling-object model the velocity $9.8t$ is linear in time, because the acceleration is constant. The average of a linear function on an interval equals the average of its endpoint values, and that common number equals the secant slope of position. For $t^3$ the velocity $3t^2$ is not linear, so the endpoint average of velocity is a different number from the average velocity.

### Answer 9

$$
\frac{\sqrt{4 + h} - 2}{h} \cdot \frac{\sqrt{4 + h} + 2}{\sqrt{4 + h} + 2} = \frac{1}{\sqrt{4 + h} + 2}.
$$

As $h \to 0$, the slope approaches $1/4$. The tangent line at $(4, 2)$ is $y - 2 = \frac{1}{4}(x - 4)$.

At $x = 0$, for $h > 0$ the quotient is $\sqrt{h}/h = 1/\sqrt{h}$, which grows without bound. There is no finite tangent slope. The graph of $\sqrt{x}$ has a vertical tangent at the origin. Negative $h$ is outside the domain.

### Answer 10

1. $\dfrac{(1 + 2h + h^2) - 1}{h} = 2 + h$.

2. Before cancelling, $h = 0$ makes the quotient $(1 - 1)/0$, which is undefined. There is no secant from a point to itself. After cancelling, $2 + h$ equals the secant slope for every $h \neq 0$, and its value at $h = 0$ is the limit $2$. That value is the tangent slope. It is not a secant slope at $h = 0$.

3. The secant slopes $2 + h$ approach $2$, not an infinite slope. The tangent line is $y - 1 = 2(x - 1)$. The vertical line $x = 1$ meets the parabola once and is a different line. “Meets the curve once” is not the definition of a tangent.
