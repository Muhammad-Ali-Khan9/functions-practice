# Section 3.6 — The Chain Rule

The chain rule differentiates a composition. If a quantity depends on an intermediate variable, and that intermediate variable depends on $x$, the rates multiply. Forgetting the derivative of the inside is the most common differentiation error in the course.

## The statement

If $g$ is differentiable at $x$ and $f$ is differentiable at $g(x)$, then

$$
\frac{d}{dx} f(g(x)) = f'(g(x)) \cdot g'(x).
$$

In Leibniz notation, if $y = f(u)$ and $u = g(x)$,

$$
\frac{dy}{dx} = \frac{dy}{du} \cdot \frac{du}{dx}.
$$

The outside derivative is evaluated at the inside function, not at $x$, unless the inside happens to be $x$. Then multiply by the derivative of the inside.

## The patterns you will use every day

Power of a function, which is the chain rule with $f(u) = u^n$:

$$
\frac{d}{dx} \bigl(g(x)\bigr)^n = n \bigl(g(x)\bigr)^{n-1} g'(x).
$$

Trigonometric outside:

$$
\frac{d}{dx} \sin(g(x)) = \cos(g(x)) \cdot g'(x), \qquad \frac{d}{dx} \cos(g(x)) = -\sin(g(x)) \cdot g'(x).
$$

Nested compositions multiply every layer. For $y = \sin((x^2 + 1)^3)$,

$$
\frac{dy}{dx} = \cos((x^2 + 1)^3) \cdot 3(x^2 + 1)^2 \cdot 2x.
$$

Read it from the outside in: derivative of sine, times derivative of the cube, times derivative of the inside quadratic.

## How to see the layers

Rewrite the expression with parentheses before you differentiate. $\sin x^2$ is ambiguous in handwriting. In this course $\sin x^2$ means $\sin(x^2)$, and $(\sin x)^2$ is written $\sin^2 x$. Their derivatives are different:

$$
\frac{d}{dx} \sin(x^2) = \cos(x^2) \cdot 2x, \qquad \frac{d}{dx} \sin^2 x = 2\sin x \cos x.
$$

A constant inside does not need a dramatic chain-rule performance. The derivative of $\sin(x + \pi/3)$ is $\cos(x + \pi/3) \cdot 1$. The inside derivative is $1$, and it must still be there in your reasoning. It does not change the written answer.

## Product rule wrapped around a chain

Differentiate $(x^2 + 1) \sin(3x)$ by the product rule. The second factor needs the chain rule:

$$
2x \sin(3x) + (x^2 + 1) \cos(3x) \cdot 3.
$$

Do the product rule first if the expression is a product, and the chain rule on each factor that is a composition. Do the quotient rule first if it is a quotient, and the chain rule on the top and the bottom.

## Why the rule is true, in one paragraph

The difference quotient of $f(g(x))$ is

$$
\frac{f(g(x + h)) - f(g(x))}{h} = \frac{f(g(x) + k) - f(g(x))}{k} \cdot \frac{k}{h},
$$

when $k = g(x + h) - g(x)$ is not zero. As $h \to 0$, the second factor approaches $g'(x)$ and $k \to 0$, so the first factor approaches $f'(g(x))$. The case where $k = 0$ for a sequence of $h$ is handled by continuity of the difference quotient of $f$. The book’s proof fills that gap. The calculation above is the reason the two rates multiply.

## Mistakes that change the answer

- Stopping after the outside derivative. $\frac{d}{dx}(x^2 + 1)^{10} = 10(x^2 + 1)^9$ is missing the factor $2x$.
- Evaluating the outside derivative at $x$ instead of at the inside. The derivative of $\sin(x^2)$ is $\cos(x^2) \cdot 2x$, not $\cos x \cdot 2x$.
- Multiplying by the inside function instead of by its derivative.
- Using the chain rule on a product. A product is not a composition. $x \sin x$ is the product rule. $\sin(x) \cdot x$ is the same product. $\sin(x \cdot x) = \sin(x^2)$ is a composition.
- Differentiating $\ln(g(x))$ as $1/x$. That is section 3.8, and the correct derivative is $g'(x)/g(x)$.

---

## Questions

### Question 1

Differentiate.

