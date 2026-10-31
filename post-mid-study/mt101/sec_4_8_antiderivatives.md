# Section 4.8 — Antiderivatives

Differentiation takes $f$ to $f'$. Antidifferentiation runs the arrow backward. If $F' = f$, then $F$ is an antiderivative of $f$. The Mean Value Theorem says this inverse problem has a family of answers: on an interval, any two antiderivatives differ by a constant.

Thomas numbers this section 4.8. Section 4.7 is not in the assigned list.

## The family

If $F'(x) = f(x)$ on an interval $I$, then the general antiderivative is

$$
F(x) + C
$$

where $C$ is an arbitrary constant. The graphs are vertical shifts of one curve. They all have the same slope at each $x$, because the derivative kills $C$.

An initial condition $F(x_0) = y_0$ selects one constant. Without it, reporting a single formula without $+ C$ is an incomplete answer.

## The list you reverse

$$
\begin{aligned}
\frac{d}{dx} x^{n} &= n x^{n-1} &&\Longrightarrow&& \int x^{n}\,dx = \frac{x^{n+1}}{n+1} + C, \quad n \neq -1 \\
\frac{d}{dx} \ln \lvert x \rvert &= \frac{1}{x} &&\Longrightarrow&& \int \frac{1}{x}\,dx = \ln \lvert x \rvert + C \\
\frac{d}{dx} e^{x} &= e^{x} &&\Longrightarrow&& \int e^{x}\,dx = e^{x} + C \\
\frac{d}{dx} \sin x &= \cos x &&\Longrightarrow&& \int \cos x\,dx = \sin x + C \\
\frac{d}{dx} \cos x &= -\sin x &&\Longrightarrow&& \int \sin x\,dx = -\cos x + C \\
\frac{d}{dx} \tan^{-1} x &= \frac{1}{1 + x^2} &&\Longrightarrow&& \int \frac{1}{1 + x^2}\,dx = \tan^{-1} x + C \\
\frac{d}{dx} \sin^{-1} x &= \frac{1}{\sqrt{1 - x^2}} &&\Longrightarrow&& \int \frac{1}{\sqrt{1 - x^2}}\,dx = \sin^{-1} x + C
\end{aligned}
$$

The integral sign here means “general antiderivative.” The definite integral, a number, starts in section 5.3. The same symbol is used for both, and the $+ C$ belongs only to the indefinite integral.

Constant multiples and sums pass through:

$$
\int \bigl(af(x) + bg(x)\bigr)\,dx = a\int f(x)\,dx + b\int g(x)\,dx
$$

A product does not. $\int x\cos x\,dx$ is not $\int x\,dx \cdot \int \cos x\,dx$. That integral needs parts, which is later. Do not invent a product rule for antiderivatives.

## Initial value problems

$dy/dx = f(x)$ with $y(x_0) = y_0$ is solved by finding the general antiderivative and plugging in the point.

If $y' = 6x^2 - 4$ and $y(1) = 3$, then $y = 2x^3 - 4x + C$. And $2 - 4 + C = 3$, so $C = 5$. Thus $y = 2x^3 - 4x + 5$.

Motion uses the same idea twice. Acceleration is the derivative of velocity, and velocity is the derivative of position. Two initial conditions, $v(t_0)$ and $s(t_0)$, select the two constants. The constant from integrating acceleration is the constant in the velocity. It is not the constant in the position.

## Checking

Differentiate your answer. If you do not recover $f$, the antiderivative is wrong. This check catches a missing factor, a sign on $\int \sin x$, and a power that was increased and then not divided.

## Mistakes that change the answer

- Omitting $+ C$ on an indefinite integral.
- Using the power rule on $\int 1/x\,dx$ to get $x^{0}/0$. The exponent $-1$ is the excluded case. The answer is $\ln \lvert x \rvert + C$.
- Dropping the absolute value and then using the formula on a negative interval where $\ln x$ is undefined.
- Integrating $1/(1 + x^2)$ as $\ln(1 + x^2)$. That derivative is $2x/(1 + x^2)$, not $1/(1 + x^2)$.
- Using one constant for both integrations in a motion problem.

---

## Questions

### Question 1

Find the general antiderivative.

