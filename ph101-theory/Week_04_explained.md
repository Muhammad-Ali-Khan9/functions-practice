# PH101 Week 04 — Vectors and Motion in a Straight Line

Source: `Week_04.pdf` (slides titled Week_04, Fall 2026).

The weekly plan lists vector operations, numerical examples, and motion in two or three dimensions. Most of this file is vectors, then one-dimensional kinematics. Two- and three-dimensional motion is only introduced at the end and is developed in Week 05.

Use $g = 9.80\,\mathrm{m/s^2}$ and treat $g$ as a positive number. The acceleration in free fall is $-g$ only after you choose upward as positive.

---

## 1. Components of a vector

A vector has magnitude and direction. In components,

$$
\vec{B} = B_x\,\hat{i} + B_y\,\hat{j} + B_z\,\hat{k}
$$

If you are given the magnitude $B$ and the angle $\theta$ measured from the positive $x$-axis (counterclockwise positive),

$$
B_x = B\cos\theta, \qquad B_y = B\sin\theta
$$

$\theta$ can be negative. A negative angle is clockwise from $+x$.

**Lecture example.** $D = 3.00\,\mathrm{m}$ at $\alpha = -45^\circ$.

$$
D_x = 3.00\cos(-45^\circ) = +2.12\,\mathrm{m}, \qquad D_y = 3.00\sin(-45^\circ) = -2.12\,\mathrm{m}
$$

The slide rounds both to $2.1\,\mathrm{m}$. The vector points down and to the right.

### When the given angle is not from $+x$

**Lecture example.** $E = 4.50\,\mathrm{m}$ and $\beta = 37.0^\circ$ is measured from the positive $y$-axis. You cannot plug $\beta$ into $\cos$ and $\sin$ as if it were from $+x$.

$$
\theta = 90.0^\circ - 37.0^\circ = 53.0^\circ
$$

$$
E_x = 4.50\cos 53.0^\circ = 2.71\,\mathrm{m}, \qquad E_y = 4.50\sin 53.0^\circ = 3.59\,\mathrm{m}
$$

The axes do not have to be horizontal and vertical. They only have to be perpendicular. Always state which axis your angle is measured from before you use $\cos$ or $\sin$.

### Three dimensions and direction cosines

If $\alpha$, $\beta$, and $\gamma$ are the angles between the vector and the $+x$, $+y$, and $+z$ axes,

$$
B_x = B\cos\alpha, \quad B_y = B\cos\beta, \quad B_z = B\cos\gamma
$$

These three angles are not free. A real direction must satisfy

$$
\cos^2\alpha + \cos^2\beta + \cos^2\gamma = 1
$$

**Lecture example.** $B = 20$ at $60^\circ$, $45^\circ$, and $60^\circ$.

$$
\vec{B} = 20\cos 60^\circ\,\hat{i} + 20\cos 45^\circ\,\hat{j} + 20\cos 60^\circ\,\hat{k} = 10\,\hat{i} + 14.14\,\hat{j} + 10\,\hat{k}
$$

Check: $0.5 + 0.5 + 0.25 = 1.25$? No: $\cos^2 60^\circ = 0.25$, $\cos^2 45^\circ = 0.50$, $\cos^2 60^\circ = 0.25$, and $0.25+0.50+0.25 = 1$. This set is allowed. The components also rebuild the magnitude: $\sqrt{10^2+14.14^2+10^2} = 20$.

---

## 2. Adding vectors in components

Resolve every vector, add the $x$ pieces, add the $y$ pieces, then rebuild the resultant.

$$
R_x = \sum F_x, \qquad R_y = \sum F_y
$$

$$
R = \sqrt{R_x^2 + R_y^2}, \qquad \tan\phi = \lvert\frac{R_y}{R_x}\rvert
$$

The calculator’s $\tan^{-1}$ does not know the quadrant. Look at the signs of $R_x$ and $R_y$.