1. $(3x - 2)^5$
2. $\cos(x^3)$
3. $\sqrt{x^2 + 1}$
4. $\tan(4x)$

### Question 2

Differentiate $y = \sin^3(2x)$ by identifying three layers, and evaluate $y'$ at $x = \pi/4$.

### Question 3

Find the tangent line to $y = (x^2 - 1)^4$ at $x = 1$. Explain the slope with a sentence about a factor of $(x - 1)$.

### Question 4

Differentiate $y = x^2 \sqrt{1 - x}$ for $x < 1$, and find the domain of the derivative as a real function coming from this formula.

### Question 5

Two students differentiate $\cos^2(x^2)$. One gets $-2\cos(x^2)\sin(x^2) \cdot 2x$. The other gets $-2\cos(x^2)\sin(x^2)$. Who is right, and which layer did the other student drop?

### Question 6

Let $u(x)$ be differentiable, $u(1) = 3$, and $u'(1) = -2$. Let $y = (u(x))^4 + \sin(u(x))$. Find $dy/dx$ at $x = 1$, without knowing a formula for $u$.

### Question 7

Differentiate $y = \dfrac{(2x + 1)^3}{\cos x}$. Then write the derivative of $y = \sec(x^2 + x)$.

### Question 8

Position is $s(t) = \sin(t^2)$ meters, $t$ in seconds.

1. Find the velocity and the acceleration.
2. Find the velocity at $t = \sqrt{\pi}$.
3. Why does a large $t$ make the velocity oscillate with a growing amplitude, even though the position stays between $-1$ and $1$?

### Question 9

The chain rule in Leibniz form says $dy/dx = (dy/du)(du/dx)$. Suppose $y = u^3$ and $u = 1 - x^2$. Compute $dy/dx$ both in Leibniz form and by substituting first. Show that the results agree, and state where they are valid.

### Question 10

Find every $x$ in $[0, \pi]$ where the tangent to $y = \sin^2 x$ is horizontal. Then find the derivative of $y = \sin(x^2)$ and explain why a horizontal tangent is harder to list for that function.

---

## Answers

### Answer 1

1. $5(3x - 2)^4 \cdot 3 = 15(3x - 2)^4$.

2. $-\sin(x^3) \cdot 3x^2$.

3. $\frac{1}{2}(x^2 + 1)^{-1/2} \cdot 2x = \dfrac{x}{\sqrt{x^2 + 1}}$.

4. $\sec^2(4x) \cdot 4 = 4\sec^2(4x)$.

### Answer 2

$y = \bigl(\sin(2x)\bigr)^3$. Outside power $3$, then sine, then $2x$:

$$
y' = 3\sin^2(2x) \cdot \cos(2x) \cdot 2 = 6 \sin^2(2x) \cos(2x).
$$

At $x = \pi/4$, $\sin(\pi/2) = 1$ and $\cos(\pi/2) = 0$, so $y' = 0$.

### Answer 3

$y' = 4(x^2 - 1)^3 \cdot 2x = 8x(x^2 - 1)^3$. At $x = 1$, $y' = 8 \cdot 1 \cdot 0 = 0$ and $y = 0$. The tangent line is $y = 0$.

The inside factor $x^2 - 1 = (x - 1)(x + 1)$ vanishes at $x = 1$, and it is raised to the fourth power, so its derivative still contains $(x^2 - 1)^3$, which vanishes at $x = 1$. The graph is flat on the $x$-axis at that point. It touches the axis and does not cross with a nonzero slope.

### Answer 4

Product rule, with the chain rule on the root. For $x < 1$,

$$
y' = 2x (1 - x)^{1/2} + x^2 \cdot \frac{1}{2}(1 - x)^{-1/2} \cdot (-1).
$$

$$
y' = 2x\sqrt{1 - x} - \frac{x^2}{2\sqrt{1 - x}} = \frac{4x(1 - x) - x^2}{2\sqrt{1 - x}} = \frac{4x - 5x^2}{2\sqrt{1 - x}}.
$$

