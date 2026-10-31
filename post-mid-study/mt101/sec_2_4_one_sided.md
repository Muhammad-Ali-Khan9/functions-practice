# Section 2.4 — One-Sided Limits

A two-sided limit demands that both sides of $x = a$ agree. A one-sided limit only watches one side. The right-hand limit $\lim_{x \to a^+} f(x)$ uses $x > a$. The left-hand limit $\lim_{x \to a^-} f(x)$ uses $x < a$. The value at $a$, and the values on the other side, are ignored.

This is the section that decides whether a two-sided limit exists. It also gives the correct statement for a function whose domain stops at $a$, such as $\sqrt{x}$ at $0$.

## The theorem that connects them

$\lim_{x \to a} f(x) = L$ if and only if both one-sided limits exist and both equal $L$. If either side fails, or if the two sides exist but are different numbers, the two-sided limit does not exist.

Piecewise functions are computed one piece at a time. For a break at $x = a$, the right-hand limit uses the formula that applies when $x > a$. The left-hand limit uses the formula that applies when $x < a$. If the pieces meet at $x = a$ only by a filled or open dot, that dot does not affect either one-sided limit.

## Square roots and other one-sided domains

$\lim_{x \to 0} \sqrt{x}$ does not exist as a two-sided limit, because $\sqrt{x}$ is not real for $x < 0$. There is no left-hand neighborhood on which the function is defined. The right-hand limit does exist:

$$
\lim_{x \to 0^+} \sqrt{x} = 0.
$$

The same thing happens for $\sqrt{x - 2}$ at $x = 2$, and for $\ln x$ at $0$, where the right-hand limit is $-\infty$ rather than a real number. Infinite one-sided limits are finished in section 2.6. Here, record that the left-hand real limit of $\ln x$ at $0$ is not a thing, because the log is undefined on $(-\infty, 0)$.

## Jumps

$$
H(x) =
\begin{cases}
0 & \text{if } x < 0 \\
1 & \text{if } x \geq 0
\end{cases}
$$

is the unit step. Then $\lim_{x \to 0^-} H(x) = 0$ and $\lim_{x \to 0^+} H(x) = 1$. The two-sided limit does not exist. The value $H(0) = 1$ matches the right-hand limit and not the left-hand one. Changing $H(0)$ would not create a two-sided limit.

The floor function $\lfloor x \rfloor$ has a jump at every integer. At $x = 2$, the left-hand limit is $1$ and the right-hand limit is $2$. Between integers it is constant, so both one-sided limits there equal the function value.

Absolute value hides a one-sided split:

$$
\lim_{x \to 0^+} \frac{\lvert x \rvert}{x} = 1, \qquad \lim_{x \to 0^-} \frac{\lvert x \rvert}{x} = -1.
$$

For $x$ near $2$, the identity $\lvert x - 2 \rvert = x - 2$ is true only on the right. On the left it equals $2 - x$. Cancelling $\lvert x - 2 \rvert$ without splitting sides is the usual way to lose the sign.

## Limits of the form $\lvert\,\rvert$ and roots of quadratics

When a formula contains $\lvert g(x) \rvert$ or a factor that changes sign, find the zeros that sit at the point you care about, and rewrite the expression separately on each side before you cancel.

## Mistakes that change the answer

- Reporting a two-sided limit when the one-sided limits differ.
- Using the piece $x \geq a$ for the left-hand limit because the endpoint formula mentions $a$. The left-hand limit never evaluates at $a$.
- Cancelling $x - a$ inside $\lvert x - a \rvert$ as if it were $x - a$ on both sides.
- Saying $\lim_{x \to 0} \sqrt{x} = 0$. Only the right-hand limit is $0$.
- Thinking an open circle means the one-sided limit fails. The open circle is the value, or the lack of a value. The limit follows the curve into that $x$-coordinate.

---

## Questions

### Question 1

Let

$$
f(x) =
\begin{cases}
x^2 - 1 & \text{if } x < 1 \\
3 & \text{if } x = 1 \\
2x & \text{if } x > 1.
\end{cases}
$$

Find the left-hand limit, the right-hand limit, and the two-sided limit at $x = 1$, and compare them with $f(1)$.

### Question 2

