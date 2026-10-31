# Section 2.6 — Limits Involving Infinity; Asymptotes of Graphs

Infinity is not a real number. A limit equal to infinity is a description of growth: the outputs eventually stay larger than any bound you name. A limit as $x$ approaches infinity is a description of end behavior: the inputs run off the right end of the axis, and the outputs settle or fail to settle. Vertical and horizontal asymptotes are the geometric names for these two kinds of limit.

## Infinite limits

$\lim_{x \to a} f(x) = \infty$ means $f(x)$ becomes larger than any prescribed $M > 0$ when $x$ is close enough to $a$, with $x \neq a$. The limit does not exist as a real number. The symbol $\infty$ records the way it fails.

One-sided versions are the ones that appear most often, because a sign change in a denominator sends the two sides to opposite infinities.

$$
\lim_{x \to 0^+} \frac{1}{x} = \infty, \qquad \lim_{x \to 0^-} \frac{1}{x} = -\infty.
$$

The two-sided limit $\lim_{x \to 0} 1/x$ is neither a real number nor a single infinite symbol, because the sides disagree. For $1/x^2$ both sides go to $+\infty$, and it is correct to write $\lim_{x \to 0} 1/x^2 = \infty$.

A vertical asymptote $x = a$ occurs when at least one of the one-sided limits is $+\infty$ or $-\infty$. The line is not part of the graph. A curve can cross a horizontal asymptote and still approach it at infinity. A curve does not cross its vertical asymptote, because the function is undefined at that $x$-value. The graph may lie on the left of $x = a$ and also on the right, but it never passes through $x = a$.

For a rational function, a vertical asymptote can occur only at a zero of the denominator. If that factor also cancels with the numerator, the graph has a hole, not a vertical asymptote. Cancel first, then read what is left.

## Limits at infinity

$\lim_{x \to \infty} f(x) = L$ means $f(x)$ stays as close to $L$ as you like once $x$ is large enough. Then $y = L$ is a horizontal asymptote. The same idea with $x \to -\infty$ can produce the same horizontal line or a different one. A function can have two horizontal asymptotes. $f(x) = \tan^{-1} x$ is the later example. $f(x) = e^x$ has $y = 0$ as a horizontal asymptote at $-\infty$ and no horizontal asymptote at $+\infty$.

For large $\lvert x \rvert$, only the highest-degree terms of a rational function survive. If

$$
f(x) = \frac{a_n x^n + \cdots + a_0}{b_m x^m + \cdots + b_0}
$$

with $a_n \neq 0$ and $b_m \neq 0$, then

$$
\lim_{x \to \pm \infty} f(x) =
\begin{cases}
0 & \text{if } n < m \\
a_n / b_m & \text{if } n = m \\
\pm \infty,\ \text{sign depending on the side and on } a_n/b_m & \text{if } n > m.
\end{cases}
$$

The practical step is to divide numerator and denominator by $x^m$, or by the highest power present. For $x \to -\infty$, remember $\sqrt{x^2} = \lvert x \rvert = -x$. That identity is the difference between a correct oblique or horizontal limit and a sign error.

## Oblique asymptotes

If the degree of the numerator is exactly one more than the degree of the denominator, divide. The quotient is a line $mx + b$, and the remainder over the divisor goes to $0$ as $x \to \pm \infty$. The line $y = mx + b$ is an oblique asymptote. It is not vertical and not horizontal.

$$
\frac{x^2 + 1}{x} = x + \frac{1}{x}
$$

has oblique asymptote $y = x$. The graph approaches that line and never becomes that line, because $1/x$ is never zero.

Polynomials of degree $1$ or more do not have horizontal asymptotes. Their end behavior is infinite. A linear polynomial is its own graph, so calling the line an asymptote of itself is the wrong word. Asymptote means a line the graph approaches. A function does not approach a line it already is, in the sense used here. The word is reserved for the line that the graph gets close to while not eventually coinciding with it.

## Standard limits worth memorizing

$$
\lim_{x \to \infty} \frac{1}{x} = 0, \qquad \lim_{x \to \infty} e^{-x} = 0, \qquad \lim_{x \to \infty} \tan^{-1} x = \frac{\pi}{2}.
$$

The exponential $e^x$ grows faster than any polynomial. The log grows slower than any positive power of $x$. Those comparisons are used heavily with L’Hôpital’s rule later. For this section, the rational-function rules and conjugates are enough.

## A conjugate at infinity

$$
\lim_{x \to \infty} \left(\sqrt{x^2 + x} - x\right)
$$

is an $\infty - \infty$ form. Rationalize:

$$
\sqrt{x^2 + x} - x = \frac{(x^2 + x) - x^2}{\sqrt{x^2 + x} + x} = \frac{x}{\sqrt{x^2 + x} + x}.
$$

Divide numerator and denominator by $x$. For $x > 0$, $\sqrt{x^2 + x}/x = \sqrt{(x^2 + x)/x^2} = \sqrt{1 + 1/x}$. The limit is

$$
\frac{1}{\sqrt{1 + 0} + 1} = \frac{1}{2}.
$$

