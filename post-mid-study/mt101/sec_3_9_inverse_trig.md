# Section 3.9 — Inverse Trigonometric Functions

Sine, cosine, and tangent are not one-to-one on their full domains. Each repeats. An inverse function exists only after the domain is cut down to an interval where the original function is one-to-one and hits every value in its range. The resulting inverse is written $\sin^{-1} x$ or $\arcsin x$. The superscript is the inverse-function notation from section 1.6. It is not a reciprocal. The reciprocal of sine is $\csc x$.

This section records the principal branches and then differentiates them. The derivatives are algebraic. They have no trigonometric functions left in the final formula, which is why they close integrals later in the course.

## Principal values

| Function | Domain | Range (principal values) | Identity to remember |
| --- | --- | --- | --- |
| $\sin^{-1} x$ | $[-1, 1]$ | $[-\pi/2,\ \pi/2]$ | $\sin^{-1} x + \cos^{-1} x = \pi/2$ |
| $\cos^{-1} x$ | $[-1, 1]$ | $[0,\ \pi]$ | the same identity |
| $\tan^{-1} x$ | $\mathbb{R}$ | $(-\pi/2,\ \pi/2)$ | $\tan^{-1} x + \tan^{-1}(1/x) = \pi/2$ for $x > 0$ |
| $\cot^{-1} x$ | $\mathbb{R}$ | $(0,\ \pi)$ |  |
| $\sec^{-1} x$ | $(-\infty,\ -1] \cup [1,\ \infty)$ | $[0,\ \pi]$ excluding $\pi/2$ | Thomas’s range |
| $\csc^{-1} x$ | $(-\infty,\ -1] \cup [1,\ \infty)$ | $[-\pi/2,\ \pi/2]$ excluding $0$ | Thomas’s range |

The range is the set of angles the inverse is allowed to return. $\sin(\pi - \pi/6) = 1/2$ as well, but $\sin^{-1}(1/2) = \pi/6$, not $5\pi/6$, because $\pi/6$ is the value inside $[-\pi/2,\ \pi/2]$.

$\tan^{-1} x$ is defined for every real $x$. Its horizontal asymptotes are $y = \pi/2$ and $y = -\pi/2$. It is an odd function. $\sin^{-1} x$ and $\tan^{-1} x$ are odd. $\cos^{-1} x$ is neither even nor odd. $\cos^{-1}(-x) = \pi - \cos^{-1} x$.

## Derivatives

On the interior of the domain,

$$
\begin{aligned}
\frac{d}{dx} \sin^{-1} x &= \frac{1}{\sqrt{1 - x^2}}, && \lvert x \rvert < 1 \\
\frac{d}{dx} \cos^{-1} x &= -\frac{1}{\sqrt{1 - x^2}}, && \lvert x \rvert < 1 \\
\frac{d}{dx} \tan^{-1} x &= \frac{1}{1 + x^2} \\
\frac{d}{dx} \cot^{-1} x &= -\frac{1}{1 + x^2} \\
\frac{d}{dx} \sec^{-1} x &= \frac{1}{\lvert x \rvert \sqrt{x^2 - 1}}, && \lvert x \rvert > 1 \\
\frac{d}{dx} \csc^{-1} x &= -\frac{1}{\lvert x \rvert \sqrt{x^2 - 1}}, && \lvert x \rvert > 1.
\end{aligned}
$$

The absolute value in the last two formulas is required so the derivative has the correct sign on $x < -1$ for the ranges Thomas uses. Some books restrict $\sec^{-1}$ to $[0, \pi/2) \cup (\pi/2, \pi]$ and get the same derivative formula.

At the endpoints $x = \pm 1$, $\sin^{-1} x$ and $\cos^{-1} x$ have vertical tangents. The derivative formulas blow up, and those endpoint derivatives are not real numbers.

## Where the formulas come from

Let $y = \sin^{-1} x$, so $\sin y = x$ and $y \in [-\pi/2,\ \pi/2]$. Differentiate: $\cos y \cdot y' = 1$, so $y' = 1/\cos y$. On the principal range, cosine is nonnegative, and $\cos y = \sqrt{1 - \sin^2 y} = \sqrt{1 - x^2}$. Therefore $y' = 1/\sqrt{1 - x^2}$.

Let $y = \tan^{-1} x$, so $\tan y = x$ and $y \in (-\pi/2,\ \pi/2)$. Differentiate: $\sec^2 y \cdot y' = 1$. And $\sec^2 y = 1 + \tan^2 y = 1 + x^2$, so $y' = 1/(1 + x^2)$.

The cosine and cotangent derivatives are the negatives of the sine and tangent derivatives because of the co-function identities $\cos^{-1} x = \pi/2 - \sin^{-1} x$ and $\cot^{-1} x = \pi/2 - \tan^{-1} x$. Differentiating a constant minus a function produces the minus sign.

