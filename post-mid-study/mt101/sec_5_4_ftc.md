# Section 5.4 — The Fundamental Theorem of Calculus

The Fundamental Theorem is the bridge between the two integral symbols. One symbol is a limit of sums. The other is an antiderivative. They are the same calculation when the integrand is continuous.

## Part 1

Suppose $f$ is continuous on an open interval containing $a$. Define

$$
F(x) = \int_a^x f(t)\,dt
$$

Then $F$ is an antiderivative of $f$:

$$
F'(x) = f(x)
$$

The variable $t$ inside the integral is not the variable $x$ on the limit. Differentiating with respect to the upper limit brings down the integrand at that upper limit. The lower limit $a$ is constant, so it does not produce a second term.

If the upper limit is a function $u(x)$, the chain rule multiplies by $u'(x)$:

$$
\frac{d}{dx}\int_a^{u(x)} f(t)\,dt = f\bigl(u(x)\bigr)\,u'(x)
$$

If both limits vary,

$$
\frac{d}{dx}\int_{v(x)}^{u(x)} f(t)\,dt = f\bigl(u(x)\bigr)\,u'(x) - f\bigl(v(x)\bigr)\,v'(x)
$$

The minus sign is the chain rule on a reversed lower limit.

## Part 2, the evaluation theorem

If $f$ is continuous on $[a, b]$ and $F$ is any antiderivative of $f$, then

$$
\int_a^b f(x)\,dx = F(b) - F(a)
$$

The notation $[F(x)]_a^b$ means $F(b) - F(a)$. The constant in the general antiderivative cancels: $(F(b) + C) - (F(a) + C) = F(b) - F(a)$. You may use any convenient antiderivative.

This is why signed area can be computed without rectangles once an antiderivative is known. Part 1 says the accumulation function is an antiderivative. Part 2 evaluates the accumulation from $a$ to $b$.

## Net change

If $F'$ is continuous,

$$
\int_a^b F'(x)\,dx = F(b) - F(a)
$$

The integral of a rate of change is the net change. The integral of velocity is displacement. The integral of acceleration is the change in velocity. It is not the change in position.

## Total area versus the integral

$\int_a^b f$ subtracts the regions where $f$ is negative. The total area between the curve and the axis is

$$
\int_a^b \lvert f(x) \rvert\,dx
$$

Split the integral at the zeros of $f$, and negate $f$ on the intervals where it is negative, before you apply Part 2.

## Mistakes that change the answer

- Differentiating $\int_a^{x^2} f(t)\,dt$ as $f(x^2)$ and forgetting the factor $2x$.
- Using $F(a) - F(b)$ instead of $F(b) - F(a)$.
- Keeping $+ C$ in a definite evaluation. It cancels, and writing it as part of the number is a sign that the two ideas were mixed.
- Integrating across a zero of $f$ without splitting when the question asks for area.
- Differentiating with respect to $t$ inside an integral whose upper limit is $x$. The derivative that Part 1 talks about is with respect to the limit.

---

## Questions

### Question 1

Evaluate with the Fundamental Theorem.

1. $\displaystyle \int_0^2 (3x^2 - 4)\,dx$
2. $\displaystyle \int_0^{\pi} \sin x\,dx$
3. $\displaystyle \int_1^e \frac{1}{x}\,dx$

### Question 2

Find $\dfrac{d}{dx}\displaystyle \int_1^{x} \sqrt{1 + t^3}\,dt$ and $\dfrac{d}{dx}\displaystyle \int_2^{x^2} \cos(t^2)\,dt$. Do not try to find an antiderivative in closed form.

### Question 3

Find $\dfrac{d}{dx}\displaystyle \int_{x}^{x^3} e^{-t^2}\,dt$.

### Question 4

$\displaystyle \int_{-1}^{2} (x^3 - x)\,dx$ is not the area between the curve and the axis. Compute the integral, then compute the total area on $[-1, 2]$. The roots of $x^3 - x = x(x - 1)(x + 1)$ matter.

### Question 5

A particle’s velocity is $v(t) = 3t^2 - 12t + 9$ on $[0, 4]$. Find the displacement and the total distance traveled.

### Question 6

Let $F(x) = \displaystyle \int_0^{x} \frac{1}{1 + t^2}\,dt$.

1. What is $F'(x)$?
2. Evaluate $F(1)$ with an antiderivative.
3. Is $F$ increasing? Is $F$ concave up on $(0, \infty)$?

### Question 7

True or false, with a reason.

1. $\displaystyle \int_a^b f'(x)\,dx = f(b) - f(a)$ whenever $f'$ is continuous.
2. If $\displaystyle \int_a^b f = 0$, then $f(b) = f(a)$.
3. $\dfrac{d}{dx}\displaystyle \int_a^{b} f(x)\,dx = f(x)$ when $a$ and $b$ are constants.
4. Every antiderivative of a continuous $f$ differs from $G(x) = \int_a^x f$ by a constant.

### Question 8

Evaluate $\displaystyle \int_0^{1} \frac{1}{1 + x^2}\,dx$ and $\displaystyle \int_0^{1/2} \frac{1}{\sqrt{1 - x^2}}\,dx$.

### Question 9

The function $A(x) = \displaystyle \int_1^{x} (t - 2)\,dt$ measures signed area from $1$ to $x$.

1. Compute $A(x)$ by the evaluation theorem.
2. Find the local minimum of $A$ using $A'(x) = x - 2$.
3. Explain why $A$ can be decreasing even while the integrand is sometimes positive.

### Question 10

