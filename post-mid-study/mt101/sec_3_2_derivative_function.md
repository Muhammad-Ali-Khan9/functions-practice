# Section 3.2 — The Derivative as a Function

Section 3.1 produced one number $f'(a)$ at one point. If that limit exists at many points, the assignment $x \mapsto f'(x)$ is itself a function. Its domain is the set of $x$ where the limit exists. Graphing $f'$ is a second picture of the same curve: positive where $f$ is rising, negative where $f$ is falling, and zero where the tangent is horizontal.

## Notation

All of these mean the derivative of $y = f(x)$:

$$
f'(x), \qquad y', \qquad \frac{dy}{dx}, \qquad \frac{d}{dx}\bigl(f(x)\bigr), \qquad D_x f.
$$

The notation $dy/dx$ is a single symbol for the derivative. It is not a fraction yet, although the chain rule later lets you manipulate it as if it were one, with a meaning that has to be justified. The value at a point is

$$
f'(a) = \left. \frac{dy}{dx} \right|_{x = a}.
$$

Higher derivatives are derivatives of derivatives. The second derivative $f''(x)$ is the rate of change of the slope. In position language, if $s$ is position, $s'$ is velocity and $s''$ is acceleration.

## Reading $f'$ from the graph of $f$

On an interval where $f$ is increasing, $f'$ is positive, except possibly at isolated points where the tangent is horizontal. On an interval where $f$ is decreasing, $f'$ is negative. At a local peak or valley with a horizontal tangent, $f'$ is zero and typically changes sign.

Corners of $f$ are holes or breaks in the domain of $f'$. The absolute value $f(x) = \lvert x \rvert$ has

$$
f'(x) =
\begin{cases}
-1 & \text{if } x < 0 \\
1 & \text{if } x > 0,
\end{cases}
$$

and $f'(0)$ does not exist. The graph of $f'$ is two horizontal rays with a missing point at the origin. It is not the step that includes a value at $0$.

A vertical tangent on $f$ is a vertical asymptote or an infinite blow-up of $f'$. For $f(x) = x^{1/3}$, $f'(x) = (1/3) x^{-2/3}$ for $x \neq 0$, which goes to $+\infty$ as $x \to 0$.

## Differentiable means “has a derivative nearby”

$f$ is differentiable on an open interval if $f'(x)$ exists at every point of that interval. Differentiable on a closed interval means differentiable on the inside and one-sided differentiable at the endpoints. “Differentiable” at a single point only requires the limit there. “Differentiable and the derivative is continuous” is a stronger property, sometimes called continuously differentiable. The derivative of $f(x) = x^2 \sin(1/x)$ for $x \neq 0$, with $f(0) = 0$, exists everywhere and is not continuous at $0$. That example is worth knowing as a warning. A first course mostly meets derivatives that are continuous wherever they exist, except for jumps that come from corners of $f$.

## How the graphs line up

If you are given the graph of $f'$:

- $f$ is rising where $f' > 0$ and falling where $f' < 0$.
- $f$ may have a horizontal tangent where $f' = 0$.
- You cannot recover the vertical placement of $f$. Adding a constant to $f$ does not change $f'$. The graph of $f'$ determines the shape of $f$ up to a vertical shift.
- A jump in $f'$ does not mean $f$ jumps. It means the slope jumps, which is a corner of $f$ only when $f'$ has a break that cannot be bridged. If $f'$ itself has a removable hole, $f$ can still be smooth once the hole is filled. If $f'$ has a jump, $f$ has a corner.

## Mistakes that change the answer

- Including $x = 0$ in the derivative of $\lvert x \rvert$.
- Reading “$f'$ positive” as “$f$ positive.” The sign of the derivative is the direction of the graph, not the sign of the output.
- Recovering a unique $f$ from $f'$. The constant of integration is free. That constant is the subject of antiderivatives later.
- Differentiating a function at a point outside its domain. $\sqrt{x}$ has a derivative on $(0, \infty)$ only.
- Confusing $f''(a) > 0$ with $f$ increasing. The second derivative describes concavity, the bending of the slope. Increase and decrease are decided by $f'$.

---

## Questions

### Question 1

Use the definition to find $f'(x)$ for $f(x) = x^2 - 4x$, and state the domain of $f'$. Then find the $x$-values where the tangent is horizontal.

### Question 2

Let $f(x) = \lvert x + 1 \rvert$. Write $f'(x)$ as a piecewise function, including the domain. Sketch the information by describing the graph of $f'$.

### Question 3

The graph of $f$ is a parabola opening upward with vertex $(2, -1)$. Describe the graph of $f'$: its shape, its root, and its sign on $(-\infty, 2)$ and on $(2, \infty)$. Why is the vertex height $-1$ invisible in $f'$?

