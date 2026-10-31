# Section 5.5 — Indefinite Integrals and the Substitution Method

The chain rule says the derivative of $F(g(x))$ is $F'(g(x))\,g'(x)$. Substitution reads that sentence backward. If the integrand is a composite whose inner derivative is sitting in the formula, replace the inner function by $u$ and replace $g'(x)\,dx$ by $du$.

## The method

$$
\int f(g(x))\,g'(x)\,dx = \int f(u)\,du
$$

after $u = g(x)$. Integrate in $u$, then substitute $g(x)$ back so the answer is a function of $x$. Add $+ C$.

The differential $du = g'(x)\,dx$ is the instruction that tells you whether the leftover factors really are the inner derivative. If they differ by a constant, divide by that constant. If they differ by a nonconstant factor that you cannot express in $u$, this substitution is the wrong one.

## Constant factors

$$
\int \sin(3x)\,dx
$$

Let $u = 3x$, so $du = 3\,dx$ and $dx = du/3$.

$$
\int \sin u\cdot\frac{1}{3}\,du = -\frac{1}{3}\cos u + C = -\frac{1}{3}\cos(3x) + C
$$

Check by differentiating: the chain rule produces $\sin(3x)$.

A missing factor is the same idea. For $\int x\sqrt{x^2 + 1}\,dx$, let $u = x^2 + 1$. Then $du = 2x\,dx$, so $x\,dx = du/2$.

$$
\int \sqrt{u}\cdot\frac{1}{2}\,du = \frac{1}{2}\cdot\frac{u^{3/2}}{3/2} + C = \frac{1}{3}(x^2 + 1)^{3/2} + C
$$

## Logarithms and powers

