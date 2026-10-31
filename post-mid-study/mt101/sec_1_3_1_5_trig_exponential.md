# Sections 1.3 and 1.5 — Trigonometric and Exponential Functions

These two families are the transcendental functions used all year. Trigonometric functions come from the unit circle and from triangles. Exponential functions come from growth that is proportional to the current amount. Both are self-study in the MT101 outline, and both are needed before their derivatives in Chapter 3.

Degrees are the school unit. Calculus uses radians, because the derivative formulas $(\sin x)' = \cos x$ and $(\cos x)' = -\sin x$ are true when $x$ is in radians. In degrees those formulas pick up an extra factor of $\pi/180$.

## Radian measure

One radian is the central angle that cuts off an arc of length $1$ on the unit circle. A full turn is the circumference $2\pi$, so

$$
180^\circ = \pi \text{ radians}, \qquad \theta^\circ = \theta \cdot \frac{\pi}{180} \text{ radians}.
$$

The arc length on a circle of radius $r$ is $s = r\theta$ only when $\theta$ is in radians. The area of a sector is $A = \frac{1}{2} r^2 \theta$, again in radians.

Convert the special angles once and then memorize them: $30^\circ = \pi/6$, $45^\circ = \pi/4$, $60^\circ = \pi/3$, $90^\circ = \pi/2$, $180^\circ = \pi$, $360^\circ = 2\pi$.

## The six functions

On the unit circle, the terminal point of an angle $t$ measured from the positive $x$-axis is $(\cos t,\ \sin t)$. That is the definition that works for every real $t$, not only for acute angles.

$$
\tan t = \frac{\sin t}{\cos t}, \quad
\cot t = \frac{\cos t}{\sin t}, \quad
\sec t = \frac{1}{\cos t}, \quad
\csc t = \frac{1}{\sin t}.
$$

$\tan t$ and $\sec t$ are undefined where $\cos t = 0$, that is at $t = \pi/2 + n\pi$. $\cot t$ and $\csc t$ are undefined where $\sin t = 0$, that is at $t = n\pi$.

| $t$ | $\sin t$ | $\cos t$ | $\tan t$ |
| --- | --- | --- | --- |
| $0$ | $0$ | $1$ | $0$ |
| $\pi/6$ | $1/2$ | $\sqrt{3}/2$ | $1/\sqrt{3}$ |
| $\pi/4$ | $\sqrt{2}/2$ | $\sqrt{2}/2$ | $1$ |
| $\pi/3$ | $\sqrt{3}/2$ | $1/2$ | $\sqrt{3}$ |
| $\pi/2$ | $1$ | $0$ | undefined |

Signs follow the quadrant. Sine is the $y$-coordinate, cosine is the $x$-coordinate. In quadrant II, sine is positive and cosine is negative. In quadrant III both are negative. In quadrant IV cosine is positive and sine is negative.

## Identities used every week

Pythagorean, from the unit circle:

$$
\sin^2 t + \cos^2 t = 1, \qquad
1 + \tan^2 t = \sec^2 t, \qquad
1 + \cot^2 t = \csc^2 t.
$$

Even and odd:

$$
\cos(-t) = \cos t, \qquad \sin(-t) = -\sin t, \qquad \tan(-t) = -\tan t.
$$

Period:

$$
\sin(t + 2\pi) = \sin t, \qquad \cos(t + 2\pi) = \cos t, \qquad \tan(t + \pi) = \tan t.
$$

Sine and cosine have period $2\pi$. Tangent has period $\pi$.

Addition formulas, which are the reason the derivative of sine is cosine:

$$
\begin{aligned}
\sin(a + b) &= \sin a \cos b + \cos a \sin b \\
\cos(a + b) &= \cos a \cos b - \sin a \sin b.
\end{aligned}
$$

A graph of the form $y = A \sin(B(x - C)) + D$ has amplitude $\lvert A \rvert$, period $2\pi/\lvert B \rvert$, phase shift $C$, and vertical shift $D$. Replacing $\sin$ by $\cos$ does not change the amplitude or the period. For tangent, the period of $\tan(Bx)$ is $\pi/\lvert B \rvert$.

## Exponential functions