1. $f(x) = 4x^3 - 6x + 5$
2. $g(x) = \sqrt{x} + x^{-2}$
3. $h(x) = 3\cos x - 2\sin x + e^{x}$

### Question 2

Solve $y' = 1/x$ with $y(e) = 4$. On which interval is your solution valid? Then solve $y' = 1/x$ with $y(-e) = 4$, and write the formula that is valid on $(-\infty, 0)$.

### Question 3

A particle has acceleration $a(t) = 6t - 4$. At $t = 0$, the velocity is $3$ and the position is $-1$. Find $v(t)$ and $s(t)$.

### Question 4

Find $f(x)$ if $f'(x) = \dfrac{1}{1 + x^2} + \dfrac{1}{\sqrt{1 - x^2}}$ and $f(0) = 1$. State the largest open interval, centered at $0$, on which this formula makes sense.

### Question 5

True or false, with a reason or a counterexample.

1. If $F' = G'$, then $F = G$.
2. $\displaystyle \int x^{-1}\,dx = \frac{x^{0}}{0} + C$.
3. Every continuous function on an open interval has an antiderivative there.
4. $\displaystyle \int (f(x)g(x))\,dx = \left(\int f(x)\,dx\right)\left(\int g(x)\,dx\right)$.

### Question 6

Find the antiderivative of $f(x) = \dfrac{x^2 + 3x + 1}{x}$ by rewriting the quotient. Do not use a substitution yet. Check by differentiating.

### Question 7

The slope of a curve at $(x, y)$ is $3x^2$, and the curve passes through $(2, 5)$. Find the equation of the curve. How many such curves are there?

### Question 8

Match each integrand with its antiderivative family. One of the integrands is a trap.

1. $\dfrac{2x}{1 + x^2}$
2. $\dfrac{1}{1 + x^2}$
3. $\dfrac{1}{1 + x}$
4. $\dfrac{x}{1 + x^2}$

The candidate families are $\tan^{-1} x + C$, $\ln \lvert 1 + x \rvert + C$, $\ln(1 + x^2) + C$, and $\tfrac{1}{2}\ln(1 + x^2) + C$.

### Question 9

Suppose $f'(x) = \sin x$ and $f(0) = 2$. A student answers $f(x) = -\cos x + 2$. Find the mistake by checking the initial condition, and write the correct function. Then find $f(\pi)$.

### Question 10

From a $20\,\mathrm{m}$ roof, a stone is thrown upward at $8\,\mathrm{m/s}$. Take upward as positive, $g = 9.80$, and $a(t) = -9.80$. Find $v(t)$ and $s(t)$ by antidifferentiation, with $s(0) = 20$. Then find the velocity at the instant the stone is back at roof height. You do not need the later ground impact.

---

## Answers

### Answer 1

1. $F(x) = x^4 - 3x^2 + 5x + C$.
2. $\sqrt{x} = x^{1/2}$ and $x^{-2}$ has exponent not equal to $-1$. So

$$
G(x) = \frac{x^{3/2}}{3/2} + \frac{x^{-1}}{-1} + C = \frac{2}{3}x^{3/2} - \frac{1}{x} + C
$$

3. $H(x) = 3\sin x + 2\cos x + e^{x} + C$. The integral of $-2\sin x$ is $-2(-\cos x) = 2\cos x$.

### Answer 2

The general antiderivative on $(0, \infty)$ is $\ln x + C$, since $x > 0$. Then $\ln e + C = 4$, so $1 + C = 4$ and $C = 3$. Thus $y = \ln x + 3$ on $(0, \infty)$. It cannot be extended through $0$.

On $(-\infty, 0)$, the general antiderivative is $\ln \lvert x \rvert + C = \ln(-x) + C$. The condition $y(-e) = 4$ gives $\ln e + C = 4$, so $C = 3$ again. The solution is $y = \ln \lvert x \rvert + 3$ on $(-\infty, 0)$. These are two separate solutions. The condition at $x = e$ determines the formula only on $(0, \infty)$. The condition at $x = -e$ determines the formula only on $(-\infty, 0)$. The derivative $1/x$ is undefined at $0$, so neither solution continues through the origin.

### Answer 3

$v(t) = 3t^2 - 4t + C_1$. Then $v(0) = C_1 = 3$, so $v(t) = 3t^2 - 4t + 3$.

