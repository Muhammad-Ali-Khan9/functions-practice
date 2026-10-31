# Section 3.5 — Derivatives of Trigonometric Functions

The power rule does not differentiate sine. Sine is transcendental. Its derivative comes from the addition formula and from two limits in section 2.2, and the angle must be in radians. In degree mode the same argument produces an extra factor of $\pi/180$, and every later formula in the book would carry that factor. This course works in radians.

## Sine and cosine

$$
\frac{d}{dx} \sin x = \cos x, \qquad \frac{d}{dx} \cos x = -\sin x.
$$

The sign on the cosine derivative is the one students drop. Differentiating $\cos x$ twice returns $-\cos x$. Differentiating $\sin x$ four times returns $\sin x$. The derivatives cycle every four steps:

$$
\sin x,\quad \cos x,\quad -\sin x,\quad -\cos x,\quad \sin x.
$$

A short reason for the sine rule, with the details of the limits already known:

$$
\frac{\sin(x + h) - \sin x}{h} = \frac{\sin x \cos h + \cos x \sin h - \sin x}{h} = \sin x \cdot \frac{\cos h - 1}{h} + \cos x \cdot \frac{\sin h}{h}.
$$

As $h \to 0$, $(\sin h)/h \to 1$ and $(\cos h - 1)/h \to 0$. The difference quotient approaches $\cos x$.

The cosine rule follows from $\cos x = \sin(\pi/2 - x)$ once the chain rule is available, or from a similar addition-formula argument. The minus sign appears because $\frac{d}{dx}(\pi/2 - x) = -1$.

## The other four

Write them as quotients and use the quotient rule.

$$
\begin{aligned}
\frac{d}{dx} \tan x &= \frac{d}{dx} \frac{\sin x}{\cos x} = \frac{\cos x \cos x - \sin x (-\sin x)}{\cos^2 x} = \frac{1}{\cos^2 x} = \sec^2 x \\
\frac{d}{dx} \cot x &= -\csc^2 x \\
\frac{d}{dx} \sec x &= \sec x \tan x \\
\frac{d}{dx} \csc x &= -\csc x \cot x.
\end{aligned}
$$

These are undefined where the original function is undefined. The derivative of $\tan x$ exists on each interval between consecutive odd multiples of $\pi/2$, and it is positive there: $\sec^2 x \geq 1$ on the domain. Tangent is increasing on each such interval, even though its graph breaks at the asymptotes.

A memory pattern that is safe: the derivatives of the “co” functions, cosine, cotangent, and cosecant, each carry a minus sign.

## Products and compositions that wait for the chain rule

$\frac{d}{dx} \sin(x^2)$ is not $\cos(x^2)$. The chain rule in the next section supplies the extra factor $2x$. This section covers $\sin x$, $\cos x$, and products such as $x \sin x$, where the product rule is enough:

$$
\frac{d}{dx}(x \sin x) = \sin x + x \cos x.
$$

## A tangent line

For $y = \sin x$ at $x = \pi/3$, the slope is $\cos(\pi/3) = 1/2$, and the point is $(\pi/3,\ \sqrt{3}/2)$. The tangent line is

$$
y - \frac{\sqrt{3}}{2} = \frac{1}{2}\left(x - \frac{\pi}{3}\right).
$$

At $x = 0$, sine has slope $1$. The line $y = x$ is the tangent to $y = \sin x$ at the origin. That is the geometric content of $\lim_{x \to 0} \sin x / x = 1$.

## Mistakes that change the answer

- Differentiating in degrees.
- Writing $(\cos x)' = \sin x$. The sign is negative.
- Writing $(\tan x)' = \sec x$. The derivative is $\sec^2 x$.
- Cancelling a trigonometric factor that is zero at the point you care about, and losing a domain restriction.
- Replacing $\sin(2x)$ by $2\sin x$. That identity is false, and the derivatives are different: the derivative of $\sin(2x)$ needs the chain rule and equals $2\cos(2x)$, while the derivative of $2\sin x$ is $2\cos x$.

---

## Questions

### Question 1