Verify Part 2 directly for $f(x) = x$ on $[0, 1]$ by comparing the antiderivative evaluation with the Riemann-sum limit from section 5.2. The right-endpoint sum is $\sum_{k = 1}^{n} (k/n)(1/n)$.

---

## Answers

### Answer 1

1. An antiderivative is $x^3 - 4x$. The value is $(8 - 8) - (0) = 0$.
2. An antiderivative of $\sin x$ is $-\cos x$. The value is $-\cos \pi - (-\cos 0) = -(-1) - (-1) = 1 + 1 = 2$.
3. $\ln x$ on $[1, e]$ gives $\ln e - \ln 1 = 1$.

### Answer 2

By Part 1, the first derivative is $\sqrt{1 + x^3}$.

For the second, the upper limit is $x^2$, so the derivative is $\cos((x^2)^2)\cdot 2x = 2x\cos(x^4)$.

### Answer 3

$$
e^{-(x^3)^2}\cdot 3x^2 - e^{-x^2}\cdot 1 = 3x^2 e^{-x^6} - e^{-x^2}
$$

### Answer 4

An antiderivative is $x^4/4 - x^2/2$.

$$
\left[\frac{x^4}{4} - \frac{x^2}{2}\right]_{-1}^{2} = \left(4 - 2\right) - \left(\frac{1}{4} - \frac{1}{2}\right) = 2 - \left(-\frac{1}{4}\right) = \frac{9}{4}
$$

The integrand $x(x - 1)(x + 1)$ is positive on $(-1, 0)$, negative on $(0, 1)$, and positive on $(1, 2)$.

$$
\int_{-1}^{0} (x^3 - x)\,dx = \left[0\right] - \left[\frac{1}{4} - \frac{1}{2}\right] = \frac{1}{4}
$$

$$
\int_{0}^{1} (x^3 - x)\,dx = \left(\frac{1}{4} - \frac{1}{2}\right) - 0 = -\frac{1}{4}
$$

$$
\int_{1}^{2} (x^3 - x)\,dx = (4 - 2) - \left(\frac{1}{4} - \frac{1}{2}\right) = 2 + \frac{1}{4} = \frac{9}{4}
$$

The total area is $1/4 + 1/4 + 9/4 = 11/4$. The signed integral $9/4$ canceled the dip below the axis.

### Answer 5

$v(t) = 3(t - 1)(t - 3)$. Displacement is

$$
\int_0^4 v(t)\,dt = \bigl[t^3 - 6t^2 + 9t\bigr]_0^4 = 64 - 96 + 36 = 4
$$

Velocity is nonnegative on $[0, 1]$, nonpositive on $[1, 3]$, and nonnegative on $[3, 4]$.

$$
\int_0^1 v = \bigl[t^3 - 6t^2 + 9t\bigr]_0^1 = 1 - 6 + 9 = 4
$$

$$
\int_1^3 v = (27 - 54 + 27) - 4 = 0 - 4 = -4
$$

$$
\int_3^4 v = 4 - 0 = 4
$$

Distance is $4 + 4 + 4 = 12$.

### Answer 6

1. $F'(x) = 1/(1 + x^2)$ by Part 1.
2. $F(1) = \tan^{-1} 1 - \tan^{-1} 0 = \pi/4$.
3. $F'(x) > 0$ for every $x$, so $F$ is increasing. And $F''(x) = -2x/(1 + x^2)^2$, which is negative on $(0, \infty)$. So $F$ is concave down on $(0, \infty)$, not concave up.

### Answer 7

1. True. This is the net-change form of Part 2.
2. False. Take $f(x) = x$ on $[-1, 1]$. Then $\int_{-1}^{1} x\,dx = 0$, while $f(1) = 1$ and $f(-1) = -1$. A zero integral does not force the endpoint values of $f$ to be equal. The matching-endpoint conclusion belongs to an antiderivative: if $F' = f$ and the integral of $f$ from $a$ to $b$ is $0$, then $F(b) = F(a)$.
3. False. The integral from a constant to a constant is a constant. Its derivative is $0$, not $f(x)$.
4. True, on an interval where $f$ is continuous. Both are antiderivatives, so they differ by a constant.

### Answer 8

$$
\int_0^1 \frac{1}{1 + x^2}\,dx = \tan^{-1} 1 - \tan^{-1} 0 = \frac{\pi}{4}
$$

$$
\int_0^{1/2} \frac{1}{\sqrt{1 - x^2}}\,dx = \sin^{-1}\left(\frac{1}{2}\right) - \sin^{-1} 0 = \frac{\pi}{6}
$$

### Answer 9

1. $A(x) = \bigl[t^2/2 - 2t\bigr]_1^x = (x^2/2 - 2x) - (1/2 - 2) = x^2/2 - 2x + 3/2$.
2. $A'(x) = x - 2 = 0$ at $x = 2$. For $x < 2$, $A' < 0$, and for $x > 2$, $A' > 0$. So $x = 2$ is a local minimum. $A(2) = 2 - 4 + 3/2 = -1/2$.
3. $A'(x)$ equals the integrand at the upper limit. While that upper limit is less than $2$, the integrand is negative, so each new slice subtracts signed area and $A$ decreases. After the upper limit passes $2$, new slices are positive and $A$ increases.

### Answer 10

$$
\sum_{k = 1}^{n} \frac{k}{n}\cdot\frac{1}{n} = \frac{1}{n^2}\cdot\frac{n(n + 1)}{2} = \frac{n + 1}{2n} \to \frac{1}{2}
$$

An antiderivative of $x$ is $x^2/2$. Part 2 gives $(1/2) - 0 = 1/2$. The Riemann-sum limit and the antiderivative evaluation agree.
