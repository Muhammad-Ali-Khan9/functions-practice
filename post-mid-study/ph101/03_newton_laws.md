# Newton’s Laws and Their Applications

A kinematics problem takes the acceleration as given. Newton’s second law produces that acceleration from the forces. The method is always the same: isolate one object, draw the forces on that object only, pick axes, write $\sum F_x = ma_x$ and $\sum F_y = ma_y$, then solve.

Use $g = 9.80\,\mathrm{m/s^2}$ as a positive number. Weight has magnitude $mg$ and points toward the Earth. It is not a substitute for the normal force.

## The three laws

First law. If the net force on an object is zero, its velocity is constant. That includes staying at rest. Constant velocity is not a force, and it does not require a forward force to “keep the motion going” once friction is absent. If the velocity is constant, the forces already balance.

Second law.

$$
\sum \vec{F} = m\vec{a}
$$

Mass is in kilograms, force in newtons, acceleration in $\mathrm{m/s^2}$. The acceleration is in the direction of the net force, not in the direction of the largest single force, and not necessarily in the direction of the velocity. The equation is a vector equation. Write it in components. Do not put $ma$ on the free-body diagram. It is the result of the forces, not an extra force.

Third law. If object A exerts a force on object B, then B exerts a force on A of equal magnitude and opposite direction. The two forces are on different objects. They do not cancel on one free-body diagram. A book’s weight and the normal force from a table are not a third-law pair. The weight is the Earth pulling the book. Its partner is the book pulling the Earth. The normal pair is the table pushing the book and the book pushing the table.

## The forces you draw

Weight, $mg$ downward, acts at the object even when the object is on a surface or in an elevator.

The normal force is perpendicular to the surface and is as large as the contact requires. On a horizontal surface with no vertical acceleration, $N = mg$. In an elevator accelerating upward at $a$, $N - mg = ma$, so $N = m(g + a)$. On an incline, $N = mg\cos\theta$ only when the acceleration perpendicular to the ramp is zero. A second vertical force, a push, or a vertical acceleration changes $N$.

Tension pulls along a rope, away from the object. An ideal string has one tension throughout when it is light and the pulley is frictionless. A massive pulley or a pulley with friction can make the two string tensions different. That case belongs with rotation when the pulley has rotational inertia.

Static friction opposes the slipping that is about to happen. Its size is whatever value, up to a maximum, keeps the contact from sliding:

$$
f_s \le \mu_s N
$$

Equality holds only at the verge of slipping. Kinetic friction acts when the surfaces are sliding. It opposes the relative motion and has magnitude

$$
f_k = \mu_k N
$$

$\mu_k$ is usually smaller than $\mu_s$. Friction is not always $\mu N$, and it is not always opposite the velocity of the object relative to the ground. It opposes the relative velocity, or the impending relative velocity, at the contact.

## Inclines and connected objects

Axes along the ramp and perpendicular to the ramp match the acceleration. For an object on a frictionless incline at angle $\theta$,

$$
mg\sin\theta = ma, \qquad a = g\sin\theta
$$

down the ramp, and $N = mg\cos\theta$. With kinetic friction opposing motion down the ramp,

$$
a = g\sin\theta - \mu_k g\cos\theta
$$

If $\mu_s$ is large enough that $\mu_s N \ge mg\sin\theta$, a block placed at rest stays at rest. Compare the downhill component with the maximum static friction before you assume the block moves.

For two objects tied together, write a second-law equation for each object. The tension is the same magnitude on both ends of a light string, but it points away from each object. Internal forces that you have drawn on two different diagrams are not added twice in one equation. Adding the two equations cancels the tension and gives the acceleration of the system.

The Atwood machine, two hanging masses and a light frictionless pulley, has

$$
a = \frac{(m_2 - m_1)g}{m_1 + m_2}, \qquad T = \frac{2 m_1 m_2 g}{m_1 + m_2}
$$

with $m_2 > m_1$ and $a$ the magnitude of each acceleration. The heavier mass goes down.

## Circular motion

