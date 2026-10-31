# Motion in One and Two Dimensions

Kinematics relates position, velocity, and acceleration without asking which force caused the acceleration. The cause is Newton’s second law, in the next set of notes. Here the acceleration is given, or it is the free-fall value.

Use $g = 9.80\,\mathrm{m/s^2}$ as a positive number. If upward is positive, the acceleration of a freely falling object is $a_y = -g$. If downward is positive, $a_y = +g$. Pick one convention for the whole problem and keep every initial velocity, displacement, and acceleration in that convention.

## One dimension, constant acceleration

$$
\begin{aligned}
v &= v_0 + at \\
x &= x_0 + v_0 t + \tfrac{1}{2} at^2 \\
v^2 &= v_0^2 + 2a(x - x_0) \\
x &= x_0 + \tfrac{1}{2}(v_0 + v)t
\end{aligned}
$$

These four equations assume $a$ is constant. They are not independent. Each one omits a different variable, so choose the equation that does not contain the variable you do not know and do not need.

The average velocity over a time interval is $\Delta x / \Delta t$. For constant acceleration it also equals $(v_0 + v)/2$. It is not the instantaneous velocity, and it is not $(v_0 + v)/2$ if the acceleration changes during the interval.

A negative velocity means motion in the negative direction. A negative acceleration means the velocity is becoming more negative, or less positive. Slowing down while moving upward is a negative acceleration if upward is positive. Speeding up while moving downward is also a negative acceleration in that same convention. The sign of $a$ is not a synonym for “slowing down.”

## Free fall

Air resistance is ignored until a problem says otherwise. Then $a_y$ is constant even while the velocity changes sign at the top of the path. At the top, $v_y = 0$ for an instant. The acceleration is still $-g$ if upward is positive. Setting $a = 0$ at the top is the error that ruins the second half of the flight.

The time up and the time down match only when the object starts and ends at the same height. A ball thrown upward from a roof and caught at the roof has that symmetry. The same ball, thrown upward and landing on the ground below the roof, spends longer falling than rising. Solve the quadratic for $y$. Keep the positive root that matches the height you asked for. A second positive root can be a different visit to the same height.

## Two dimensions

Motion along $x$ and motion along $y$ are separate constant-acceleration problems that share the same clock.

$$
\begin{aligned}
x &= x_0 + v_{0x} t + \tfrac{1}{2} a_x t^2 \\
y &= y_0 + v_{0y} t + \tfrac{1}{2} a_y t^2
\end{aligned}
$$

For a projectile near Earth with the $x$-axis horizontal and no air resistance, $a_x = 0$ and $a_y = -g$ if upward is positive. Then

$$
v_x = v_0\cos\theta, \qquad v_y = v_0\sin\theta - gt
$$

$\theta$ is the launch angle above the horizontal. The horizontal velocity does not change. The vertical velocity does.

On level ground, landing at the launch height, the time of flight and the range are

$$
T = \frac{2 v_0\sin\theta}{g}, \qquad R = \frac{v_0^2\sin 2\theta}{g}
$$

The maximum height above the launch point is

$$
H = \frac{v_0^2\sin^2\theta}{2g}
$$

These three formulas are illegal on a cliff. The vertical displacement is not zero, so the time comes from the quadratic in $y$, and the range is $x = v_x t$ with that time. Two launch angles that add to $90^\circ$ give the same level-ground range and different heights. That pairing also fails on a cliff.

The speed at a later time is $\sqrt{v_x^2 + v_y^2}$. The direction is $\tan^{-1}(v_y/v_x)$, with the quadrant taken from the signs. Speed is not $v_x + v_y$.

## Relative velocity

If $\vec{v}_{P/Q}$ means the velocity of $P$ relative to $Q$,

$$
\vec{v}_{P/G} = \vec{v}_{P/Q} + \vec{v}_{Q/G}
$$

A boat’s velocity relative to the ground is its velocity relative to the water plus the velocity of the water relative to the ground. To cross a river perpendicular to the banks, the boat must aim upstream. The ground velocity then has no downstream component, and the crossing is slower than the boat’s speed in the water.

