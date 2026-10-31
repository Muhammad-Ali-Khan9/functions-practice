# Section 2.2 — Limit of a Function and Limit Laws

A limit describes the output that $f(x)$ approaches as $x$ approaches a number $a$. The value $f(a)$ itself is irrelevant. It can agree with the limit, disagree with it, or be undefined. What matters is the behavior on a punctured neighborhood of $a$: the inputs near $a$, not the input $a$.

The informal definition is enough for this section. We say $\lim_{x \to a} f(x) = L$ when $f(x)$ can be forced as close to $L$ as we like by taking $x$ close enough to $a$, with $x \neq a$. The precise $\varepsilon$--$\delta$ wording is the absolute-value statement from Appendix A.1. This course computes limits with laws, algebra, and a few standard limits, and uses the informal meaning to decide whether a limit exists.

## Limit laws

If $\lim_{x \to a} f(x)$ and $\lim_{x \to a} g(x)$ both exist, then

$$
\begin{aligned}
\lim_{x \to a} (f(x) + g(x)) &= \lim_{x \to a} f(x) + \lim_{x \to a} g(x) \\
\lim_{x \to a} (f(x) - g(x)) &= \lim_{x \to a} f(x) - \lim_{x \to a} g(x) \\
\lim_{x \to a} (cf(x)) &= c \lim_{x \to a} f(x) \\
\lim_{x \to a} (f(x)g(x)) &= \left(\lim_{x \to a} f(x)\right)\left(\lim_{x \to a} g(x)\right) \\
\lim_{x \to a} \frac{f(x)}{g(x)} &= \frac{\lim_{x \to a} f(x)}{\lim_{x \to a} g(x)} \quad \text{if the limit of } g \text{ is not } 0.
\end{aligned}
$$

Powers and roots pass inside a limit when the limit exists and the root is defined in a punctured neighborhood. In particular $\lim_{x \to a} x = a$ and $\lim_{x \to a} c = c$.

If a polynomial or a rational function is defined at $x = a$, the limit is the function value. Direct substitution is legal there because these functions are built from the laws above. Substitution is not legal merely because you can type the number into a calculator. If the denominator is zero and the numerator is not, the two-sided limit is not a real number. If both are zero, the form is indeterminate and the expression must be rewritten.

## The indeterminate form $0/0$

Factor, cancel the common factor, and then substitute. The cancelled expression equals the original one everywhere except at the hole. Limits ignore that one point.

$$
\lim_{x \to 2} \frac{x^2 - 4}{x - 2} = \lim_{x \to 2} \frac{(x - 2)(x + 2)}{x - 2} = \lim_{x \to 2} (x + 2) = 4.
$$

The original function is undefined at $x = 2$. The limit is $4$.

When a square root produces $0/0$, multiply by the conjugate:

$$
\lim_{x \to 0} \frac{\sqrt{x + 1} - 1}{x} = \lim_{x \to 0} \frac{(x + 1) - 1}{x(\sqrt{x + 1} + 1)} = \lim_{x \to 0} \frac{1}{\sqrt{x + 1} + 1} = \frac{1}{2}.
$$

## Two standard trigonometric limits

For $x$ in radians,

$$
\lim_{\theta \to 0} \frac{\sin \theta}{\theta} = 1, \qquad \lim_{\theta \to 0} \frac{1 - \cos \theta}{\theta} = 0.
$$

A constant multiple in the argument is handled by algebra, not by guessing:

$$
\lim_{x \to 0} \frac{\sin(5x)}{x} = \lim_{x \to 0} 5 \cdot \frac{\sin(5x)}{5x} = 5 \cdot 1 = 5.
$$

The form $\sin(5x)/x$ is not the standard limit until the $5$ appears in the denominator as well.

## The squeeze theorem

If $g(x) \leq f(x) \leq h(x)$ near $a$, except possibly at $a$, and if $\lim_{x \to a} g(x) = \lim_{x \to a} h(x) = L$, then $\lim_{x \to a} f(x) = L$.

This is how $\lim_{x \to 0} \sin x / x = 1$ is proved from geometry, and it is the tool for an oscillating factor trapped between two expressions with the same limit. For instance $- \lvert x \rvert \leq x \sin(1/x) \leq \lvert x \rvert$ near $0$, and both outer functions approach $0$, so $x \sin(1/x)$ approaches $0$ even though $\sin(1/x)$ oscillates forever.

## When a limit does not exist

A two-sided limit fails when the left-hand and right-hand behavior disagree, when the values grow without bound, or when they oscillate and never settle. One-sided limits and infinite limits have their own sections. In this section it is enough to refuse a single number $L$ in those cases. The laws do not apply to a limit that does not exist. You cannot split $\lim (f + g)$ into two limits if one of those limits fails.

## Mistakes that change the answer