An object moving in a circle of radius $r$ at speed $v$ has a radial acceleration $v^2/r$ toward the center. Newton’s second law in the radial direction is

$$
\sum F_{\mathrm{toward\ center}} = \frac{mv^2}{r}
$$

There is no separate outward force. If you work in the ground frame, do not draw a centrifugal force. The net inward force is tension, a component of gravity, friction, or the horizontal part of a normal force, depending on the problem. A car on a flat curve needs static friction inward: $f_s = mv^2/r$, and the maximum speed satisfies $\mu_s mg = mv^2/r$.

## A reliable order of work

1. Draw each object apart from the others.
2. Draw only the forces on that object. Label weight, normal, tension, and friction.
3. Choose axes. Put one axis along the acceleration if you know its direction.
4. Write $\sum F = ma$ in each direction. A direction with $a = 0$ still gets an equation. It determines $N$ or $T$.
5. Solve, then check that a required static friction does not exceed $\mu_s N$, and that a normal force did not come out negative.

## Mistakes that change the answer

- Putting $ma$ or “centrifugal force” on the free-body diagram in an inertial frame.
- Cancelling a third-law pair that acts on two different objects.
- Using $N = mg$ on an incline, in an elevator, or when another vertical force is present.
- Using $f = \mu_s N$ when the block is at rest and not on the verge of slipping.
- Pointing friction down the ramp when the block is being dragged up the ramp.
- Using the Atwood formula when the pulley has significant rotational inertia or the string is not light.

---

## Questions

### Question 1

A $60.0\,\mathrm{kg}$ person stands on a scale in an elevator. Take upward as positive. Find the scale reading, in newtons, when the elevator

1. moves upward at a constant $3.00\,\mathrm{m/s}$,
2. accelerates upward at $2.00\,\mathrm{m/s^2}$,
3. accelerates downward at $2.00\,\mathrm{m/s^2}$,
4. falls freely.

Explain why constant velocity does not appear in the second-law equation.

### Question 2

A $5.00\,\mathrm{kg}$ block is on a $30.0^\circ$ incline. $\mu_s = 0.40$ and $\mu_k = 0.25$.

1. Does the block slide if it is placed at rest?
2. If it is given a small downhill push so that it is moving, find the acceleration.
3. What minimum $\mu_s$ would hold it at rest?

### Question 3

A $4.00\,\mathrm{kg}$ block on a horizontal table is tied to a hanging $2.00\,\mathrm{kg}$ block. The table block has $\mu_k = 0.200$, and the string and pulley are light and frictionless. The hanging block moves down.

1. Find the acceleration and the tension.
2. Repeat the static check: if the blocks are at rest and $\mu_s = 0.250$, do they stay at rest?
3. Why is the tension not equal to the weight of the hanging block?

### Question 4

Masses $m_1 = 3.00\,\mathrm{kg}$ and $m_2 = 5.00\,\mathrm{kg}$ hang from a light frictionless pulley.

1. Find the magnitude of the acceleration and the tension.
2. Find the force the pulley axle must exert upward on the pulley, from the ceiling side. The pulley is light, so use the two string tensions and the fact that the axle force balances them while the pulley’s mass is negligible. Think carefully: each string segment pulls down on the pulley.
3. A student uses $a = (m_2 - m_1)g/(m_2 + m_1)$ but then writes $T = m_2 g$. What does that combination imply about $a$, and why is it inconsistent?

### Question 5

A $0.400\,\mathrm{kg}$ stone on a $0.800\,\mathrm{m}$ string moves in a horizontal circle on a smooth table. The speed is $3.00\,\mathrm{m/s}$.

1. Find the tension.
2. The string will break at $8.00\,\mathrm{N}$. What is the maximum speed?
3. Why is the weight of the stone not added to the tension in the radial equation?

### Question 6

A $1200\,\mathrm{kg}$ car takes a flat curve of radius $50.0\,\mathrm{m}$. The static friction coefficient is $0.600$.