## Uniform circular motion, just the acceleration

If the speed is constant and the path is a circle of radius $r$, the velocity vector still changes because its direction changes. The acceleration points toward the center and has magnitude

$$
a_{\mathrm{rad}} = \frac{v^2}{r} = \omega^2 r
$$

$\omega$ is in radians per second. There is no tangential acceleration while the speed is constant. Speeding up on the circle adds a tangential piece $a_{\mathrm{tan}} = r\alpha$, perpendicular to the radial piece. The force that produces $a_{\mathrm{rad}}$ is Newton’s second law, not a new kind of kinematics.

## Mistakes that change the answer

- Using the level-ground range formula when the landing height is different.
- Setting $a = 0$ at the highest point.
- Solving a quadratic and keeping a negative time, or keeping the root from the wrong pass through that height.
- Adding $v_x$ and $v_y$ to get the speed.
- Forgetting that $v_x = v_0\cos\theta$ stays constant, then putting a horizontal acceleration into $x$.
- Mixing upward-positive numbers with a downward-positive equation in the same problem.

---

## Questions

### Question 1

A car starts from rest and accelerates at $2.50\,\mathrm{m/s^2}$ for $6.00\,\mathrm{s}$, then moves at constant velocity for another $10.0\,\mathrm{s}$.

1. How far does it travel during the acceleration, and what is its speed at $t = 6.00\,\mathrm{s}$?
2. How far does it travel during the whole $16.0\,\mathrm{s}$?
3. Why is $\tfrac{1}{2}(2.50)(16.0)^2$ the wrong total distance?

### Question 2

A ball is thrown upward from a roof $20.0\,\mathrm{m}$ above the ground with $v_0 = 12.0\,\mathrm{m/s}$. Take upward as positive and $g = 9.80\,\mathrm{m/s^2}$.

1. Find the maximum height above the ground.
2. Find the time when the ball hits the ground.
3. Find the velocity just before impact. Interpret the sign.

### Question 3

A stone is thrown horizontally at $15.0\,\mathrm{m/s}$ from a cliff $44.1\,\mathrm{m}$ high. Take upward as positive, with $y = 0$ at the top of the cliff and the ground at $y = -44.1\,\mathrm{m}$.

1. How long is the stone in the air?
2. How far from the base of the cliff does it land?
3. What is its speed and direction just before impact?

### Question 4

A projectile is launched at $25.0\,\mathrm{m/s}$ from level ground.

1. Find the two launch angles that give a horizontal range of $40.0\,\mathrm{m}$.
2. Which angle gives the longer time of flight, and why can both angles share a range?
3. Show that the level-ground formula does not apply if the same projectile is launched from a $10.0\,\mathrm{m}$ hill and lands at the bottom.

### Question 5

A river is $80.0\,\mathrm{m}$ wide and flows east at $1.50\,\mathrm{m/s}$. A boat’s speed relative to the water is $2.50\,\mathrm{m/s}$.

1. The boat points due north. Find the velocity relative to the ground, the crossing time, and how far downstream it lands.
2. The boat instead wants a ground velocity straight north. Find the heading relative to north, the ground speed, and the new crossing time.

### Question 6

Two cars move on the $x$-axis. Car A starts at $x = 0$ with a constant velocity of $+12.0\,\mathrm{m/s}$. Car B starts at $x = 40.0\,\mathrm{m}$ at the same instant, from rest, with acceleration $+1.50\,\mathrm{m/s^2}$ in the same direction.

1. When and where does A catch B?
2. What are the two velocities at that instant?
3. Why is there a second mathematical root, and what does it mean?

### Question 7

A particle moves on a circle of radius $2.00\,\mathrm{m}$. Its speed is constant at $4.00\,\mathrm{m/s}$ for the first part of the question.

1. Find the radial acceleration and the period.
2. The speed then increases at $1.20\,\mathrm{m/s^2}$. At the instant the speed is still $4.00\,\mathrm{m/s}$, find the magnitude of the total acceleration and the angle it makes with the tangential direction.
3. Why does a nonzero radial acceleration not change the speed?