If $a > 0$ and $a \neq 1$, the exponential $f(x) = a^x$ is defined for every real $x$. The domain is $\mathbb{R}$. The range is $(0, \infty)$. The graph passes through $(0, 1)$ because $a^0 = 1$, and it never touches the $x$-axis.

The laws are the same ones used for integer powers, now valid for real exponents:

$$
\begin{aligned}
a^{x + y} &= a^x a^y \\
a^{x - y} &= a^x / a^y \\
(a^x)^y &= a^{xy} \\
(ab)^x &= a^x b^x.
\end{aligned}
$$

If $a > 1$, then $a^x$ is increasing. If $0 < a < 1$, then $a^x$ is decreasing. The second case is decay, and it can be rewritten as growth of a reciprocal base: $(1/2)^x = 2^{-x}$.

The natural base is

$$
e = \lim_{n \to \infty} \left(1 + \frac{1}{n}\right)^n \approx 2.718281828\ldots.
$$

The function $e^x$ is the exponential whose derivative equals itself. That is why this base, and not $10$, is the one calculus prefers. A general exponential converts to base $e$ by $a^x = e^{x \ln a}$, once logarithms are available in section 1.6.

Integer powers of a negative number are defined, such as $(-2)^3 = -8$. Real powers of a negative number, such as $(-2)^\pi$ or $(-4)^{1/2}$, are not real. The base of a real exponential is required to be positive.

## How the two families differ from polynomials

A polynomial of degree $n$ has at most $n$ roots, unless it is identically zero. Sine has infinitely many roots, at $n\pi$. An exponential $a^x$ has no roots at all. Polynomials are algebraic. Sine and $a^x$ are transcendental. Their derivatives need special arguments. They cannot be obtained from the power rule alone.

## Mistakes that change the answer

- Using degree mode in a calculus derivative or in a limit such as $\sin x / x$.
- Writing $\sin(a + b) = \sin a + \sin b$. The addition formula has two products.
- Treating $\tan(x)$ as defined at $\pi/2$. The numerator is $1$ and the denominator is $0$.
- Writing a negative base with a real exponent and expecting a real answer.
- Forgetting that $a^x$ is never zero, then “solving” $e^x = 0$.
- Quoting the period of $\tan(2x)$ as $2\pi/2 = \pi$. Tangent’s basic period is $\pi$, so the period of $\tan(2x)$ is $\pi/2$.

---

## Questions

### Question 1

Convert $150^\circ$, $-225^\circ$, and $1$ radian into the other unit. Then find the arc length and the sector area for a circle of radius $6$ and central angle $150^\circ$.

### Question 2

Evaluate exactly: $\sin(7\pi/6)$, $\cos(-2\pi/3)$, $\tan(3\pi/4)$, $\sec(\pi/3)$, and $\csc(-\pi/2)$. State the quadrant or the axis for each angle.

### Question 3

Solve $\sin t = 1/2$ for all real $t$, and solve $\cos t = -1$ for all real $t$. Explain why the solution sets have different spacing.

### Question 4

Find the amplitude, period, and phase shift of $y = -3 \sin(2x - \pi/2)$. On one period starting at the phase shift, where is the function zero, and where does it reach its maximum?

### Question 5

Simplify $\dfrac{1 - \cos^2 t}{\sin t \cos t}$ for the $t$ where it is defined, and find those excluded $t$.

### Question 6

Suppose $\sin \theta = -3/5$ and $\theta$ is in quadrant III. Find $\cos \theta$, $\tan \theta$, and $\sin(2\theta)$.

### Question 7

Sketch the end behavior in words, and compute the requested values, for $f(x) = (1/3)^x$ and $g(x) = e^{-2x}$.

1. Which are increasing?
2. Evaluate $f(0)$, $f(-1)$, $g(0)$, and $g(\ln 3)$.
3. Solve $(1/3)^x = 9$ and $e^{-2x} = 1$.

### Question 8

True or false, with a reason or a counterexample.

1. $\cos(x + y) = \cos x + \cos y$ for all real $x, y$.
2. If $\sin^2 t + \cos^2 t = 1$, then $\sin t$ and $\cos t$ can both be larger than $\sqrt{2}/2$ at the same $t$.
3. $2^{3x} = (2^3)^x$ and also $2^{3x} = (2^x)^3$.
4. $(-8)^{1/3}$ is real, but $(-8)^{1/2}$ is not, and $(-8)^\pi$ is not a real exponential value in the sense of section 1.5.