Differentiate.

1. $3\sin x - 4\cos x$
2. $x^2 \cos x$
3. $\dfrac{\sin x}{x}$, for $x \neq 0$

### Question 2

Find the tangent line to $y = \cos x$ at $x = \pi/2$, and the tangent line to $y = \tan x$ at $x = \pi/4$.

### Question 3

Find the first four derivatives of $f(x) = \sin x$, and use the pattern to write $f^{(10)}(x)$ and $f^{(11)}(x)$.

### Question 4

Verify $(\sec x)' = \sec x \tan x$ from the quotient rule, starting from $\sec x = 1/\cos x$. On which intervals is this valid?

### Question 5

Where on $[0, 2\pi)$ is the tangent to $y = \sin x$ horizontal? Where is the slope equal to $1/2$?

### Question 6

Compute $\dfrac{d}{dx}(\sin x \cos x)$ in two ways: by the product rule, and by rewriting the product as $\frac{1}{2}\sin(2x)$ and differentiating with the chain-rule result $(\sin(2x))' = 2\cos(2x)$. Show that the answers agree.

### Question 7

A particle’s position on a line is $s(t) = 2\sin t + \cos t$ centimeters, $t$ in seconds, with $t$ in radians.

1. Find the velocity and the acceleration.
2. Show that $s''(t) = -s(t)$.
3. Find the velocity at the times when the position is at a maximum or minimum on $[0, 2\pi)$. You first need those times, or you can use a different observation about velocity at a smooth extreme.

### Question 8

Evaluate $\displaystyle \lim_{h \to 0} \frac{\cos(\pi/3 + h) - \cos(\pi/3)}{h}$ by recognizing a derivative, and also by expanding with the cosine addition formula if you want a second check.

### Question 9

True or false, with a reason or a counterexample.

1. $\dfrac{d}{dx} \sin^2 x = \cos^2 x$.
2. $\dfrac{d}{dx} \tan x = \sec^2 x$ at every real $x$.
3. If $f'(x) = \cos x$, then $f(x) = \sin x$.
4. $\displaystyle \lim_{x \to 0} \frac{\tan x}{x} = 1$.

### Question 10

Find the derivative of $y = \dfrac{\sec x}{1 + \tan x}$ on an interval where the expression is defined, and simplify. Then evaluate the derivative at $x = 0$.

---

## Answers

### Answer 1

1. $3\cos x + 4\sin x$. The derivative of $-4\cos x$ is $-4(-\sin x) = 4\sin x$.

2. Product rule: $2x \cos x + x^2(-\sin x) = 2x \cos x - x^2 \sin x$.

3. Quotient rule:

$$
\frac{x \cos x - \sin x \cdot 1}{x^2} = \frac{x \cos x - \sin x}{x^2}.
$$

### Answer 2

$(\cos x)' = -\sin x$, so at $x = \pi/2$ the slope is $-\sin(\pi/2) = -1$. The point is $(\pi/2,\ 0)$. The tangent line is $y - 0 = -1(x - \pi/2)$, or $y = -x + \pi/2$.

$(\tan x)' = \sec^2 x$. At $x = \pi/4$, $\sec(\pi/4) = \sqrt{2}$, so the slope is $2$. The point is $(\pi/4,\ 1)$. The tangent line is $y - 1 = 2(x - \pi/4)$.

### Answer 3

$f' = \cos x$, $f'' = -\sin x$, $f''' = -\cos x$, $f^{(4)} = \sin x = f$.

The derivatives repeat every $4$. Since $10 = 4\cdot 2 + 2$, the tenth derivative matches the second: $f^{(10)}(x) = -\sin x$. Since $11 = 4\cdot 2 + 3$, the eleventh matches the third: $f^{(11)}(x) = -\cos x$.

### Answer 4

$$
\frac{d}{dx} \frac{1}{\cos x} = \frac{0 \cdot \cos x - 1 \cdot (-\sin x)}{\cos^2 x} = \frac{\sin x}{\cos^2 x} = \frac{1}{\cos x} \cdot \frac{\sin x}{\cos x} = \sec x \tan x.
$$

