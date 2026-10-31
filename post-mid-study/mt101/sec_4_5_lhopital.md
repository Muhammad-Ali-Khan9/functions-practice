# Section 4.5 — Indeterminate Forms and L’Hôpital’s Rule

A limit that substitutes to $0/0$ or $\infty/\infty$ is indeterminate. The two functions are both vanishing, or both blowing up, and the quotient can tend to anything. L’Hôpital’s rule replaces that quotient by the quotient of the derivatives, which is often simpler. It does not apply to an ordinary number over a number, and it does not apply until the form has been checked.

## The rule

Suppose $f$ and $g$ are differentiable near $a$, except possibly at $a$, and $g'(x) \neq 0$ near $a$. If

$$
\lim_{x \to a} \frac{f(x)}{g(x)}
$$

is the indeterminate form $0/0$ or $\infty/\infty$, and if $\lim_{x \to a} f'(x)/g'(x)$ exists, or is $\pm\infty$, then

$$
\lim_{x \to a} \frac{f(x)}{g(x)} = \lim_{x \to a} \frac{f'(x)}{g'(x)}
$$

The same statement holds for $x \to a^+$, $x \to a^-$, $x \to \infty$, and $x \to -\infty$.

You differentiate the numerator and the denominator separately. You do not use the quotient rule on $f/g$. The quotient rule differentiates the whole fraction. L’Hôpital differentiates the two pieces because the original fraction was an indeterminate form.

If the new limit is again $0/0$ or $\infty/\infty$, the rule may be applied again, as long as the hypotheses still hold.

## When the rule is silent or illegal

If $\lim f'/g'$ does not exist and is not an infinite limit, the rule says nothing. It does not prove that the original limit fails. The classic trap is $\lim_{x \to \infty} \sin x / x$. This is not an indeterminate form of the kind the rule needs: the numerator oscillates and does not tend to $\infty$. The quotient tends to $0$ by the squeeze theorem. Differentiating anyway produces $\cos x$, which has no limit, and that wrong step does not describe the original function.

If substitution gives $3/0$ or $5/2$, do not differentiate. A nonzero constant over zero is an infinite limit or a one-sided infinite limit, already decided by the sign. A constant over a constant is just that constant.

## The other indeterminate forms

These are rewritten until they become $0/0$ or $\infty/\infty$.

| Form | Rewrite |
| --- | --- |
| $0 \cdot \infty$ | $\dfrac{f}{1/g}$ or $\dfrac{g}{1/f}$ |
| $\infty - \infty$ | common denominator, or factor, or rationalize |
| $1^{\infty}$, $0^0$, $\infty^0$ | set $y$ equal to the expression and take $\ln y$ |

For $y = [f(x)]^{g(x)}$,

$$
\ln y = g(x)\ln f(x)
$$

and you take the limit of $\ln y$. If that limit is $L$, then the limit of $y$ is $e^L$. If $\ln y \to -\infty$, then $y \to 0$. If $\ln y \to +\infty$, then $y \to +\infty$.

The base of a logarithm in this rewrite must be positive. A form such as $(1 + 1/x)^x$ has a positive base for large $x$.

## Standard limits worth recognizing

$$
\lim_{x \to 0} \frac{\sin x}{x} = 1, \qquad \lim_{x \to \infty} \frac{x^n}{e^x} = 0, \qquad \lim_{x \to \infty} \frac{\ln x}{x^p} = 0
$$

for any positive $n$ and $p$. Polynomials grow slower than exponentials. Logarithms grow slower than positive powers. L’Hôpital proves these by repeated differentiation, once the form is $\infty/\infty$.

## Mistakes that change the answer

- Applying the rule to a determinate form.
- Using the quotient rule instead of differentiating numerator and denominator separately.
- Stopping at $\lim \ln y$ and forgetting to exponentiate.
- Applying the rule twice when the first derivative quotient is no longer indeterminate. Substitute.
- Rewriting $0\cdot\infty$ in the messier direction. If one factor has a simple derivative in the denominator, put that factor in the denominator.

---

## Questions

### Question 1

Evaluate, and name the indeterminate form before you differentiate.