1. Find the maximum speed without sliding.
2. At that speed, what is the direction of static friction?
3. If the curve is banked at an angle $\theta$ and the road is frictionless, show that $v^2 = rg\tan\theta$, and find $\theta$ for the same speed and radius. You do not need a numerical speed from part 1 if you keep the symbols until the end. Then use the speed you found.

### Question 7

Two blocks are in contact on a horizontal frictionless surface. A horizontal force of $24.0\,\mathrm{N}$ pushes the $2.00\,\mathrm{kg}$ block, which pushes a $4.00\,\mathrm{kg}$ block ahead of it.

1. Find the acceleration of the pair.
2. Find the contact force between the blocks.
3. If the $24.0\,\mathrm{N}$ force is applied to the $4.00\,\mathrm{kg}$ block instead, with the $2.00\,\mathrm{kg}$ block in front, find the new contact force. Why did it change?

### Question 8

Identify the third-law partner of each force, and say which object it acts on.

1. Earth’s gravitational pull on a falling apple.
2. The normal force of a table on a resting book.
3. The tension of a string on a hanging mass.
4. Static friction of the road on a car’s tire, pointing forward as the car accelerates.

Then explain why none of these partners is drawn on the apple’s, the book’s, the mass’s, or the car’s own free-body diagram as a cancelling force.

### Question 9

A $10.0\,\mathrm{kg}$ box is pushed up a $20.0^\circ$ incline by a force of $80.0\,\mathrm{N}$ parallel to the incline. $\mu_k = 0.200$. Use $\sin 20.0^\circ = 0.342$ and $\cos 20.0^\circ = 0.940$.

1. Find $N$ and the kinetic friction.
2. Find the acceleration. State whether the box speeds up uphill.
3. How would $N$ and $a$ change if the $80.0\,\mathrm{N}$ force were horizontal instead of parallel to the incline? Set up the two equations. You do not have to finish the arithmetic if the setup is complete, but do finish it.

### Question 10

A conical pendulum has a $1.00\,\mathrm{kg}$ bob on a $2.00\,\mathrm{m}$ string. The string makes a constant $30.0^\circ$ angle with the vertical as the bob moves in a horizontal circle.

1. Find the tension, the radius of the circle, and the speed.
2. Find the period.
3. Why is this not solved by setting $T = mv^2/r$ with no gravity component?

---

## Answers

### Answer 1

The scale reads the normal force.

1. Constant velocity means $a = 0$, so $N - mg = 0$ and $N = 60.0(9.80) = 588\,\mathrm{N}$. The $3.00\,\mathrm{m/s}$ never enters. Any constant velocity, including zero, has the same reading.

2. $N - mg = ma$ gives $N = m(g + a) = 60.0(9.80 + 2.00) = 708\,\mathrm{N}$.

3. Accelerating downward means $a = -2.00\,\mathrm{m/s^2}$ if upward is positive. $N - mg = m(-2.00)$, so $N = m(g - 2.00) = 60.0(7.80) = 468\,\mathrm{N}$.

4. Free fall has $a = -g$, so $N = 0$. The scale reads zero. The person is still acted on by gravity.

### Answer 2

1. Take axes along the incline. $N = mg\cos 30.0^\circ = 5.00(9.80)(\sqrt{3}/2) = 42.4\,\mathrm{N}$. The downhill component is $mg\sin 30.0^\circ = 5.00(9.80)(0.500) = 24.5\,\mathrm{N}$. Maximum static friction is $\mu_s N = 0.400(42.4) = 17.0\,\mathrm{N}$. Since $24.5 > 17.0$, static friction cannot hold the block. It slides.

2. Once it is sliding, $f_k = \mu_k N = 0.250(42.4) = 10.6\,\mathrm{N}$ up the ramp.

$$
a = \frac{24.5 - 10.6}{5.00} = \frac{13.9}{5.00} = 2.78\,\mathrm{m/s^2}
$$

down the incline.

3. At rest on the verge, $\mu_s mg\cos\theta = mg\sin\theta$, so $\mu_s = \tan 30.0^\circ = 0.577$. Any smaller static coefficient lets it slide from rest.

### Answer 3