Compass language:

| Phrase | $x$ (east positive) | $y$ (north positive) |
| --- | --- | --- |
| $\theta$ east of north | $+A\sin\theta$ | $+A\cos\theta$ |
| $\theta$ south of west | $-A\cos\theta$ | $-A\sin\theta$ |
| due south | $0$ | $-A$ |

**Lecture example (buried keys).** Three displacements:

- $\vec{A}$: $72.4\,\mathrm{m}$, $32.0^\circ$ east of north
- $\vec{B}$: $57.3\,\mathrm{m}$, $36.0^\circ$ south of west
- $\vec{C}$: $17.8\,\mathrm{m}$ due south

$$
\begin{aligned}
A_x &= 72.4\sin 32.0^\circ = 38.37\,\mathrm{m}, & A_y &= 72.4\cos 32.0^\circ = 61.40\,\mathrm{m}\\
B_x &= -57.3\cos 36.0^\circ = -46.36\,\mathrm{m}, & B_y &= -57.3\sin 36.0^\circ = -33.68\,\mathrm{m}\\
C_x &= 0, & C_y &= -17.8\,\mathrm{m}
\end{aligned}
$$

$$
R_x = -7.99\,\mathrm{m}, \qquad R_y = +9.92\,\mathrm{m}
$$

$$
R = 12.7\,\mathrm{m}
$$

$R_x$ is west and $R_y$ is north, so the direction is west of north:

$$
\tan^{-1}\left(\frac{7.99}{9.92}\right) = 38.9^\circ \text{ west of north}
$$

That is $129^\circ$ from the positive $x$-axis (east), counterclockwise. The slide’s “$39^\circ$ west of north” is this result. The slide writes $17$ in one line; the problem statement uses $17.8\,\mathrm{m}$.

**Lecture force example.** The resultant must lie along $+x$ and have magnitude $1250\,\mathrm{N}$. One known force is $800\,\mathrm{N}$ at $30^\circ$. The unknown force $\vec{F}_A$ is at an angle $\theta$ from the vertical, so its components on the slide are

$$
R_x = F_A\sin\theta + 800\cos 30^\circ = 1250
$$

$$
R_y = F_A\cos\theta - 800\sin 30^\circ = 0
$$

From the $y$ equation, $F_A\cos\theta = 400$. From the $x$ equation,

$$
F_A\sin\theta = 1250 - 800\cos 30^\circ = 557.2
$$

$$
\theta = \tan^{-1}\left(\frac{557.2}{400}\right) = 54.3^\circ, \qquad F_A = \sqrt{400^2 + 557.2^2} = 686\,\mathrm{N}
$$

The slide also prints $F_A = 585.91\,\mathrm{N}$. That value does not satisfy the two equations above. Use the equations.

---

## 3. Scalar product (dot product)

$$
\vec{A}\cdot\vec{B} = \lvert \vec{A}\rvert\,\lvert \vec{B}\rvert\cos\theta = A_x B_x + A_y B_y + A_z B_z
$$

$\theta$ is the angle between the two vectors, not an angle from the $x$-axis. Work is the scalar product of force and displacement. A positive dot product means the angle between them is acute. Zero means perpendicular. Negative means obtuse.

**Lecture example.** Magnitudes $4$ and $5$, angle between them $77^\circ$.

$$
\vec{A}\cdot\vec{B} = (4)(5)\cos 77^\circ = 4.50
$$

The same answer from components, with the angles shown on the figure measured from $+x$:

$$
\begin{aligned}
A_x &= 4\cos 53^\circ = 2.407, & A_y &= 4\sin 53^\circ = 3.195\\
B_x &= 5\cos 130^\circ = -3.214, & B_y &= 5\sin 130^\circ = 3.830
\end{aligned}
$$

$$
A_x B_x + A_y B_y = (2.407)(-3.214) + (3.195)(3.830) = 4.50
$$