1. $\displaystyle \lim_{x \to 0} \frac{e^x - 1 - x}{x^2}$
2. $\displaystyle \lim_{x \to \infty} \frac{\ln x}{\sqrt{x}}$
3. $\displaystyle \lim_{x \to 0} \frac{\tan x - x}{x^3}$

### Question 2

Evaluate $\displaystyle \lim_{x \to 0^+} x \ln x$ and $\displaystyle \lim_{x \to \infty} x e^{-x}$. Say which rewrite you chose and why.

### Question 3

Evaluate $\displaystyle \lim_{x \to \infty} \left(1 + \frac{2}{x}\right)^x$ and $\displaystyle \lim_{x \to 0^+} x^x$.

### Question 4

Evaluate $\displaystyle \lim_{x \to 0} \left(\frac{1}{\sin x} - \frac{1}{x}\right)$. Identify the form $\infty - \infty$ and convert it before using L’Hôpital.

### Question 5

These are not all candidates for L’Hôpital. Evaluate each limit, and say which ones forbid the rule.

1. $\displaystyle \lim_{x \to 0} \frac{x + 3}{x + 1}$
2. $\displaystyle \lim_{x \to 0} \frac{\sin x}{x + \sin x}$
3. $\displaystyle \lim_{x \to \infty} \frac{\sin x}{x}$
4. $\displaystyle \lim_{x \to (\pi/2)^-} \frac{\tan x}{\sec x}$

### Question 6

How many times must L’Hôpital’s rule be applied to evaluate $\displaystyle \lim_{x \to \infty} \frac{x^3}{e^x}$? Compute the limit, and explain why one further differentiation, after the form has become determinate, would be a mistake.

### Question 7

Evaluate $\displaystyle \lim_{x \to 0} \frac{x - \sin x}{x - \tan x}$. Count the applications. The numerator and the denominator both need their own derivatives. Do not combine them into one fraction before you have to.

### Question 8

A student writes

$$
\lim_{x \to 0} \frac{1 - \cos x}{x^2} = \lim_{x \to 0} \frac{\sin x}{2x} = \lim_{x \to 0} \frac{\cos x}{2} = \frac{1}{2}
$$

Which steps are L’Hôpital, which step is a standard limit, and is the answer right? Then evaluate $\displaystyle \lim_{x \to 0} \frac{1 - \cos x}{x}$ and explain why a second differentiation is illegal there.

### Question 9

Find $\displaystyle \lim_{x \to 0^+} (\sin x)^x$ and $\displaystyle \lim_{x \to \infty} \left(\frac{x}{x + 1}\right)^x$.

### Question 10

The functions $f(x) = x^2 \sin(1/x)$ for $x \neq 0$, with $f(0) = 0$, and $g(x) = x$ satisfy $\lim_{x \to 0} f(x)/g(x) = 0$. Show that $\lim_{x \to 0} f'(x)/g'(x)$ does not exist. Why does this not contradict L’Hôpital’s rule?

---

## Answers

### Answer 1

1. Substitution gives $(1 - 1 - 0)/0 = 0/0$. Differentiate once: $(e^x - 1)/(2x)$, still $0/0$ at $x = 0$. Differentiate again: $e^x / 2 \to 1/2$. The limit is $1/2$.

2. As $x \to \infty$, this is $\infty/\infty$. One application gives

$$
\lim_{x \to \infty} \frac{1/x}{1/(2\sqrt{x})} = \lim_{x \to \infty} \frac{1}{x}\cdot 2\sqrt{x} = \lim_{x \to \infty} \frac{2}{\sqrt{x}} = 0
$$

3. $\tan x - x$ and $x^3$ both tend to $0$, so the form is $0/0$.

$$
\lim_{x \to 0} \frac{\sec^2 x - 1}{3x^2}
$$

is still $0/0$, because $\sec^2 0 - 1 = 0$. Differentiate again:

$$
\lim_{x \to 0} \frac{2\sec^2 x \tan x}{6x} = \lim_{x \to 0} \frac{\sec^2 x \tan x}{3x}
$$

This is still $0/0$. Differentiate a third time. The derivative of the denominator $3x$ is $3$. The derivative of the numerator $\sec^2 x \tan x$ is