## Chain rule

$$
\frac{d}{dx} \sin^{-1}(g(x)) = \frac{g'(x)}{\sqrt{1 - (g(x))^2}}, \qquad \frac{d}{dx} \tan^{-1}(g(x)) = \frac{g'(x)}{1 + (g(x))^2}.
$$

So $\frac{d}{dx} \tan^{-1}(x/2) = \frac{1/2}{1 + (x/2)^2} = \frac{1/2}{(4 + x^2)/4} = \frac{2}{4 + x^2}$.

A square root in the denominator of $(\sin^{-1})'$ is not optional. Replacing it by $1 - x^2$ without the root is a different function.

## Right triangles

If $\theta = \tan^{-1}(x/3)$ and $x > 0$, a right triangle with opposite side $x$ and adjacent side $3$ has $\tan \theta = x/3$. The hypotenuse is $\sqrt{x^2 + 9}$. Then $\sin \theta = x/\sqrt{x^2 + 9}$ and $\cos \theta = 3/\sqrt{x^2 + 9}$. This is how an inverse-tangent expression becomes an algebraic function of $x$ when a later problem asks for $\sin(\tan^{-1}(x/3))$. The angle you draw must lie in the principal range. For $\tan^{-1}$, that range is the right half of the unit circle’s angular interval, $(-\pi/2,\ \pi/2)$, so cosine is positive even when $x < 0$, and the hypotenuse is written with a positive square root while the opposite side keeps the sign of $x$.

## Mistakes that change the answer

- Reading $\sin^{-1} x$ as $1/\sin x$.
- Returning $5\pi/6$ for $\sin^{-1}(1/2)$.
- Dropping the minus sign on $(\cos^{-1} x)'$.
- Writing $(\tan^{-1} x)' = 1/\sqrt{1 + x^2}$. The denominator is $1 + x^2$, with no square root. The square root belongs to $\sin^{-1}$.
- Forgetting the absolute value in $(\sec^{-1} x)'$ when $x$ is negative.
- Differentiating at $x = \pm 1$ for $\sin^{-1}$ and reporting a finite slope. The tangent is vertical.

---

## Questions

### Question 1

Evaluate exactly: $\sin^{-1}(-\sqrt{3}/2)$, $\cos^{-1}(-1/2)$, $\tan^{-1}(-1)$, $\sin^{-1}(1)$, and $\cos^{-1}(0)$. Name the principal range that forced each choice.

### Question 2

Compute and simplify the derivatives of $\sin^{-1}(2x)$, $\tan^{-1}(e^x)$, and $\sec^{-1}(x^2)$ on the intervals where they are defined. For the last one, assume $x^2 > 1$.

### Question 3

Find the tangent line to $y = \tan^{-1} x$ at $x = 1$, and the tangent line to $y = \sin^{-1} x$ at $x = 0$.

### Question 4

Prove that $\dfrac{d}{dx} \cos^{-1} x = -\dfrac{1}{\sqrt{1 - x^2}}$ from the identity $\cos^{-1} x = \pi/2 - \sin^{-1} x$. Then explain, using the graphs, why one derivative is positive and the other is negative on $(-1, 1)$.

### Question 5

Let $\theta = \tan^{-1}(4/3)$. Find $\sin \theta$, $\cos \theta$, and $\tan \theta$ without a calculator. Then let $\phi = \sin^{-1}(-5/13)$. Find $\cos \phi$ and $\tan \phi$, using the principal range to choose signs.

### Question 6

Differentiate $y = x \sin^{-1} x + \sqrt{1 - x^2}$ and simplify as far as you can. On what interval is the original function defined, and where is the derivative formula valid?

### Question 7

Solve $\sin^{-1} x = \cos^{-1} x$. Then solve $\tan^{-1}(2x) = \pi/4$.

### Question 8

A calculus student claims $\dfrac{d}{dx} \sin^{-1}(\sin x) = 1$ for every real $x$, because the functions are inverses. Test the claim at $x = 0$ and at $x = 2\pi/3$. Describe the set of $x$ where the claim is true.

### Question 9

Find $y'$ for $y = \tan^{-1}\left(\dfrac{1 + x}{1 - x}\right)$ on $(-1, 1)$, and simplify. What familiar function has this derivative? Be careful: having the same derivative does not mean the functions are equal.

### Question 10

The range of a projectile launched at angle $\theta$ with fixed speed, ignoring air resistance, is proportional to $\sin(2\theta)$. Suppose a design constraint forces $\theta = \tan^{-1} x$ for a setting $x > 0$, and the quantity of interest is $R(x) = \sin\bigl(2\tan^{-1} x\bigr)$.

