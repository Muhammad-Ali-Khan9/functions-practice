# Section 3.3 — Differentiation Rules

The definition computes one derivative at a time. The rules compute the derivative of a combination from the derivatives of the pieces. Every rule is a theorem about limits of difference quotients. Once it is proved, you use the rule.

## The list

For differentiable functions $u$ and $v$, and a constant $c$,

$$
\begin{aligned}
\frac{d}{dx}(c) &= 0 \\
\frac{d}{dx}(x^n) &= n x^{n-1} \quad \text{for integer } n, \text{ and later for rational } n \text{ where the formula makes sense} \\
\frac{d}{dx}(cu) &= c\, u' \\
\frac{d}{dx}(u + v) &= u' + v' \\
\frac{d}{dx}(uv) &= u' v + u v' \\
\frac{d}{dx}\left(\frac{u}{v}\right) &= \frac{u' v - u v'}{v^2}, \quad v \neq 0.
\end{aligned}
$$

The power rule for negative integers follows from the quotient rule. For example,

$$
\frac{d}{dx} x^{-1} = \frac{d}{dx} \frac{1}{x} = \frac{0 \cdot x - 1 \cdot 1}{x^2} = -\frac{1}{x^2} = (-1) x^{-2}.
$$

The power rule for rational exponents needs the chain rule or implicit differentiation, so it is fully available after sections 3.6 and 3.7. The formula $\frac{d}{dx} x^{p/q} = (p/q) x^{p/q - 1}$ is the one you will use, on the intervals where $x^{p/q}$ is differentiable.

## Product and quotient, expanded

The product rule is not $(uv)' = u' v'$. Each factor contributes one term in which that factor is differentiated and the other is left alone. For three factors,

$$
(uvw)' = u'vw + uv'w + uvw'.
$$

The quotient rule keeps the denominator squared, and the numerator is “derivative of the top times the bottom, minus the top times the derivative of the bottom.” The minus sign is the part that reverses when someone swaps $u$ and $v$.

A quotient $u/v$ can also be written as a product $u \cdot v^{-1}$ and differentiated by the product rule together with the chain rule. Before the chain rule, use the quotient rule.

## Second derivatives and motion

Apply the same rules to $f'$ to get $f''$. For $s(t) = t^3$, $v(t) = 3t^2$ and $a(t) = 6t$.

You may differentiate a polynomial term by term. You may pull out a constant. You may not pull a variable out of a derivative. $\frac{d}{dx}(x \cdot x^2) = \frac{d}{dx}(x^3) = 3x^2$, while $x \cdot \frac{d}{dx}(x^2) = 2x^2$ is a different and wrong calculation. The variable is a function, not a constant.

## Where the rules apply

A theorem that assumes $u$ and $v$ are differentiable at $x$ says nothing at a corner of $u$. The function $x \lvert x \rvert$ is differentiable at $0$ even though it contains an absolute value. The product rule does not apply at $0$ in a naive way if you have not checked that both factors are differentiable there. $\lvert x \rvert$ is not differentiable at $0$, but $x$ vanishes there and repairs the product. When a factor is not differentiable, go back to the definition at that single point, and use the rules everywhere else.

## Mistakes that change the answer

- Using the product rule as the derivative of each factor, multiplied.
- Forgetting the minus sign or the order in the quotient rule.
- Differentiating $1/x^2$ as $1/(2x)$. The power is $-2$, and the derivative is $-2 x^{-3}$.
- Cancelling inside a quotient before differentiating, and throwing away a hole. Simplifying is good when you record the domain. Differentiating the cancelled formula gives the derivative off the hole. It does not define the original function at the hole.
- Quoting the power rule at $x = 0$ for $x^{1/3}$'s derivative form $(1/3)x^{-2/3}$, which is undefined at $0$. The original cube root is not differentiable at $0$ either, so the failure matches. For $\sqrt{x} = x^{1/2}$, the derivative $1/(2\sqrt{x})$ is undefined at $0$, and the original function is not differentiable there.

---

## Questions

### Question 1

Differentiate. State any points you must exclude.

1. $f(x) = 4x^5 - 3x^2 + 7x - 2$
2. $g(x) = \dfrac{x^2 + 1}{x}$
3. $h(x) = (x^2 + 3)(2x - 1)$

### Question 2

Use the product rule on $u(x) = x^2$ and $v(x) = x^3$, and also expand the product first and differentiate. Show that the answers agree.

### Question 3

