# PH101 Week 06 — Newton’s Laws and Their Applications

Source: `Week_06.pdf`. The title slide inside the file says Week_05. The filename is Week_06, and the weekly plan is Newton’s laws and applying them. These notes follow the file.

Week 05 stated the three laws. This week uses them: forces, free-body diagrams, equilibrium, friction, and circular motion with a force. Work is defined on the last slides and then used fully in Week 07.

Take $g = 9.80\,\mathrm{m/s^2}$. A newton is $\mathrm{kg\cdot m/s^2}$.

---

## 1. A legal set of direction angles

Week 04 required

$$
\cos^2\alpha + \cos^2\beta + \cos^2\gamma = 1
$$

for the angles between one vector and the three positive axes. This file opens with a table of sets that pass or fail that test. The set $45^\circ, 30^\circ, 60^\circ$ fails:

$$
\cos^2 45^\circ + \cos^2 30^\circ + \cos^2 60^\circ = 0.500 + 0.750 + 0.250 = 1.50 \neq 1
$$

The set $45^\circ, 60^\circ, 60^\circ$ passes: $0.500 + 0.250 + 0.250 = 1$. A picture of three angles is not a real direction until this sum is 1. The same check is the magnitude of the unit vector $\hat{A}$.

---

## 2. The three laws again, with the traps

**First law.** $\sum\vec{F} = 0$ means the velocity does not change. Rest is the special case of zero velocity. Inertia is the tendency to keep the current velocity. The hockey puck on frictionless ice does not need a forward force to keep moving. It needs a force to stop.

**Second law.**

$$
\sum\vec{F} = m\vec{a}
$$

Write it in components. The mass is not the weight.

**Third law.** $\vec{F}_{12} = -\vec{F}_{21}$. The two forces are on two different objects. The normal force on a book and the book’s weight are not a third-law pair. The pair of the book’s weight (Earth pulling the book) is the book pulling the Earth. The pair of the normal force (table pushing the book) is the book pushing the table. They can be equal in size when $a_y = 0$, but that equality comes from the second law, not from the third.

### Where the laws are the wrong tool

The lecture table is the same as in Week 05: special relativity near the speed of light, quantum mechanics at atomic sizes, general relativity in strong gravity, and fictitious forces in accelerating frames. PH101 problems are outside those cases.

### Mass and weight

Mass is in kilograms. Weight is the gravitational force

$$
\vec{w} = m\vec{g}
$$

and is in newtons. A $10\,\mathrm{kg}$ box weighs $98\,\mathrm{N}$. In an accelerating elevator the scale reading is not $mg$. The weight $mg$ is still $mg$. The scale reads the normal force.

---

## 3. Forces you are expected to draw

A force is a push or a pull, an interaction between two objects or between an object and its surroundings.

### Contact forces

| Force | Direction | Example in the slides |
| --- | --- | --- |
| Normal, $\vec{n}$ | Perpendicular to the surface, away from the surface | Book on a table |
| Friction, $\vec{f}$ | Parallel to the surface, opposing sliding or the tendency to slide | Brakes, a sliding book |
| Tension, $\vec{T}$ | Along the rope, away from the object (a rope pulls) | Elevator cable |
| Applied force | Whatever direction you push or pull | A worker pushing a box |
| Air resistance, drag | Opposite the velocity | A parachute |
| Spring force | Opposite the displacement from equilibrium, $F = -kx$ | A car spring |
| Buoyant force | Upward, from a fluid | A floating boat |

### Non-contact forces

Gravity, the magnetic force, the electric force, and the nuclear forces. The slide heading under “non-contact” repeats the contact-force sentence about objects touching. That sentence belongs only to the contact list. Non-contact forces act without the objects touching. Weight is the non-contact force in almost every free-body diagram this week.

### Superposition

Forces add as vectors. Several forces on one point have the same effect as one force equal to their sum:

$$
R_x = \sum F_x, \qquad R_y = \sum F_y, \qquad R = \sqrt{R_x^2+R_y^2}
$$

On an incline, the useful axes are parallel to the surface and perpendicular to it. The weight is the vector you split. A $10\,\mathrm{N}$ pull at $30^\circ$ above the horizontal and a $10\,\mathrm{N}$ push at $45^\circ$ below the horizontal are different vectors even though both have magnitude $10\,\mathrm{N}$.

---

## 4. Free-body diagrams

