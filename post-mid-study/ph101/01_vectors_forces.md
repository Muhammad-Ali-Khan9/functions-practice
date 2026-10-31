# Vector Operations and Force Vectors

A vector has magnitude and direction. A force is a vector, so two forces of $10\,\mathrm{N}$ can add to anything from $0$ to $20\,\mathrm{N}$ depending on the angle between them. PH101 uses this both for motion and for the force-table and statics problems: resolve every force into components, add the components, then rebuild the resultant.

Use degrees for the angles in this file. Later, circular motion and rotation require radians. $g = 9.80\,\mathrm{m/s^2}$ when a hanging mass is turned into a force.

## Components

In the plane,

$$
\vec{A} = A_x\,\hat{i} + A_y\,\hat{j}
$$

If $\theta$ is measured counterclockwise from the positive $x$-axis,

$$
A_x = A\cos\theta, \qquad A_y = A\sin\theta
$$

The magnitude and the direction recovered from components are

$$
A = \sqrt{A_x^2 + A_y^2}, \qquad \tan\phi = \frac{A_y}{A_x}
$$

The calculator’s inverse tangent does not know the quadrant. A positive $A_y$ and a negative $A_x$ is quadrant II, so add $180^\circ$ to a negative calculator angle. A negative $A_y$ and a negative $A_x$ is quadrant III.

If the given angle is measured from the $+y$-axis, or from a ramp, convert it to an angle from $+x$ before using those two formulas. Swapping sine and cosine is the usual way to get a force that points the wrong way.

A unit vector in the direction of $\vec{A}$ is $\hat{A} = \vec{A}/A$. It has length $1$ and no units. Multiplying it by a magnitude builds a vector of that length:

$$
\vec{F} = F\,\hat{u}
$$

## Adding forces

Add component by component.

$$
R_x = \sum F_x, \qquad R_y = \sum F_y, \qquad R = \sqrt{R_x^2 + R_y^2}
$$

The resultant $\vec{R}$ is one force that replaces the whole set. The equilibrant is the single extra force that balances them:

$$
\vec{E} = -\vec{R}
$$

Same magnitude, opposite direction. On a force table the hanging masses supply the forces, and the ring sits still only when the vector sum is zero.

For two forces the magnitude also follows from the law of cosines. If $\phi$ is the angle between them,

$$
R = \sqrt{F_1^2 + F_2^2 + 2 F_1 F_2 \cos\phi}
$$

The extreme values are $F_1 + F_2$ when the forces are parallel, and $\lvert F_1 - F_2 \rvert$ when they are opposite. No arrangement gives a larger or a smaller resultant.

## Dot product

$$
\vec{A}\cdot\vec{B} = A_x B_x + A_y B_y + A_z B_z = AB\cos\phi
$$

$\phi$ is the angle between the directions, from $0^\circ$ to $180^\circ$. The dot product is a scalar. It is positive when the angle is acute, zero when the vectors are perpendicular, and negative when the angle is obtuse.

The projection of $\vec{F}$ onto a direction $\hat{u}$ is $(\vec{F}\cdot\hat{u})\,\hat{u}$. That is how much of the force acts along a rope, a ramp, or a displacement. The piece perpendicular to $\hat{u}$ does no work along that line.

## Cross product

$$
\vec{A}\times\vec{B}
$$

is a vector perpendicular to both, with magnitude $AB\sin\phi$. The direction is the right-hand rule: fingers from $\vec{A}$ toward $\vec{B}$, thumb along the product. In components,

$$
\begin{aligned}
(\vec{A}\times\vec{B})_x &= A_y B_z - A_z B_y \\
(\vec{A}\times\vec{B})_y &= A_z B_x - A_x B_z \\
(\vec{A}\times\vec{B})_z &= A_x B_y - A_y B_x
\end{aligned}
$$

The order matters: $\vec{B}\times\vec{A} = -(\vec{A}\times\vec{B})$. A reversed order reverses the torque later. The magnitude is also the area of the parallelogram spanned by the two vectors.

## A force directed along a line

In statics, a cable from point $A$ to point $B$ pulls along the line $AB$. The position vector from $A$ to $B$ is