Evaluate $\displaystyle \lim_{x \to 2^+} \frac{x - 2}{\lvert x - 2 \rvert}$, $\displaystyle \lim_{x \to 2^-} \frac{x - 2}{\lvert x - 2 \rvert}$, and say whether the two-sided limit exists.

### Question 3

Evaluate each limit, or say why it does not exist as a real two-sided or one-sided limit, as written.

1. $\displaystyle \lim_{x \to 0^+} \sqrt{x}$
2. $\displaystyle \lim_{x \to 0} \sqrt{x}$
3. $\displaystyle \lim_{x \to 4^-} \sqrt{4 - x}$
4. $\displaystyle \lim_{x \to 4^+} \sqrt{4 - x}$

### Question 4

For $\lfloor x \rfloor$, find both one-sided limits at $x = -2$ and at $x = 0.5$. Which of the four limits equal the function value?

### Question 5

Find $\displaystyle \lim_{x \to 1^+} \frac{\lvert x - 1 \rvert}{x^2 - 1}$ and $\displaystyle \lim_{x \to 1^-} \frac{\lvert x - 1 \rvert}{x^2 - 1}$.

### Question 6

Graph the idea of

$$
g(x) =
\begin{cases}
\frac{x^2 - 4}{x - 2} & \text{if } x < 2 \\
1 & \text{if } x = 2 \\
x + 1 & \text{if } x > 2
\end{cases}
$$

by computing both one-sided limits at $x = 2$. Does the two-sided limit exist? Is $g(2)$ equal to it?

### Question 7

Compute $\displaystyle \lim_{x \to 0^+} \frac{\sin x}{\lvert x \rvert}$ and $\displaystyle \lim_{x \to 0^-} \frac{\sin x}{\lvert x \rvert}$. Does $\displaystyle \lim_{x \to 0} \frac{\sin x}{\lvert x \rvert}$ exist?

### Question 8

Suppose $\lim_{x \to 3^-} f(x) = 2$ and $\lim_{x \to 3^+} f(x) = 2$. What is $\lim_{x \to 3} f(x)$? Suppose instead that the right-hand limit is $5$. Which of $\lim_{x \to 3} (f(x))^2$ and $\lim_{x \to 3} f(x)$ exist?

### Question 9

The function $f(x) = \sqrt{x^2 - 2x - 3}$ is being studied at the endpoints of its domain. Find the domain, then evaluate every one-sided limit at those endpoints that makes sense, and say which two-sided limits do not exist.

### Question 10

A difference quotient for $f(x) = \lvert x \rvert$ at $x = 0$ is $(\lvert h \rvert - 0)/h$.

1. Compute its right-hand and left-hand limits as $h \to 0$.
2. A classmate says the derivative at $0$ is $0$ because the two one-sided limits are opposites and their average is $0$. Answer that claim using the theorem of this section.
3. What one-sided statement about secant slopes is still true?

---

## Answers

### Answer 1

Left-hand, using $x^2 - 1$: the limit is $1 - 1 = 0$.

Right-hand, using $2x$: the limit is $2$.

The one-sided limits differ, so $\lim_{x \to 1} f(x)$ does not exist. $f(1) = 3$, which equals neither one-sided limit. The filled value at the break is a third piece of information, separate from both limits.

### Answer 2

For $x > 2$, $\lvert x - 2 \rvert = x - 2$, so the quotient is $1$. The right-hand limit is $1$.

For $x < 2$, $\lvert x - 2 \rvert = -(x - 2)$, so the quotient is $-1$. The left-hand limit is $-1$.

The two-sided limit does not exist.

### Answer 3

1. The right-hand limit is $0$.
2. The two-sided limit does not exist, because the function is not defined on any left-hand punctured neighborhood of $0$.
3. As $x$ approaches $4$ from the left, $4 - x$ approaches $0$ through positive values, so the square root approaches $0$.
4. For $x > 4$, $4 - x < 0$, so $\sqrt{4 - x}$ is not real. The right-hand limit does not exist as a real number.

### Answer 4

On $[-2, -1)$, the floor is $-2$. Just left of $-2$, on $[-3, -2)$, the floor is $-3$. So