The lecture definition: isolate the body, remove the supports, and draw the external forces and the reactions those supports exerted.

Rules that keep the diagram honest:

- Draw one body, not the whole machine.
- Draw only forces on that body.
- Do not draw its acceleration as a force. If you need $ma$, it belongs on the other side of $\sum F = ma$, or you write $\sum F_x - \cdots = ma$ with the forces on the left.
- Do not draw both members of a third-law pair on the same body.
- Pick axes and stick to them. On a ramp, $x$ along the ramp saves algebra.
- If two known objects touch, draw two diagrams. The force between them is $+F$ on one diagram and $-F$ on the other.

Equilibrium is $\sum F_x = 0$ and $\sum F_y = 0$. Motion with acceleration is $\sum F_x = ma_x$ and $\sum F_y = ma_y$.

---

## 5. Worked applications

### Box on a waxed floor

A $20\,\mathrm{N}$ horizontal force pushes a $40\,\mathrm{kg}$ box. Friction is negligible. Vertical forces cancel: $n = mg$, and $a_y = 0$. Horizontally the $20\,\mathrm{N}$ force is the net force.

$$
a_x = \frac{20}{40} = 0.50\,\mathrm{m/s^2}
$$

in the direction of the push.

### Ketchup bottle

Mass $0.45\,\mathrm{kg}$, $v_0 = 2\,\mathrm{m/s}$ to the right, it stops in $1\,\mathrm{m}$. Kinematics first, because the acceleration is not given:

$$
0 = 2^2 + 2a(1) \implies a = -2\,\mathrm{m/s^2}
$$

The negative sign is to the left, opposite the velocity. Friction is the only horizontal force:

$$
f = m\lvert a\rvert = (0.45)(2) = 0.90\,\mathrm{N}
$$

to the left. The slide’s line $f = -(0.45)(-2)$ is the magnitude after the signs have been tracked. The direction is opposite the motion.

### Two boxes in contact

$m_A = 20.0\,\mathrm{kg}$, $m_B = 5.0\,\mathrm{kg}$, frictionless, $250\,\mathrm{N}$ pushes on A toward B. Treat A+B as one system to get the acceleration, because the contact forces are internal to that system:

$$
a = \frac{250}{25.0} = 10\,\mathrm{m/s^2}
$$

Then isolate B. The only horizontal force on B is the contact force from A:

$$
F_{A\text{ on }B} = m_B a = (5.0)(10) = 50\,\mathrm{N}
$$

By the third law, B pushes back on A with $50\,\mathrm{N}$. Check A alone: $250 - 50 = 20 \times 10$. Consistent.

### Block A riding on block B

You pull B and A moves with it. On a frictionless table, A has weight down and a normal force up, and no horizontal force, so A cannot accelerate with B. The lecture diagram for the friction case adds a friction force on A. That friction is what accelerates A. If the pull on B equals the friction on B from the table, the net force on B can be zero even while friction still acts on A. Draw A separately and ask which horizontal arrow is actually on A.

### Elevator accelerating upward

Your weight is $625\,\mathrm{N}$. The elevator’s acceleration is $2.50\,\mathrm{m/s^2}$ upward. The scale reads the normal force, not the weight.

$$
n - mg = ma, \qquad n = mg + ma = 625 + \left(\frac{625}{9.80}\right)(2.50) = 784\,\mathrm{N}
$$

You feel heavier because $n > mg$. A $3.85\,\mathrm{kg}$ package on a string in the same elevator has the same pattern:

$$
T = m(g+a) = 3.85(9.80+2.50) = 47.4\,\mathrm{N}
$$

If the acceleration were downward, the signs would give $n = m(g-a)$, and the scale would read less than the weight.

### Pull at an angle to a ramp

The ramp is at $20.0^\circ$. The pull $\vec{F}$ is at $30.0^\circ$ above the ramp. You want the component parallel to the ramp to be $90.0\,\mathrm{N}$.

$$
F\cos 30.0^\circ = 90.0, \qquad F = \frac{90.0}{\cos 30.0^\circ} = 104\,\mathrm{N}
$$

$$
F_y = F\sin 30.0^\circ = 51.9\,\mathrm{N}
$$

perpendicular to the ramp. This part of the problem is only components. It does not yet ask for the acceleration of the trunk.

### Hanging gymnast at rest