- Substituting into a $0/0$ form and reporting $0$, or “undefined,” without rewriting. Undefined at the point is not a statement about the limit.
- Cancelling $x - a$ and then using the new formula as if it were defined at $a$. The functions differ at $a$. Their limits agree.
- Applying $\lim \sin(kx)/x = 1$. The correct limit is $k$.
- Using the quotient law when the denominator’s limit is $0$.
- Treating a calculator value very close to $a$ as a proof. A calculator suggests. Algebra or the squeeze theorem decides.

---

## Questions

### Question 1

Evaluate, showing the algebra.

1. $\displaystyle \lim_{x \to 3} \frac{x^2 - 9}{x - 3}$
2. $\displaystyle \lim_{x \to 1} \frac{x^2 - 1}{x^2 - 3x + 2}$
3. $\displaystyle \lim_{x \to 4} \frac{\sqrt{x} - 2}{x - 4}$

### Question 2

Evaluate $\displaystyle \lim_{x \to 0} \frac{\sin(3x)}{x}$, $\displaystyle \lim_{x \to 0} \frac{\tan(2x)}{x}$, and $\displaystyle \lim_{x \to 0} \frac{1 - \cos x}{x^2}$. For the third, use $1 - \cos x = 2\sin^2(x/2)$ or the identity $(1 - \cos x)(1 + \cos x) = \sin^2 x$.

### Question 3

Does $\displaystyle \lim_{x \to 0} \frac{\lvert x \rvert}{x}$ exist? Compute the quotient for $x > 0$ and for $x < 0$, and say what the limit laws are not allowed to do here.

### Question 4

Let $f(x) = \begin{cases} x^2 & \text{if } x \neq 2 \\ 7 & \text{if } x = 2. \end{cases}$ Find $\lim_{x \to 2} f(x)$ and $f(2)$. What does the comparison tell you?

### Question 5

Use the squeeze theorem to evaluate $\displaystyle \lim_{x \to 0} x^2 \cos(1/x)$. State the two bounding functions.

### Question 6

Evaluate $\displaystyle \lim_{x \to 1} \frac{x - 1}{\sqrt{x + 3} - 2}$ and $\displaystyle \lim_{h \to 0} \frac{(2 + h)^3 - 8}{h}$.

### Question 7

Suppose $\lim_{x \to 2} f(x) = 4$ and $\lim_{x \to 2} g(x) = -1$. Evaluate each limit, or say why the laws do not apply.

1. $\lim_{x \to 2} (3f(x) - g(x))$
2. $\lim_{x \to 2} \dfrac{f(x)}{g(x)}$
3. $\lim_{x \to 2} \dfrac{f(x) - 4}{g(x) + 1}$
4. $\lim_{x \to 2} \sqrt{f(x)}$

### Question 8

Find $\displaystyle \lim_{x \to 0} \frac{\sin(4x)}{\sin(7x)}$. Do not convert sines to decimals.

### Question 9

A student writes

$$
\lim_{x \to 0} \frac{x^2 + x}{x} = \lim_{x \to 0} (x^2 + x) \cdot \lim_{x \to 0} \frac{1}{x}
$$

and stops. Explain the illegal step, then evaluate the limit correctly. Also evaluate $\displaystyle \lim_{x \to 0} \frac{x^2 + x}{x^3 + x}$.

### Question 10

Determine whether each limit exists as a real number. Evaluate the ones that do.

1. $\displaystyle \lim_{x \to 0} \sin(1/x)$
2. $\displaystyle \lim_{x \to 0} x \sin(1/x)$
3. $\displaystyle \lim_{x \to 2} \frac{x^2 - 4}{\lvert x - 2 \rvert}$

---

## Answers

### Answer 1

1. $\dfrac{(x - 3)(x + 3)}{x - 3} = x + 3$ for $x \neq 3$. The limit is $6$.

2. $\dfrac{(x - 1)(x + 1)}{(x - 1)(x - 2)} = \dfrac{x + 1}{x - 2}$ for $x \neq 1$. The limit is $(1 + 1)/(1 - 2) = 2/(-1) = -2$. The factor $x - 2$ is not zero at $x = 1$, so it stays.

3. Multiply by the conjugate:

$$
\frac{\sqrt{x} - 2}{x - 4} \cdot \frac{\sqrt{x} + 2}{\sqrt{x} + 2} = \frac{x - 4}{(x - 4)(\sqrt{x} + 2)} = \frac{1}{\sqrt{x} + 2}
$$

for $x \neq 4$. The limit is $1/(2 + 2) = 1/4$.

### Answer 2

$$
\frac{\sin(3x)}{x} = 3 \cdot \frac{\sin(3x)}{3x} \to 3 \cdot 1 = 3.
$$

$$
\frac{\tan(2x)}{x} = \frac{\sin(2x)}{x \cos(2x)} = 2 \cdot \frac{\sin(2x)}{2x} \cdot \frac{1}{\cos(2x)} \to 2 \cdot 1 \cdot \frac{1}{1} = 2.
$$

Using $\sin^2 x = (1 - \cos x)(1 + \cos x)$,