$$
2\sec^2 x \tan^2 x + \sec^4 x
$$

which equals $1$ at $x = 0$. The limit of the derivative quotient is $1/3$, so the original limit is $1/3$.

### Answer 2

$x \ln x$ as $x \to 0^+$ is $0 \cdot (-\infty)$. Write it as

$$
\lim_{x \to 0^+} \frac{\ln x}{1/x}
$$

which is $(-\infty)/\infty$, an $\infty/\infty$ form. Then

$$
\lim_{x \to 0^+} \frac{1/x}{-1/x^2} = \lim_{x \to 0^+} (-x) = 0
$$

Putting $x$ in the denominator as $x / (1/\ln x)$ is legal but uglier, because the derivative of $1/\ln x$ is more work. The rewrite above uses the simple derivative of $1/x$.

$x e^{-x} = x/e^x$ is $\infty/\infty$ as $x \to \infty$. One application gives $1/e^x \to 0$.

### Answer 3

For the first, set $y = (1 + 2/x)^x$. Then

$$
\ln y = x \ln\left(1 + \frac{2}{x}\right) = \frac{\ln(1 + 2/x)}{1/x}
$$

As $x \to \infty$ this is $0/0$. Differentiate:

$$
\lim_{x \to \infty} \frac{\dfrac{1}{1 + 2/x}\cdot\bigl(-2/x^2\bigr)}{-1/x^2} = \lim_{x \to \infty} \frac{2}{1 + 2/x} = 2
$$

So $\lim \ln y = 2$ and $\lim y = e^2$.

For $x^x$ as $x \to 0^+$, $\ln y = x \ln x \to 0$ by Question 2. Therefore $y \to e^0 = 1$.

### Answer 4

$$
\frac{1}{\sin x} - \frac{1}{x} = \frac{x - \sin x}{x\sin x}
$$

As $x \to 0$ this is $0/0$. Differentiate:

$$
\frac{1 - \cos x}{\sin x + x\cos x}
$$

still $0/0$. Differentiate again:

$$
\frac{\sin x}{\cos x + \cos x - x\sin x} = \frac{\sin x}{2\cos x - x\sin x} \to \frac{0}{2} = 0
$$

The original limit is $0$.

### Answer 5

1. Substitution gives $3/1 = 3$. The form is determinate. L’Hôpital is forbidden. Differentiating would give $1/1 = 1$, which is the wrong answer.

2. This is $0/0$. L’Hôpital gives $\cos x / (1 + \cos x) \to 1/2$. Directly, divide numerator and denominator by $x$: $(\sin x / x) / (1 + \sin x / x) \to 1/(1 + 1) = 1/2$.

3. Not $0/0$ and not $\infty/\infty$. Squeeze: $-1/x \le \sin x / x \le 1/x$ for $x > 0$, and both ends tend to $0$. The limit is $0$. L’Hôpital does not apply. The derivative quotient is $\cos x$, which has no limit.

4. As $x \to (\pi/2)^-$, both $\tan x$ and $\sec x$ tend to $+\infty$, so this is $\infty/\infty$. But $\tan x / \sec x = \sin x$, exactly, for $\cos x \neq 0$. The limit is $\sin(\pi/2) = 1$. L’Hôpital is legal and also gives $\sec^2 x / (\sec x \tan x) = \sec x / \tan x = 1/\sin x \to 1$. The algebraic simplification is shorter. The rule is not required once you notice the identity.

### Answer 6

The form is $\infty/\infty$. Three applications produce

$$
\lim_{x \to \infty} \frac{3x^2}{e^x} = \lim_{x \to \infty} \frac{6x}{e^x} = \lim_{x \to \infty} \frac{6}{e^x} = 0
$$

After the third differentiation the quotient is $6/e^x$, whose limit is $0$ by substitution. That form is determinate. Stop there. Differentiating $6/e^x$ again is not an application of the rule, because the rule requires an indeterminate form. The limit is $0$.

### Answer 7

The form is $0/0$. One differentiation gives

$$
\lim_{x \to 0} \frac{1 - \cos x}{1 - \sec^2 x}
$$