$m = 50.0\,\mathrm{kg}$. Weight $W = 490\,\mathrm{N}$. She is not accelerating, so the rope pulls up with $T = 490\,\mathrm{N}$. A light rope has one tension throughout, so the ceiling also feels $490\,\mathrm{N}$ from the rope. If she were accelerating, $T - mg = ma$ and the tension would not equal the weight.

### Engine on three chains, and a car held on a ramp

For the hanging engine the ring is in equilibrium, so each component of the tension sum is zero. The vertical chain that holds the engine has tension equal to the engine’s weight, because the engine itself is at rest. The other two tensions are whatever the geometry needs so that their horizontal components cancel and their vertical components support the weight. The slide does not print the angles, so the exam version of this problem will. The method is $\sum F_x = 0$ and $\sum F_y = 0$ at the ring.

For a car of weight $w$ at rest on a ramp at angle $\alpha$, with a cable up the ramp:

$$
T - w\sin\alpha = 0, \qquad n - w\cos\alpha = 0
$$

$$
T = w\sin\alpha, \qquad n = w\cos\alpha
$$

The parallel piece of the weight is $w\sin\alpha$. The perpendicular piece is $w\cos\alpha$. Those are the two results to memorize from a free-body diagram, not from a formula card.

### Iceboat

Mass $200\,\mathrm{kg}$, frictionless, starts from rest, reaches $6.0\,\mathrm{m/s}$ in $4.0\,\mathrm{s}$.

$$
a_x = \frac{6.0-0}{4.0} = 1.5\,\mathrm{m/s^2}, \qquad F_W = ma_x = 300\,\mathrm{N}
$$

Vertically $n = W$. The wind is the only horizontal force.

### Elevator moving downward and slowing

Mass $800\,\mathrm{kg}$, $v_0 = 10.0\,\mathrm{m/s}$ downward, stops in $25.0\,\mathrm{m}$. Slowing while moving downward means the acceleration is upward.

With upward positive, $v_{0y} = -10.0\,\mathrm{m/s}$, $v_y = 0$, and $\Delta y = -25.0\,\mathrm{m}$:

$$
0 = (-10.0)^2 + 2a_y(-25.0) \implies a_y = +2.00\,\mathrm{m/s^2}
$$

$$
T - mg = ma_y, \qquad T = 800(9.80+2.00) = 9440\,\mathrm{N}
$$

A $50.0\,\mathrm{kg}$ person on a scale in that elevator:

$$
n = 50.0(9.80+2.00) = 590\,\mathrm{N}
$$

One later slide writes $a_y = -2.0\,\mathrm{m/s^2}$. That sign is the downward-positive convention, and only if the rest of the equation uses the same convention. The tension $9440\,\mathrm{N}$ on the earlier slide is larger than the weight $7840\,\mathrm{N}$, which is the upward-acceleration case. The person is pressed into the scale harder while the elevator brakes. The reading is $590\,\mathrm{N}$, not $50(9.80-2.00)$.

---

## 6. Friction

Kinetic friction, when surfaces are sliding:

$$
f_k = \mu_k n
$$

Static friction, at the instant motion is about to start, has a maximum

$$
f_{s,\max} = \mu_s n
$$

While the object is still at rest, static friction is only as large as it needs to be, up to that maximum. It is not automatically $\mu_s n$. The crate problem below is the maximum, because the crate is on the point of moving. Usually $\mu_s > \mu_k$.

Friction is proportional to the normal force, not automatically to the weight. If you pull upward on a rope, $n < mg$ and the friction drops.

**Crate, horizontal pull.** Weight $500\,\mathrm{N}$. It takes $230\,\mathrm{N}$ to start it and $200\,\mathrm{N}$ to keep it moving at constant velocity. Constant velocity means $\sum F = 0$, so the pull equals the friction. Also $n = 500\,\mathrm{N}$.

$$
\mu_s = \frac{230}{500} = 0.460, \qquad \mu_k = \frac{200}{500} = 0.400
$$

**Same crate, pull at $30^\circ$ above the horizontal, $\mu_k = 0.40$, constant velocity.**

$$
n + T\sin 30^\circ - 500 = 0, \qquad T\cos 30^\circ - \mu_k n = 0
$$

$$
T\cos 30^\circ = 0.40\left(500 - T\sin 30^\circ\right)
$$

$$
T = \frac{200}{\cos 30^\circ + 0.40\sin 30^\circ} = 188\,\mathrm{N}
$$

Less than the $200\,\mathrm{N}$ horizontal pull, because the rope is partly holding the crate up.