For $x \to -\infty$ the same algebra needs $\sqrt{x^2 + x}\,/ \lvert x \rvert$, and the denominator’s second term $x/\lvert x \rvert$ is $-1$. The two ends do not match. Computing only the positive side and copying the answer to $-\infty$ is a standard error.

## Mistakes that change the answer

- Writing a vertical asymptote at a cancelled factor.
- Assigning one infinite symbol to a two-sided limit whose sides go to opposite infinities.
- Dividing by $x$ inside a square root and forgetting $\sqrt{x^2} = \lvert x \rvert$ when $x \to -\infty$.
- Declaring $y = L$ is not a horizontal asymptote because the graph crosses $y = L$ at some finite $x$. Crossing at a finite $x$ is allowed.
- Treating $\infty - \infty$ or $\infty/\infty$ as a number. Rewrite first.

---

## Questions

### Question 1

Find the vertical asymptotes, holes, and the two-sided or one-sided infinite limits for

$$
f(x) = \frac{x^2 - 1}{x^2 - x - 2}.
$$

### Question 2

Find $\displaystyle \lim_{x \to \infty} \frac{3x^2 - x + 1}{x^2 + 4}$ and $\displaystyle \lim_{x \to -\infty} \frac{2x^3 + 1}{x^2 - 5}$. Say which results are horizontal asymptotes and which are not.

### Question 3

Evaluate $\displaystyle \lim_{x \to \infty} \left(\sqrt{x^2 + 4x} - x\right)$ and $\displaystyle \lim_{x \to -\infty} \left(\sqrt{x^2 + 4x} - x\right)$.

### Question 4

Find the oblique asymptote of $y = \dfrac{2x^2 + 3x - 1}{x + 1}$, and the vertical asymptote. Does the graph cross the oblique asymptote anywhere?

### Question 5

Determine $\displaystyle \lim_{x \to (\pi/2)^-} \tan x$ and $\displaystyle \lim_{x \to (\pi/2)^+} \tan x$. Why is $x = \pi/2$ a vertical asymptote, and why is there no two-sided infinite limit?

### Question 6

For $f(x) = \dfrac{\lvert x \rvert}{x + 1}$, find $\lim_{x \to \infty} f(x)$ and $\lim_{x \to -\infty} f(x)$. Identify the horizontal asymptotes and the vertical asymptote.

### Question 7

Sort these by growth as $x \to \infty$, from slowest to fastest, with a reason: $\ln x$, $x^{1/3}$, $x$, $e^{x/2}$, $x^2$. You may use the standard comparison that any positive power of $x$ beats $\ln x$, and $e^{kx}$ for $k > 0$ beats any polynomial.

### Question 8

A student claims every rational function has a horizontal asymptote. Give a counterexample, then state the degree condition that does guarantee one. Give a second function, not rational, that has two different horizontal asymptotes. You may use $f(x) = e^x / (1 + e^x)$ if you compute both ends.

### Question 9

Evaluate $\displaystyle \lim_{x \to 0^+} \ln x$, $\displaystyle \lim_{x \to \infty} \ln x$, and $\displaystyle \lim_{x \to \infty} \frac{\ln x}{x}$. For the last one, use the growth comparison from Question 7 rather than L’Hôpital’s rule.

### Question 10

The average cost of producing $x > 0$ items is $A(x) = 20 + 500/x$ dollars per item.

1. What does $\lim_{x \to \infty} A(x)$ say about production?
2. What does $\lim_{x \to 0^+} A(x)$ say, and is $x = 0$ a vertical asymptote of this model?
3. Does $A$ have an oblique asymptote? Why or why not?

---

## Answers

### Answer 1

Factor: $(x - 1)(x + 1)/((x - 2)(x + 1)) = (x - 1)/(x - 2)$ for $x \neq -1$.

At $x = -1$ the original function is undefined, but the simplified function has limit $(-1 - 1)/(-1 - 2) = (-2)/(-3) = 2/3$. This is a hole at $(-1, 2/3)$, not a vertical asymptote.

At $x = 2$ the denominator of the simplified function is zero and the numerator is $1 \neq 0$. As $x \to 2^+$, $(x - 1)/(x - 2) \to +\infty$. As $x \to 2^-$, the quotient goes to $-\infty$. The line $x = 2$ is a vertical asymptote.

There is no two-sided infinite limit at $x = 2$, because the signs disagree.

### Answer 2

Divide the first fraction by $x^2$:

$$
\frac{3 - 1/x + 1/x^2}{1 + 4/x^2} \to \frac{3}{1} = 3
$$

as $x \to \infty$. The degrees match, so the limit is the ratio of leading coefficients. The line $y = 3$ is a horizontal asymptote. The same limit holds as $x \to -\infty$.

For the second, the degree of the numerator is larger by $1$. Divide by $x^2$:

$$
\frac{2x + 1/x^2}{1 - 5/x^2}.
$$

As $x \to -\infty$, the numerator $2x$ goes to $-\infty$ and the denominator goes to $1$, so the limit is $-\infty$. There is no horizontal asymptote. Division gives $2x + \cdots$, so there is an oblique asymptote instead, found the way Question 4 finds one.