The cross product is only named this week: torque is $\vec{r}\times\vec{F}$. The dot product is the operation you are expected to compute.

---

## 4. Kinematics and dynamics

Mechanics splits into two jobs.

- **Kinematics** describes motion. You do not ask what force caused it.
- **Dynamics** explains motion using forces. That starts seriously in Week 06.

This week is kinematics along a straight line.

### Distance and displacement

Displacement is the change in position. It is a vector and it has a sign.

$$
\Delta x = x_2 - x_1
$$

Distance traveled is the path length. It is a scalar and it is never negative.

If a particle goes from $x = 5\,\mathrm{m}$ to $x = 10\,\mathrm{m}$, both the distance and the displacement have size $5\,\mathrm{m}$, and $\Delta x = +5\,\mathrm{m}$. If it then returns from $10\,\mathrm{m}$ to $5\,\mathrm{m}$, the return displacement is $-5\,\mathrm{m}$, but the distance of that leg is still $5\,\mathrm{m}$. A round trip can have $\Delta x = 0$ and a large distance.

### Average velocity and average speed

$$
v_\mathrm{avg} = \frac{\Delta x}{\Delta t} = \frac{x_2 - x_1}{t_2 - t_1}
$$

$$
\text{average speed} = \frac{\text{distance traveled}}{\Delta t}
$$

Average velocity can be zero on a round trip. Average speed cannot, unless the object never moved. Velocity is a vector. Speed is its magnitude and is never negative.

**Lecture numbers.** From $x_1 = 5\,\mathrm{m}$ at $t_1 = 2\,\mathrm{s}$ to $x_2 = 10\,\mathrm{m}$ at $t_2 = 4\,\mathrm{s}$,

$$
v_\mathrm{avg} = \frac{10-5}{4-2} = 2.5\,\mathrm{m/s}
$$

The slide writes the fraction as $5/2$. The value is $2.5\,\mathrm{m/s}$, not $52$.

### Instantaneous velocity

$$
v = \lim_{\Delta t \to 0}\frac{\Delta x}{\Delta t} = \frac{dx}{dt}
$$

On an $x$-$t$ graph this is the slope of the tangent.

| Graph feature | Velocity |
| --- | --- |
| Slope upward to the right ($\tan\theta > 0$) | Positive |
| Horizontal tangent ($\tan 0^\circ = 0$) | Zero |
| Slope downward to the right ($\tan\theta < 0$) | Negative |
| Vertical tangent | Not a physical $x(t)$; the object cannot be in two places at one time |

Reading the coordinate, not the slope, is the usual mistake.

| What $x$ is doing | Sign of $v_x$ |
| --- | --- |
| Positive and becoming more positive | Positive, moving in $+x$ |
| Positive and becoming less positive | Negative, moving in $-x$ |
| Negative and becoming less negative (toward zero) | Positive, moving in $+x$ |
| Negative and becoming more negative | Negative, moving in $-x$ |

### Acceleration

$$
a_\mathrm{avg} = \frac{v_2 - v_1}{t_2 - t_1}, \qquad a = \frac{dv}{dt}
$$

On a $v$-$t$ graph, acceleration is the slope. On an $x$-$t$ graph, acceleration is the curvature: the slope of the slope.

The slide writes the limit as $\Delta t \to \infty$. That is the opposite of the definition. Instantaneous means $\Delta t \to 0$.

Speeding up is not the same thing as positive acceleration. Compare the sign of velocity with the sign of acceleration. Positive means to the right.

| $v_x$ | $a_x$ | What happens |
| --- | --- | --- |
| $+$ (moving right) | $+$ | Speeds up |
| $+$ | $-$ | Slows down |
| $-$ (moving left) | $-$ | Speeds up |
| $-$ | $+$ | Slows down |

Same signs: speeding up. Opposite signs: slowing down.

---

## 5. Constant acceleration