**Toboggan at constant velocity on snow.** The slide swaps $W_x$ and $W_y$ between two frames. The consistent resolution, with $x$ down the slope, is

$$
n = w\cos\alpha, \qquad w\sin\alpha - f_k = 0, \qquad f_k = \mu_k n
$$

$$
w\sin\alpha = \mu_k w\cos\alpha, \qquad \tan\alpha = \mu_k
$$

The weight cancels. The angle does not depend on how many students are on the toboggan. A steeper hill would speed them up. A shallower hill would stop them, until static friction’s maximum was involved.

---

## 7. Circular motion with Newton’s second law

Centripetal acceleration still points to the center:

$$
a_\mathrm{rad} = \frac{v^2}{R} = \frac{4\pi^2 R}{T^2}
$$

Something has to cause it. The radial component of the net force is

$$
\sum F_\mathrm{rad} = m\frac{v^2}{R} = m\frac{4\pi^2 R}{T^2}
$$

$T$ is the time for one revolution, not the number of revolutions.

**Toy on ice.** Mass $25.0\,\mathrm{kg}$, rope length $5.00\,\mathrm{m}$, five revolutions every minute. The ice is frictionless, so the rope is the radial force.

$$
T = \frac{60\,\mathrm{s}}{5} = 12\,\mathrm{s}
$$

$$
F = m\frac{4\pi^2 R}{T^2} = 25.0 \cdot \frac{4\pi^2(5.00)}{12^2} = 34.3\,\mathrm{N}
$$

The slide places $5/60$ in the period slot. $5/60\,\mathrm{Hz}$ is the frequency. The period is $12\,\mathrm{s}$. Using frequency is fine if the formula is $a = 4\pi^2 R f^2$, with $f$ multiplied, not placed where $T$ belongs.

---

## 8. Work, just the definition

Week 07 builds the energy theorems. This file only defines the work of a constant force:

$$
W = \vec{F}\cdot\vec{d} = Fd\cos\theta
$$

| Angle between $\vec{F}$ and $\vec{d}$ | Work |
| --- | --- |
| $0^\circ$ | $+Fd$, the force helps the motion |
| $90^\circ$ | $0$. Normal force and weight do no work on a horizontal slide |
| $180^\circ$ | $-Fd$, the force opposes the motion, as kinetic friction does |

---

## Sample quiz

$g = 9.80\,\mathrm{m/s^2}$.

### Question 1

Which of these direction-angle sets can belong to one real vector? Show the test. Do not guess from “they look like angles.”

(a) $60^\circ, 60^\circ, 45^\circ$

(b) $45^\circ, 45^\circ, 45^\circ$

(c) $30^\circ, 60^\circ, 90^\circ$

For every set that works, say so. For one valid set of your choice, a vector has magnitude $20.0$. Write that vector in $\hat{i},\hat{j},\hat{k}$ components. Take the angles in the order $x$, $y$, $z$.

### Question 2

Three blocks are in a line on a frictionless table. $m_1 = 2.00\,\mathrm{kg}$, $m_2 = 3.00\,\mathrm{kg}$, $m_3 = 5.00\,\mathrm{kg}$. A horizontal force of $40.0\,\mathrm{N}$ pushes on block 1 toward block 2. They stay in contact.

(a) Find the acceleration.

(b) Find the force of block 1 on block 2, and the force of block 2 on block 3.

(c) A student adds the $40.0\,\mathrm{N}$ push and the contact forces and concludes that the net force on the three-block system is larger than $40.0\,\mathrm{N}$. What did the student put on the wrong diagram?

### Question 3

An elevator is moving upward at $8.00\,\mathrm{m/s}$ and stops in $10.0\,\mathrm{m}$. A $60.0\,\mathrm{kg}$ person stands on a scale.

(a) Find the acceleration, including its direction. The elevator is moving up and slowing down. Do not assume the sign from the word “up.”

(b) What does the scale read while it stops?

(c) After it has stopped, what does the scale read? Compare that number with the weight, and say which Newton’s-law fact you used.

### Question 4

A $12.0\,\mathrm{kg}$ box is at rest on a ramp at angle $\alpha$. The coefficient of static friction is $0.30$, and the coefficient of kinetic friction is $0.20$.

(a) What is the largest $\alpha$ at which the box can remain at rest?

(b) The ramp is then set to $25.0^\circ$, and the box is given a small push down the ramp. Find the acceleration down the ramp.