still $0/0$, since $\sec^2 0 = 1$. Note $1 - \sec^2 x = -\tan^2 x$, so the quotient is $(1 - \cos x)/(-\tan^2 x)$. A second differentiation of the unsimplified form:

Numerator derivative $\sin x$. Denominator derivative $-2\sec^2 x \tan x$. At $x = 0$ this is $0/0$ again, because $\tan 0 = 0$.

Third differentiation. Derivative of $\sin x$ is $\cos x$. Derivative of $-2\sec^2 x \tan x$ was computed in Answer 1 as $-2(2\sec^2 x \tan^2 x + \sec^4 x)$. At $0$ the numerator derivative is $1$ and the denominator derivative is $-2(0 + 1) = -2$. The limit is $1/(-2) = -1/2$.

Check with the simplified version $(1 - \cos x)/(-\tan^2 x)$. As $x \to 0$, $(1 - \cos x)/x^2 \to 1/2$ and $\tan x / x \to 1$, so

$$
\frac{1 - \cos x}{-\tan^2 x} = -\frac{(1 - \cos x)/x^2}{(\tan x / x)^2} \to -\frac{1/2}{1} = -\frac{1}{2}
$$

The two methods agree.

### Answer 8

Both differentiations are L’Hôpital on $0/0$ forms. After the first, $(\sin x)/(2x) = \tfrac{1}{2}(\sin x / x)$, and the standard limit gives $1/2$ without a second differentiation. The student’s second step is also a correct L’Hôpital step. The answer $1/2$ is right.

For $(1 - \cos x)/x$, one application gives $\sin x / 1 \to 0$. That limit is determinate. Differentiating again would replace $0$ by $\cos x \to 1$, which is wrong. The original limit is $0$, not $1$.

### Answer 9

For $(\sin x)^x$ as $x \to 0^+$, $\ln y = x \ln(\sin x) = \dfrac{\ln(\sin x)}{1/x}$, an $\infty/\infty$ form in the sense $(-\infty)/\infty$. Then

$$
\lim_{x \to 0^+} \frac{\cot x}{-1/x^2} = \lim_{x \to 0^+} \left(-x^2 \frac{\cos x}{\sin x}\right) = \lim_{x \to 0^+} \left(-x \cos x \cdot \frac{x}{\sin x}\right) = 0
$$

because $x \to 0$, $\cos x \to 1$, and $x/\sin x \to 1$. So $\ln y \to 0$ and $y \to 1$.

For the second limit, $\ln y = x \ln\bigl(x/(x + 1)\bigr) = x \ln\bigl(1 - 1/(x + 1)\bigr)$. Write

$$
\ln y = \frac{\ln\bigl(x/(x + 1)\bigr)}{1/x} = \frac{\ln x - \ln(x + 1)}{1/x}
$$

This is $0/0$ in the sense that the log of a quantity tending to $1$ tends to $0$, over $0$. Differentiate:

$$
\lim_{x \to \infty} \frac{1/x - 1/(x + 1)}{-1/x^2} = \lim_{x \to \infty} \left(-x^2\right)\left(\frac{1}{x(x + 1)}\right) = \lim_{x \to \infty} \frac{-x}{x + 1} = -1
$$

So $\lim y = e^{-1} = 1/e$.

### Answer 10

$f(x)/g(x) = x \sin(1/x) \to 0$ by the squeeze theorem, since $- \lvert x \rvert \le x\sin(1/x) \le \lvert x \rvert$.

For $x \neq 0$, $f'(x) = 2x\sin(1/x) - \cos(1/x)$, and $g'(x) = 1$. Then $f'(x)/g'(x) = 2x\sin(1/x) - \cos(1/x)$. The first term tends to $0$, and $\cos(1/x)$ oscillates and has no limit. So $\lim f'/g'$ does not exist.

L’Hôpital’s rule is an implication in one direction. If the derivative quotient has a limit, then the original quotient has the same limit. The converse is not part of the theorem. Here the derivative quotient has no limit, so the hypothesis of the rule fails, and the rule is silent. The original limit can still exist. This example is why you may not read a failure of $\lim f'/g'$ as a failure of $\lim f/g$.