Assumptions used for the four equations: motion on a straight line, constant acceleration, and a known initial state. The lecture writes them first with $u$ as the initial speed and $s$ as displacement, then in the $x$ form you should use on problems.

$$
\begin{aligned}
v &= v_0 + at \\
x &= x_0 + v_0 t + \tfrac12 a t^2 \\
v^2 &= v_0^2 + 2a(x - x_0) \\
x - x_0 &= \tfrac12 (v + v_0)\, t
\end{aligned}
$$

How the lecture builds them:

1. Definition $a = (v-u)/t$ rearranges to $v = u + at$.
2. For constant $a$, $v_\mathrm{avg} = (u+v)/2$, so $s = v_\mathrm{avg}\, t$. Replace $v$ with $u+at$ and you get $s = ut + \tfrac12 at^2$.
3. Eliminate $t$ between the first two and you get $v^2 = u^2 + 2as$.

Use the third equation when time is not given and not asked for. Use the fourth when acceleration is unknown but both velocities and the time are known.

On a $v$-$t$ graph with constant $a$, the slope is constant, so the graph is a straight line. The area under that line is the displacement, because $\Delta x = \int v\,dt$.

### Free fall

“Falls freely” means the only acceleration is gravity, and air resistance is ignored. With upward positive,

$$
a_y = -g = -9.80\,\mathrm{m/s^2}
$$

The same four equations apply with $y$ in place of $x$.

The other legal choice is downward positive, so $a_y = +g$. An object thrown upward then has a negative initial velocity. Both choices give the same physical answers if every sign follows the choice you announced.

**Lecture example (coin from rest).** $y_0 = 0$, $v_{0y} = 0$, upward positive.

$$
y = -\tfrac12 g t^2 = -4.90\, t^2, \qquad v_y = -gt = -9.80\, t
$$

| $t$ (s) | $y$ (m) | $v_y$ (m/s) |
| --- | --- | --- |
| 1.0 | $-4.90$ | $-9.80$ |
| 2.0 | $-19.6$ | $-19.6$ |
| 3.0 | $-44.1$ | $-29.4$ |

The slide’s $-20$, $-40$, and $-29$ are rounded. The negative position means the coin is below the release point. The negative velocity means it is moving downward.

---

## 6. Worked lecture problems

### Position given as a function of time (turtle)

$$
x = 50\,\mathrm{cm} + (2\,\mathrm{cm/s})\, t - (0.0625\,\mathrm{cm/s^2})\, t^2
$$

Differentiate once and twice:

$$
v_x = 2 - 0.125\, t \quad (\mathrm{cm/s}), \qquad a_x = -0.125\,\mathrm{cm/s^2}
$$

One slide writes the acceleration in $\mathrm{m/s^2}$. The position is in centimeters, so the acceleration is in $\mathrm{cm/s^2}$. It is constant.

- At $t = 0$: $x_0 = 50\,\mathrm{cm}$, $v_0 = 2\,\mathrm{cm/s}$, $a = -0.125\,\mathrm{cm/s^2}$.
- $v_x = 0$ when $2 - 0.125t = 0$, so $t = 16\,\mathrm{s}$.
- Back at the start means $x = 50$: $2t - 0.0625 t^2 = 0$, so $t = 0$ or $t = 32\,\mathrm{s}$.
- A distance of $10.0\,\mathrm{cm}$ from the start means $x = 60\,\mathrm{cm}$ or $x = 40\,\mathrm{cm}$. Solving gives $t = 6.2\,\mathrm{s}$ ($v_x = +1.23\,\mathrm{cm/s}$) and $t = 25.8\,\mathrm{s}$ ($v_x = -1.23\,\mathrm{cm/s}$).

The $x$-$t$ graph is a downward-opening parabola. The $v$-$t$ graph is a straight line crossing zero at $16\,\mathrm{s}$. The $a$-$t$ graph is a horizontal line at $-0.125\,\mathrm{cm/s^2}$.