$$
\lim_{x \to -2^-} \lfloor x \rfloor = -3, \qquad \lim_{x \to -2^+} \lfloor x \rfloor = -2.
$$

And $\lfloor -2 \rfloor = -2$, which matches only the right-hand limit.

At $x = 0.5$ the function is constant on $[0, 1)$, with value $0$. Both one-sided limits are $0$, and $\lfloor 0.5 \rfloor = 0$. All three agree. A two-sided limit exists at a non-integer.

### Answer 5

Factor the denominator as $(x - 1)(x + 1)$.

For $x > 1$, $\lvert x - 1 \rvert = x - 1$, so

$$
\frac{x - 1}{(x - 1)(x + 1)} = \frac{1}{x + 1} \to \frac{1}{2}.
$$

For $x < 1$ and $x$ near $1$, so in particular $x \neq -1$, $\lvert x - 1 \rvert = 1 - x = -(x - 1)$, so

$$
\frac{-(x - 1)}{(x - 1)(x + 1)} = \frac{-1}{x + 1} \to -\frac{1}{2}.
$$

The one-sided limits are $1/2$ and $-1/2$.

### Answer 6

For $x < 2$, $(x - 2)(x + 2)/(x - 2) = x + 2$. The left-hand limit is $4$.

For $x > 2$, the formula $x + 1$ gives the right-hand limit $3$.

The one-sided limits differ, so the two-sided limit does not exist. The question of whether $g(2)$ equals “the” limit does not arise. $g(2) = 1$ is simply the defined value, and it matches neither side. If the right-hand piece had been $x + 2$ instead of $x + 1$, both sides would have approached $4$, the two-sided limit would have been $4$, and $g(2) = 1$ would still have disagreed with that limit.

### Answer 7

For $x > 0$, $\lvert x \rvert = x$, so the quotient is $\sin x / x$, which approaches $1$.

For $x < 0$, $\lvert x \rvert = -x$, so the quotient is $\sin x / (-x) = -(\sin x)/x$. As $x \to 0^-$, $\sin x / x \to 1$, so this side approaches $-1$.

The one-sided limits are $1$ and $-1$. The two-sided limit does not exist. The familiar limit $\sin x / x \to 1$ uses the signed $x$ in the denominator, not the absolute value.

### Answer 8

Both one-sided limits equal $2$, so $\lim_{x \to 3} f(x) = 2$.

If the right-hand limit is $5$ instead, the two-sided limit of $f$ does not exist. The two-sided limit of $(f(x))^2$ also fails: the left side approaches $4$ and the right side approaches $25$. Squaring does not erase a jump when the two heights have different squares. It would erase the jump in the special case of heights $c$ and $-c$, because both square to $c^2$. That is not the situation here.

### Answer 9

Need $x^2 - 2x - 3 \geq 0$, so $(x - 3)(x + 1) \geq 0$. The domain is $(-\infty, -1] \cup [3, \infty)$.

The finite endpoints of the domain are $x = -1$ and $x = 3$.

At $x = -1$, the function is defined from the left and not from the immediate right, until $x = 3$. So only the left-hand limit makes sense, and $\sqrt{0} = 0$ is that limit: $\lim_{x \to -1^-} f(x) = 0$. The right-hand limit at $-1$ does not exist as a real limit, because just to the right the inside is negative. The two-sided limit at $-1$ does not exist.

At $x = 3$, only the right-hand limit makes sense: $\lim_{x \to 3^+} f(x) = 0$. The left-hand limit and the two-sided limit do not exist.

### Answer 10

1. For $h > 0$, $\lvert h \rvert / h = 1$, so the right-hand limit is $1$. For $h < 0$, $\lvert h \rvert / h = -1$, so the left-hand limit is $-1$.

2. The derivative exists only when the two-sided limit of the difference quotient exists. Opposites whose average is $0$ are still different numbers. The theorem says the two-sided limit exists only when the one-sided limits are equal. They are not, so there is no derivative at $0$, and there is no tangent line of finite slope.

3. The right-hand secant slopes approach $1$, which is the slope of the ray $y = x$ for $x \geq 0$. The left-hand secant slopes approach $-1$, the slope of the ray $y = -x$ for $x \leq 0$. Each side has its own tangent ray. That is a corner, not a single tangent line.
