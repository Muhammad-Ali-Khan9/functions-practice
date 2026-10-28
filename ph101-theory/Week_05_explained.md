# PH101 Week 05 — Motion in Two and Three Dimensions

Source: `Week_05.pdf`. The file `Week_05 5.53.31 PM.pdf` is the same lecture, page for page. One set of notes covers both.

The opening slides repeat the end of Week 04 (free fall, integration, the rocket). The new material is the position vector in a plane, projectile motion, circular motion, relative velocity, and a first look at Newton’s laws. The constant-acceleration equations from Week 04 are used without being re-derived.

Upward is positive unless a problem says otherwise. $g = 9.80\,\mathrm{m/s^2}$ and $g$ is positive, so $a_y = -g$.

---

## 1. Free fall and a varying acceleration (review used this week)

A coin dropped from rest, upward positive:

$$
y = -4.90\, t^2, \qquad v_y = -9.80\, t
$$

If $a_x$ is a function of time,

$$
v_x(t) = v_x(0) + \int_0^t a_x(t')\,dt', \qquad x(t) = x(0) + \int_0^t v_x(t')\,dt'
$$

The highway example from Week 04 is finished here. With $a_x = 2.0 - 0.10t$, $v_x(0) = 10\,\mathrm{m/s}$, and $x(0) = 50\,\mathrm{m}$,

$$
v_x = 10 + 2.0t - 0.050t^2, \qquad x = 50 + 10t + t^2 - \frac{t^3}{60}
$$

Maximum velocity is at $a_x = 0$, so $t = 20\,\mathrm{s}$, $v_x = 30\,\mathrm{m/s}$, and $x = 517\,\mathrm{m}$.

### Rocket with two accelerations

The rocket starts from rest at the ground. Engines produce $a = +16.0\,\mathrm{m/s^2}$ for a time $T$, then they shut off and $a = -9.80\,\mathrm{m/s^2}$. The top of the flight is $960\,\mathrm{m}$. You cannot use one value of $a$ for the whole flight.

While the engines burn, $v_0 = 0$:

$$
y_1 = \tfrac12(16.0)T^2 = 8.00\, T^2, \qquad v_1 = 16.0\, T
$$

After cutoff, the velocity is zero at the top. With $a = -g$,

$$
0 = v_1^2 + 2(-9.80)(960 - y_1)
$$

$$
(16.0\, T)^2 = 19.6\,(960 - 8.00\, T^2)
$$

$$
256\, T^2 + 156.8\, T^2 = 18816, \qquad T^2 = 45.58, \qquad T = 6.75\,\mathrm{s}
$$

Check: burnout height is $365\,\mathrm{m}$, burnout speed is $108\,\mathrm{m/s}$, and the extra coasting height $v_1^2/(2g)$ brings the total to $960\,\mathrm{m}$.

The slide’s list of models (graphs, video, sensors, simulation) is the same list as Week 04. The insect-photograph question is a graph-reading question: dots spaced along $+x$ must be matched to the $x$-$t$ graph whose slope tells the same story. Equal spacing means constant velocity. Spacing that grows means speeding up.

---

## 2. Position, displacement, velocity, and acceleration in space

The position vector runs from the origin to the particle:

$$
\vec{r} = x\,\hat{i} + y\,\hat{j} + z\,\hat{k}
$$

Displacement is the change in that vector, not the distance along the path:

$$
\Delta\vec{r} = \vec{r}_2 - \vec{r}_1 = (x_2-x_1)\,\hat{i} + (y_2-y_1)\,\hat{j} + (z_2-z_1)\,\hat{k}
$$

$$
\vec{v}_\mathrm{avg} = \frac{\Delta\vec{r}}{\Delta t}, \qquad \vec{v} = \frac{d\vec{r}}{dt} = v_x\,\hat{i} + v_y\,\hat{j} + v_z\,\hat{k}
$$

$$
\vec{a}_\mathrm{avg} = \frac{\Delta\vec{v}}{\Delta t}, \qquad \vec{a} = \frac{d\vec{v}}{dt} = a_x\,\hat{i} + a_y\,\hat{j} + a_z\,\hat{k}
$$

Each component is an ordinary one-dimensional derivative. If you can differentiate $x(t)$, you can differentiate a vector.

**Mars rover.** The lander is the origin.

$$
x = 2.0 - 0.25\, t^2, \qquad y = 1.0\, t + 0.025\, t^3
$$

At $t = 2.0\,\mathrm{s}$, $x = 1.0\,\mathrm{m}$ and $y = 2.2\,\mathrm{m}$. Distance from the lander is

$$
r = \sqrt{1.0^2 + 2.2^2} = 2.42\,\mathrm{m}
$$

That distance is not the displacement. From $t = 0$ to $t = 2.0\,\mathrm{s}$,

$$
\vec{r}_0 = 2.0\,\hat{i}, \qquad \vec{r}_2 = 1.0\,\hat{i} + 2.2\,\hat{j}
$$

$$
\Delta\vec{r} = -1.0\,\hat{i} + 2.2\,\hat{j}\,\mathrm{m}
$$

$$
\vec{v}_\mathrm{avg} = \frac{\Delta\vec{r}}{2.0} = -0.50\,\hat{i} + 1.1\,\hat{j}\,\mathrm{m/s}
$$

Instantaneous velocity:

$$
v_x = -0.50\, t, \qquad v_y = 1.0 + 0.075\, t^2
$$

The $y$ derivative needs care: the derivative of $0.025\, t^3$ is $3(0.025)t^2 = 0.075\, t^2$. The slide’s factor $2(0.025)$ is the derivative of $t^2$, not of $t^3$. At $t = 2.0\,\mathrm{s}$ the corrected components are $v_x = -1.0\,\mathrm{m/s}$ and $v_y = 1.3\,\mathrm{m/s}$. The slide’s $v_y = 1.3\,\mathrm{m/s}$ happens to match $1.0 + 0.075(4)$. Its written coefficient does not.

$$
\lvert \vec{v}\rvert = \sqrt{(-1.0)^2 + (1.3)^2} = 1.6\,\mathrm{m/s}
$$

$v_x$ is negative and $v_y$ is positive, so the direction is in the second quadrant: $180^\circ - \tan^{-1}(1.3/1.0) = 128^\circ$ from $+x$.

---

## 3. Projectile motion

A projectile is an object in the air with only gravity acting. Air resistance is ignored. The path is a parabola. Horizontal and vertical motion are solved separately and combined at the end.

| Launch | Initial velocity | Path |
| --- | --- | --- |
| Horizontal, $0^\circ$ | $v_{0y} = 0$ | Half of a parabola (ball off a table) |
| Vertical, $90^\circ$ | $v_{0x} = 0$ | Straight up and down |
| Oblique, between $0^\circ$ and $90^\circ$ | Both components nonzero | Parabola. Symmetric only if it lands at the launch height |

With upward positive and the origin at the launch point:

$$
v_{0x} = v_0\cos\theta, \qquad v_{0y} = v_0\sin\theta
$$

$$
a_x = 0, \qquad a_y = -g
$$

$$
\begin{aligned}
v_x &= v_0\cos\theta \\
x &= (v_0\cos\theta)\, t \\
v_y &= v_0\sin\theta - gt \\
y &= (v_0\sin\theta)\, t - \tfrac12 g t^2
\end{aligned}
$$

One slide writes $v_x = v_0 + v_0\cos\theta$. That extra $v_0$ does not belong. The baseball numbers later in the file use $v_x = v_0\cos\theta$.

Eliminate $t$ using $t = x/(v_0\cos\theta)$:

$$
y = x\tan\theta - \frac{g\, x^2}{2 v_0^2 \cos^2\theta}
$$

That is $y = bx - cx^2$, the equation of a parabola.

### Level-ground formulas

These apply only when the landing height equals the launch height.

$$
T = \frac{2 v_0\sin\theta}{g}, \qquad H = \frac{v_0^2\sin^2\theta}{2g}, \qquad R = \frac{v_0^2\sin 2\theta}{g}
$$

$H$ is the height above the launch point. The time to the top is half of $T$, because $v_y = 0$ there:

$$
t_\mathrm{top} = \frac{v_0\sin\theta}{g}
$$

The slide’s maximum-height line is scrambled by the equation editor. The formula above is the one that matches the baseball solution in this same file. Useful consequences:

- $30^\circ$ and $60^\circ$ are complementary. They have the same range, because $\sin 2\theta$ is the same.
- The larger angle stays in the air longer and goes higher.
- The largest range on level ground is at $45^\circ$.

If the landing height is different, do not use $T$ and $R$. Solve the $y$ equation for $t$, then use $x = v_x t$.

A ball dropped from rest and a ball fired horizontally from the same height hit the ground together. The horizontal velocity does not change the vertical fall. Both have $a_x = 0$ and $a_y = -g$.

After a skier leaves a ramp, the acceleration at every point in the air is $g$ downward. It is not along the path, and it is not zero at the top. The velocity changes. The acceleration does not.

### Baseball

$v_0 = 37.0\,\mathrm{m/s}$ at $53.1^\circ$, launched from the ground and landing at the ground.

$$
v_{0x} = 37.0\cos 53.1^\circ = 22.2\,\mathrm{m/s}, \qquad v_{0y} = 37.0\sin 53.1^\circ = 29.6\,\mathrm{m/s}
$$

At $t = 2.00\,\mathrm{s}$:

$$
x = 44.4\,\mathrm{m}, \qquad y = 39.6\,\mathrm{m}
$$

$$
v_x = 22.2\,\mathrm{m/s}, \qquad v_y = 10.0\,\mathrm{m/s}
$$

$$
\lvert \vec{v}\rvert = \sqrt{22.2^2 + 10.0^2} = 24.3\,\mathrm{m/s}
$$

at $\tan^{-1}(10.0/22.2) = 24.3^\circ$ above the horizontal.

Top of the flight: $v_y = 0$ at $t = 29.6/9.80 = 3.02\,\mathrm{s}$, and $h = 44.7\,\mathrm{m}$. That height is also $(29.6)^2/(2\times 9.80)$.

Total flight time $T = 6.04\,\mathrm{s}$. Range $R = 22.2 \times 6.04 = 134\,\mathrm{m}$. Just before impact, $v_x$ is still $22.2\,\mathrm{m/s}$ and $v_y = -29.6\,\mathrm{m/s}$. The impact speed equals the launch speed on level ground. The direction is $53.1^\circ$ below the horizontal.

### Motorcycle off a cliff

Horizontal launch, $v_0 = 9.0\,\mathrm{m/s}$. At $t = 0.50\,\mathrm{s}$, with upward positive and the edge as the origin,

$$
x = 4.5\,\mathrm{m}, \qquad y = \tfrac12(-9.8)(0.50)^2 = -1.23\,\mathrm{m}
$$

Distance from the edge:

$$
r = \sqrt{4.5^2 + 1.23^2} = 4.66\,\mathrm{m}
$$

$$
v_x = 9.0\,\mathrm{m/s}, \qquad v_y = -4.9\,\mathrm{m/s}, \qquad \lvert \vec{v}\rvert = 10.2\,\mathrm{m/s}
$$

The velocity is $28.6^\circ$ below the horizontal.

### Window throw, landing below the release point

The ball leaves a window $8.0\,\mathrm{m}$ above the ground at $10.0\,\mathrm{m/s}$, $20^\circ$ below the horizontal. The range formulas do not apply.

Take downward as positive for this one problem, because the motion never turns around. Then $v_{0y} = +10.0\sin 20^\circ = 3.42\,\mathrm{m/s}$, $a_y = +9.80\,\mathrm{m/s^2}$, and the ground is $y = +8.0\,\mathrm{m}$.

$$
8.0 = 3.42\, t + 4.90\, t^2
$$

The positive root is $t = 0.98\,\mathrm{s}$. Horizontally,

$$
v_{0x} = 10.0\cos 20^\circ = 9.40\,\mathrm{m/s}, \qquad x = 9.2\,\mathrm{m}
$$

The slide’s $9.17\,\mathrm{m}$ is the same calculation with slightly rounded components. If you keep upward positive instead, $v_{0y}$ is negative and the ground is $y = -8.0\,\mathrm{m}$. You must not mix those two choices in one equation. The slide writes $a_y = -g$ and then a positive $v_{0y}$ in the same line. Pick one convention and stay with it.

### Monkey and hunter

The dart is aimed straight at the monkey. The monkey lets go at the instant the dart is fired. Both the dart and the monkey fall a distance $\tfrac12 gt^2$ below the straight line of the aim. The monkey is always on the dart’s line of sight, so the dart hits the monkey, provided the dart arrives before the monkey reaches the ground. The dart’s speed changes the time of the meeting. It does not change the fact that both have dropped the same extra distance.

---

## 4. Circular motion

Velocity is tangent to the path. On a curve, the direction of $\vec{v}$ changes, so there is an acceleration even when the speed is constant. That acceleration has a component perpendicular to the path.

### Uniform circular motion

Speed is constant. The acceleration is called centripetal (radial) acceleration. It points toward the center.

$$
a_\mathrm{rad} = \frac{v^2}{R} = \frac{4\pi^2 R}{T^2}
$$

$T$ is the period, the time for one revolution. There is no tangential acceleration, because the speed is not changing.

The lecture derives it from similar triangles: the velocity triangle and the position triangle give $\Delta v / v = \Delta s / R$. Divide by $\Delta t$ and let $\Delta t \to 0$. Since $v = \Delta s/\Delta t$ along the circle, $a = v^2/R$.

**Sports car.** The largest centripetal acceleration it can hold is $0.97g = 9.5\,\mathrm{m/s^2}$, at $v = 40\,\mathrm{m/s}$.

$$
R_\mathrm{min} = \frac{v^2}{a} = \frac{1600}{9.5} = 1.7\times 10^2\,\mathrm{m}
$$

The slide shows both $168\,\mathrm{m}$ and $170\,\mathrm{m}$. They are the same rounding of $168.4\,\mathrm{m}$. A tighter curve would require a larger $v^2/R$, and the tires cannot provide it.

**Carnival ride.** Radius $5.0\,\mathrm{m}$, one revolution in $4.0\,\mathrm{s}$.

$$
a_\mathrm{rad} = \frac{4\pi^2(5.0)}{(4.0)^2} = 12\,\mathrm{m/s^2}
$$

toward the center. The speed is constant, so this is not a change in speed. It is a change in direction.

### Nonuniform circular motion

If the speed also changes, there are two perpendicular pieces:

$$
a_\mathrm{rad} = \frac{v^2}{R} \quad \text{(toward the center)}, \qquad a_\mathrm{tan} = \frac{dv}{dt} \quad \text{(tangent to the path)}
$$

$$
a = \sqrt{a_\mathrm{rad}^2 + a_\mathrm{tan}^2}
$$

$a_\mathrm{tan}$ is what speeds the object up or slows it down. $a_\mathrm{rad}$ is what bends the path.

---

## 5. Relative velocity

Two observers who move relative to each other measure different velocities for the same object. The subscript notation $P/A$ means “$P$ as measured in frame $A$.”

$$
x_{P/A} = x_{P/B} + x_{B/A}
$$

Differentiate with respect to time:

$$
\vec{v}_{P/A} = \vec{v}_{P/B} + \vec{v}_{B/A}
$$

In the lecture’s picture, $A$ is the ground and $B$ is the moving train. A cyclist’s velocity relative to the ground is the cyclist’s velocity relative to the train plus the train’s velocity relative to the ground.

The order of subscripts matters. Swapping them changes the sign: $\vec{v}_{A/B} = -\vec{v}_{B/A}$.

This idea is used again with numbers in Week 06 (the river and the two cars). The formula belongs to this week.

---

## 6. Newton’s laws, first statement

These are stated here and applied in Week 06.

**First law.** An object at rest stays at rest, and an object in motion keeps a constant velocity, unless a nonzero net force acts. Inertia is that resistance to a change in velocity. A hockey puck on frictionless ice keeps going. In symbols, if $\sum\vec{F} = 0$, then $\vec{a} = 0$.

**Second law.** Acceleration is proportional to the net force and inversely proportional to the mass:

$$
\sum\vec{F} = m\vec{a}
$$

The same push gives a full shopping cart a smaller acceleration than an empty one.

**Third law.** Forces come in pairs. If object 1 pushes on object 2, then object 2 pushes on object 1 with the same magnitude in the opposite direction:

$$
\vec{F}_{12} = -\vec{F}_{21}
$$

The two forces act on different objects. They never appear together as a pair on one free-body diagram, and they never cancel each other.

### Where these laws stop working

| Situation | What replaces Newton’s laws |
| --- | --- |
| Speeds near the speed of light | Special relativity |
| Atomic sizes | Quantum mechanics |
| Very strong gravity | General relativity |
| An accelerating frame (a braking car, a turning car) | Fictitious forces, or analyze the motion from an inertial frame |
| Asking what a force is made of | The Standard Model, plus general relativity for gravity |

For this course the frames are inertial, the speeds are ordinary, and $\sum\vec{F} = m\vec{a}$ is the working equation.

### How the lecture wants a problem written

1. **Identify.** What is asked, which principle applies, what is given, what is assumed.
2. **Set up.** Draw the picture, choose axes, write the equations before substituting numbers.
3. **Execute.** Solve in symbols, then put in numbers with units.
4. **Evaluate.** Check units, size, signs, and a limiting case if you can.

The last slide of the file is a map of mechanics: classical rigid bodies, deformable solids and fluids, relativity, and quantum theory. PH101 stays in classical mechanics.

---

## Sample quiz

$g = 9.80\,\mathrm{m/s^2}$. Upward is positive unless the question says otherwise.

### Question 1

A particle in the $xy$-plane has

$$
x = 4.0 - 0.50\, t^2, \qquad y = 2.0\, t
$$

with $x$ and $y$ in meters and $t$ in seconds.

(a) Find the position and the distance from the origin at $t = 2.0\,\mathrm{s}$.

(b) Find $\Delta\vec{r}$ and $\vec{v}_\mathrm{avg}$ from $t = 0$ to $t = 2.0\,\mathrm{s}$.

(c) Find $\vec{v}(t)$ and the magnitude and direction of $\vec{v}$ at $t = 2.0\,\mathrm{s}$.

(d) Find $\vec{a}$. Is either component zero? What does that say about the path?

### Question 2

A ball is kicked from ground level at $20.0\,\mathrm{m/s}$ and $30.0^\circ$ above the horizontal, and it lands back at ground level. Ignore air resistance.

(a) Find the time of flight, the maximum height, and the range.

(b) A second kick uses the same speed at $60.0^\circ$. Without doing the whole calculation again, state what happens to the flight time, the maximum height, and the range, and why.

(c) Find the speed of the $30.0^\circ$ ball when it is $2.00\,\mathrm{m}$ above the ground. The launch angle should not remain in your final formula. Show where it dropped out.

### Question 3

A stone is thrown from the edge of a $45.0\,\mathrm{m}$ cliff with a speed of $12.0\,\mathrm{m/s}$ at $25.0^\circ$ below the horizontal.

(a) Why is the level-ground range formula the wrong tool?

(b) How long is the stone in the air?

(c) How far from the base of the cliff does it land?

(d) What is its impact speed?

### Question 4

A car travels at a constant $18.0\,\mathrm{m/s}$ around a level circular track of radius $60.0\,\mathrm{m}$.

(a) Find the centripetal acceleration and the period.

(b) The driver then brakes so that the speed decreases at $1.20\,\mathrm{m/s^2}$ while the car is still on the same circle, at the instant the speed is still $18.0\,\mathrm{m/s}$. Find the radial acceleration, the tangential acceleration, and the magnitude of the total acceleration.

(c) A passenger says “speed is constant in part (a), so acceleration is zero.” Answer that claim in one or two sentences.

### Question 5

A boat points straight across a river that is $80.0\,\mathrm{m}$ wide. The boat’s speed relative to the water is $4.00\,\mathrm{m/s}$. The current is $3.00\,\mathrm{m/s}$ downstream.

(a) Write $\vec{v}_{\text{boat/ground}}$ in components, and find its magnitude and direction.

(b) How long does the crossing take, and how far downstream does the boat land?

(c) The crossing time does not depend on the current. Explain why, using the component equations rather than a slogan.

---

## Answer key

### Question 1

(a) $x(2) = 2.0\,\mathrm{m}$, $y(2) = 4.0\,\mathrm{m}$. Distance $= \sqrt{2^2+4^2} = 4.47\,\mathrm{m}$.

(b) $\vec{r}_0 = 4.0\,\hat{i}$, $\vec{r}_2 = 2.0\,\hat{i} + 4.0\,\hat{j}$, so

$$
\Delta\vec{r} = -2.0\,\hat{i} + 4.0\,\hat{j}\,\mathrm{m}, \qquad \vec{v}_\mathrm{avg} = -1.0\,\hat{i} + 2.0\,\hat{j}\,\mathrm{m/s}
$$

(c) $v_x = -1.00\, t$, $v_y = 2.00\,\mathrm{m/s}$. At $t = 2.0\,\mathrm{s}$, $\vec{v} = -2.00\,\hat{i} + 2.00\,\hat{j}$, so $\lvert \vec{v}\rvert = 2.83\,\mathrm{m/s}$ at $135^\circ$ from $+x$.

(d) $\vec{a} = -1.00\,\hat{i}\,\mathrm{m/s^2}$. The $y$ acceleration is zero, so $v_y$ never changes. The path is curved because $a_x$ is not zero: $x$ is quadratic while $y$ is linear.

### Question 2

(a) $v_{0x} = 17.3\,\mathrm{m/s}$, $v_{0y} = 10.0\,\mathrm{m/s}$.

$$
T = \frac{2(10.0)}{9.80} = 2.04\,\mathrm{s}, \qquad H = \frac{(10.0)^2}{2(9.80)} = 5.10\,\mathrm{m}
$$

$$
R = (17.3)(2.04) = 35.3\,\mathrm{m}
$$

which is also $v_0^2\sin 60^\circ / g$.

(b) $60^\circ$ is complementary to $30^\circ$, so the range is the same. $\sin 60^\circ > \sin 30^\circ$, so the flight time and the maximum height are both larger.

(c) Mechanical energy, or the vertical equation $v_y^2 = v_{0y}^2 - 2gy$, plus the unchanged $v_x$:

$$
v^2 = v_0^2 - 2gy = 400 - 2(9.80)(2.00) = 360.8, \qquad v = 19.0\,\mathrm{m/s}
$$

The angle disappeared because $v_{0x}^2 + v_{0y}^2 = v_0^2$. Any other launch angle with the same $v_0$ has this same speed at this height.

### Question 3

(a) The stone lands $45.0\,\mathrm{m}$ below the launch height. $T = 2v_0\sin\theta/g$ and $R = v_0^2\sin 2\theta/g$ assume equal heights.

(b) Upward positive, origin at the edge: $v_{0x} = 10.88\,\mathrm{m/s}$, $v_{0y} = -5.07\,\mathrm{m/s}$.

$$
-45.0 = -5.07\, t - 4.90\, t^2
$$

$$
4.90t^2 + 5.07t - 45.0 = 0, \qquad t = 2.56\,\mathrm{s}
$$

(c) $x = (10.88)(2.56) = 27.8\,\mathrm{m}$ from the base.

(d) $v_x = 10.88\,\mathrm{m/s}$, $v_y = -5.07 - 9.80(2.56) = -30.1\,\mathrm{m/s}$, so

$$
\lvert \vec{v}\rvert = \sqrt{10.88^2 + 30.1^2} = 32.0\,\mathrm{m/s}
$$

### Question 4

(a)

$$
a_\mathrm{rad} = \frac{18.0^2}{60.0} = 5.40\,\mathrm{m/s^2}
$$

toward the center.

$$
T = \frac{2\pi R}{v} = \frac{2\pi(60.0)}{18.0} = 20.9\,\mathrm{s}
$$

(b) At that instant $a_\mathrm{rad}$ is still $5.40\,\mathrm{m/s^2}$, because it depends on the speed right now. $a_\mathrm{tan} = 1.20\,\mathrm{m/s^2}$, opposite the velocity.

$$
a = \sqrt{5.40^2 + 1.20^2} = 5.53\,\mathrm{m/s^2}
$$

(c) Constant speed does not mean constant velocity. The direction is changing, so $\vec{a}$ is not zero. It points at the center.

### Question 5

(a) Take $x$ across the river and $y$ downstream.

$$
\vec{v}_{\text{boat/ground}} = 4.00\,\hat{i} + 3.00\,\hat{j}\,\mathrm{m/s}
$$

Magnitude $5.00\,\mathrm{m/s}$, at $\tan^{-1}(3/4) = 36.9^\circ$ downstream from the straight-across direction.

(b) Only the $x$ component carries the boat across:

$$
t = \frac{80.0}{4.00} = 20.0\,\mathrm{s}, \qquad y = (3.00)(20.0) = 60.0\,\mathrm{m}
$$

(c) The current is in $y$. It does not change $v_x$. The width is covered by $v_x$ alone, so the time $w/v_x$ does not contain the current. The current changes where the boat lands, not how long the crossing takes, as long as the boat keeps its bow pointed straight across.