(c) Why is $\mu_s$ the wrong coefficient in part (b)?

### Question 5

A $0.80\,\mathrm{kg}$ stone on a smooth table moves in a horizontal circle of radius $0.50\,\mathrm{m}$. The string breaks if the tension exceeds $16\,\mathrm{N}$.

(a) What is the greatest speed the stone can have?

(b) What is the period at that speed?

(c) The stone is in the circle at that maximum speed, and you shorten the radius to $0.25\,\mathrm{m}$ without changing the speed. Does the string break? Show the comparison of tensions. Gravity is perpendicular to the motion. Say what job it does and what job it does not do.

---

## Answer key

### Question 1

(a) $\cos^2 60^\circ + \cos^2 60^\circ + \cos^2 45^\circ = 0.25 + 0.25 + 0.50 = 1.00$. This set works.

(b) $3\cos^2 45^\circ = 3(0.50) = 1.50 \neq 1$. This set is impossible. Three equal angles of $45^\circ$ cannot be the angles a single vector makes with the three axes.

(c) $\cos^2 30^\circ + \cos^2 60^\circ + \cos^2 90^\circ = 0.75 + 0.25 + 0 = 1.00$. This set works.

Using set (a):

$$
\vec{A} = 20\cos 60^\circ\,\hat{i} + 20\cos 60^\circ\,\hat{j} + 20\cos 45^\circ\,\hat{k} = 10.0\,\hat{i} + 10.0\,\hat{j} + 14.1\,\hat{k}
$$

Set (c) would be $17.3\,\hat{i} + 10.0\,\hat{j} + 0\,\hat{k}$. Either valid set is a full answer if the components match the angles you chose.

### Question 2

(a) $a = 40.0 / 10.0 = 4.00\,\mathrm{m/s^2}$.

(b) Blocks 2 and 3 together have mass $8.00\,\mathrm{kg}$, so block 1 pushes block 2 with

$$
F_{12} = (8.00)(4.00) = 32.0\,\mathrm{N}
$$

Block 3 alone:

$$
F_{23} = (5.00)(4.00) = 20.0\,\mathrm{N}
$$

(c) Contact forces are internal to the three-block system. They cancel by the third law when the system is one object. The only external horizontal force is the $40.0\,\mathrm{N}$ push. The student drew internal forces as if they were extra external forces.

### Question 3

(a) Upward positive: $v_0 = +8.00\,\mathrm{m/s}$, $v = 0$, $\Delta y = +10.0\,\mathrm{m}$.

$$
0 = 8.00^2 + 2a(10.0) \implies a = -3.20\,\mathrm{m/s^2}
$$

The acceleration is $3.20\,\mathrm{m/s^2}$ downward.

(b)

$$
n - mg = ma, \qquad n = 60.0\left(9.80 - 3.20\right) = 396\,\mathrm{N}
$$

(c) At rest, $a = 0$, so $n = mg = 588\,\mathrm{N}$. That equality is Newton’s second law with zero acceleration. It is not a third-law cancellation between weight and normal force.

### Question 4

(a) At the limiting angle, $mg\sin\alpha = \mu_s mg\cos\alpha$, so

$$
\tan\alpha = 0.30, \qquad \alpha = 16.7^\circ
$$

(b) The box is sliding, so

$$
mg\sin 25.0^\circ - \mu_k mg\cos 25.0^\circ = ma
$$

$$
a = 9.80\left(\sin 25.0^\circ - 0.20\cos 25.0^\circ\right) = 2.37\,\mathrm{m/s^2}
$$

down the ramp.

(c) $\mu_s$ is for the maximum friction before sliding starts. After the push, the surfaces are moving, so the force is $f_k = \mu_k n$.

### Question 5

(a) The tension is the radial force:

$$
16 = \frac{(0.80)\, v^2}{0.50}, \qquad v = 3.16\,\mathrm{m/s}
$$

(b)

$$
T_\mathrm{period} = \frac{2\pi R}{v} = \frac{2\pi(0.50)}{3.16} = 0.99\,\mathrm{s}
$$

(c) At the same speed and half the radius,

$$
T_\mathrm{string} = \frac{(0.80)(3.16)^2}{0.25} = 32\,\mathrm{N}
$$

which is past $16\,\mathrm{N}$. The string breaks. Weight and the normal force from the table are vertical. They cancel and do no radial job. The string alone provides $\sum F_\mathrm{rad}$.