1. For the table block, $T - f_k = m_1 a$. For the hanging block, $m_2 g - T = m_2 a$. Here $N = m_1 g = 39.2\,\mathrm{N}$ and $f_k = 0.200(39.2) = 7.84\,\mathrm{N}$. Adding the two equations,

$$
m_2 g - f_k = (m_1 + m_2)a
$$

$$
19.6 - 7.84 = 6.00 a, \qquad a = 1.96\,\mathrm{m/s^2}
$$

Then $T = m_2(g - a) = 2.00(9.80 - 1.96) = 15.7\,\mathrm{N}$. Check on the table block: $T - f_k = 15.7 - 7.84 = 7.84\,\mathrm{N}$ and $m_1 a = 4.00(1.96) = 7.84\,\mathrm{N}$.

2. Maximum static friction is $0.250(39.2) = 9.80\,\mathrm{N}$. The hanging weight is $19.6\,\mathrm{N}$, which is larger than $9.80\,\mathrm{N}$, so the blocks do not stay at rest. The required friction to keep $a = 0$ would be $19.6\,\mathrm{N}$, above the maximum.

3. If $T$ equalled $m_2 g$, the hanging block would have zero net force and zero acceleration. It is accelerating downward, so the tension is smaller than the weight by $m_2 a$.

### Answer 4

1. 

$$
a = \frac{(5.00 - 3.00)9.80}{8.00} = \frac{19.6}{8.00} = 2.45\,\mathrm{m/s^2}
$$

$$
T = \frac{2(3.00)(5.00)(9.80)}{8.00} = 36.8\,\mathrm{N}
$$

Check the heavy side: $m_2 g - T = 49.0 - 36.8 = 12.2\,\mathrm{N}$ and $m_2 a = 5.00(2.45) = 12.3\,\mathrm{N}$, the same value within rounding. More cleanly, $T = m_2 g - m_2 a = 5.00(9.80 - 2.45) = 36.75\,\mathrm{N}$.

2. Each of the two string segments pulls down on the pulley with $36.8\,\mathrm{N}$. The pulley is light and not accelerating vertically, so the axle pulls up with $2T = 73.5\,\mathrm{N}$.

3. $T = m_2 g$ forces the net force on $m_2$ to be zero, so $a = 0$. But $(m_2 - m_1)g/(m_1 + m_2)$ is not zero. The two statements cannot be used together. The correct tension is less than $m_2 g$ and greater than $m_1 g$.

### Answer 5

1. The radial acceleration is supplied entirely by tension. $T = mv^2/r = 0.400(9.00)/0.800 = 4.50\,\mathrm{N}$.

2. $8.00 = 0.400 v^2 / 0.800$, so $v^2 = 16.0$ and $v = 4.00\,\mathrm{m/s}$.

3. The circle is horizontal. Weight and the normal force from the table are vertical. They cancel each other and have no radial component. Adding $mg$ to $T$ mixes a vertical force into a horizontal equation.

### Answer 6

1. $N = mg$ and $\mu_s N = mv^2/r$ at the limit.

$$
v = \sqrt{\mu_s r g} = \sqrt{0.600(50.0)(9.80)} = \sqrt{294} = 17.1\,\mathrm{m/s}
$$

2. Static friction points horizontally toward the center of the curve. It is not backward along the car unless the brakes are also working. Here it is the inward force.

3. On a frictionless bank, the normal force tilts. Perpendicular to the road there is no acceleration if we use a tilted reading carefully. In horizontal and vertical components, with $N$ normal to the road,

$$
N\sin\theta = \frac{mv^2}{r}, \qquad N\cos\theta = mg
$$

Divide: $\tan\theta = v^2/(rg)$. For $v^2 = 294$ and $rg = 50.0(9.80) = 490$, $\tan\theta = 294/490 = 0.600$, so $\theta = 31.0^\circ$. The mass cancels. The bank supplies the inward component that friction supplied on the flat road.

### Answer 7

1. The pair has mass $6.00\,\mathrm{kg}$ and one external horizontal force, $24.0\,\mathrm{N}$. The contact forces are internal to the pair. $a = 24.0/6.00 = 4.00\,\mathrm{m/s^2}$.

