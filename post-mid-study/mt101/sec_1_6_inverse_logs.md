# Section 1.6 — Inverse Functions and Logarithms

An inverse function undoes another function. Logarithms are the inverses of exponential functions. Every later derivative of $\ln x$, $\log_b x$, and $a^x$ starts from the facts in this section: the inverse exists only for a one-to-one function, the graphs are reflections across $y = x$, and the log laws are the exponent laws read backwards.

## One-to-one

A function $f$ is one-to-one when different inputs give different outputs. Equivalently, $f(a) = f(b)$ implies $a = b$.

The horizontal line test reads this off the graph. If some horizontal line meets the graph twice, those two points have the same output and different inputs, so $f$ is not one-to-one and no inverse function exists on that whole domain.

$f(x) = x^2$ on $\mathbb{R}$ fails the test. The line $y = 4$ meets it at $x = 2$ and $x = -2$. Restricted to $[0, \infty)$, the same formula passes the test and has inverse $\sqrt{x}$. Restricted to $(-\infty, 0]$, the inverse is $-\sqrt{x}$. The domain you allow is part of the inverse.

A strictly increasing function is one-to-one, and so is a strictly decreasing function. The converse is false. A one-to-one function can rise on one piece and fall on another only if it never repeats a height, which is hard to arrange on one connected interval. On a single interval, a continuous one-to-one function is strictly monotonic. That fact is used when we invert sine, cosine, and tangent in section 3.9 by cutting each period down to a piece that is one-to-one.

## The inverse function

If $f$ is one-to-one, its inverse $f^{-1}$ satisfies

$$
f^{-1}(y) = x \quad \text{exactly when} \quad f(x) = y.
$$

The superscript is not a power. $f^{-1}(x)$ does not mean $1/f(x)$. The reciprocal is written $(f(x))^{-1}$ or $1/f(x)$.

The domain of $f^{-1}$ is the range of $f$. The range of $f^{-1}$ is the domain of $f$. The cancellation identities, on the appropriate domains, are

$$
f^{-1}(f(x)) = x, \qquad f(f^{-1}(y)) = y.
$$

To find a formula, write $y = f(x)$, solve for $x$ in terms of $y$, then swap names so the inverse is written as a function of $x$. Check the swap against the cancellation identity. Solving can introduce extra solutions. The original range tells you which branch to keep.

The graph of $f^{-1}$ is the graph of $f$ reflected across the line $y = x$. A point $(a, b)$ on $f$ becomes the point $(b, a)$ on $f^{-1}$.

## Logarithms

For $a > 0$ and $a \neq 1$, the logarithm base $a$ is the inverse of $a^x$:

$$
\log_a y = x \quad \text{exactly when} \quad a^x = y.
$$

The domain of $\log_a$ is $(0, \infty)$. The range is $\mathbb{R}$. The graph passes through $(1, 0)$, because $a^0 = 1$. It never meets the $y$-axis. The $y$-axis is a vertical asymptote.

$$
\log_a(a^x) = x \text{ for all real } x, \qquad a^{\log_a y} = y \text{ for all } y > 0.
$$

The natural logarithm $\ln x$ is $\log_e x$. Common logarithms $\log_{10} x$ appear in applications. In calculus, an unmarked $\log$ sometimes means $\ln$. In this course, write $\ln$ when you mean base $e$, and write the base otherwise.

The laws, for $u > 0$, $v > 0$, and real $r$:

$$
\begin{aligned}
\log_a(uv) &= \log_a u + \log_a v \\
\log_a(u/v) &= \log_a u - \log_a v \\
\log_a(u^r) &= r \log_a u.
\end{aligned}
$$

These fail if you apply them to a negative number or to zero. $\ln(x - 2) + \ln(x + 2)$ is defined only for $x > 2$, even though $\ln((x - 2)(x + 2)) = \ln(x^2 - 4)$ looks defined for $x < -2$ as well. Combining logs can enlarge the domain. You have to carry the original restriction with you.

The change-of-base formula converts any log into natural logs:

$$
\log_a u = \frac{\ln u}{\ln a} = \frac{\log_b u}{\log_b a}.
$$

In particular $\log_a b = 1/\log_b a$, and $\ln a = 1/\log_a e$.

If $a > 1$, then $\log_a$ is increasing. If $0 < a < 1$, then $\log_a$ is decreasing. The inequality direction when you apply a log follows that fact. Applying $\ln$ to both sides of an inequality keeps the direction, and it is legal only when both sides are positive.