### Question 8

A student writes these three statements about a ball thrown straight up, with upward positive. Mark each true or false and correct the false ones.

1. At the highest point, $v = 0$ and $a = 0$.
2. The acceleration is $-9.80\,\mathrm{m/s^2}$ on the way up and $+9.80\,\mathrm{m/s^2}$ on the way down.
3. If the release and catch heights are equal, the speed on return equals the launch speed.

### Question 9

An object’s velocity is $v_x = 2.00\,\mathrm{m/s}$ and $v_y = -6.00 + 4.00 t$, with $t$ in seconds and $v_y$ in $\mathrm{m/s}$. At $t = 0$, the object is at the origin.

1. Find $a_x$ and $a_y$. Is the acceleration constant?
2. Find $x(t)$ and $y(t)$.
3. Find the time when the object crosses $y = 0$ again, and its position and velocity then. This is not a projectile. Say why the level-ground formulas do not apply.

### Question 10

A soccer ball is kicked from the ground at $20.0\,\mathrm{m/s}$ at $37.0^\circ$ above the horizontal, toward a goal whose crossbar is $2.44\,\mathrm{m}$ high and $25.0\,\mathrm{m}$ away. Use $\cos 37.0^\circ = 0.799$ and $\sin 37.0^\circ = 0.602$. Does the ball pass over the crossbar, under it, or hit it? Ignore air resistance, and do not stop at the level-ground range.

---

## Answers

### Answer 1

1. From rest, $v = at = 2.50(6.00) = 15.0\,\mathrm{m/s}$. The distance is $\tfrac{1}{2}at^2 = \tfrac{1}{2}(2.50)(36.0) = 45.0\,\mathrm{m}$.

2. During the next $10.0\,\mathrm{s}$ the velocity is constant, so the added distance is $15.0(10.0) = 150\,\mathrm{m}$. The total is $195\,\mathrm{m}$.

3. The acceleration is $2.50\,\mathrm{m/s^2}$ only for the first $6.00\,\mathrm{s}$. After that $a = 0$. The constant-acceleration distance formula cannot be used across a change in $a$. Using it for $16.0\,\mathrm{s}$ pretends the car is still speeding up and gives $320\,\mathrm{m}$.

### Answer 2

1. At the top, $v_y = 0$. With $v^2 = v_0^2 + 2a\Delta y$,

$$
0 = (12.0)^2 + 2(-9.80)\Delta y, \qquad \Delta y = \frac{144}{19.6} = 7.35\,\mathrm{m}
$$

The maximum height above the ground is $20.0 + 7.35 = 27.4\,\mathrm{m}$. The time to the top is $v_0/g = 12.0/9.80 = 1.22\,\mathrm{s}$, but that time is not the time to the ground.

2. Ground level is $y = -20.0\,\mathrm{m}$ if $y = 0$ is the roof:

$$
-20.0 = 12.0 t + \tfrac{1}{2}(-9.80)t^2
$$

$$
4.90 t^2 - 12.0 t - 20.0 = 0
$$

$$
t = \frac{12.0 + \sqrt{144 + 392}}{9.80} = \frac{12.0 + \sqrt{536}}{9.80} = \frac{12.0 + 23.15}{9.80} = 3.59\,\mathrm{s}
$$

The negative root is discarded because $t < 0$ is before the throw.

3. $v_y = 12.0 - 9.80(3.59) = 12.0 - 35.2 = -23.2\,\mathrm{m/s}$. The negative sign means the ball is moving downward. The speed is $23.2\,\mathrm{m/s}$, larger than the launch speed, because the landing point is below the roof.

### Answer 3

1. $v_{0x} = 15.0\,\mathrm{m/s}$ and $v_{0y} = 0$. Then $-44.1 = \tfrac{1}{2}(-9.80)t^2$, so $4.90 t^2 = 44.1$ and $t^2 = 9.00$. The positive time is $t = 3.00\,\mathrm{s}$.

2. $x = 15.0(3.00) = 45.0\,\mathrm{m}$.

