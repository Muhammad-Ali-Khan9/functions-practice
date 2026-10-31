# Section 3.8 — Derivatives of Inverse Functions and Logarithms

The derivative of an inverse is the reciprocal of the derivative of the original function, evaluated at the matching point. Logarithms are the inverses of exponentials, so this one idea produces $(\ln x)'$, $(\log_b x)'$, $(e^x)'$, and $(a^x)'$. Logarithmic differentiation then handles products and variable exponents that the earlier rules make messy.

## The inverse-function rule

If $f$ is differentiable at $a$, $f'(a) \neq 0$, and $f^{-1}$ is the inverse near $b = f(a)$, then $f^{-1}$ is differentiable at $b$ and

$$
(f^{-1})'(b) = \frac{1}{f'(a)} = \frac{1}{f'\bigl(f^{-1}(b)\bigr)}.
$$

In Leibniz notation, $dx/dy = 1/(dy/dx)$. A horizontal tangent of $f$ becomes a vertical tangent of $f^{-1}$, which is why the hypothesis $f'(a) \neq 0$ is required. The graphs are reflections across $y = x$, and reflection swaps rise and run, so slopes become reciprocals.

Example. $f(x) = x^3$ has $f'(x) = 3x^2$ and inverse $f^{-1}(x) = x^{1/3}$. At $b = 8$, the matching $a$ is $2$, and $f'(2) = 12$, so $(f^{-1})'(8) = 1/12$. The power rule on $x^{1/3}$ gives the same number: $(1/3) \cdot 8^{-2/3} = (1/3)(1/4) = 1/12$. At $b = 0$ the hypothesis fails because $f'(0) = 0$, and $x^{1/3}$ is not differentiable at $0$.

## Natural log and exponential

$$
\frac{d}{dx} \ln x = \frac{1}{x}, \qquad x > 0.
$$

This is the inverse-function rule applied to $e^x$, once you know one of the two derivatives. Thomas often defines $\ln x$ as an integral and then proves this formula. In either order, the pair is

$$
\frac{d}{dx} e^x = e^x, \qquad \frac{d}{dx} \ln x = \frac{1}{x}.
$$

The chain rule extends both:

$$
\frac{d}{dx} \ln(g(x)) = \frac{g'(x)}{g(x)}, \qquad \frac{d}{dx} e^{g(x)} = e^{g(x)} g'(x),
$$

on intervals where $g(x) > 0$ in the logarithm. The absolute value

$$
\frac{d}{dx} \ln \lvert x \rvert = \frac{1}{x}, \qquad x \neq 0,
$$

covers both sides of zero. The derivative $1/x$ is negative for $x < 0$, and $\ln \lvert x \rvert$ is decreasing there, which matches.

## Other bases

$$
\log_b x = \frac{\ln x}{\ln b}, \qquad \frac{d}{dx} \log_b x = \frac{1}{x \ln b}.
$$

$$
a^x = e^{x \ln a}, \qquad \frac{d}{dx} a^x = a^x \ln a.
$$

If $a > 1$, then $\ln a > 0$ and $a^x$ is increasing. If $0 < a < 1$, then $\ln a < 0$ and $a^x$ is decreasing. The factor $\ln a$ is exactly that sign.

A constant exponent on a variable base is still the power rule. A variable exponent on a constant base is the exponential rule above. A variable exponent on a variable base needs logarithmic differentiation, or the rewrite $u(x)^{v(x)} = e^{v(x) \ln u(x)}$.

## Logarithmic differentiation

Take $\ln$ of both sides, differentiate, and solve for $y'$. It turns products into sums and exponents into coefficients.

For $y = \dfrac{(x^2 + 1)\sqrt{x + 2}}{x^3}$, with $x > -2$ and $x \neq 0$, and on an interval where $y > 0$,

$$
\ln y = \ln(x^2 + 1) + \frac{1}{2}\ln(x + 2) - 3\ln \lvert x \rvert.
$$

$$
\frac{y'}{y} = \frac{2x}{x^2 + 1} + \frac{1}{2(x + 2)} - \frac{3}{x}, \qquad y' = y \left( \frac{2x}{x^2 + 1} + \frac{1}{2(x + 2)} - \frac{3}{x} \right).
$$

For $y = x^x$ with $x > 0$, write $y = e^{x \ln x}$. Then

$$
y' = e^{x \ln x} \cdot \frac{d}{dx}(x \ln x) = x^x (\ln x + 1).
$$

## Mistakes that change the answer

- Writing $(\ln x)' = 1/\ln x$ or $1/e^x$. The derivative is $1/x$.
- Writing $(e^{x^2})' = e^{x^2}$. The chain rule contributes $2x$.
- Writing $(a^x)' = x a^{x-1}$. That is the power rule, and the base here is constant while the exponent is the variable.
- Using $\ln(g(x))$ when $g(x)$ is negative. Switch to $\ln \lvert g(x) \rvert$, whose derivative is still $g'(x)/g(x)$.
- Forgetting that $(f^{-1})'(b) = 1/f'(a)$ uses $f'$ at the original $x$-value $a$, not at $b$, unless you rewrite $a$ as $f^{-1}(b)$.

---

## Questions

### Question 1

Let $f(x) = x^5 + 2x + 1$.

1. Explain why $f$ has an inverse on $\mathbb{R}$.
2. Given $f(1) = 4$ and $f'(x) = 5x^4 + 2$, compute $(f^{-1})'(4)$.
3. Why is it unnecessary to find a formula for $f^{-1}$?

### Question 2

Differentiate.

1. $\ln(3x + 1)$
2. $\ln \lvert \cos x \rvert$
3. $\log_{10}(x^2 + 1)$
4. $e^{\sin x}$
5. $5^{x^2}$

### Question 3

Find the tangent line to $y = \ln x$ at $x = 1$, and the tangent line to $y = e^x$ at $x = 0$. How are the two lines related, and why should they be?

### Question 4

Use logarithmic differentiation to find $y'$ for $y = \dfrac{x^3 \sqrt{x + 1}}{(2x - 1)^4}$, on an interval where $y > 0$.

### Question 5

Differentiate $y = x^{\sin x}$ for $x > 0$, and $y = (\sin x)^x$ on an interval where $\sin x > 0$.

### Question 6

Find $f'(x)$ for $f(x) = \ln\left(\dfrac{\sqrt{x^2 + 1}}{x}\right)$ in two ways: by expanding the log first, and by the chain rule on the unexpanded form. Compare domains.

### Question 7

Suppose $g$ is the inverse of $f(x) = e^{2x} + x$. Note that $f(0) = 1$.

1. Compute $g'(1)$.
2. Show that $f'(x) > 0$ for every $x$, so the inverse exists on the range of $f$.
3. Write an equation that defines $g(x)$ implicitly, and differentiate that equation to recover $g'(x)$ in terms of $g(x)$.

### Question 8

Evaluate $\displaystyle \lim_{h \to 0} \frac{\ln(1 + h) - \ln 1}{h}$ and $\displaystyle \lim_{x \to 0} \frac{e^{3x} - 1}{x}$ by recognizing derivatives.

### Question 9

True or false, with a reason or a counterexample.

1. $\dfrac{d}{dx} \ln(x^2) = \dfrac{1}{x^2}$ for $x \neq 0$.
2. $\dfrac{d}{dx} 2^x = 2^x$.
3. If $f'(a) = 0$, then $f^{-1}$ cannot have a finite derivative at $f(a)$.
4. $\dfrac{d}{dx} \ln(5x) = \dfrac{d}{dx}(\ln 5 + \ln x) = \dfrac{1}{x}$ for $x > 0$, so $\ln(5x)$ and $\ln x$ differ by a constant and have the same derivative.

### Question 10

A population is $P(t) = 1000\, e^{0.03 t}$.

1. Find $P'(t)$ and the relative growth rate $P'(t)/P(t)$.
2. Find the derivative of $\ln P(t)$ and compare.
3. How long does it take for the population to double? The answer uses $\ln 2$. Then find the instantaneous growth rate $P'(t)$ at that doubling time, in individuals per unit time.

---

## Answers

### Answer 1

1. $f'(x) = 5x^4 + 2 \geq 2 > 0$, so $f$ is strictly increasing on $\mathbb{R}$ and therefore one-to-one. A continuous strictly increasing function from $\mathbb{R}$ onto its range has an inverse defined on that range. Here $f(x) \to \pm \infty$ as $x \to \pm \infty$, so the range is $\mathbb{R}$.

2. The input that produces output $4$ is $x = 1$. So

$$
(f^{-1})'(4) = \frac{1}{f'(1)} = \frac{1}{5 + 2} = \frac{1}{7}.
$$

3. The inverse-function rule needs $f'$ at the known input $1$. It does not need $f^{-1}$ written as a radical or a closed form. The equation $x^5 + 2x + 1 = 4$ is not solvable by a simple formula, and the derivative of the inverse at $4$ is still $1/7$.

### Answer 2

1. $\dfrac{3}{3x + 1}$, for $x > -1/3$.

2. $\dfrac{1}{\cos x} \cdot (-\sin x) = -\tan x$, on each interval where $\cos x > 0$ or where $\cos x < 0$. Equivalently, wherever $\cos x \neq 0$. The absolute value makes the log defined on both signs, and the derivative formula $g'/g$ with $g = \cos x$ is $-\tan x$ on each such interval.

3. $\dfrac{1}{(x^2 + 1)\ln 10} \cdot 2x = \dfrac{2x}{(x^2 + 1)\ln 10}$.

4. $e^{\sin x} \cos x$.

5. $5^{x^2} \ln 5 \cdot 2x$.

### Answer 3

$(\ln x)' = 1/x$, so at $x = 1$ the slope is $1$ and the point is $(1, 0)$. The tangent line is $y - 0 = 1(x - 1)$, or $y = x - 1$.

$(e^x)' = e^x$, so at $x = 0$ the slope is $1$ and the point is $(0, 1)$. The tangent line is $y - 1 = 1(x - 0)$, or $y = x + 1$.

Reflecting $y = x - 1$ across $y = x$ swaps coordinates. The point $(1, 0)$ goes to $(0, 1)$, and a line of slope $1$ reflects to a line of slope $1$. The reflected line is $y = x + 1$. This is the tangent to the inverse function, as the inverse-function rule predicts: both slopes are $1$, and $1 = 1/1$.

### Answer 4

$$
\ln y = 3\ln x + \frac{1}{2}\ln(x + 1) - 4\ln(2x - 1),
$$

on an interval where $x > 0$, $x + 1 > 0$, and $2x - 1 > 0$, so $x > 1/2$. Then

$$
\frac{y'}{y} = \frac{3}{x} + \frac{1}{2(x + 1)} - \frac{4 \cdot 2}{2x - 1} = \frac{3}{x} + \frac{1}{2(x + 1)} - \frac{8}{2x - 1}.
$$

Multiply by $y$ to get $y'$.

### Answer 5

$x^{\sin x} = e^{\sin x \cdot \ln x}$. The derivative is

$$
x^{\sin x} \cdot \frac{d}{dx}(\sin x \ln x) = x^{\sin x}\left(\cos x \ln x + \sin x \cdot \frac{1}{x}\right).
$$

$(\sin x)^x = e^{x \ln \sin x}$. The derivative is

$$
(\sin x)^x \cdot \left(\ln \sin x + x \cdot \frac{1}{\sin x} \cdot \cos x\right) = (\sin x)^x \bigl(\ln \sin x + x \cot x\bigr).
$$

### Answer 6

Expansion, for $x > 0$: $\ln\sqrt{x^2 + 1} - \ln x = \frac{1}{2}\ln(x^2 + 1) - \ln x$.

$$
f'(x) = \frac{1}{2} \cdot \frac{2x}{x^2 + 1} - \frac{1}{x} = \frac{x}{x^2 + 1} - \frac{1}{x}.
$$

Chain rule on the original quotient form gives the same expression after simplification, because

$$
f'(x) = \frac{x}{\sqrt{x^2 + 1}/x} \cdot \frac{d}{dx}\left(\frac{\sqrt{x^2 + 1}}{x}\right)
$$

is longer, and it reduces to the same derivative on $x > 0$.

For $x < 0$ the original expression has $\sqrt{x^2 + 1}/x < 0$, so the real logarithm is undefined. The expanded form $\frac{1}{2}\ln(x^2 + 1) - \ln x$ is also undefined for $x < 0$ if $\ln x$ is the real log. Writing $\frac{1}{2}\ln(x^2 + 1) - \ln \lvert x \rvert$ extends a similar function to $x \neq 0$, and its derivative is still $x/(x^2 + 1) - 1/x$. That extension is $\ln\bigl(\sqrt{x^2 + 1}/\lvert x \rvert\bigr)$, not the original formula with the signed denominator.

### Answer 7

1. $f'(x) = 2e^{2x} + 1$ and $f'(0) = 2 + 1 = 3$. Since $f(0) = 1$, $g'(1) = 1/3$.

2. $2e^{2x} + 1 > 0$ for every real $x$. So $f$ is strictly increasing and one-to-one.

3. $f(g(x)) = x$ means $e^{2g(x)} + g(x) = x$. Differentiate: $e^{2g(x)} \cdot 2 g'(x) + g'(x) = 1$, so

$$
g'(x) = \frac{1}{2e^{2g(x)} + 1}.
$$

At $x = 1$, $g(1) = 0$, and this formula returns $1/(2 + 1) = 1/3$.

### Answer 8

The first limit is the derivative of $\ln x$ at $x = 1$, which is $1/1 = 1$.

The second is not quite a difference quotient at $0$ until it is scaled. $\frac{d}{dx} e^{3x} = 3e^{3x}$, so at $x = 0$ the derivative is $3$. The difference quotient $(e^{3(0 + h)} - e^0)/h = (e^{3h} - 1)/h$ approaches $3$. With the variable named $x$, the limit is $3$.

### Answer 9

1. False. $\ln(x^2) = 2\ln \lvert x \rvert$, so the derivative is $2/x$, which is also the chain-rule result $(1/x^2) \cdot 2x = 2/x$.

2. False. $(2^x)' = 2^x \ln 2$. The derivative equals $2^x$ only for the base $e$.

3. True, whenever “finite derivative of the inverse” is claimed at $b = f(a)$ under the inverse-function theorem. The formula would require division by $f'(a) = 0$. The cube $x^3$ at $0$ is the example: the inverse $x^{1/3}$ has a vertical tangent at $0$.

4. True for $x > 0$. $\ln(5x) = \ln 5 + \ln x$, and $\ln 5$ is constant, so the derivatives agree and both equal $1/x$.

### Answer 10

1. $P'(t) = 1000 \cdot e^{0.03 t} \cdot 0.03 = 0.03\, P(t)$. The relative growth rate is $0.03$, that is, $3\%$ per unit time, at every $t$.

2. $\ln P(t) = \ln 1000 + 0.03 t$, so its derivative is $0.03$. That is the same relative growth rate, because $(\ln P)' = P'/P$.

3. $1000 e^{0.03 t} = 2000$ gives $e^{0.03 t} = 2$, so $t = (\ln 2)/0.03$. At that time $P = 2000$, and $P' = 0.03 \cdot 2000 = 60$ individuals per unit time.