### Constant acceleration with a known initial state (motorcycle)

Origin at the signpost, east positive. $x_0 = 5.0\,\mathrm{m}$, $v_{0x} = 15\,\mathrm{m/s}$, $a_x = 4.0\,\mathrm{m/s^2}$.

At $t = 2.0\,\mathrm{s}$,

$$
x = 5 + 15(2) + \tfrac12(4)(2)^2 = 43\,\mathrm{m}, \qquad v_x = 15 + 4(2) = 23\,\mathrm{m/s}
$$

Where is he when $v_x = 25\,\mathrm{m/s}$? Time is not given, so use

$$
(25)^2 = (15)^2 + 2(4)(x-5) \implies x = 55\,\mathrm{m}
$$

### Average velocity approaching instantaneous velocity (cheetah)

$$
x = 20\,\mathrm{m} + (5\,\mathrm{m/s^2})\, t^2
$$

From $t = 1.0\,\mathrm{s}$ to $t = 2.0\,\mathrm{s}$: $x_1 = 25\,\mathrm{m}$, $x_2 = 40\,\mathrm{m}$, so $\Delta x = 15\,\mathrm{m}$ and

$$
v_\mathrm{avg} = 15\,\mathrm{m/s}
$$

Over a short step $\Delta t = 0.1\,\mathrm{s}$ starting at $t = 1.0\,\mathrm{s}$, the average is $10.5\,\mathrm{m/s}$. Smaller steps move this average toward the true instantaneous value. Differentiate:

$$
v_x = \frac{d}{dt}\left(20 + 5t^2\right) = 10t
$$

So $v_x(1.0\,\mathrm{s}) = 10\,\mathrm{m/s}$ and $v_x(2.0\,\mathrm{s}) = 20\,\mathrm{m/s}$. The slide’s factor $10.5$ is the $0.1\,\mathrm{s}$ approximation, not the derivative.

### Reading a walk on an $x$-$t$ graph

The hostel-to-campus graph is labeled with regions I through V. The questions are about the slope.

- Velocity zero: horizontal tangent or horizontal segment.
- Constant and positive: straight segment sloping up.
- Constant and negative: straight segment sloping down (the walk back when the rain starts).
- Increasing in magnitude: the slope is getting steeper, and you must check whether that steepening is in the direction the person is already moving.
- Decreasing in magnitude: the graph is becoming flatter.

### When acceleration is not constant: integrate

$$
v_{2x} - v_{1x} = \int_{t_1}^{t_2} a_x\, dt, \qquad x_2 - x_1 = \int_{t_1}^{t_2} v_x\, dt
$$

**Lecture example.** At $t = 0$, $v_x = 10\,\mathrm{m/s}$ and $x = 50\,\mathrm{m}$, with

$$
a_x = 2.0 - 0.10\, t
$$

$$
v_x = 10 + 2.0t - 0.050\, t^2
$$

$$
x = 50 + 10t + t^2 - \frac{1}{60}t^3
$$

The velocity is greatest when $a_x = 0$, because $a_x = dv_x/dt$. That happens at $t = 20\,\mathrm{s}$. Then $v_x = 30\,\mathrm{m/s}$ and $x = 517\,\mathrm{m}$.

**Rocket, set up only.** Engines give $a_y = +16.0\,\mathrm{m/s^2}$ for an unknown time $T$, then the rocket is in free fall with $a_y = -9.80\,\mathrm{m/s^2}$. The two stages do not share one acceleration, so you write the constant-acceleration equations twice and match height and velocity at engine cutoff. The target height is $960\,\mathrm{m}$. The algebra is finished in the Week 05 notes, because that file continues this example. The result is $T = 6.75\,\mathrm{s}$.

---

## 7. What the later slides are pointing at

Projectile motion is previewed, not finished:

$$
\text{projectile} = \text{horizontal motion at constant velocity} + \text{vertical motion at constant acceleration}
$$

The two motions happen together and do not change each other. $g_x = 0$ and $g_y = -9.80\,\mathrm{m/s^2}$ if upward is positive. Week 05 is where the trajectory, time of flight, and range are actually used.

A position vector locates a point from the origin:

$$
\vec{r} = x\,\hat{i} + y\,\hat{j} + z\,\hat{k}
$$

That is the starting definition for the rover problem in Week 05.

The slide list of techniques (graphs, video tracking, sensors, simulation) is a map of how position can be measured or modeled. The exam-style work in this PDF is the analytical model: the four equations, slopes, and integrals.

---

## Sample quiz

Five questions. $g = 9.80\,\mathrm{m/s^2}$, and $g$ is positive. Try them before the answer key.

### Question 1

Vector $\vec{A}$ has magnitude $10.0\,\mathrm{m}$. The angle you are given, $25.0^\circ$, is measured from the positive $y$-axis toward the positive $x$-axis. Vector $\vec{B}$ is $8.00\,\mathrm{m}$ at $200^\circ$ from the positive $x$-axis, standard position.

Find $A_x$, $A_y$, $B_x$, and $B_y$. Then find the magnitude of $\vec{A}+\vec{B}$ and its direction from the positive $x$-axis.

### Question 2

$\vec{P} = 3.00\,\hat{i} - 2.00\,\hat{j}$ and $\vec{Q} = -1.00\,\hat{i} + 4.00\,\hat{j}$, in meters.

Find $\vec{P}\cdot\vec{Q}$ from the components. Then find the angle between $\vec{P}$ and $\vec{Q}$. Say whether that angle is acute or obtuse, and explain how you could have known before using $\cos^{-1}$.

### Question 3

A particle’s position in meters is

$$
x(t) = 4.00 + 6.00t - 0.500\, t^2
$$

with $t$ in seconds.

(a) Find $v_x(t)$ and $a_x$.

(b) At what time does the particle turn around?

(c) From $t = 0$ to $t = 8.00\,\mathrm{s}$, find the displacement, the distance traveled, the average velocity, and the average speed.

(d) During $0 < t < 6\,\mathrm{s}$, is the particle speeding up or slowing down? Use the signs, not a story about “negative acceleration means slowing.”

### Question 4

A ball is thrown straight up from a balcony with $v_0 = 9.80\,\mathrm{m/s}$. The balcony is $19.6\,\mathrm{m}$ above the ground. Take $y = 0$ at the balcony and upward as positive. Ignore air resistance.

(a) How high above the balcony does the ball rise?

(b) How long after release does it hit the ground?

(c) What is its velocity just before it hits the ground?

### Question 5

A cart has $x_0 = 2.00\,\mathrm{m}$ and $v_{0x} = -4.00\,\mathrm{m/s}$. For $4.00\,\mathrm{s}$ it has a constant acceleration of $+1.50\,\mathrm{m/s^2}$. Positive is to the right.

(a) Find $x$ and $v_x$ at $t = 4.00\,\mathrm{s}$.

(b) At what time is $v_x = 0$?

(c) Does the cart pass $x = 2.00\,\mathrm{m}$ again? If it does, when?

(d) A classmate says “acceleration is positive, so the cart is speeding up the whole time.” Use the sign table to say during which interval that sentence is false.

---

## Answer key

### Question 1

The $25.0^\circ$ angle is from $+y$ toward $+x$, so the angle from $+x$ is $65.0^\circ$.

$$
A_x = 10.0\sin 25.0^\circ = 4.23\,\mathrm{m}, \qquad A_y = 10.0\cos 25.0^\circ = 9.06\,\mathrm{m}
$$

$$
B_x = 8.00\cos 200^\circ = -7.52\,\mathrm{m}, \qquad B_y = 8.00\sin 200^\circ = -2.74\,\mathrm{m}
$$