3. $v_x = 15.0\,\mathrm{m/s}$ and $v_y = -9.80(3.00) = -29.4\,\mathrm{m/s}$.

$$
v = \sqrt{15.0^2 + 29.4^2} = \sqrt{225 + 864} = \sqrt{1089} = 33.0\,\mathrm{m/s}
$$

The velocity is below the horizontal by $\tan^{-1}(29.4/15.0) = \tan^{-1}(1.96) = 63.0^\circ$.

### Answer 4

1. $R = v_0^2\sin 2\theta / g = 40.0$.

$$
\sin 2\theta = \frac{40.0(9.80)}{(25.0)^2} = \frac{392}{625} = 0.627
$$

$2\theta = 38.8^\circ$ or $2\theta = 180^\circ - 38.8^\circ = 141.2^\circ$. The launch angles are $\theta = 19.4^\circ$ and $\theta = 70.6^\circ$.

2. Time of flight is $2 v_0\sin\theta / g$. The larger angle has the larger vertical velocity, so it stays in the air longer: $T(70.6^\circ) > T(19.4^\circ)$. The horizontal velocity is smaller for the steeper launch by just enough that the product $v_x T$ matches. The two angles add to $90.0^\circ$.

3. From a $10.0\,\mathrm{m}$ hill the vertical displacement to the landing point is $-10.0\,\mathrm{m}$, not zero. The time is the positive root of $-10.0 = (v_0\sin\theta) t - \tfrac{1}{2}gt^2$, which is longer than the level-ground flight. The horizontal distance is $v_0\cos\theta$ times that longer time. Quoting $v_0^2\sin 2\theta / g$ answers a different problem, the one in which the projectile lands at the height it was launched.

### Answer 5

1. $\vec{v}_{\mathrm{boat/ground}} = 1.50\,\hat{i} + 2.50\,\hat{j}\,\mathrm{m/s}$ if north is $+y$ and east is $+x$. The northward speed is $2.50\,\mathrm{m/s}$, so the crossing time is $80.0/2.50 = 32.0\,\mathrm{s}$. Downstream displacement is $1.50(32.0) = 48.0\,\mathrm{m}$. The ground speed is $\sqrt{1.50^2 + 2.50^2} = 2.92\,\mathrm{m/s}$, but that speed is not the speed used to divide the width. Only the component perpendicular to the banks crosses the river.

2. Aim upstream, west of north, at an angle $\phi$ from north with $\sin\phi = 1.50/2.50 = 0.600$. So $\phi = 36.9^\circ$ west of north. The ground speed is the northward component,

$$
v = \sqrt{2.50^2 - 1.50^2} = \sqrt{4.00} = 2.00\,\mathrm{m/s}
$$

Crossing time is $80.0/2.00 = 40.0\,\mathrm{s}$. Aiming upstream cancels the drift and increases the time.

### Answer 6

1. $x_A = 12.0 t$ and $x_B = 40.0 + \tfrac{1}{2}(1.50)t^2 = 40.0 + 0.750 t^2$. Set them equal:

$$
0.750 t^2 - 12.0 t + 40.0 = 0
$$

$$
t = \frac{12.0 \pm \sqrt{144 - 120}}{1.50} = \frac{12.0 \pm \sqrt{24.0}}{1.50}
$$

$\sqrt{24.0} = 4.90$, so $t = 11.3\,\mathrm{s}$ or $t = 4.73\,\mathrm{s}$. Both are positive. A is faster at the start, so A catches B at the earlier time $t = 4.73\,\mathrm{s}$, at $x = 12.0(4.73) = 56.8\,\mathrm{m}$.

2. $v_A = 12.0\,\mathrm{m/s}$ throughout. $v_B = 1.50(4.73) = 7.10\,\mathrm{m/s}$. A is still faster, so A is passing B, not merely meeting a car that has the same speed.

3. After A passes, B is accelerating and is eventually faster than $12.0\,\mathrm{m/s}$. B catches A again at $t = 11.3\,\mathrm{s}$, at $x = 12.0(11.3) = 136\,\mathrm{m}$. The second root is a second meeting, not a discarded negative time. If the question says “when A first catches B,” use $4.73\,\mathrm{s}$.