The original function is defined for $x \leq 1$. The rewritten derivative has $\sqrt{1 - x}$ in the denominator, so $x = 1$ is excluded. The derivative formula as a real function is valid for $x < 1$. At the endpoint $x = 1$ the original graph has a vertical tangent or at least fails to have this finite simplified form. The factor $\sqrt{1 - x}$ in the first version of the product rule is fine at $x = 1$, but the second term blows up unless the numerator $x^2$ structure is inspected through the combined fraction. The combined numerator at $x = 1$ is $4 - 5 = -1 \neq 0$, and the denominator is $0$, so the slope becomes infinite as $x \to 1^-$. There is no finite derivative at the endpoint.

### Answer 5

The first student is right. $\cos^2(x^2) = \bigl(\cos(x^2)\bigr)^2$. The layers are: square, then cosine, then $x^2$.

$$
\frac{d}{dx} = 2\cos(x^2) \cdot \bigl(-\sin(x^2)\bigr) \cdot 2x = -4x \cos(x^2)\sin(x^2).
$$

The first student’s written answer $-2\cos(x^2)\sin(x^2)\cdot 2x$ is exactly $-4x\cos(x^2)\sin(x^2)$. The second student differentiated the square and the cosine and dropped the derivative of $x^2$.

### Answer 6

$$
\frac{dy}{dx} = 4(u(x))^3 u'(x) + \cos(u(x)) \cdot u'(x).
$$

At $x = 1$,

$$
4 \cdot 3^3 \cdot (-2) + \cos(3) \cdot (-2) = 4 \cdot 27 \cdot (-2) - 2\cos 3 = -216 - 2\cos 3.
$$

### Answer 7

Quotient rule, chain rule on the top:

$$
y' = \frac{3(2x + 1)^2 \cdot 2 \cdot \cos x - (2x + 1)^3 (-\sin x)}{\cos^2 x} = \frac{(2x + 1)^2 \bigl(6\cos x + (2x + 1)\sin x\bigr)}{\cos^2 x}.
$$

And $\dfrac{d}{dx} \sec(x^2 + x) = \sec(x^2 + x)\tan(x^2 + x) \cdot (2x + 1)$.

### Answer 8

1. $v(t) = \cos(t^2) \cdot 2t = 2t \cos(t^2)$.

$$
a(t) = 2\cos(t^2) + 2t \bigl(-\sin(t^2) \cdot 2t\bigr) = 2\cos(t^2) - 4t^2 \sin(t^2).
$$

2. $v(\sqrt{\pi}) = 2\sqrt{\pi} \cos(\pi) = 2\sqrt{\pi}(-1) = -2\sqrt{\pi}$ m/s.

3. The position $\sin(t^2)$ is trapped in $[-1, 1]$, but its phase $t^2$ changes faster and faster. The chain-rule factor $2t$ is the rate of that phase. It grows without bound, so the velocity $2t \cos(t^2)$ oscillates between peaks whose size is about $2\lvert t \rvert$. The graph wiggles between $-1$ and $1$ with steeper and steeper sides.

### Answer 9

$dy/du = 3u^2$ and $du/dx = -2x$, so

$$
\frac{dy}{dx} = 3u^2(-2x) = -6x(1 - x^2)^2.
$$

Substituting first: $y = (1 - x^2)^3$, so $y' = 3(1 - x^2)^2 \cdot (-2x) = -6x(1 - x^2)^2$.

They agree for every real $x$. Both $u^3$ and $1 - x^2$ are polynomials in their variables, so no domain is cut down.

### Answer 10

$y = \sin^2 x = (\sin x)^2$, so $y' = 2\sin x \cos x = \sin(2x)$. On $[0, \pi]$, $\sin(2x) = 0$ when $2x = 0, \pi, 2\pi$, so $x = 0$, $x = \pi/2$, and $x = \pi$. All three lie in the interval. The horizontal tangents are at those three inputs.

For $y = \sin(x^2)$, $y' = \cos(x^2) \cdot 2x$. This is zero when $x = 0$ or when $\cos(x^2) = 0$. The second equation is $x^2 = \pi/2 + n\pi$ for integers $n \geq 0$, so $x = \pm \sqrt{\pi/2 + n\pi}$. There are infinitely many such $x$ on the real line, and listing them means listing those square roots rather than a short set of angles inside one period. The horizontal tangents are not equally spaced in $x$, because the phase is $x^2$.