This is valid where $\cos x \neq 0$, that is, on every interval $((n - \tfrac{1}{2})\pi,\ (n + \tfrac{1}{2})\pi)$ for $n \in \mathbb{Z}$. Those are exactly the intervals where $\sec x$ is defined.

### Answer 5

The slope is $\cos x$. It is zero when $\cos x = 0$ on $[0, 2\pi)$, so $x = \pi/2$ and $x = 3\pi/2$.

$\cos x = 1/2$ at $x = \pi/3$ and $x = 5\pi/3$ on this interval.

### Answer 6

Product rule: $\cos x \cos x + \sin x (-\sin x) = \cos^2 x - \sin^2 x$.

Double-angle route: $\frac{1}{2} \cdot 2 \cos(2x) = \cos(2x)$.

The identity $\cos(2x) = \cos^2 x - \sin^2 x$ says the two answers are the same function.

### Answer 7

1. $v(t) = 2\cos t - \sin t$ and $a(t) = -2\sin t - \cos t$.

2. $-s(t) = -2\sin t - \cos t = a(t)$. The motion satisfies $s'' + s = 0$, which is simple harmonic motion.

3. At a smooth maximum or minimum of position, the velocity is zero. So the velocity is $0$ at those times, whatever they are. They are the solutions of $2\cos t - \sin t = 0$, or $\tan t = 2$, in the intervals where cosine and sine have the matching signs. The value of the velocity does not require listing the times: it is $0$.

### Answer 8

The limit is the definition of the derivative of $\cos x$ at $x = \pi/3$, which is $-\sin(\pi/3) = -\sqrt{3}/2$.

By the addition formula,

$$
\cos(\pi/3 + h) = \cos(\pi/3)\cos h - \sin(\pi/3)\sin h = \frac{1}{2}\cos h - \frac{\sqrt{3}}{2}\sin h.
$$

Subtract $\cos(\pi/3) = 1/2$ and divide by $h$:

$$
\frac{\frac{1}{2}(\cos h - 1) - \frac{\sqrt{3}}{2}\sin h}{h} = \frac{1}{2} \cdot \frac{\cos h - 1}{h} - \frac{\sqrt{3}}{2} \cdot \frac{\sin h}{h}.
$$

The limit is $\frac{1}{2} \cdot 0 - \frac{\sqrt{3}}{2} \cdot 1 = -\sqrt{3}/2$.

### Answer 9

1. False. $\sin^2 x$ means $(\sin x)^2$. Its derivative needs the chain rule and equals $2\sin x \cos x$, not $\cos^2 x$. Even the notation in the claim treats the square as if it were outside the derivative in the wrong way.

2. False. At $x = \pi/2$, $\tan x$ is undefined, so it has no derivative there. The identity holds on each interval where $\tan x$ is defined.

3. False. $f(x) = \sin x + 7$ also has derivative $\cos x$. The general antiderivative is $\sin x + C$.

4. True.

$$
\frac{\tan x}{x} = \frac{\sin x}{x} \cdot \frac{1}{\cos x} \to 1 \cdot \frac{1}{1} = 1.
$$

### Answer 10

Quotient rule with $u = \sec x$ and $v = 1 + \tan x$:

$$
y' = \frac{(\sec x \tan x)(1 + \tan x) - \sec x \cdot \sec^2 x}{(1 + \tan x)^2} = \frac{\sec x \bigl(\tan x(1 + \tan x) - \sec^2 x\bigr)}{(1 + \tan x)^2}.
$$

The expression in parentheses is $\tan x + \tan^2 x - \sec^2 x = \tan x + (\sec^2 x - 1) - \sec^2 x = \tan x - 1$, because $1 + \tan^2 x = \sec^2 x$.

So

$$
y' = \frac{\sec x (\tan x - 1)}{(1 + \tan x)^2}.
$$

At $x = 0$, $\sec 0 = 1$ and $\tan 0 = 0$, so $y' = (1 \cdot (0 - 1))/(1 + 0)^2 = -1$.