Find $dy/dx$ for $y = \dfrac{x}{x^2 + 1}$. Where is the tangent horizontal?

### Question 4

A student computes $\dfrac{d}{dx}\left(\dfrac{x^2 - 1}{x - 1}\right)$ by the quotient rule without cancelling, and another student cancels first. Compare the two derivatives on the common domain, and say what happens at $x = 1$.

### Question 5

Find the first and second derivatives of $s(t) = t^4 - 6t^2 + 2$. At which times is the acceleration zero? What is the velocity at those times?

### Question 6

Differentiate $f(x) = (x^2 + 1)(x - 2)(x + 3)$ by writing it as a product of three factors and using the three-factor product rule. You do not need to expand the final polynomial. Then evaluate $f'(2)$.

### Question 7

Find the equation of the tangent line to $y = \dfrac{1}{x} + \sqrt{x}$ at $x = 4$. Use the power rule on $x^{-1}$ and on $x^{1/2}$.

### Question 8

True or false, with a reason or a counterexample.

1. $(uv)' = u' v'$ for all differentiable $u$ and $v$.
2. If $u$ is differentiable and $u \neq 0$, then $(1/u)' = -u'/u^2$.
3. The derivative of a product is zero at $x = a$ whenever $u(a) = 0$.
4. If $f'(x) = 0$ for every $x$ in $(0, 1)$, then $f$ is constant on $(0, 1)$.

### Question 9

Let $f(x) = x \lvert x \rvert$. Write $f$ without absolute values on $x \geq 0$ and on $x < 0$, differentiate each piece, and then use the definition to decide whether $f'(0)$ exists. Compare with what a careless product rule would say about $\lvert x \rvert$ at $0$.

### Question 10

The product rule is a theorem. Prove it from the definition under the assumption that $u'$ and $v'$ exist at $x$. Use the rewrite

$$
u(x + h)v(x + h) - u(x)v(x) = u(x + h)\bigl(v(x + h) - v(x)\bigr) + v(x)\bigl(u(x + h) - u(x)\bigr).
$$

You will need continuity of $u$ at $x$, which follows from differentiability.

---

## Answers

### Answer 1

1. $f'(x) = 20x^4 - 6x + 7$, defined for every real $x$.

2. Write $g(x) = x + x^{-1}$ for $x \neq 0$. Then $g'(x) = 1 - x^{-2} = 1 - 1/x^2$, for $x \neq 0$. By the quotient rule on $(x^2 + 1)/x$,

$$
g'(x) = \frac{2x \cdot x - (x^2 + 1) \cdot 1}{x^2} = \frac{x^2 - 1}{x^2} = 1 - \frac{1}{x^2},
$$

the same function, still excluding $x = 0$.

3. Product rule: $h'(x) = (2x)(2x - 1) + (x^2 + 3)(2) = 4x^2 - 2x + 2x^2 + 6 = 6x^2 - 2x + 6$. Expanding first: $(x^2 + 3)(2x - 1) = 2x^3 - x^2 + 6x - 3$, and the derivative is $6x^2 - 2x + 6$.

### Answer 2

Product rule: $2x \cdot x^3 + x^2 \cdot 3x^2 = 2x^4 + 3x^4 = 5x^4$.

Expanded product: $x^5$, derivative $5x^4$. They agree.

### Answer 3

$$
\frac{dy}{dx} = \frac{(1)(x^2 + 1) - x(2x)}{(x^2 + 1)^2} = \frac{1 - x^2}{(x^2 + 1)^2}.
$$

The denominator is never zero. The numerator is zero when $x = \pm 1$. Both points give horizontal tangents. At $x = 1$, $y = 1/2$. At $x = -1$, $y = -1/2$.

### Answer 4

Quotient rule:

$$
\frac{2x(x - 1) - (x^2 - 1)(1)}{(x - 1)^2} = \frac{2x^2 - 2x - x^2 + 1}{(x - 1)^2} = \frac{x^2 - 2x + 1}{(x - 1)^2} = \frac{(x - 1)^2}{(x - 1)^2} = 1
$$

for $x \neq 1$.

Cancelling first: $(x - 1)(x + 1)/(x - 1) = x + 1$ for $x \neq 1$, whose derivative is $1$. The derivatives agree wherever both are defined.

At $x = 1$ the original function is undefined, so it has no derivative there. The cancelled function $x + 1$ has derivative $1$ at $x = 1$, but that is a different function, the one with the hole filled.