$$
\frac{1 - \cos x}{x^2} = \frac{1 - \cos x}{x^2} \cdot \frac{1 + \cos x}{1 + \cos x} = \frac{\sin^2 x}{x^2(1 + \cos x)} = \left(\frac{\sin x}{x}\right)^2 \cdot \frac{1}{1 + \cos x}.
$$

The limit is $1^2 \cdot 1/(1 + 1) = 1/2$.

### Answer 3

For $x > 0$, $\lvert x \rvert / x = 1$. For $x < 0$, $\lvert x \rvert / x = -1$. The right-hand values sit at $1$ and the left-hand values sit at $-1$. No single number $L$ is approached from both sides, so the two-sided limit does not exist.

The quotient law does not turn this into $\lim \lvert x \rvert / \lim x$, because $\lim_{x \to 0} x = 0$ and division by that limit is illegal. Even the numerator’s limit exists. A zero denominator-limit blocks the law.

### Answer 4

For every $x \neq 2$, $f(x) = x^2$. The limit as $x \to 2$ is the same as $\lim_{x \to 2} x^2 = 4$. The defined value $f(2) = 7$ is different. A limit does not read the function at the point. Changing $f(2)$ from $4$ to $7$ does not change the limit.

### Answer 5

Cosine stays between $-1$ and $1$, so

$$
-x^2 \leq x^2 \cos(1/x) \leq x^2
$$

for $x \neq 0$. Both $-x^2$ and $x^2$ approach $0$ as $x \to 0$. The squeeze theorem says the middle expression approaches $0$.

### Answer 6

Multiply by the conjugate:

$$
\frac{x - 1}{\sqrt{x + 3} - 2} \cdot \frac{\sqrt{x + 3} + 2}{\sqrt{x + 3} + 2} = \frac{(x - 1)(\sqrt{x + 3} + 2)}{(x + 3) - 4} = \sqrt{x + 3} + 2
$$

for $x \neq 1$. The limit is $\sqrt{4} + 2 = 4$.

For the cube,

$$
\frac{(8 + 12h + 6h^2 + h^3) - 8}{h} = 12 + 6h + h^2
$$

for $h \neq 0$. The limit is $12$. This is the derivative of $x^3$ at $x = 2$, computed from the definition.

### Answer 7

1. $3 \cdot 4 - (-1) = 13$.
2. $4/(-1) = -4$. The limit of the denominator is not zero, so the quotient law applies.
3. The numerator approaches $4 - 4 = 0$ and the denominator approaches $-1 + 1 = 0$. This is a $0/0$ form. The laws do not produce a number, and the information given is not enough to evaluate it. Different functions with these limits can give different answers. If $f(x) = 4$ and $g(x) = -1$ except at $x = 2$, the quotient is $0/0$ and undefined nearby in a useless way. More usefully: $f(x) = 4 + (x - 2)$ and $g(x) = -1 + (x - 2)$ both have the stated limits, and the quotient approaches $1$. Replacing the added term in $g$ by $2(x - 2)$ makes the quotient approach $1/2$.
4. $\sqrt{4} = 2$. The root law applies because the limit $4$ is positive, so $f(x)$ is positive near $x = 2$.

### Answer 8

$$
\frac{\sin(4x)}{\sin(7x)} = \frac{\sin(4x)}{4x} \cdot \frac{7x}{\sin(7x)} \cdot \frac{4}{7} = \frac{\sin(4x)}{4x} \cdot \frac{1}{\sin(7x)/(7x)} \cdot \frac{4}{7}.
$$

As $x \to 0$, this approaches $1 \cdot (1/1) \cdot 4/7 = 4/7$.

### Answer 9

The product law requires both limits to exist. $\lim_{x \to 0} 1/x$ does not exist as a real number, so splitting the fraction that way is illegal. It also hides a cancellation. For $x \neq 0$,

$$
\frac{x^2 + x}{x} = x + 1 \to 1.
$$

For the second limit, factor $x$ from numerator and denominator:

$$
\frac{x(x + 1)}{x(x^2 + 1)} = \frac{x + 1}{x^2 + 1}
$$

for $x \neq 0$. The limit is $1/1 = 1$. Here the denominator’s limit is $1$, not $0$, after cancelling. Before cancelling, substitution gives $0/0$, so the original form still had to be rewritten. Cancelling was the fix, not the quotient law on the uncancelled fraction.

### Answer 10

1. $\sin(1/x)$ oscillates between $-1$ and $1$ infinitely often as $x \to 0$. It does not approach one number. The limit does not exist.
2. The squeeze $- \lvert x \rvert \leq x \sin(1/x) \leq \lvert x \rvert$ forces the limit to be $0$. Multiplying the oscillation by $x$ damps it.
3. For $x > 2$, $\lvert x - 2 \rvert = x - 2$, so the quotient equals $x + 2$ after cancelling, which approaches $4$. For $x < 2$, $\lvert x - 2 \rvert = 2 - x = -(x - 2)$, so the quotient equals $-(x + 2)$, which approaches $-4$. The one-sided limits differ. The two-sided limit does not exist.