### Answer 3

For $x > 0$,

$$
\sqrt{x^2 + 4x} - x = \frac{4x}{\sqrt{x^2 + 4x} + x} = \frac{4}{\sqrt{1 + 4/x} + 1} \to \frac{4}{1 + 1} = 2.
$$

For $x \to -\infty$, set $x = -t$ with $t \to \infty$, and require $x < -4$ so the expression under the root is positive. Then

$$
\sqrt{t^2 - 4t} - (-t) = \sqrt{t^2 - 4t} + t,
$$

which goes to $+\infty$. The two ends are different: the limit at $+\infty$ is $2$, and the limit at $-\infty$ is $+\infty$.

The sign error to avoid is replacing $\sqrt{x^2 + 4x}$ by $x$ when $x$ is negative. For $x < 0$, $\sqrt{x^2} = -x$, which is positive.

### Answer 4

Divide $2x^2 + 3x - 1$ by $x + 1$.

$2x^2 + 3x - 1 = (x + 1)(2x + 1) - 2$, because $(x + 1)(2x + 1) = 2x^2 + x + 2x + 1 = 2x^2 + 3x + 1$, and then subtracting $2$ produces $2x^2 + 3x - 1$. So

$$
y = 2x + 1 - \frac{2}{x + 1}.
$$

The oblique asymptote is $y = 2x + 1$. The vertical asymptote is $x = -1$.

The graph meets the oblique asymptote where $-2/(x + 1) = 0$, which never happens. It does not cross that line.

### Answer 5

On $(0, \pi/2)$, sine is positive and cosine approaches $0$ through positive values, so $\tan x \to +\infty$.

On $(\pi/2, \pi)$, sine is positive and cosine approaches $0$ through negative values, so $\tan x \to -\infty$.

The line $x = \pi/2$ is a vertical asymptote because at least one side is infinite. There is no single symbol for a two-sided limit, because one side is $+\infty$ and the other is $-\infty$.

### Answer 6

For $x > 0$, $f(x) = x/(x + 1) \to 1$. For $x < 0$ and $x \neq -1$, $f(x) = -x/(x + 1)$. Divide numerator and denominator by $x$, remembering $x$ is negative but the algebra of leading terms still gives

$$
\frac{-x}{x + 1} = \frac{-1}{1 + 1/x} \to \frac{-1}{1} = -1
$$

as $x \to -\infty$.

So $y = 1$ is a horizontal asymptote at $+\infty$, and $y = -1$ is a horizontal asymptote at $-\infty$.

At $x = -1$ the denominator is zero and the numerator is $1$, so $x = -1$ is a vertical asymptote. From the right, for $-1 < x < 0$, $\lvert x \rvert = -x$ and $x + 1 > 0$, so $f(x) < 0$ and the denominator is a small positive number: the limit is $-\infty$. From the left, $x + 1$ is a small negative number and the numerator $\lvert x \rvert$ is positive, so the limit is $+\infty$.

### Answer 7

$\ln x$ grows slower than $x^{1/3}$. The cube root grows slower than $x$, which grows slower than $x^2$. The exponential $e^{x/2}$ grows faster than $x^2$.

The order is $\ln x$, then $x^{1/3}$, then $x$, then $x^2$, then $e^{x/2}$.

### Answer 8

$(x^2 + 1)/x = x + 1/x$ tends to infinity, not to a finite limit. It has no horizontal asymptote. A rational function has a horizontal asymptote when the degree of the numerator is less than or equal to the degree of the denominator. If the degrees are equal, the asymptote is $y = a_n/b_m$. If the denominator has higher degree, the asymptote is $y = 0$.

For $f(x) = e^x/(1 + e^x)$, divide numerator and denominator by $e^x$: $f(x) = 1/(e^{-x} + 1)$. As $x \to \infty$, $e^{-x} \to 0$, so $f(x) \to 1$. As $x \to -\infty$, $e^x \to 0$, so $f(x) \to 0/(1 + 0) = 0$. The horizontal asymptotes are $y = 1$ and $y = 0$.

### Answer 9

As $x \to 0^+$, $\ln x \to -\infty$. As $x \to \infty$, $\ln x \to \infty$.

$\ln x$ grows slower than $x^1$, so $(\ln x)/x \to 0$ as $x \to \infty$.

### Answer 10

1. The limit is $20$. As production increases, the average cost per item approaches the running cost $20$ dollars. The fixed $500$ is spread over more items and stops affecting the average.

2. As $x \to 0^+$, $A(x) \to +\infty$. In the model, $x = 0$ is a vertical asymptote. Producing a quantity approaching zero still carries the fixed $500$, so the average per item becomes arbitrarily large. The model is only defined for $x > 0$, which matches a one-sided vertical asymptote.

3. $A(x) = 20 + 500 x^{-1}$ is not a ratio of polynomials whose degrees differ by $1$ in the sense that produces a slanted line. The end behavior is a horizontal line, not a slanted one. There is no oblique asymptote. The graph approaches $y = 20$, which is horizontal.