## Solving equations

For $a^x = a^y$, conclude $x = y$, because the exponential is one-to-one. For $\log_a u = \log_a v$, conclude $u = v$, provided both sides are defined.

An exponential equation becomes linear in the exponent after a log. A log equation becomes exponential after you rewrite it as $a^{(\text{left})} = a^{(\text{right})}$, or after you exponentiate both sides. Always check log solutions in the original equation. Extraneous roots appear when a step uses $\log(uv) = \log u + \log v$ in a place where $u$ or $v$ is negative, or when you square both sides of a related radical equation.

## Mistakes that change the answer

- Reading $f^{-1}$ as a reciprocal.
- Inverting $x^2$ on all reals. Restrict the domain first.
- Cancelling $\ln$ of a nonpositive number. $\ln(-3)$ is undefined, so it cannot appear in an intermediate step that you later cancel.
- Forgetting that $\log_a 1 = 0$ and $\log_a a = 1$.
- Writing $\ln(u + v) = \ln u + \ln v$. The sum law is for a product, not a sum.
- Dropping the domain when two log terms combine into one.

---

## Questions

### Question 1

Decide whether an inverse function exists on the given domain. If it does, find a formula for the inverse and state its domain and range.

1. $f(x) = 3x - 5$ on $\mathbb{R}$.
2. $g(x) = x^2 - 4$ on $[0, \infty)$.
3. $h(x) = x^2 - 4$ on $\mathbb{R}$.

### Question 2

Let $f(x) = \dfrac{2x + 1}{x - 3}$.

1. Show that $f$ is one-to-one on its domain by solving $f(a) = f(b)$.
2. Find $f^{-1}(x)$ and its domain.
3. Compute $f(f^{-1}(4))$ and say why $x = 2$ is not in the domain of $f^{-1}$.

### Question 3

Evaluate without a calculator: $\log_2 32$, $\log_3(1/9)$, $\ln e^{-4}$, $\log_5 1$, $e^{\ln 7}$, and $10^{\log_{10} 4}$. Then solve $\log_2(x - 1) = 3$ and $\ln(x) = -2$.

### Question 4

Expand $\ln\left(\dfrac{x^2 \sqrt{x + 1}}{(2x - 3)^3}\right)$ as a sum of logarithms, and state the values of $x$ for which the original expression is defined.

### Question 5

Solve $2^{x + 1} = 5^{x - 2}$ exactly, using natural logs. Then solve $\log_2(x) + \log_2(x - 2) = 3$ and check for extraneous roots.

### Question 6

True or false, with a reason or a counterexample.

1. If $f$ has an inverse, then $f^{-1}(x) = 1/f(x)$.
2. $\ln(x + y) = \ln x + \ln y$ whenever both sides are defined.
3. If $f$ is not one-to-one, then no restriction of $f$ to a smaller domain can have an inverse.
4. $\log_2 5 = 1/\log_5 2$.

### Question 7

The graph of $f$ contains $(0, 1)$, $(2, 4)$, and $(-1, 1/2)$. It is the graph of an exponential $a^x$.

1. Find $a$, and write $f^{-1}$.
2. Which points lie on the graph of $f^{-1}$?
3. What are the domain and range of $f^{-1}$?

### Question 8

Solve the inequality $\ln(x - 3) + \ln(x + 1) \leq \ln 5$. Give the solution as an interval.

### Question 9

Let $f(x) = e^{2x - 1}$ and $g(x) = \ln x$.

1. Find $(g \circ f)(x)$ and $(f \circ g)(x)$, with domains.
2. Are these the inverse functions of each other?
3. Find a formula for $f^{-1}$.

### Question 10

A student claims that $y = \ln(x^2)$ and $y = 2\ln x$ are the same function. Compare domains, and say on which set they agree. Then find the inverse of $y = 2\ln x$ on its domain, and explain why $y = \ln(x^2)$ does not have an inverse on its full domain.

---

## Answers

### Answer 1

1. $f(a) = f(b)$ gives $3a - 5 = 3b - 5$, so $a = b$. The inverse exists. From $y = 3x - 5$, $x = (y + 5)/3$. Thus $f^{-1}(x) = (x + 5)/3$, domain $\mathbb{R}$, range $\mathbb{R}$.
2. On $[0, \infty)$ the parabola is increasing from $-4$ upward? $g(0) = -4$ and $g$ increases to $\infty$, so the range is $[-4, \infty)$. Solve $y = x^2 - 4$ with $x \geq 0$: $x = \sqrt{y + 4}$. Thus $g^{-1}(x) = \sqrt{x + 4}$, domain $[-4, \infty)$, range $[0, \infty)$.
3. $h(2) = h(-2) = 0$, so $h$ is not one-to-one on $\mathbb{R}$. No inverse function exists on this domain.