$s(t) = t^3 - 2t^2 + 3t + C_2$. Then $s(0) = C_2 = -1$, so $s(t) = t^3 - 2t^2 + 3t - 1$.

The two constants came from two integrations. Using $C = 3$ in the position formula would have given $s(0) = 3$, which contradicts $s(0) = -1$.

### Answer 4

$$
f(x) = \tan^{-1} x + \sin^{-1} x + C
$$

$f(0) = 0 + 0 + C = 1$, so $C = 1$ and $f(x) = \tan^{-1} x + \sin^{-1} x + 1$.

$\tan^{-1} x$ is defined for every real $x$. $\sin^{-1} x$ is defined for $x \in [-1, 1]$, and its derivative formula requires $\lvert x \rvert < 1$. The largest open interval centered at $0$ is $(-1, 1)$.

### Answer 5

1. False. $F(x) = x$ and $G(x) = x + 7$ have the same derivative and are not equal. They differ by a constant.
2. False. Division by zero is undefined. The exponent $-1$ is excluded from the power rule. The antiderivative is $\ln \lvert x \rvert + C$.
3. True on an open interval, for a continuous $f$. One construction is $F(x) = \int_{a}^{x} f(t)\,dt$ once the definite integral is available. In this section it is enough to know that every derivative rule used so far reverses, and that the existence theorem says a continuous function has an antiderivative. You are not asked to build it from a Riemann sum yet.
4. False. $\int x\,dx = x^2/2$ and $\int 1\,dx = x$, and their product is $x^3/2$. But $\int x\cdot 1\,dx = x^2/2 + C$, which is not the same family.

### Answer 6

$$
\frac{x^2 + 3x + 1}{x} = x + 3 + \frac{1}{x}, \qquad x \neq 0
$$

$$
\int\left(x + 3 + \frac{1}{x}\right)dx = \frac{x^2}{2} + 3x + \ln \lvert x \rvert + C
$$

Differentiate: $x + 3 + 1/x$, which matches the rewritten integrand.

### Answer 7

$dy/dx = 3x^2$ gives $y = x^3 + C$. The point $(2, 5)$ gives $8 + C = 5$, so $C = -3$. The curve is $y = x^3 - 3$. There is one such curve. The general antiderivative is a family, and the point selects one member.

### Answer 8

1. The numerator $2x$ is the derivative of $1 + x^2$, so the antiderivative is $\ln(1 + x^2) + C$. The absolute value is unnecessary because $1 + x^2 > 0$, but $\ln \lvert 1 + x^2 \rvert + C$ is the same family.
2. $\tan^{-1} x + C$.
3. $\ln \lvert 1 + x \rvert + C$, on intervals that do not contain $x = -1$.
4. Half of the first one: $\tfrac{1}{2}\ln(1 + x^2) + C$.

The trap is treating 2 and 4 as the same, or integrating 2 as an arctangent. The chain-rule factor $2x$ is what turns $1/(1 + x^2)$ into a logarithm.

### Answer 9

If $f(x) = -\cos x + 2$, then $f(0) = -1 + 2 = 1$, not $2$. The student added $2$ as if $-\cos 0$ were zero. Since $-\cos 0 = -1$, the constant must satisfy $-1 + C = 2$, so $C = 3$. The correct function is $f(x) = -\cos x + 3$.

$f(\pi) = -\cos \pi + 3 = -(-1) + 3 = 4$.

### Answer 10

$v(t) = -9.80 t + C_1$. And $v(0) = 8$, so $C_1 = 8$ and $v(t) = -9.80 t + 8$.

$s(t) = -4.90 t^2 + 8t + C_2$. And $s(0) = 20$, so $s(t) = -4.90 t^2 + 8t + 20$.

Back at roof height means $s(t) = 20$: $-4.90 t^2 + 8t = 0$, so $t(-4.90 t + 8) = 0$. The times are $t = 0$ and $t = 8/4.90 = 80/49$ seconds. At the return,

$$
v = -9.80\cdot\frac{80}{49} + 8 = -16 + 8 = -8
$$

because $9.80/4.90 = 2$. The velocity is $-8\,\mathrm{m/s}$, the launch speed reversed, which matches equal-height free fall.