### Question 4

Suppose $f'(x) = (x - 1)(x + 2)$ and $f$ is differentiable everywhere.

1. On which intervals is $f$ increasing?
2. Where does $f$ have a horizontal tangent?
3. Can you determine $f(0)$ from this information?

### Question 5

Find $f'(x)$ and $f''(x)$ for $f(x) = x^3 - 3x^2 + 1$ by the definition for the first derivative, or by the power rule if you already use it. Then say where $f'$ is increasing. That is a statement about $f''$.

### Question 6

True or false, with a reason or a counterexample.

1. If $f'(a)$ exists, then $f'$ is continuous at $a$.
2. If $f$ is differentiable on $\mathbb{R}$, then $f$ is continuous on $\mathbb{R}$.
3. If $f'$ is positive at a single point $a$, then $f$ is increasing on some open interval containing $a$.
4. The function $f(x) = 1/x$ is differentiable on its domain.

### Question 7

Let $f(x) = \begin{cases} x^2 & \text{if } x < 1 \\ 2x - 1 & \text{if } x \geq 1. \end{cases}$

1. Show that $f$ is continuous at $x = 1$.
2. Compute the left-hand and right-hand derivatives at $x = 1$.
3. Is $f'$ defined at $1$? If you define a derivative function on each open piece, do those pieces meet at $1$?

### Question 8

Position is $s(t) = t^3 - 3t$ for $-2 \leq t \leq 2$.

1. Find $v(t) = s'(t)$ and $a(t) = s''(t)$ by the power rule.
2. When is the particle moving to the right?
3. When is the acceleration negative, and what does that say about the velocity at those times?

### Question 9

Explain why $f$ and $f + 7$ have the same derivative function. Then find the function $g(x) = x^2 + c$ whose graph passes through $(1, 4)$, and compute $g'(x)$. Do other choices of the constant $c$ give the same derivative?

### Question 10

You are shown the graph of $f'$: it is a straight line through $(-1, 0)$ and $(0, 2)$, extended in both directions, so $f'(x) = 2x + 2$.

1. Where is $f$ decreasing?
2. Where does $f$ have a horizontal tangent?
3. Give two different functions that could be $f$.
4. Which of those two lies above the other, and can the graph of $f'$ tell you that?

---

## Answers

### Answer 1

$$
\frac{f(x + h) - f(x)}{h} = \frac{(x + h)^2 - 4(x + h) - x^2 + 4x}{h} = 2x - 4 + h.
$$

So $f'(x) = 2x - 4$, defined for every real $x$. The tangent is horizontal when $2x - 4 = 0$, so $x = 2$. That is the vertex of the parabola.

### Answer 2

For $x > -1$, $f(x) = x + 1$ and $f'(x) = 1$. For $x < -1$, $f(x) = -(x + 1)$ and $f'(x) = -1$. At $x = -1$ the difference quotient is $\lvert h \rvert / h$, whose one-sided limits disagree.

$$
f'(x) =
\begin{cases}
-1 & \text{if } x < -1 \\
1 & \text{if } x > -1.
\end{cases}
$$

The domain is $(-\infty, -1) \cup (-1, \infty)$. The graph is the horizontal line $y = -1$ to the left of $x = -1$ and the horizontal line $y = 1$ to the right, with no point on the line $x = -1$.

### Answer 3

A parabola opening upward has slopes that increase at a constant rate, so $f'$ is a line with positive slope. The horizontal tangent is at the vertex, so $f'$ has a root at $x = 2$. To the left of the vertex the parabola is falling, so $f' < 0$ on $(-\infty, 2)$. To the right, $f' > 0$ on $(2, \infty)$.

Adding a constant changes the vertex height and does not change any slope. Replacing $-1$ by any other vertex height leaves $f'$ the same. The number $-1$ cannot be read off $f'$.

### Answer 4

1. $(x - 1)(x + 2)$ is positive when both factors are positive or both are negative: $x > 1$ or $x < -2$. So $f$ is increasing on $(-\infty, -2]$ and on $[1, \infty)$. The endpoints can be included because $f'$ is zero only at the endpoints of those rays and $f'$ does not change to the wrong sign inside them. On $[-2, 1]$, $f'$ is negative, so $f$ is decreasing there.

2. Horizontal tangents at $x = -2$ and $x = 1$.

3. No. Functions with the same derivative differ by a constant. $f(0)$ can be any real number, depending on that constant.

### Answer 5