2. The $4.00\,\mathrm{kg}$ block is accelerated only by the contact force $C$. So $C = 4.00(4.00) = 16.0\,\mathrm{N}$. Check the rear block: $24.0 - C = 2.00(4.00)$ gives $C = 16.0\,\mathrm{N}$.

3. Now the front block has mass $2.00\,\mathrm{kg}$ and is pushed by the contact force alone. $C = 2.00(4.00) = 8.00\,\mathrm{N}$. The acceleration of the pair is still $4.00\,\mathrm{m/s^2}$ because the external force and the total mass did not change. The contact force only has to accelerate whichever block is in front. A lighter front block needs a smaller contact force.

### Answer 8

1. The partner is the apple’s gravitational pull on the Earth, acting on the Earth, upward in the sense of the opposite force.
2. The partner is the book pushing down on the table, acting on the table.
3. The partner is the mass pulling down on the string, acting on the string.
4. The partner is the tire pushing backward on the road, acting on the road. That backward push on the road is why the car can move forward.

Each partner acts on the other body. Drawing it on the original object would count a force the object does not feel. The forces that do act on the original object, such as weight and normal on the book, can cancel each other, but they are two different interactions, not one third-law pair.

### Answer 9

1. The push is parallel to the incline, so it has no component perpendicular to the surface. $N = mg\cos 20.0^\circ = 10.0(9.80)(0.940) = 92.1\,\mathrm{N}$. Then $f_k = 0.200(92.1) = 18.4\,\mathrm{N}$, directed down the incline because the box is sliding up.

2. Take uphill as positive.

$$
80.0 - mg\sin 20.0^\circ - f_k = ma
$$

$$
80.0 - 10.0(9.80)(0.342) - 18.4 = 10.0 a
$$

$$
80.0 - 33.5 - 18.4 = 28.1 = 10.0 a
$$

$a = 2.81\,\mathrm{m/s^2}$ up the incline. The box speeds up in the uphill direction.

3. A horizontal $80.0\,\mathrm{N}$ force has components $80.0\cos 20.0^\circ = 75.2\,\mathrm{N}$ up the incline and $80.0\sin 20.0^\circ = 27.4\,\mathrm{N}$ into the incline. The normal force increases:

$$
N = mg\cos 20.0^\circ + 27.4 = 92.1 + 27.4 = 119.5\,\mathrm{N}
$$

$$
f_k = 0.200(119.5) = 23.9\,\mathrm{N}
$$

$$
75.2 - 33.5 - 23.9 = 17.8 = 10.0 a, \qquad a = 1.78\,\mathrm{m/s^2}
$$

up the incline. Part of the push is wasted pushing the box into the ramp, which also increases friction. The acceleration is smaller than in part 2.

### Answer 10

1. Vertical equilibrium: $T\cos 30.0^\circ = mg$, so

$$
T = \frac{1.00(9.80)}{\sqrt{3}/2} = \frac{9.80}{0.866} = 11.3\,\mathrm{N}
$$

The radius is $r = L\sin 30.0^\circ = 2.00(0.500) = 1.00\,\mathrm{m}$. Radially,

$$
T\sin 30.0^\circ = \frac{mv^2}{r}, \qquad 11.3(0.500) = \frac{v^2}{1.00}
$$

$v^2 = 5.66$ and $v = 2.38\,\mathrm{m/s}$. From $\tan\theta = v^2/(rg)$ the same result is $v^2 = rg\tan 30.0^\circ = 9.80/\sqrt{3} = 5.66$.

2. $T_{\mathrm{period}} = 2\pi r/v = 2\pi(1.00)/2.38 = 2.64\,\mathrm{s}$.

3. The tension is not horizontal. Only $T\sin\theta$ points toward the center of the horizontal circle. The vertical part $T\cos\theta$ balances the weight. Setting the full tension equal to $mv^2/r$ would ignore that split and would give a speed and a tension that cannot satisfy the vertical equation at the same time.