$$
\vec{r}_{AB} = (x_B - x_A)\,\hat{i} + (y_B - y_A)\,\hat{j} + (z_B - z_A)\,\hat{k}
$$

The unit vector along the cable is $\hat{u}_{AB} = \vec{r}_{AB}/r_{AB}$. A tension of magnitude $F$ acting from $A$ toward $B$ is

$$
\vec{F} = F\,\hat{u}_{AB}
$$

If the cable pulls on the object at $B$ toward $A$, the force on that object is $-F\,\hat{u}_{AB}$. The magnitude is still $F$. Only the sign of the direction changes. Coordinates must be in a consistent order. Subtracting the points backwards reverses the force.

## Mistakes that change the answer

- Using $\sin$ for the $x$-component when $\theta$ is from $+x$.
- Trusting a calculator angle in the wrong quadrant.
- Reporting the resultant when the question asks for the equilibrant.
- Treating the dot product as a vector, or the cross product as a scalar.
- Building $\hat{u}_{AB}$ from $B$ to $A$ when the force acts from $A$ toward $B$.
- Adding magnitudes of forces that are not along the same line.

---

## Questions

### Question 1

$\vec{A} = 3.00\,\hat{i} - 4.00\,\hat{j}$ and $\vec{B} = -2.00\,\hat{i} - 2.00\,\hat{j}$, with components in meters.

1. Find the magnitude and direction of $\vec{A}$, measured from $+x$.
2. Find $\vec{A} + \vec{B}$ and $\vec{A} - \vec{B}$, each as a magnitude and a quadrant.
3. Find the unit vector in the direction of $\vec{A}$.

### Question 2

Three concurrent forces lie in the $xy$-plane:

$$
\vec{F}_1 = (20.0\,\mathrm{N})\,\hat{i}, \quad
\vec{F}_2 = (10.0\,\mathrm{N})\text{ at } 90.0^\circ, \quad
\vec{F}_3 = (30.0\,\mathrm{N})\text{ at } 225^\circ
$$

Angles are from $+x$. Find the resultant magnitude and direction, then the equilibrant magnitude and direction.

### Question 3

Two concurrent forces have magnitudes $8.00\,\mathrm{N}$ and $15.0\,\mathrm{N}$.

1. What are the maximum and minimum possible magnitudes of their resultant?
2. What is the resultant magnitude if the angle between them is $60.0^\circ$?
3. Why is $8.00 + 15.0\cos 60^\circ$, without a $y$-component, not the magnitude?

### Question 4

A cable runs from $A(0, 0, 0)\,\mathrm{m}$ to $B(3.00, 4.00, 12.0)\,\mathrm{m}$ and carries a tension of $130\,\mathrm{N}$. The force on the connector at $A$ is directed from $A$ toward $B$. Write that force in components. Then write the force exerted on the connector at $B$ by the same cable.

### Question 5

$\vec{P} = 2.00\,\hat{i} + 3.00\,\hat{j} + 1.00\,\hat{k}$ and $\vec{Q} = 1.00\,\hat{i} - 1.00\,\hat{j} + 2.00\,\hat{k}$.

1. Compute $\vec{P}\cdot\vec{Q}$ and the angle between them.
2. Compute $\vec{P}\times\vec{Q}$ and its magnitude.
3. Check that the cross product is perpendicular to $\vec{P}$.

### Question 6

A force $\vec{F} = (6.00\,\hat{i} + 2.00\,\hat{j})\,\mathrm{N}$ acts through a displacement $\vec{d} = (3.00\,\hat{i} - 1.00\,\hat{j})\,\mathrm{m}$.

1. Find the work $W = \vec{F}\cdot\vec{d}$.
2. Find the component of $\vec{F}$ parallel to $\vec{d}$, as a vector.
3. Explain why the $2.00\,\mathrm{N}$ piece is not irrelevant even though part of the answer looks smaller than $6.00\,\mathrm{N}$.

### Question 7

A $50.0\,\mathrm{N}$ force acts at $120^\circ$ from $+x$. Resolve it. Then find the sum of this force and a $50.0\,\mathrm{N}$ force at $30.0^\circ$. Why is the sum not $100\,\mathrm{N}$ at $75.0^\circ$?

### Question 8