By the power rule, $f'(x) = 3x^2 - 6x$ and $f''(x) = 6x - 6$. The first derivative is increasing where $f'' \geq 0$ is the careful statement: $f''(x) > 0$ when $6x - 6 > 0$, so $x > 1$. Thus $f'$ is increasing on $[1, \infty)$. On $(-\infty, 1]$, $f'' \leq 0$ and $f'$ is decreasing. At $x = 1$, $f'$ has a minimum.

From the definition, the same $f'(x)$ appears after expanding $(x + h)^3 - 3(x + h)^2$ and cancelling $h$. The power rule is the cleaned-up result of that expansion.

### Answer 6

1. False. Differentiability of $f$ at $a$ does not require $f'$ to be continuous at $a$. A standard example is $f(x) = x^2 \sin(1/x)$ for $x \neq 0$ and $f(0) = 0$. Then $f'(0) = 0$, but $f'(x) = 2x \sin(1/x) - \cos(1/x)$ for $x \neq 0$ oscillates wildly near $0$ and does not approach $0$.
2. True. Differentiability at each point implies continuity at that point, by the argument in section 3.1.
3. False as a general claim that uses only the value $f'(a) > 0$ without continuity of $f'$. If $f'$ is continuous at $a$ and $f'(a) > 0$, then $f'$ is positive on a neighborhood and $f$ is increasing there. Without continuity of $f'$, there are pathological examples where $f'(a) > 0$ but $f$ is not increasing on any neighborhood. In this course, derivatives that come from the rules of the next sections are continuous on the intervals where the formulas are defined, and for those functions the claim is true. The precise freshman-safe statement is: if $f'(x) > 0$ throughout an open interval, then $f$ is increasing on that interval. A single point is not enough by itself.
4. True. The domain is $(-\infty, 0) \cup (0, \infty)$, and on each piece $f'(x) = -1/x^2$ exists. It is not differentiable at $0$ because $0$ is not in the domain.

### Answer 7

1. Left-hand limit: $1^2 = 1$. Right-hand value and limit: $2(1) - 1 = 1$. And $f(1) = 1$. Continuous at $1$.

2. For $h < 0$, the left difference quotient uses $x^2$:

$$
\frac{(1 + h)^2 - 1}{h} = \frac{2h + h^2}{h} = 2 + h \to 2.
$$

For $h > 0$, the right piece is the line $2x - 1$, whose slope is $2$. The right-hand derivative is $2$.

3. Both one-sided derivatives equal $2$, so $f'(1) = 2$. On $(-\infty, 1)$, $f'(x) = 2x$. On $(1, \infty)$, $f'(x) = 2$. These agree in the limit as $x \to 1$, both approaching $2$, and the derivative at the point exists and equals $2$. So $f'$ can be defined at $1$ by $f'(1) = 2$. Note that $2x$ at $x = 1$ is already $2$, so the left formula also matches. The function is differentiable at the joint because the pieces were built to share both the value and the slope. If the right piece had been $3x - 2$, the values would still match at $x = 1$ because $3 - 2 = 1$, but the slopes $2$ and $3$ would not, and $f'(1)$ would fail.

### Answer 8

1. $v(t) = 3t^2 - 3$ and $a(t) = 6t$.

2. The particle moves to the right when $v(t) > 0$, so $3(t^2 - 1) > 0$, so $t < -1$ or $t > 1$, inside the given window. On $[-2, 2]$ that is $[-2, -1)$ and $(1, 2]$. At $t = \pm 1$ it is instantaneously at rest.

3. $a(t) < 0$ when $t < 0$. Negative acceleration means the velocity is decreasing. On $[-2, 0)$ the velocity $3t^2 - 3$ goes from $3(4) - 3 = 9$ down toward $-3$. The particle can still be moving right while its velocity decreases, which is what happens on $[-2, -1)$.

### Answer 9

$(f(x) + 7) - (f(a) + 7) = f(x) - f(a)$, so the difference quotients are identical. The derivative functions are equal.

$g(1) = 1 + c = 4$ gives $c = 3$. The only such function is $g(x) = x^2 + 3$, and $g'(x) = 2x$. Every function $x^2 + c$ has this same derivative. The point $(1, 4)$ selects the constant. It does not change the derivative.

### Answer 10

1. $f'(x) = 2x + 2 = 2(x + 1) < 0$ when $x < -1$. So $f$ is decreasing on $(-\infty, -1]$.

2. Horizontal tangent at $x = -1$.

3. $f(x) = x^2 + 2x$ and $f(x) = x^2 + 2x + 10$ both have derivative $2x + 2$.

4. The second graph is $10$ units above the first. The graph of $f'$ is the same for both, so it cannot tell you which one lies above the other.