### Answer 2

1. The domain is $x \neq 3$. If $(2a + 1)/(a - 3) = (2b + 1)/(b - 3)$, cross-multiply:

$$
(2a + 1)(b - 3) = (2b + 1)(a - 3).
$$

$$
2ab - 6a + b - 3 = 2ab - 6b + a - 3 \implies -6a + b = a - 6b \implies -7a = -7b.
$$

So $a = b$. The function is one-to-one.

2. $y(x - 3) = 2x + 1$, so $xy - 3y = 2x + 1$, so $xy - 2x = 3y + 1$, so $x(y - 2) = 3y + 1$. For $y \neq 2$,

$$
x = \frac{3y + 1}{y - 2}.
$$

Thus $f^{-1}(x) = (3x + 1)/(x - 2)$. From section 1.1 style range work, $f$ never hits $2$, because $(2x + 1)/(x - 3) = 2$ gives $2x + 1 = 2x - 6$. The domain of the inverse is $(-\infty, 2) \cup (2, \infty)$. The range is the domain of $f$, which is $(-\infty, 3) \cup (3, \infty)$.

3. $f(f^{-1}(4)) = 4$, by the cancellation identity, since $4$ is in the domain of $f^{-1}$. And $x = 2$ is the horizontal asymptote value that $f$ never attains, so $2$ is not in the range of $f$ and not in the domain of $f^{-1}$. The formula for $f^{-1}$ has denominator zero there.

### Answer 3

$\log_2 32 = 5$ because $2^5 = 32$.

$\log_3(1/9) = -2$ because $3^{-2} = 1/9$.

$\ln(e^{-4}) = -4$.

$\log_5 1 = 0$ because $5^0 = 1$.

$e^{\ln 7} = 7$ and $10^{\log_{10} 4} = 4$.

$\log_2(x - 1) = 3$ means $x - 1 = 2^3 = 8$, so $x = 9$. Check: $\log_2 8 = 3$.

$\ln x = -2$ means $x = e^{-2}$.

### Answer 4

$$
\ln(x^2) + \ln((x + 1)^{1/2}) - \ln((2x - 3)^3)
= 2\ln \lvert x \rvert + \frac{1}{2}\ln(x + 1) - 3\ln \lvert 2x - 3 \rvert,
$$

provided the original argument is positive.

Need $x + 1 > 0$ because of the square root in the real numbers as written under the radical, and the whole fraction positive, and $2x - 3 \neq 0$. The square root $\sqrt{x + 1}$ requires $x \geq -1$. The logarithm of the fraction requires the fraction to be positive, so the numerator and denominator must have the same sign, and neither can be zero.

$x^2 \sqrt{x + 1}$ is zero at $x = 0$ and at $x = -1$, and a log of zero is undefined. For $x > -1$ with $x \neq 0$, the numerator is positive. The denominator $(2x - 3)^3$ is positive when $2x - 3 > 0$, that is $x > 3/2$, and negative when $-1 < x < 3/2$. A negative denominator makes the fraction negative, which is not allowed.

So the expression is defined only for $x > 3/2$. On that set, $\lvert x \rvert = x$ and $\lvert 2x - 3 \rvert = 2x - 3$, and the expansion is

$$
2\ln x + \frac{1}{2}\ln(x + 1) - 3\ln(2x - 3).
$$

### Answer 5

Take $\ln$ of both sides of $2^{x + 1} = 5^{x - 2}$:

$$
(x + 1)\ln 2 = (x - 2)\ln 5.
$$

$$
x \ln 2 + \ln 2 = x \ln 5 - 2\ln 5.
$$

$$
x \ln 2 - x \ln 5 = -2\ln 5 - \ln 2.
$$

$$
x(\ln 2 - \ln 5) = -(2\ln 5 + \ln 2).
$$

$$
x = \frac{2\ln 5 + \ln 2}{\ln 5 - \ln 2} = \frac{\ln(50)}{\ln(5/2)}.
$$

Both sides of the original equation are positive, so the log step introduced no extraneous root.