The direction angles of a force with the $+x$, $+y$, and $+z$ axes are $\alpha$, $\beta$, and $\gamma$.

1. Show what $\cos^2\alpha + \cos^2\beta + \cos^2\gamma$ must equal, starting from $F_x = F\cos\alpha$ and the magnitude formula.
2. Can a force have $\alpha = \beta = \gamma = 45.0^\circ$?
3. If $\alpha = 60.0^\circ$ and $\beta = 60.0^\circ$, find the two possible values of $\gamma$.

### Question 9

On a force table, three forces are in equilibrium: $0.400\,\mathrm{N}$ at $0^\circ$, $0.300\,\mathrm{N}$ at $90.0^\circ$, and $\vec{F}_3$. Find $\vec{F}_3$ as a magnitude and a direction from $+x$. A student reports the resultant of the first two forces instead. How can you tell that answer cannot be $\vec{F}_3$?

### Question 10

$\vec{A}$ has magnitude $5.00$ at $53.1^\circ$ above $+x$, which you may take as components $3.00$ and $4.00$. $\vec{B}$ has magnitude $5.00$ at $53.1^\circ$ below $+x$.

1. Find $\vec{A}\cdot\vec{B}$ and the angle between $\vec{A}$ and $\vec{B}$.
2. Find $\lvert \vec{A}\times\vec{B} \rvert$ and state its direction if both vectors are in the $xy$-plane.
3. A classmate says the cross product is zero because the magnitudes are equal. Answer that claim.

---

## Answers

### Answer 1

1. $A = \sqrt{3.00^2 + (-4.00)^2} = 5.00\,\mathrm{m}$. The vector is in quadrant IV. $\tan\phi = 4.00/3.00$, so the angle below $+x$ is $53.1^\circ$. From $+x$, counterclockwise, the direction is $-53.1^\circ$, or $306.9^\circ$.

2. $\vec{A} + \vec{B} = 1.00\,\hat{i} - 6.00\,\hat{j}$. Magnitude $\sqrt{1 + 36} = \sqrt{37} = 6.08\,\mathrm{m}$, quadrant IV.

$\vec{A} - \vec{B} = 5.00\,\hat{i} - 2.00\,\hat{j}$. Magnitude $\sqrt{25 + 4} = \sqrt{29} = 5.39\,\mathrm{m}$, also quadrant IV. Subtraction is addition of the opposite of $\vec{B}$, not subtraction of the magnitudes $5.00 - \sqrt{8}$.

3. $\hat{A} = (3.00\,\hat{i} - 4.00\,\hat{j})/5.00 = 0.600\,\hat{i} - 0.800\,\hat{j}$. Its magnitude is $1$.

### Answer 2

$\vec{F}_2 = 10.0\,\hat{j}\,\mathrm{N}$.

$\vec{F}_3$ at $225^\circ$ is in quadrant III, where both cosine and sine are $-\sqrt{2}/2$:

$$
F_{3x} = F_{3y} = 30.0\left(-\frac{\sqrt{2}}{2}\right) = -21.2\,\mathrm{N}
$$

$$
R_x = 20.0 - 21.2 = -1.2\,\mathrm{N}, \qquad R_y = 10.0 - 21.2 = -11.2\,\mathrm{N}
$$

$$
R = \sqrt{(-1.2)^2 + (-11.2)^2} = \sqrt{126.88} = 11.3\,\mathrm{N}
$$

Both components are negative, so quadrant III. The acute angle from the $-x$-axis satisfies $\tan\phi = 11.2/1.2 = 9.333$, so $\phi = 83.9^\circ$ below the $-x$-axis. From $+x$ that is $180^\circ + 83.9^\circ = 264^\circ$, or $-96.1^\circ$.

The equilibrant has magnitude $11.3\,\mathrm{N}$ and direction $264^\circ - 180^\circ = 83.9^\circ$.

### Answer 3

1. Maximum $23.0\,\mathrm{N}$, when the forces are in the same direction. Minimum $7.00\,\mathrm{N}$, when they are opposite. The minimum is the difference of the magnitudes, not zero, because $15.0 \neq 8.00$.

2. The angle between them is $60.0^\circ$, so $\cos 60.0^\circ = 1/2$.