### Answer 5

$s'(t) = 4t^3 - 12t$ and $s''(t) = 12t^2 - 12$. Acceleration is zero when $12(t^2 - 1) = 0$, so $t = \pm 1$.

$s'(1) = 4 - 12 = -8$ and $s'(-1) = -4 + 12 = 8$. The acceleration vanishes while the particle is still moving.

### Answer 6

Let $u = x^2 + 1$, $v = x - 2$, $w = x + 3$. Then

$$
f' = u'vw + uv'w + uvw' = (2x)(x - 2)(x + 3) + (x^2 + 1)(1)(x + 3) + (x^2 + 1)(x - 2)(1).
$$

At $x = 2$, the first term contains the factor $(x - 2)$ and is $0$. The third term also contains $(x - 2)$ and is $0$. The middle term is $(4 + 1)(2 + 3) = 5 \cdot 5 = 25$. So $f'(2) = 25$.

This matches the idea that if a product has a simple factor $(x - 2)$ and the other factors are nonzero at $x = 2$, the derivative at that root is the product of the other factors times the derivative of $(x - 2)$, which is $1$. The other factors at $x = 2$ are $4 + 1 = 5$ and $2 + 3 = 5$.

### Answer 7

$y = x^{-1} + x^{1/2}$, so $y' = -x^{-2} + \frac{1}{2} x^{-1/2} = -1/x^2 + 1/(2\sqrt{x})$.

At $x = 4$, $y' = -1/16 + 1/(2 \cdot 2) = -1/16 + 1/4 = -1/16 + 4/16 = 3/16$.

And $y(4) = 1/4 + 2 = 9/4$. The tangent line is

$$
y - \frac{9}{4} = \frac{3}{16}(x - 4).
$$

### Answer 8

1. False. $u = v = x$ gives $(x \cdot x)' = 2x$, while $u' v' = 1$.

2. True. Write $1/u = u^{-1}$ only after the chain rule, or apply the quotient rule to $1/u$: $(0 \cdot u - 1 \cdot u')/u^2 = -u'/u^2$.

3. False. Let $u(x) = x$ and $v(x) = x + 1$. Then $u(0) = 0$, but $(uv)' = (x^2 + x)' = 2x + 1$, so $(uv)'(0) = 1 \neq 0$. A zero of one factor does not force the derivative of the product to vanish. The other factor's derivative still contributes the term $u' v$ , and $u'(0) v(0) = 1 \cdot 1 = 1$.

4. True for an interval. It is a consequence of the Mean Value Theorem, which this course meets in section 4.2. If $f'$ is identically zero on an open interval, $f$ cannot change there: for $a$ and $b$ in the interval, $f(b) - f(a) = f'(c)(b - a) = 0$. So $f$ is constant on $(0, 1)$.

### Answer 9

For $x \geq 0$, $f(x) = x \cdot x = x^2$ and $f'(x) = 2x$. For $x < 0$, $f(x) = x(-x) = -x^2$ and $f'(x) = -2x$. Note that $-2x$ is positive when $x$ is negative, and $2x$ is positive when $x$ is positive. Both formulas approach $0$ as $x \to 0$.

At $0$, the difference quotient is $\lvert h \rvert \cdot h / h = \lvert h \rvert$ for $h \neq 0$, which approaches $0$. So $f'(0) = 0$.

A careless product rule would require the derivative of $\lvert x \rvert$ at $0$, which does not exist, and would stop. The definition shows the product is differentiable anyway. The factor $x$ is zero at the corner and flattens it. In fact $f(x) = x \lvert x \rvert$ has derivative $f'(x) = 2 \lvert x \rvert$, which is defined everywhere, including $0$, and $f'$ itself has a corner there.

### Answer 10

Divide the given identity by $h \neq 0$:

$$
\frac{u(x + h)v(x + h) - u(x)v(x)}{h} = u(x + h) \cdot \frac{v(x + h) - v(x)}{h} + v(x) \cdot \frac{u(x + h) - u(x)}{h}.
$$

Let $h \to 0$. The first difference quotient approaches $v'(x)$. The second approaches $u'(x)$. The coefficient $v(x)$ is constant with respect to $h$. The coefficient $u(x + h)$ approaches $u(x)$ because differentiability of $u$ at $x$ implies continuity of $u$ at $x$. The product and sum laws for limits give

$$
(uv)'(x) = u(x) v'(x) + v(x) u'(x).
$$