$$
\int \frac{g'(x)}{g(x)}\,dx = \ln \lvert g(x) \rvert + C
$$

on intervals where $g(x) \neq 0$. The absolute value matters when $g$ is negative. Differentiating $\ln \lvert g(x) \rvert$ gives $g'/g$ on both sides of a root.

A power of a linear function is still a substitution, or a rescaled power rule:

$$
\int (ax + b)^n\,dx = \frac{(ax + b)^{n + 1}}{a(n + 1)} + C, \qquad n \neq -1
$$

## What not to substitute

$\int x\cos(x^2)\,dx$ wants $u = x^2$. The factor $x$ is, up to $2$, exactly $du$. $\int \cos(x^2)\,dx$ has no extra $x$. The substitution $u = x^2$ leaves $du/(2\sqrt{u})$ times $\cos u$, which is not an elementary integral you are expected to finish here. Seeing a composition is not enough. The inner derivative has to be present.

$\int x\sin x\,dx$ is a product of two unrelated functions, not a chain-rule pattern. Substitution does not finish it. Integration by parts does, later.

## Checking

Differentiate the result. The chain rule should reproduce the integrand, including constant factors. If the derivative is twice the integrand, the constant in front of the antiderivative is half of what it should be.

## Mistakes that change the answer

- Forgetting to rewrite $dx$ in terms of $du$.
- Substituting back nothing, and leaving the answer in $u$ when the question asked for a function of $x$.
- Dropping $+ C$.
- Using $\ln(g(x))$ when $g(x)$ is negative. Use $\ln \lvert g(x) \rvert$.
- Treating $\int f(g(x))\,dx$ as $F(g(x))$ without the inner derivative. That misses the chain rule.

---

## Questions

### Question 1

Evaluate the indefinite integrals.

1. $\displaystyle \int (4x - 1)^5\,dx$
2. $\displaystyle \int \cos(2x)\,dx$
3. $\displaystyle \int \frac{x}{x^2 + 4}\,dx$

### Question 2

Evaluate $\displaystyle \int x^2(x^3 + 1)^4\,dx$ and check by differentiation.

### Question 3

Evaluate $\displaystyle \int \tan x\,dx$ by writing $\tan x = \sin x / \cos x$. State the intervals where your answer is valid.

### Question 4

Evaluate $\displaystyle \int \frac{e^{x}}{1 + e^{x}}\,dx$ and $\displaystyle \int e^{\sin x}\cos x\,dx$.

### Question 5

Which of these substitutions finish the integral in this section, and which stall? Do the ones that finish.

1. $\displaystyle \int x e^{x^2}\,dx$
2. $\displaystyle \int e^{x^2}\,dx$
3. $\displaystyle \int \frac{\ln x}{x}\,dx$

### Question 6

Evaluate $\displaystyle \int \frac{1}{x\ln x}\,dx$ for $x > 1$. Then evaluate $\displaystyle \int \sin x\cos x\,dx$ in two ways: $u = \sin x$ and $u = \cos x$. Reconcile the two answers.

### Question 7

Find $y$ if $y' = \dfrac{2x}{\sqrt{x^2 + 1}}$ and $y(0) = 3$.

### Question 8

True or false, with a reason or a counterexample.

1. $\displaystyle \int \sin(x^2)\,dx = -\cos(x^2) + C$.
2. $\displaystyle \int \frac{1}{2x + 3}\,dx = \ln \lvert 2x + 3 \rvert + C$.
3. Substitution can be used on $\displaystyle \int \frac{1}{1 + x^2}\,dx$ with $u = 1 + x^2$, and it produces a logarithm.
4. If $u = g(x)$ and $du = g'(x)\,dx$, you may solve the integral in $u$ and then replace $u$.

### Question 9

Evaluate $\displaystyle \int \frac{x + 1}{x^2 + 2x + 5}\,dx$. Compare the numerator with the derivative of the denominator, and account for the constant factor between them.

### Question 10

A student computes $\displaystyle \int (2x + 1)^3\,dx = \frac{(2x + 1)^4}{4} + C$. Differentiate the answer and find the missing constant factor. Write the correct antiderivative.

---

## Answers

### Answer 1

1. $u = 4x - 1$, $du = 4\,dx$.

$$
\frac{1}{4}\int u^5\,du = \frac{1}{4}\cdot\frac{u^6}{6} + C = \frac{(4x - 1)^6}{24} + C
$$

2. $\displaystyle \int \cos(2x)\,dx = \frac{1}{2}\sin(2x) + C$.
3. $u = x^2 + 4$, $du = 2x\,dx$.

$$
\frac{1}{2}\int \frac{1}{u}\,du = \frac{1}{2}\ln \lvert x^2 + 4 \rvert + C = \frac{1}{2}\ln(x^2 + 4) + C
$$

### Answer 2

$u = x^3 + 1$, $du = 3x^2\,dx$, so $x^2\,dx = du/3$.

$$
\frac{1}{3}\int u^4\,du = \frac{1}{15}u^5 + C = \frac{1}{15}(x^3 + 1)^5 + C
$$

Differentiate: $\frac{1}{15}\cdot 5(x^3 + 1)^4\cdot 3x^2 = x^2(x^3 + 1)^4$. The integrand returns.

### Answer 3

$u = \cos x$, $du = -\sin x\,dx$.

$$
\int \frac{\sin x}{\cos x}\,dx = -\int \frac{1}{u}\,du = -\ln \lvert \cos x \rvert + C
$$

This is valid on each interval where $\cos x \neq 0$, that is, between consecutive odd multiples of $\pi/2$. Equivalently the answer is $\ln \lvert \sec x \rvert + C$.

### Answer 4

For the first, $u = 1 + e^x$ and $du = e^x\,dx$, so the integral is $\ln(1 + e^x) + C$.

For the second, $u = \sin x$ and $du = \cos x\,dx$, so the integral is $e^{\sin x} + C$.

### Answer 5

1. $u = x^2$, $du = 2x\,dx$. The integral is $\tfrac{1}{2}e^{x^2} + C$. It finishes.
2. $u = x^2$ leaves $\int e^{u}/(2\sqrt{u})\,du$, which is not an elementary antiderivative from this section. It stalls.
3. $u = \ln x$, $du = dx/x$. The integral is $\tfrac{1}{2}(\ln x)^2 + C$ for $x > 0$. It finishes. On $(0, 1)$ the logarithm is negative, and the same formula still differentiates correctly.

### Answer 6

$u = \ln x$, $du = dx/x$, so $\int du/u = \ln \lvert \ln x \rvert + C$ for $x > 1$, where $\ln x > 0$.

With $u = \sin x$, $\int \sin x\cos x\,dx = \int u\,du = \tfrac{1}{2}\sin^2 x + C_1$.

With $u = \cos x$, $du = -\sin x\,dx$, so the integral is $-\tfrac{1}{2}\cos^2 x + C_2$.

These differ by a constant because $\sin^2 x = 1 - \cos^2 x$, so

$$
\frac{1}{2}\sin^2 x = -\frac{1}{2}\cos^2 x + \frac{1}{2}
$$

The two families are the same. The constants absorb the $1/2$.

### Answer 7

$u = x^2 + 1$, $du = 2x\,dx$. Then $y = \int u^{-1/2}\,du = 2u^{1/2} + C = 2\sqrt{x^2 + 1} + C$.

$y(0) = 2 + C = 3$, so $C = 1$ and $y = 2\sqrt{x^2 + 1} + 1$.

### Answer 8

1. False. The derivative of $-\cos(x^2)$ is $\sin(x^2)\cdot 2x$, not $\sin(x^2)$. The inner derivative is missing from the proposed answer, and it was also missing from the integrand, so the proposed formula cannot be right.
2. False. Let $u = 2x + 3$, $du = 2\,dx$. The integral is $\tfrac{1}{2}\ln \lvert 2x + 3 \rvert + C$. The student’s answer differentiates to $2/(2x + 3)$, which is twice the integrand.
3. False as a finished method. $u = 1 + x^2$ gives $du = 2x\,dx$, and there is no $x$ in the integrand to match $du$. The correct antiderivative is $\tan^{-1} x + C$, not a logarithm. The logarithm appears when the numerator is essentially $2x$.
4. True. That is the method. The final expression should be written in $x$ if the original integral was in $x$, plus $C$.

### Answer 9

The derivative of the denominator $x^2 + 2x + 5$ is $2x + 2 = 2(x + 1)$. The numerator is exactly half of that, plus nothing left over:

$$
x + 1 = \frac{1}{2}(2x + 2)
$$

So

$$
\int \frac{x + 1}{x^2 + 2x + 5}\,dx = \frac{1}{2}\ln(x^2 + 2x + 5) + C
$$

The numerator is exactly half the derivative of the denominator, so nothing is left over. If the numerator had been $x + 3 = (x + 1) + 2$, the extra $2$ would have produced a second integral, $\int 2/(x^2 + 2x + 5)\,dx$, completed as $\int 2/((x + 1)^2 + 4)\,dx$, which is an arctangent. In the problem as written, that second piece is zero.

### Answer 10

The derivative of $(2x + 1)^4/4$ is $(2x + 1)^3\cdot 2$, twice the integrand. Divide by $2$:

$$
\int (2x + 1)^3\,dx = \frac{(2x + 1)^4}{8} + C
$$

Differentiate: $\frac{4}{8}(2x + 1)^3\cdot 2 = (2x + 1)^3$.