$$
R = \sqrt{8.00^2 + 15.0^2 + 2(8.00)(15.0)(0.500)} = \sqrt{64.0 + 225 + 120} = \sqrt{409} = 20.2\,\mathrm{N}
$$

3. $8.00 + 15.0\cos 60^\circ = 15.5\,\mathrm{N}$ is only an $x$-component if one force lies on $x$ and you have not included $15.0\sin 60^\circ = 13.0\,\mathrm{N}$ in $y$. The magnitude is $\sqrt{15.5^2 + 13.0^2} = \sqrt{409} = 20.2\,\mathrm{N}$, the same result. Dropping the perpendicular piece understates the resultant.

### Answer 4

$$
\vec{r}_{AB} = 3.00\,\hat{i} + 4.00\,\hat{j} + 12.0\,\hat{k}\,\mathrm{m}
$$

$$
r_{AB} = \sqrt{9.00 + 16.0 + 144} = \sqrt{169} = 13.0\,\mathrm{m}
$$

$$
\hat{u}_{AB} = \frac{3.00}{13.0}\,\hat{i} + \frac{4.00}{13.0}\,\hat{j} + \frac{12.0}{13.0}\,\hat{k}
$$

The force on $A$, toward $B$, is $130\,\hat{u}_{AB}$:

$$
\vec{F}_A = (30.0\,\hat{i} + 40.0\,\hat{j} + 120\,\hat{k})\,\mathrm{N}
$$

The cable pulls the connector at $B$ back toward $A$, so

$$
\vec{F}_B = (-30.0\,\hat{i} - 40.0\,\hat{j} - 120\,\hat{k})\,\mathrm{N}
$$

The two forces are an action-reaction pair along the cable. They are not added on the same free-body diagram.

### Answer 5

1. $\vec{P}\cdot\vec{Q} = 2.00 - 3.00 + 2.00 = 1.00$.

$\lvert\vec{P}\rvert = \sqrt{14.0}$ and $\lvert\vec{Q}\rvert = \sqrt{6.00}$, so

$$
\cos\phi = \frac{1.00}{\sqrt{84.0}} = \frac{1.00}{9.17} = 0.109, \qquad \phi = 83.7^\circ
$$

2. 

$$
\begin{aligned}
(\vec{P}\times\vec{Q})_x &= (3.00)(2.00) - (1.00)(-1.00) = 7.00 \\
(\vec{P}\times\vec{Q})_y &= (1.00)(1.00) - (2.00)(2.00) = -3.00 \\
(\vec{P}\times\vec{Q})_z &= (2.00)(-1.00) - (3.00)(1.00) = -5.00
\end{aligned}
$$

$\vec{P}\times\vec{Q} = 7.00\,\hat{i} - 3.00\,\hat{j} - 5.00\,\hat{k}$, magnitude $\sqrt{49.0 + 9.00 + 25.0} = \sqrt{83.0} = 9.11$.

3. $\vec{P}\cdot(\vec{P}\times\vec{Q}) = 2.00(7.00) + 3.00(-3.00) + 1.00(-5.00) = 14.0 - 9.00 - 5.00 = 0$. A zero dot product means the vectors are perpendicular.

### Answer 6

1. $W = 6.00(3.00) + 2.00(-1.00) = 18.0 - 2.00 = 16.0\,\mathrm{J}$.

2. $\hat{d} = \vec{d}/d$ and $d = \sqrt{10.0}$. The parallel component has signed length $W/d = 16.0/\sqrt{10.0}$ along $\hat{d}$, so

$$
\vec{F}_{\parallel} = \frac{16.0}{10.0}\,\vec{d} = 1.60\,\vec{d} = (4.80\,\hat{i} - 1.60\,\hat{j})\,\mathrm{N}
$$

3. The $2.00\,\mathrm{N}$ $y$-component is partly opposed to the displacement, so it removes $2.00\,\mathrm{J}$ from the work. Ignoring it would give $18.0\,\mathrm{J}$. The parallel vector above is not the whole force. The rejected perpendicular piece is $\vec{F} - \vec{F}_{\parallel} = (1.20\,\hat{i} + 3.60\,\hat{j})\,\mathrm{N}$, and its dot product with $\vec{d}$ is zero.

### Answer 7