### Question 9

The population model $P(t) = 500\, e^{0.04 t}$ gives the number of bacteria after $t$ hours.

1. What is the population at $t = 0$?
2. Solve $P(t) = 1000$ using the natural logarithm. Leave the answer in exact form and also say what it means.
3. Show that $P(t + 1)/P(t)$ is constant, and find that constant. Why does a constant ratio match the shape of an exponential?

### Question 10

Without a calculator, order these numbers from smallest to largest, and justify each comparison: $e^{0}$, $\sin(\pi/6)$, $e^{-1}$, $\cos(\pi)$, $(1/2)^{-2}$, $\tan(\pi/4)$.

---

## Answers

### Answer 1

$$
150^\circ = 150\pi/180 = 5\pi/6 \text{ radians}.
$$

$$
-225^\circ = -225\pi/180 = -5\pi/4 \text{ radians}.
$$

$$
1 \text{ radian} = 180/\pi \text{ degrees} \approx 57.3^\circ.
$$

The angle in radians is $5\pi/6$. Arc length $s = r\theta = 6 \cdot 5\pi/6 = 5\pi$. Sector area $A = \frac{1}{2} r^2 \theta = \frac{1}{2} \cdot 36 \cdot 5\pi/6 = 15\pi$. Using $150$ instead of $5\pi/6$ in $s = r\theta$ would be the degree mistake, and it would give $900$ instead of $5\pi$.

### Answer 2

$7\pi/6$ is in quadrant III, where sine is negative. The reference angle is $\pi/6$, so $\sin(7\pi/6) = -1/2$.

$-2\pi/3$ is a clockwise angle of $120^\circ$, which lands in quadrant III. Cosine is negative there, and the reference angle is $\pi/3$, so $\cos(-2\pi/3) = -1/2$. Cosine is even, and $\cos(2\pi/3) = -1/2$ as well.

$3\pi/4$ is in quadrant II. Tangent is negative, reference angle $\pi/4$, so $\tan(3\pi/4) = -1$.

$\sec(\pi/3) = 1/\cos(\pi/3) = 1/(1/2) = 2$.

$-\pi/2$ is on the negative $y$-axis. $\sin(-\pi/2) = -1$, so $\csc(-\pi/2) = -1$.

### Answer 3

$\sin t = 1/2$ at $t = \pi/6$ and at $t = 5\pi/6$ inside $[0, 2\pi)$, then every full turn:

$$
t = \frac{\pi}{6} + 2n\pi \quad \text{or} \quad t = \frac{5\pi}{6} + 2n\pi, \qquad n \in \mathbb{Z}.
$$

$\cos t = -1$ only at the odd multiples of $\pi$ inside each turn, namely $t = \pi + 2n\pi = (2n + 1)\pi$.

Sine hits $1/2$ twice per period $2\pi$, so there are two families. Cosine hits $-1$ only once per period, at the leftmost point of the unit circle, so there is one family. The spacing inside that family is $2\pi$, which is the period of cosine.

### Answer 4

Factor the inside as $2\left(x - \pi/4\right)$. Then

$$
y = -3 \sin\left(2\left(x - \frac{\pi}{4}\right)\right).
$$

The amplitude is $\lvert -3 \rvert = 3$. The period is $2\pi/\lvert 2 \rvert = \pi$. The phase shift is $\pi/4$ to the right.

On the interval $[\pi/4,\ \pi/4 + \pi] = [\pi/4,\ 5\pi/4]$, the input of sine runs through one full period $[0, 2\pi]$. A sine curve is zero at the start, the middle, and the end of its period: $x = \pi/4$, $x = \pi/4 + \pi/2 = 3\pi/4$, and $x = 5\pi/4$.

The factor $-3$ reflects the sine graph across the $x$-axis. Ordinary sine reaches its maximum $1$ at a quarter period. After the reflection, that point is a minimum of $y$. The maximum of $y$ is $3$, and it occurs where $\sin$ is $-1$, which is three quarters of the way through the period:

$$
x = \frac{\pi}{4} + \frac{3}{4}\pi = \pi.
$$

Check: $-3 \sin(2\pi - \pi/2) = -3 \sin(3\pi/2) = -3(-1) = 3$.

### Answer 5

The numerator is $\sin^2 t$. So

$$
\frac{1 - \cos^2 t}{\sin t \cos t} = \frac{\sin^2 t}{\sin t \cos t} = \frac{\sin t}{\cos t} = \tan t,
$$

provided $\sin t \neq 0$ and $\cos t \neq 0$. Those failures are $t = n\pi/2$ for every integer $n$: the integer multiples of $\pi/2$. At even multiples sine is zero. At odd multiples cosine is zero.

### Answer 6

In quadrant III both sine and cosine are negative. From $\sin^2 \theta + \cos^2 \theta = 1$,

$$
\cos^2 \theta = 1 - \frac{9}{25} = \frac{16}{25}, \qquad \cos \theta = -\frac{4}{5}.
$$

The positive root is rejected because of the quadrant. Then $\tan \theta = \sin \theta / \cos \theta = (-3/5)/(-4/5) = 3/4$.

The double-angle formula is $\sin(2\theta) = 2 \sin \theta \cos \theta = 2(-3/5)(-4/5) = 24/25$.

### Answer 7

$f(x) = (1/3)^x$ has base between $0$ and $1$, so $f$ is decreasing. $g(x) = e^{-2x} = (e^{-2})^x$ has base $e^{-2} < 1$, so $g$ is decreasing. Neither is increasing.

$f(0) = 1$, $f(-1) = (1/3)^{-1} = 3$, $g(0) = 1$, and $g(\ln 3) = e^{-2 \ln 3} = (e^{\ln 3})^{-2} = 3^{-2} = 1/9$.

$(1/3)^x = 9 = 3^2 = (1/3)^{-2}$, so $x = -2$, because the exponential is one-to-one.

$e^{-2x} = 1 = e^0$ gives $-2x = 0$, so $x = 0$.

### Answer 8

1. False. $\cos(\pi/2 + \pi/2) = \cos \pi = -1$, while $\cos(\pi/2) + \cos(\pi/2) = 0$.
2. False. If both exceeded $\sqrt{2}/2$, both squares would exceed $1/2$, and the sum of squares would exceed $1$.
3. True. $(2^3)^x = 8^x = (2^x)^3 = 2^{3x}$. The law $(a^r)^s = a^{rs}$ applies with positive base $2$.
4. True. $(-8)^{1/3} = -2$, because $(-2)^3 = -8$. The square root of a negative number is not real. A real exponential $a^x$ in this section requires $a > 0$, so a negative base to a real power $\pi$ is outside the real function $a^x$.

### Answer 9

1. $P(0) = 500\, e^0 = 500$.
2. $500\, e^{0.04 t} = 1000$ gives $e^{0.04 t} = 2$, so $0.04 t = \ln 2$ and $t = (\ln 2)/0.04 = 25 \ln 2$ hours. This is the doubling time.
3. 

$$
\frac{P(t + 1)}{P(t)} = \frac{500\, e^{0.04(t + 1)}}{500\, e^{0.04 t}} = e^{0.04}.
$$

The ratio does not depend on $t$. Each hour multiplies the population by the same factor $e^{0.04}$. That constant percentage growth is the property that forces the model to be exponential rather than linear. A linear model adds a constant amount each hour. This model multiplies by a constant.

### Answer 10

$\cos \pi = -1$ and $e^{-1} = 1/e \approx 0.37$ are the candidates for the small end. $\cos \pi = -1$ is the only negative number in the list, so it is smallest.

$e^{-1} = 1/e$ is between $0$ and $1$. Next, $\sin(\pi/6) = 1/2 = 0.5$. Since $e > 2$, we have $1/e < 1/2$, so $e^{-1} < \sin(\pi/6)$.

$e^{0} = 1$ and $\tan(\pi/4) = 1$. They are equal.

$(1/2)^{-2} = 4$, which is larger than $1$.

The order is

$$
\cos \pi < e^{-1} < \sin(\pi/6) < e^{0} = \tan(\pi/4) < (1/2)^{-2}.
$$
