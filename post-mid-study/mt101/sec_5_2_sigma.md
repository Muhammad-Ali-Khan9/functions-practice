# Section 5.2 — Sigma Notation and Limits of Finite Sums

Sigma notation writes the rectangle sums of section 5.1 in one line. The limit of those sums, as the longest subinterval shrinks to zero, is the definite integral. This section does the algebra that evaluates a few of those limits by hand, before the Fundamental Theorem shortens the work.

## Sigma notation

$$
\sum_{k = 1}^{n} a_k = a_1 + a_2 + \cdots + a_n
$$

The index is a dummy. $\sum_{k = 1}^{n} k$ and $\sum_{i = 1}^{n} i$ are the same number. Constants and sums pass outside.

$$
\sum_{k = 1}^{n} c a_k = c\sum_{k = 1}^{n} a_k, \qquad \sum_{k = 1}^{n} (a_k + b_k) = \sum_{k = 1}^{n} a_k + \sum_{k = 1}^{n} b_k
$$

A product of sums is not the sum of a product. And $\sum k^2$ is not $\bigl(\sum k\bigr)^2$.

The formulas used constantly are

$$
\sum_{k = 1}^{n} 1 = n, \qquad \sum_{k = 1}^{n} k = \frac{n(n + 1)}{2}
$$

$$
\sum_{k = 1}^{n} k^2 = \frac{n(n + 1)(2n + 1)}{6}, \qquad \sum_{k = 1}^{n} k^3 = \left(\frac{n(n + 1)}{2}\right)^2
$$

Quote them in calculations. They are proved by induction.

## Equal-width Riemann sums

On $[a, b]$ with $\Delta x = (b - a)/n$ and right endpoint $x_k = a + k\Delta x$,

$$
\sum_{k = 1}^{n} f(x_k)\,\Delta x
$$

is a right-endpoint sum. For $f(x) = x^2$ on $[0, 1]$, $\Delta x = 1/n$ and $x_k = k/n$, so

$$
\sum_{k = 1}^{n} \left(\frac{k}{n}\right)^2 \frac{1}{n} = \frac{1}{n^3}\sum_{k = 1}^{n} k^2 = \frac{(n + 1)(2n + 1)}{6n^2}
$$

The limit as $n \to \infty$ is

$$
\lim_{n \to \infty} \frac{(1 + 1/n)(2 + 1/n)}{6} = \frac{1}{3}
$$

That number is the area under $y = x^2$ from $0$ to $1$. Left endpoints give the same limit. For a continuous function the sample point does not change the limit, provided the mesh goes to zero.

## What has to go to zero

It is not enough that $n \to \infty$ if one subinterval stays wide. The norm of the partition, the longest $\Delta x_k$, must go to zero. Equal widths do this because $\Delta x = (b - a)/n \to 0$. A partition that always leaves an interval of length $1$ does not.

## Algebra before the limit

Expand, use linearity, and apply the power formulas. Then

$$
\lim_{n \to \infty} \frac{1}{n} = 0
$$

A term $n(n + 1)/n^3 = (1 + 1/n)/n$ tends to $0$. Keeping a factor $n/n^2$ as if it were $1$ is the usual algebra error.

## Mistakes that change the answer

- Replacing $\sum (k/n)^2(1/n)$ by $\bigl(\sum k/n\bigr)^2$.
- Forgetting the factor $\Delta x$, so the sum grows like $n$ and the limit is infinite.
- Using $\sum_{k = 1}^{n} 1 = n$ on a sum that starts at $k = 0$. That sum has $n + 1$ terms.
- Canceling $n$ incorrectly in $n(n + 1)(2n + 1)/(6n^3)$.

---

## Questions

### Question 1

Evaluate the sums.

1. $\displaystyle \sum_{k = 1}^{5} (2k - 1)$
2. $\displaystyle \sum_{k = 1}^{n} (3k^2 - k)$
3. $\displaystyle \sum_{k = 1}^{100} 4$

### Question 2

Write the right-endpoint Riemann sum for $f(x) = x$ on $[1, 3]$ with $n$ equal subintervals. Then evaluate the limit as $n \to \infty$.

### Question 3

Express $\displaystyle \lim_{n \to \infty} \sum_{k = 1}^{n} \frac{1}{n}\sqrt{1 + \frac{k}{n}}$ as the area of a region. Identify the function, the interval, and the sample points. Do not evaluate it with an antiderivative.

### Question 4

Compute $\displaystyle \lim_{n \to \infty} \sum_{k = 1}^{n} \left(\frac{k}{n}\right)^3 \frac{1}{n}$ with the sum formulas.

### Question 5

True or false, with a reason or a counterexample.

1. $\displaystyle \sum_{k = 1}^{n} k^2 = \left(\sum_{k = 1}^{n} k\right)^2$.
2. $\displaystyle \sum_{k = 1}^{n} (a_k + 4) = \left(\sum_{k = 1}^{n} a_k\right) + 4n$.
3. Replacing $k$ by $k + 1$ in $\sum_{k = 1}^{n} k$ does not require new limits.
4. For a continuous function on $[a, b]$, left, right, and midpoint sums all approach the same limit as $n \to \infty$ with equal subintervals.

### Question 6

Expand $(k + 1)^2$ and find $\displaystyle \sum_{k = 1}^{n} (k + 1)^2$ in closed form. Check $n = 1$ and $n = 2$.

### Question 7