$$
R_x = -3.29\,\mathrm{m}, \qquad R_y = 6.33\,\mathrm{m}
$$

$$
R = 7.13\,\mathrm{m}
$$

Both components put the resultant in the second quadrant:

$$
\theta = 180^\circ - \tan^{-1}\left(\frac{6.33}{3.29}\right) = 117^\circ
$$

from the positive $x$-axis.

### Question 2

$$
\vec{P}\cdot\vec{Q} = (3)(-1) + (-2)(4) = -11.0\,\mathrm{m^2}
$$

$$
\lvert \vec{P}\rvert = \sqrt{13} = 3.61\,\mathrm{m}, \qquad \lvert \vec{Q}\rvert = \sqrt{17} = 4.12\,\mathrm{m}
$$

$$
\cos\theta = \frac{-11.0}{(3.61)(4.12)} = -0.740, \qquad \theta = 138^\circ
$$

The angle is obtuse. A negative dot product already says the angle is greater than $90^\circ$, before you touch $\cos^{-1}$.

### Question 3

(a) $v_x = 6.00 - 1.00\, t$ in $\mathrm{m/s}$, and $a_x = -1.00\,\mathrm{m/s^2}$.

(b) $v_x = 0$ at $t = 6.00\,\mathrm{s}$.

(c) $x(0) = 4.00\,\mathrm{m}$, $x(6) = 22.0\,\mathrm{m}$, $x(8) = 20.0\,\mathrm{m}$.

Displacement $= 20.0 - 4.00 = 16.0\,\mathrm{m}$.

Distance $= (22.0-4.00) + (22.0-20.0) = 20.0\,\mathrm{m}$.

Average velocity $= 16.0/8.00 = 2.00\,\mathrm{m/s}$.

Average speed $= 20.0/8.00 = 2.50\,\mathrm{m/s}$.

(d) For $0 < t < 6$, $v_x > 0$ and $a_x < 0$. Opposite signs means slowing down. Positive acceleration is not required for that conclusion, and negative acceleration is not by itself “slowing down.”

### Question 4

(a) At the top, $v_y = 0$:

$$
0 = (9.80)^2 + 2(-9.80)h \implies h = 4.90\,\mathrm{m}
$$

above the balcony.

(b) Ground is $y = -19.6\,\mathrm{m}$:

$$
-19.6 = 9.80t - 4.90t^2
$$

$$
t^2 - 2.00t - 4.00 = 0, \qquad t = 1.00 + \sqrt{5} = 3.24\,\mathrm{s}
$$

The negative root is discarded.

(c) $v_y = 9.80 - 9.80(3.24) = -21.9\,\mathrm{m/s}$, so $21.9\,\mathrm{m/s}$ downward.

### Question 5

(a)

$$
v_x = -4.00 + 1.50(4.00) = +2.00\,\mathrm{m/s}
$$

$$
x = 2.00 + (-4.00)(4.00) + \tfrac12(1.50)(4.00)^2 = -2.00\,\mathrm{m}
$$

(b) $0 = -4.00 + 1.50t$ gives $t = 2.67\,\mathrm{s}$.

(c) Return to $x = 2.00\,\mathrm{m}$:

$$
2 = 2 - 4t + 0.750t^2 \implies t(0.750t - 4) = 0
$$

So $t = 0$ or $t = 5.33\,\mathrm{s}$. It does not happen during the $4.00\,\mathrm{s}$ of this acceleration. If the acceleration continued, it would pass the starting point at $5.33\,\mathrm{s}$.

(d) Until $t = 2.67\,\mathrm{s}$, velocity is negative and acceleration is positive. Opposite signs: the cart is slowing down while it still moves left. After the turnaround, both are positive and it speeds up to the right. The classmate’s sentence is false on $0 \le t < 2.67\,\mathrm{s}$.