At $120^\circ$, $F_x = 50.0\cos 120^\circ = -25.0\,\mathrm{N}$ and $F_y = 50.0\sin 120^\circ = 43.3\,\mathrm{N}$.

At $30.0^\circ$, the second force is $43.3\,\hat{i} + 25.0\,\hat{j}\,\mathrm{N}$.

$$
R_x = -25.0 + 43.3 = 18.3\,\mathrm{N}, \qquad R_y = 43.3 + 25.0 = 68.3\,\mathrm{N}
$$

$$
R = \sqrt{18.3^2 + 68.3^2} = \sqrt{4998} = 70.7\,\mathrm{N}
$$

The direction is $\tan^{-1}(68.3/18.3) = 75.0^\circ$. The angle of the resultant happens to be $75.0^\circ$, the average of $30.0^\circ$ and $120^\circ$, because the magnitudes are equal and the resultant of two equal forces lies along their angle bisector. The magnitude is not $100\,\mathrm{N}$. The angle between the forces is $90.0^\circ$, so $R = \sqrt{50.0^2 + 50.0^2} = 70.7\,\mathrm{N}$. Equal magnitudes do not let you add the degree measures as if they were components.

### Answer 8

1. $F_x^2 + F_y^2 + F_z^2 = F^2\cos^2\alpha + F^2\cos^2\beta + F^2\cos^2\gamma = F^2$. Divide by $F^2$:

$$
\cos^2\alpha + \cos^2\beta + \cos^2\gamma = 1
$$

2. Three angles of $45.0^\circ$ give $3\cos^2 45.0^\circ = 3(0.500) = 1.50 \neq 1$. No real force has that direction.

3. $\cos^2 60.0^\circ + \cos^2 60.0^\circ + \cos^2\gamma = 1$ gives $0.250 + 0.250 + \cos^2\gamma = 1$, so $\cos^2\gamma = 0.500$ and $\cos\gamma = \pm\sqrt{2}/2$. Thus $\gamma = 45.0^\circ$ or $\gamma = 135^\circ$. Both are legal. They are the two sides of the $xy$-plane.

### Answer 9

For equilibrium, $\vec{F}_1 + \vec{F}_2 + \vec{F}_3 = 0$, so

$$
\vec{F}_3 = -0.400\,\hat{i} - 0.300\,\hat{j}\,\mathrm{N}
$$

Magnitude $\sqrt{0.160 + 0.0900} = \sqrt{0.250} = 0.500\,\mathrm{N}$. Both components are negative: quadrant III. The angle from $+x$ is $180^\circ + \tan^{-1}(0.300/0.400) = 180^\circ + 36.9^\circ = 217^\circ$.

The resultant of the first two forces is $+0.400\,\hat{i} + 0.300\,\hat{j}\,\mathrm{N}$, magnitude $0.500\,\mathrm{N}$ at $36.9^\circ$. That vector points the opposite way. It is the quantity the third force must cancel, not the third force itself. Adding it to the first two doubles them. It does not produce zero.

### Answer 10

1. $\vec{A} = 3.00\,\hat{i} + 4.00\,\hat{j}$ and $\vec{B} = 3.00\,\hat{i} - 4.00\,\hat{j}$.

$$
\vec{A}\cdot\vec{B} = 9.00 - 16.0 = -7.00
$$

$$
\cos\phi = \frac{-7.00}{25.0} = -0.280, \qquad \phi = 106^\circ
$$

The geometric angle between the directions is $53.1^\circ + 53.1^\circ = 106^\circ$. The dot product agrees.

2. In the plane, $(\vec{A}\times\vec{B})_z = (3.00)(-4.00) - (4.00)(3.00) = -12.0 - 12.0 = -24.0$. The magnitude is $24.0$. The negative $z$-component means the right-hand rule points into the page, $-\hat{k}$. Check: $AB\sin\phi = 25.0\sin 106^\circ = 25.0\sin 74^\circ$. And $\sin 106^\circ = 0.961$, so $25.0(0.961) = 24.0$.

3. Equal magnitudes do not make a cross product zero. The magnitude is $AB\sin\phi$, and $\sin 106^\circ$ is not zero. The cross product vanishes when the vectors are parallel or antiparallel, not when they are the same length.