A left-endpoint sum for $f(x) = x^2$ on $[0, 1]$ uses $x_k = (k - 1)/n$. Show that its limit is also $1/3$. Use $\sum_{k = 1}^{n - 1} k^2 = (n - 1)n(2n - 1)/6$.

### Question 8

Which of these are Riemann sums for a continuous function on a closed bounded interval?

1. $\displaystyle \sum_{k = 1}^{n} \frac{k}{n}\cdot\frac{1}{n}$
2. $\displaystyle \sum_{k = 1}^{n} \frac{n}{k}$
3. $\displaystyle \sum_{k = 1}^{n} \frac{1}{n}\cdot\frac{1}{1 + k/n}$

For the ones that are, name $f$ and the interval.

### Question 9

Use $\sum k = n(n + 1)/2$ to prove $\sum_{k = 1}^{n} (2k - 1) = n^2$.

### Question 10

Rewrite $\displaystyle S_n = \sum_{k = 1}^{n} \frac{n}{n^2 + k^2}$ as a Riemann sum. Identify $f$ and the interval. The limit equals $\pi/4$. You may quote $\int_0^1 \frac{1}{1 + x^2}\,dx = \tan^{-1} 1 - \tan^{-1} 0$ after the identification.

---

## Answers

### Answer 1

1. The terms are $1, 3, 5, 7, 9$. The sum is $25$.
2. 

$$
3\cdot\frac{n(n + 1)(2n + 1)}{6} - \frac{n(n + 1)}{2} = \frac{n(n + 1)(2n + 1)}{2} - \frac{n(n + 1)}{2}
$$

$$
= \frac{n(n + 1)}{2}\bigl(2n + 1 - 1\bigr) = n^2(n + 1)
$$

3. $4$ added $100$ times is $400$.

### Answer 2

$\Delta x = 2/n$ and $x_k = 1 + 2k/n$.

$$
S_n = \sum_{k = 1}^{n} \left(1 + \frac{2k}{n}\right)\frac{2}{n} = \sum_{k = 1}^{n}\left(\frac{2}{n} + \frac{4k}{n^2}\right) = 2 + \frac{4}{n^2}\cdot\frac{n(n + 1)}{2}
$$

$$
= 2 + \frac{2(n + 1)}{n} = 4 + \frac{2}{n}
$$

The limit is $4$. The region under $y = x$ from $1$ to $3$ is a trapezoid of area $\tfrac{1}{2}(1 + 3)\cdot 2 = 4$.

### Answer 3

$\Delta x = 1/n$ and $x_k = k/n$, the right endpoint of the $k$th subinterval of $[0, 1]$. The height is $\sqrt{1 + x_k}$. The limit is the area under $y = \sqrt{1 + x}$ from $0$ to $1$.

### Answer 4

$$
\frac{1}{n^4}\sum_{k = 1}^{n} k^3 = \frac{1}{n^4}\left(\frac{n(n + 1)}{2}\right)^2 = \frac{(1 + 1/n)^2}{4}
$$

The limit is $1/4$, the area under $y = x^3$ on $[0, 1]$.

### Answer 5

1. False. For $n = 2$, $\sum k^2 = 5$ and $\bigl(\sum k\bigr)^2 = 9$.
2. True. The constant $4$ is added once per term, hence $4n$ times.
3. False. $\sum_{k = 1}^{n} (k + 1) = 2 + 3 + \cdots + (n + 1)$, which starts at $2$ and ends at $n + 1$.
4. True. Equal subintervals have mesh $(b - a)/n \to 0$, and a continuous function on a closed interval is integrable. Every such choice of sample points approaches the definite integral.

### Answer 6

$$
\sum_{k = 1}^{n} (k^2 + 2k + 1) = \frac{n(n + 1)(2n + 1)}{6} + n(n + 1) + n
$$

At $n = 1$ the sum is $4$, and the formula gives $1\cdot 2\cdot 3/6 + 2 + 1 = 4$. At $n = 2$ the sum is $4 + 9 = 13$, and the formula gives $2\cdot 3\cdot 5/6 + 6 + 2 = 13$.

### Answer 7

$$
L_n = \sum_{k = 1}^{n} \left(\frac{k - 1}{n}\right)^2\frac{1}{n} = \frac{1}{n^3}\sum_{j = 1}^{n - 1} j^2 = \frac{(n - 1)n(2n - 1)}{6n^3} = \frac{(1 - 1/n)(2 - 1/n)}{6}
$$

The limit is $2/6 = 1/3$.

### Answer 8

1. Yes. It is the right-endpoint sum for $f(x) = x$ on $[0, 1]$. The limit is $1/2$.
2. No. The general term $n/k$ is not a bounded height times a width that shrinks like $1/n$. The sum grows like $n\ln n$.
3. Yes. It is the right-endpoint sum for $f(x) = 1/(1 + x)$ on $[0, 1]$.

### Answer 9

$$
\sum_{k = 1}^{n} (2k - 1) = 2\cdot\frac{n(n + 1)}{2} - n = n(n + 1) - n = n^2
$$

### Answer 10

$$
S_n = \sum_{k = 1}^{n} \frac{n}{n^2(1 + (k/n)^2)} = \sum_{k = 1}^{n} \frac{1}{n}\cdot\frac{1}{1 + (k/n)^2}
$$

This is the right-endpoint sum for $f(x) = 1/(1 + x^2)$ on $[0, 1]$. The limit is $\tan^{-1} 1 - \tan^{-1} 0 = \pi/4$.