### Answer 7

1. $a_{\mathrm{rad}} = v^2/r = 16.0/2.00 = 8.00\,\mathrm{m/s^2}$, toward the center. The period is the circumference divided by the speed: $T = 2\pi r/v = 2\pi(2.00)/4.00 = \pi\,\mathrm{s} = 3.14\,\mathrm{s}$.

2. $a_{\mathrm{tan}} = 1.20\,\mathrm{m/s^2}$ and $a_{\mathrm{rad}} = 8.00\,\mathrm{m/s^2}$. They are perpendicular, so

$$
a = \sqrt{8.00^2 + 1.20^2} = \sqrt{65.4} = 8.09\,\mathrm{m/s^2}
$$

The angle from the tangential direction toward the center satisfies $\tan\psi = a_{\mathrm{rad}}/a_{\mathrm{tan}} = 8.00/1.20 = 6.67$, so $\psi = 81.5^\circ$. Almost all of the acceleration is still radial.

3. Radial acceleration is perpendicular to the velocity. It changes the direction of $\vec{v}$. The rate of change of speed is the tangential acceleration. A purely radial acceleration keeps the speed constant while bending the path.

### Answer 8

1. False. $v = 0$ at the highest point, but $a = -9.80\,\mathrm{m/s^2}$. If the acceleration vanished there, the velocity would remain zero and the ball would not come down.

2. False. With upward positive, $a = -9.80\,\mathrm{m/s^2}$ on the way up, at the top, and on the way down. On the way down the velocity is negative and becoming more negative, which is speeding up in the downward direction, still with negative acceleration.

3. True for equal heights and no air resistance. $v^2 = v_0^2 + 2a\Delta y$ with $\Delta y = 0$ gives $v = \pm v_0$. The negative root is the return velocity. The speed is $v_0$.

### Answer 9

1. $v_x$ is constant, so $a_x = 0$. $v_y = -6.00 + 4.00 t$, so $a_y = 4.00\,\mathrm{m/s^2}$. Both are constant. This is constant acceleration, but $a_y$ is upward in the coordinate used here, not $-g$. Something other than free fall is pushing the object.

2. $x = 2.00 t$. And $y = -6.00 t + \tfrac{1}{2}(4.00)t^2 = -6.00 t + 2.00 t^2$.

3. $y = 0$ when $t(-6.00 + 2.00 t) = 0$, so $t = 0$ or $t = 3.00\,\mathrm{s}$. At $t = 3.00\,\mathrm{s}$, $x = 6.00\,\mathrm{m}$, $v_x = 2.00\,\mathrm{m/s}$, and $v_y = -6.00 + 12.0 = 6.00\,\mathrm{m/s}$. The object crosses the $x$-axis moving upward and to the right. Level-ground projectile formulas assume $a_y = -g$ and a launch from $y = 0$ with $v_y > 0$. Here $a_y$ is positive and the initial vertical velocity is negative. Using $R = v_0^2\sin 2\theta / g$ would invent a free-fall problem this object is not in.

### Answer 10

$v_{0x} = 20.0(0.799) = 16.0\,\mathrm{m/s}$ and $v_{0y} = 20.0(0.602) = 12.0\,\mathrm{m/s}$.

The time to reach $x = 25.0\,\mathrm{m}$ is $t = 25.0/16.0 = 1.56\,\mathrm{s}$.

$$
y = 12.0(1.56) + \tfrac{1}{2}(-9.80)(1.56)^2 = 18.8 - 4.90(2.44) = 18.8 - 12.0 = 6.80\,\mathrm{m}
$$

The crossbar is at $2.44\,\mathrm{m}$. The ball is at $6.80\,\mathrm{m}$ when it reaches the goal line, so it passes over the crossbar. The level-ground range would be $v_0^2\sin 74.0^\circ / g$. That number says where the ball returns to the ground, not whether it is above the bar at $x = 25.0\,\mathrm{m}$.