1. Use a triangle to write $R(x)$ without inverse trigonometric functions.
2. Differentiate that algebraic form.
3. Also differentiate $R(x)$ by the chain rule before simplifying, and check the two derivatives against each other at $x = 1$.

---

## Answers

### Answer 1

$\sin^{-1}(-\sqrt{3}/2) = -\pi/3$, because $\sin(-\pi/3) = -\sqrt{3}/2$ and $-\pi/3$ lies in $[-\pi/2,\ \pi/2]$.

$\cos^{-1}(-1/2) = 2\pi/3$, because $\cos(2\pi/3) = -1/2$ and $2\pi/3$ lies in $[0,\ \pi]$. The angle $-\,2\pi/3$ has the same cosine and is not in the range.

$\tan^{-1}(-1) = -\pi/4$, in $(-\pi/2,\ \pi/2)$.

$\sin^{-1}(1) = \pi/2$, the right endpoint of the sine range.

$\cos^{-1}(0) = \pi/2$, which is inside $[0,\ \pi]$. Note $\sin^{-1}(0) = 0$, a different angle. Both angles have the requested trigonometric value for their own function. The ranges do not match each other.

### Answer 2

$$
\frac{d}{dx} \sin^{-1}(2x) = \frac{2}{\sqrt{1 - 4x^2}}, \qquad \lvert 2x \rvert < 1.
$$

$$
\frac{d}{dx} \tan^{-1}(e^x) = \frac{e^x}{1 + e^{2x}}.
$$

For $\lvert x \rvert > 1$, so that $x^2 > 1$ is automatic when $\lvert x \rvert > 1$,

$$
\frac{d}{dx} \sec^{-1}(x^2) = \frac{1}{\lvert x^2 \rvert \sqrt{x^4 - 1}} \cdot 2x = \frac{2x}{x^2 \sqrt{x^4 - 1}} = \frac{2}{x \sqrt{x^4 - 1}},
$$

provided $x > 1$. If $x < -1$, then $x^2 > 1$ still, and the factor $2x$ in the numerator is negative, while $\lvert x^2 \rvert = x^2$. The simplified form $2/(x \sqrt{x^4 - 1})$ remains valid for $x < -1$ as well, because the negative sign is carried by $x$ in the denominator. The domain in $x$ is $(-\infty, -1) \cup (1, \infty)$.

### Answer 3

$(\tan^{-1} x)' = 1/(1 + x^2)$. At $x = 1$ the slope is $1/2$ and the point is $(1,\ \pi/4)$. The tangent line is $y - \pi/4 = \frac{1}{2}(x - 1)$.

$(\sin^{-1} x)' = 1/\sqrt{1 - x^2}$. At $x = 0$ the slope is $1$ and the point is $(0, 0)$. The tangent line is $y = x$.

### Answer 4

$$
\frac{d}{dx}\left(\frac{\pi}{2} - \sin^{-1} x\right) = -\frac{1}{\sqrt{1 - x^2}}.
$$

On $(-1, 1)$, $\sin^{-1} x$ is increasing, from $-\pi/2$ toward $\pi/2$, so its derivative is positive. $\cos^{-1} x$ is decreasing, from $\pi$ toward $0$, so its derivative is negative. The identity says the second graph is an upside-down shift of the first, and differentiation produces the minus sign.

### Answer 5

$\tan \theta = 4/3$, and $\theta = \tan^{-1}(4/3)$ lies in $(0,\ \pi/2)$. The opposite side is $4$, the adjacent side is $3$, and the hypotenuse is $5$. Thus $\sin \theta = 4/5$, $\cos \theta = 3/5$, and $\tan \theta = 4/3$.

$\phi = \sin^{-1}(-5/13)$ lies in $[-\pi/2,\ 0)$, so cosine is positive and tangent is negative. A triangle with opposite side $5$ and hypotenuse $13$ has adjacent side $12$, because $5^2 + 12^2 = 13^2$. Therefore $\cos \phi = 12/13$ and $\tan \phi = -5/12$.

### Answer 6

The function is defined for $x \in [-1, 1]$.

$$
y' = \sin^{-1} x + x \cdot \frac{1}{\sqrt{1 - x^2}} + \frac{1}{2}(1 - x^2)^{-1/2} \cdot (-2x).
$$

$$
y' = \sin^{-1} x + \frac{x}{\sqrt{1 - x^2}} - \frac{x}{\sqrt{1 - x^2}} = \sin^{-1} x.
$$

The two algebraic terms cancel wherever $\lvert x \rvert < 1$. The derivative formula $y' = \sin^{-1} x$ is valid on $(-1, 1)$. At the endpoints the original square-root term has a vertical tangent, so the cancelled form should not be quoted as a derivative at $x = \pm 1$ without a separate one-sided check. The cancellation that produced $\sin^{-1} x$ used expressions that are undefined at those endpoints.