For the second equation, the sum law requires $x > 0$ and $x - 2 > 0$, so $x > 2$. Then

$$
\log_2(x(x - 2)) = 3 \implies x^2 - 2x = 8 \implies x^2 - 2x - 8 = 0 \implies (x - 4)(x + 2) = 0.
$$

The candidates are $x = 4$ and $x = -2$. Only $x = 4$ satisfies $x > 2$. Check: $\log_2 4 + \log_2 2 = 2 + 1 = 3$. The value $x = -2$ makes both original logs undefined.

### Answer 6

1. False. The inverse of $f(x) = 3x - 5$ is $(x + 5)/3$, while $1/f(x) = 1/(3x - 5)$.
2. False. There is no pair of positive $x, y$ for which this holds in general. Counterexample: $x = y = e$. Then $\ln(e + e) = \ln(2e) = 1 + \ln 2$, while $\ln e + \ln e = 2$.
3. False. $f(x) = x^2$ on $[0, \infty)$ has inverse $\sqrt{x}$.
4. True. Change of base: $\log_2 5 = \ln 5 / \ln 2$ and $\log_5 2 = \ln 2 / \ln 5$, so they are reciprocals.

### Answer 7

1. $f(0) = 1$ matches every exponential. $f(-1) = 1/2$ means $a^{-1} = 1/2$, so $a = 2$. The base of a real exponential is positive, so $a = 2$ is the only solution. Check: $2^2 = 4$, which matches the third point. Thus $f(x) = 2^x$ and $f^{-1}(x) = \log_2 x$.
2. Reflect the points: $(1, 0)$, $(4, 2)$, and $(1/2, -1)$.
3. Domain of the inverse is the range of $2^x$, which is $(0, \infty)$. Range of the inverse is $\mathbb{R}$.

### Answer 8

The sum is defined when $x - 3 > 0$ and $x + 1 > 0$, so $x > 3$. On that set,

$$
\ln((x - 3)(x + 1)) \leq \ln 5.
$$

The natural log is increasing, so $(x - 3)(x + 1) \leq 5$, that is $x^2 - 2x - 3 \leq 5$, so $x^2 - 2x - 8 \leq 0$, so $(x - 4)(x + 2) \leq 0$. This product inequality holds for $-2 \leq x \leq 4$.

Intersect with $x > 3$: the solution is $(3, 4]$.

Check the endpoint $x = 4$: $\ln 1 + \ln 5 = \ln 5$, and equality holds. As $x$ approaches $3$ from the right, $\ln(x - 3)$ goes to $-\infty$, so the inequality holds on the whole open end, but $x = 3$ itself is undefined.

### Answer 9

1. $(g \circ f)(x) = \ln(e^{2x - 1}) = 2x - 1$, domain $\mathbb{R}$, because the exponential is always positive. $(f \circ g)(x) = e^{2\ln x - 1} = e^{-1} e^{\ln(x^2)} = e^{-1} x^2$ for $x > 0$. Domain $(0, \infty)$.
2. They are not inverses of each other. $g$ undoes the full exponential $e^{u}$, but here it is composed with $e^{2x - 1}$, which still leaves the linear expression $2x - 1$. And $(f \circ g)(x) = x^2/e$ is not the identity.
3. Set $y = e^{2x - 1}$. Then $\ln y = 2x - 1$, so $x = (\ln y + 1)/2$. Thus $f^{-1}(x) = (\ln x + 1)/2$, domain $(0, \infty)$, range $\mathbb{R}$.

### Answer 10

$y = 2\ln x$ is defined for $x > 0$. $y = \ln(x^2)$ is defined for $x \neq 0$. They agree on $(0, \infty)$, because $\ln(x^2) = 2\ln \lvert x \rvert$, and $\lvert x \rvert = x$ there. On $(-\infty, 0)$ only $\ln(x^2)$ is defined, and there $\ln(x^2) = 2\ln \lvert x \rvert \neq 2\ln x$, since $\ln x$ is not real.

The function $y = 2\ln x$ on $(0, \infty)$ is one-to-one. Its inverse: $y/2 = \ln x$, so $x = e^{y/2}$. Thus the inverse is $e^{x/2}$, domain $\mathbb{R}$, range $(0, \infty)$.

$y = \ln(x^2)$ is even, so $\ln((-2)^2) = \ln(2^2)$. It repeats values and fails the horizontal line test on $(-\infty, 0) \cup (0, \infty)$. No inverse exists on the full domain.