### Answer 7

Using $\sin^{-1} x + \cos^{-1} x = \pi/2$, the equation $\sin^{-1} x = \cos^{-1} x$ becomes $2\sin^{-1} x = \pi/2$, so $\sin^{-1} x = \pi/4$, so $x = \sin(\pi/4) = \sqrt{2}/2$.

Check: $\cos^{-1}(\sqrt{2}/2) = \pi/4$ as well.

$\tan^{-1}(2x) = \pi/4$ means $2x = \tan(\pi/4) = 1$, so $x = 1/2$. The value $\pi/4$ is inside the range of $\tan^{-1}$, so this step is reversible.

### Answer 8

At $x = 0$, $\sin^{-1}(\sin 0) = 0$, and the derivative of the composition is

$$
\frac{1}{\sqrt{1 - \sin^2 x}} \cdot \cos x = \frac{\cos x}{\lvert \cos x \rvert},
$$

because $\sqrt{\cos^2 x} = \lvert \cos x \rvert$, and this simplified form is valid where $\cos x \neq 0$ and $\sin x$ is inside $(-1, 1)$, with extra care at the endpoints. At $x = 0$ the value is $1$. The claim holds there.

At $x = 2\pi/3$, $\sin(2\pi/3) = \sqrt{3}/2$ and $\sin^{-1}(\sqrt{3}/2) = \pi/6$, not $2\pi/3$. The composition equals $\pi/6$ near that region only after the sine value is folded back into $[-\pi/2,\ \pi/2]$. Its derivative at $x = 2\pi/3$ is $\cos(2\pi/3)/\lvert \cos(2\pi/3) \rvert = (-1/2)/(1/2) = -1$, not $1$.

The identity $\sin^{-1}(\sin x) = x$ holds precisely when $x$ is already in the principal range $[-\pi/2,\ \pi/2]$. On the interior of that interval the derivative is $1$. Outside that interval the composition is a sawtooth that follows $x$ only on the principal piece and reflects on the neighboring pieces. The claim is false as a statement about every real $x$.

### Answer 9

Let $u = (1 + x)/(1 - x)$. Then

$$
u' = \frac{(1)(1 - x) - (1 + x)(-1)}{(1 - x)^2} = \frac{1 - x + 1 + x}{(1 - x)^2} = \frac{2}{(1 - x)^2}.
$$

$$
y' = \frac{1}{1 + u^2} \cdot u' = \frac{1}{1 + \left(\dfrac{1 + x}{1 - x}\right)^2} \cdot \frac{2}{(1 - x)^2}.
$$

$$
1 + u^2 = \frac{(1 - x)^2 + (1 + x)^2}{(1 - x)^2} = \frac{1 - 2x + x^2 + 1 + 2x + x^2}{(1 - x)^2} = \frac{2 + 2x^2}{(1 - x)^2} = \frac{2(1 + x^2)}{(1 - x)^2}.
$$

$$
y' = \frac{(1 - x)^2}{2(1 + x^2)} \cdot \frac{2}{(1 - x)^2} = \frac{1}{1 + x^2}.
$$

So $y'$ equals the derivative of $\tan^{-1} x$. Therefore $y = \tan^{-1} x + C$ on the interval $(-1, 1)$. At $x = 0$, $y = \tan^{-1}(1) = \pi/4$ and $\tan^{-1}(0) = 0$, so $C = \pi/4$ on this interval. The functions are not equal. They differ by the constant $\pi/4$ on $(-1, 1)$.

### Answer 10

1. Let $\theta = \tan^{-1} x$, so $\tan \theta = x$ with $\theta \in (0,\ \pi/2)$ for $x > 0$. Then $\sin \theta = x/\sqrt{1 + x^2}$ and $\cos \theta = 1/\sqrt{1 + x^2}$.

$$
R(x) = \sin(2\theta) = 2\sin \theta \cos \theta = \frac{2x}{1 + x^2}.
$$

2. Quotient rule:

$$
R'(x) = \frac{2(1 + x^2) - 2x \cdot 2x}{(1 + x^2)^2} = \frac{2 + 2x^2 - 4x^2}{(1 + x^2)^2} = \frac{2 - 2x^2}{(1 + x^2)^2}.
$$

3. Chain rule:

$$
R'(x) = \cos(2\tan^{-1} x) \cdot 2 \cdot \frac{1}{1 + x^2}.
$$

At $x = 1$, $\tan^{-1} 1 = \pi/4$ and $2\theta = \pi/2$, so $\cos(\pi/2) = 0$. The chain-rule value is $0$. The algebraic derivative at $x = 1$ is $(2 - 2)/(2)^2 = 0$. They agree. This is the maximum of $2x/(1 + x^2)$ for $x > 0$, corresponding to the launch angle $\theta = \pi/4$.
