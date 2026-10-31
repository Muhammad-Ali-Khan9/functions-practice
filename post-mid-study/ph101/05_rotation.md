# Rotational Kinematics and Dynamics

Translation tracks where the center of mass goes. Rotation tracks how the object turns about an axis. The equations match the linear ones, with $\theta$, $\omega$, and $\alpha$ in place of $x$, $v$, and $a$, but only if the angles are in radians. A speed of $v = r\omega$ is wrong if $\omega$ was left in revolutions per minute or degrees per second.

Use $g = 9.80\,\mathrm{m/s^2}$. A clockwise sense is negative only after you say so. The right-hand rule is the other way to name the sign: fingers curl with the rotation, thumb along $\vec{\omega}$.

## Kinematics at constant $\alpha$

$$
\begin{aligned}
\omega &= \omega_0 + \alpha t \\
\theta &= \theta_0 + \omega_0 t + \tfrac{1}{2}\alpha t^2 \\
\omega^2 &= \omega_0^2 + 2\alpha(\theta - \theta_0)
\end{aligned}
$$

These assume constant angular acceleration, just as the linear set assumes constant $a$. A wheel that speeds up and then rolls at constant $\omega$ needs two intervals.

The link to a point at distance $r$ from the axis is

$$
s = r\theta, \qquad v = r\omega, \qquad a_{\mathrm{tan}} = r\alpha, \qquad a_{\mathrm{rad}} = \frac{v^2}{r} = \omega^2 r
$$

$s$, $v$, and $a_{\mathrm{tan}}$ describe motion along the tangent. $a_{\mathrm{rad}}$ points toward the axis and is present whenever $\omega \neq 0$, even if $\alpha = 0$. The total acceleration of a point on a speeding wheel has both pieces, perpendicular to each other.

## Torque and Newton’s second law for rotation

The torque of a force about a chosen axis is

$$
\tau = r F \sin\phi = F\, d
$$

$\phi$ is the angle between the position vector, from the axis to the point of application, and the force. $d = r\sin\phi$ is the lever arm, the perpendicular distance from the axis to the line of action of $\vec{F}$. A force through the axis has zero torque. A longer wrench increases $r$, not the force.

$$
\sum \tau = I\alpha
$$

$I$ and $\alpha$ must refer to the same axis. Torque is in $\mathrm{N\cdot m}$. That combination is not a joule until the force actually moves through an angle and you compute work $\tau\theta$. Leaving the units looking like energy does not make torque a scalar energy.

## Moments of inertia

For a collection of particles, $I = \sum m r^2$, with $r$ the perpendicular distance to the axis. For a continuous object the useful results are

| Object | Axis | $I$ |
| --- | --- | --- |
| Thin hoop or hollow cylinder | central axis | $MR^2$ |
| Solid cylinder or disk | central axis | $\tfrac{1}{2}MR^2$ |
| Solid sphere | any diameter | $\tfrac{2}{5}MR^2$ |
| Thin rod | center, perpendicular to the rod | $\tfrac{1}{12}ML^2$ |
| Thin rod | end, perpendicular to the rod | $\tfrac{1}{3}ML^2$ |

The parallel-axis theorem moves from a center-of-mass axis to a parallel axis a distance $d$ away:

$$
I = I_{\mathrm{cm}} + Md^2
$$

It does not move between axes that are not parallel, and $I_{\mathrm{cm}}$ must be the moment about the center of mass, not about an end you already computed.

## Rolling without slipping

The contact point is instantaneously at rest. Then

$$
v_{\mathrm{cm}} = r\omega, \qquad a_{\mathrm{cm}} = r\alpha
$$

with the signs matched so the rotation is consistent with the translation. Static friction supplies the torque that spins the object up. If the contact point does not slide, that friction does no work, because the point where it acts has zero velocity. Mechanical energy can still be used on a rolling object going down an incline. Kinetic friction would be the force that appears after slipping starts, and it does dissipate energy.

For an object rolling from rest down an incline of angle $\theta$,

$$
a = \frac{g\sin\theta}{1 + I/(MR^2)}
$$

A hoop has $I/(MR^2) = 1$ and the smallest acceleration in the usual list. A solid sphere has $2/5$ and beats a disk, which has $1/2$, which beats the hoop. The mass and radius cancel. The winner is the object that stores the smallest fraction of its kinetic energy in rotation.

$$
K = \tfrac{1}{2}Mv_{\mathrm{cm}}^2 + \tfrac{1}{2}I\omega^2
$$

## Angular momentum

For a rigid body spinning about a fixed symmetry axis,

$$
L = I\omega, \qquad \sum \tau_{\mathrm{ext}} = \frac{dL}{dt}
$$

If the net external torque on a system about an axis is zero, $L$ about that axis is constant. Internal torques cancel in the same way internal forces cancel in linear momentum, provided the forces are central.

A person on a low-friction stool who pulls their arms in decreases $I$ and increases $\omega$ so that $I\omega$ stays constant. The rotational kinetic energy increases. The person does positive work with their muscles. Conservation of angular momentum is not conservation of kinetic energy.

A particle’s angular momentum about a point is $\vec{r}\times\vec{p}$, magnitude $mvr\sin\phi$. A particle moving in a straight line still has angular momentum about a point that is not on that line. It is zero only when the line of motion passes through the point.

## A pulley that is not light

If the pulley has moment of inertia $I$ and radius $R$, the two string tensions are not equal. The difference supplies the torque:

$$
(T_2 - T_1)R = I\alpha = I\frac{a}{R}
$$

Each hanging mass still has its own $\sum F = ma$. Solving the three equations gives

$$
a = \frac{(m_2 - m_1)g}{m_1 + m_2 + I/R^2}
$$

with $m_2 > m_1$. The light-pulley Atwood formula is the special case $I = 0$. Using that formula on a massive pulley overstates the acceleration.

## Mistakes that change the answer

- Using degrees in $s = r\theta$ or $v = r\omega$.
- Computing torque with $rF$ when the force is not perpendicular to the position vector.
- Using $I$ about the center when the object is pivoted at the end.
- Setting $a = g\sin\theta$ for an object that is rolling rather than sliding.
- Conserving rotational kinetic energy when the person pulls their arms in.
- Cancelling $R$ incorrectly and then quoting $\alpha$ without dividing $a$ by $R$.

---

## Questions

### Question 1

A wheel starts at $4.00\,\mathrm{rad/s}$ and has a constant angular acceleration of $-0.500\,\mathrm{rad/s^2}$.

1. When does it stop, and through what angle, in radians and in revolutions?
2. A point on the rim is $0.300\,\mathrm{m}$ from the axis. Find its tangential and radial accelerations at the initial instant.
3. Why does the radial acceleration not stay constant even though $\alpha$ does?

### Question 2

A force of $12.0\,\mathrm{N}$ is applied at the end of a $0.250\,\mathrm{m}$ wrench. The angle between the wrench and the force is $30.0^\circ$.

1. Find the torque about the bolt.
2. What angle would maximize the torque, and what is that maximum?
3. A second force of $12.0\,\mathrm{N}$ is applied halfway along the wrench, perpendicular to it. Compare its torque with the maximum from part 2.

### Question 3

A thin rod has mass $2.00\,\mathrm{kg}$ and length $0.800\,\mathrm{m}$.

1. Find $I$ about an axis through the center, perpendicular to the rod.
2. Use the parallel-axis theorem to move that axis to one end. Check the result against $ML^2/3$.
3. Why does adding $Md^2$ with $d = L$, instead of $d = L/2$, give a wrong answer?

### Question 4

A solid disk and a thin hoop have the same mass and the same radius. They roll without slipping from rest down a $30.0^\circ$ incline.

1. Find the acceleration of each.
2. Which one is ahead after they have each rolled $2.00\,\mathrm{m}$ along the incline, and what are the two speeds there? Use energy or the constant-acceleration formula. They must agree.
3. Why does static friction do no work in this motion, and what is it there for?

### Question 5

Masses $m_1 = 2.00\,\mathrm{kg}$ and $m_2 = 4.00\,\mathrm{kg}$ hang on a string over a solid-disk pulley of mass $M = 3.00\,\mathrm{kg}$ and radius $R = 0.200\,\mathrm{m}$. The heavier mass descends. The string does not slip.

1. Find the linear acceleration.
2. Find both tensions.
3. Find the angular acceleration of the pulley.
4. Show the number you would have got from the light-pulley formula, and say which way it errs.

### Question 6

A $4.00\,\mathrm{kg}$ rod of length $1.20\,\mathrm{m}$ is pivoted at one end and released from rest in a horizontal position. It rotates in a vertical plane.

1. Find $I$ about the pivot and the initial angular acceleration.
2. Find $\omega$ when the rod reaches the vertical position, using energy.
3. Why is $\alpha$ from part 1 illegal as a constant-$\alpha$ input for the whole swing?

### Question 7

A student on a stool holds weights with the rotation axis vertical. Friction is negligible. Initially $I = 5.00\,\mathrm{kg\cdot m^2}$ and $\omega = 2.00\,\mathrm{rad/s}$. The student pulls the weights in, and $I$ becomes $2.00\,\mathrm{kg\cdot m^2}$.

1. Find the new angular velocity.
2. Find the kinetic energy before and after.
3. Where does the extra kinetic energy come from, if angular momentum is conserved?

### Question 8

A $0.500\,\mathrm{kg}$ particle moves in a straight line. At one instant its position relative to the origin is $2.00\,\hat{i}\,\mathrm{m}$ and its velocity is $3.00\,\hat{j}\,\mathrm{m/s}$.

1. Find the angular momentum about the origin.
2. A classmate says a straight-line path cannot have angular momentum. Answer using this instant, and also name the one straight line through this velocity direction that would give zero angular momentum about the origin.
3. If the particle is a distance $2.00\,\mathrm{m}$ from the origin but the velocity points directly away from the origin, what is $L$?

### Question 9

A turntable is a solid disk of mass $8.00\,\mathrm{kg}$ and radius $0.400\,\mathrm{m}$, rotating freely at $3.00\,\mathrm{rad/s}$. A $1.00\,\mathrm{kg}$ lump of clay drops vertically onto the rim and sticks.

1. Find $I$ of the disk and $I$ of the clay about the turntable axis just after it sticks. The clay’s vertical velocity does not contribute to $L$ about the vertical axis.
2. Find the new angular velocity.
3. Find the kinetic energy lost. Why is the collision allowed to conserve angular momentum and not kinetic energy?

### Question 10

True or false, with a reason or a counterexample.

1. Doubling the radius of a hoop, at fixed mass, doubles $I$ about its center.
2. An object with $a_{\mathrm{rad}} \neq 0$ must have a net torque about the center.
3. For rolling without slipping, $v = r\omega$ can be used with $\omega$ in rev/s if $r$ is in meters.
4. $\sum \tau_{\mathrm{ext}} = 0$ about an axis implies that $L$ about that axis is constant, even if the moment of inertia changes, as in the stool problem.

---

## Answers

### Answer 1

1. $0 = 4.00 + (-0.500)t$ gives $t = 8.00\,\mathrm{s}$.

$$
\theta = 4.00(8.00) + \tfrac{1}{2}(-0.500)(8.00)^2 = 32.0 - 16.0 = 16.0\,\mathrm{rad}
$$

The same result from $\omega^2 = \omega_0^2 + 2\alpha\theta$ is $0 = 16.0 + 2(-0.500)\theta$, so $\theta = 16.0\,\mathrm{rad}$. In revolutions, $16.0/(2\pi) = 2.55\,\mathrm{rev}$.

2. $a_{\mathrm{tan}} = r\alpha = 0.300(-0.500) = -0.150\,\mathrm{m/s^2}$. The negative sign is the slowing of the tangential speed. Initially $a_{\mathrm{rad}} = \omega^2 r = (16.0)(0.300) = 4.80\,\mathrm{m/s^2}$ toward the center.

3. $a_{\mathrm{rad}} = \omega^2 r$, and $\omega$ is changing. At the stop, $a_{\mathrm{rad}} = 0$ while $a_{\mathrm{tan}}$ is still $-0.150\,\mathrm{m/s^2}$. Constant $\alpha$ holds the tangential piece fixed. It does not hold the radial piece fixed.

### Answer 2

1. $\tau = rF\sin\phi = 0.250(12.0)\sin 30.0^\circ = 3.00(0.500) = 1.50\,\mathrm{N\cdot m}$.

2. The sine is $1$ when $\phi = 90.0^\circ$. The maximum torque is $0.250(12.0) = 3.00\,\mathrm{N\cdot m}$.

3. Halfway along, $r = 0.125\,\mathrm{m}$, and the force is perpendicular, so $\tau = 0.125(12.0) = 1.50\,\mathrm{N\cdot m}$. The shorter lever arm cuts the maximum in half and lands on the same torque as the angled force at the end. A perpendicular force is not automatically a larger torque if it is applied closer to the bolt.

### Answer 3

1. $I_{\mathrm{cm}} = ML^2/12 = 2.00(0.800)^2/12 = 1.28/12 = 0.107\,\mathrm{kg\cdot m^2}$.

2. The end is $d = L/2 = 0.400\,\mathrm{m}$ from the center.

$$
I_{\mathrm{end}} = 0.107 + 2.00(0.400)^2 = 0.107 + 0.320 = 0.427\,\mathrm{kg\cdot m^2}
$$

And $ML^2/3 = 1.28/3 = 0.427\,\mathrm{kg\cdot m^2}$. The two routes agree.

3. $d$ is the distance between the two parallel axes, not the length of the rod. The center-to-end distance is $L/2$. Using $d = L$ adds $M L^2 = 1.28$ and produces $1.39\,\mathrm{kg\cdot m^2}$, which is not the end-axis value. The theorem does not say “add $M$ times the square of whatever length appears in the problem.”

### Answer 4

1. For the disk, $I/(MR^2) = 1/2$, so

$$
a_{\mathrm{disk}} = \frac{g\sin 30.0^\circ}{1 + 1/2} = \frac{9.80(0.500)}{1.50} = 3.27\,\mathrm{m/s^2}
$$

For the hoop, $I/(MR^2) = 1$, so

$$
a_{\mathrm{hoop}} = \frac{4.90}{2.00} = 2.45\,\mathrm{m/s^2}
$$

2. The disk has the larger acceleration, so it is ahead. From $v^2 = 2a s$ with $s = 2.00\,\mathrm{m}$,

$$
v_{\mathrm{disk}} = \sqrt{2(3.27)(2.00)} = \sqrt{13.1} = 3.61\,\mathrm{m/s}
$$

$$
v_{\mathrm{hoop}} = \sqrt{2(2.45)(2.00)} = \sqrt{9.80} = 3.13\,\mathrm{m/s}
$$

Energy gives the same speeds. Loss in potential energy $Mgh$ equals $\tfrac{1}{2}Mv^2 + \tfrac{1}{2}I\omega^2$ with $\omega = v/R$ and $h = s\sin\theta = 2.00(0.500) = 1.00\,\mathrm{m}$. For the disk,

$$
Mg(1.00) = \tfrac{1}{2}Mv^2 + \tfrac{1}{4}Mv^2 = \tfrac{3}{4}Mv^2
$$

$$
v^2 = \frac{4g}{3} = 13.1, \qquad v = 3.61\,\mathrm{m/s}
$$

For the hoop, $Mgh = \tfrac{1}{2}Mv^2 + \tfrac{1}{2}Mv^2 = Mv^2$, so $v^2 = g(1.00) = 9.80$.

3. The contact point is instantaneously at rest, so the static-friction displacement during the instant it acts is zero, and the work is zero. The friction still exerts a torque, which is what creates the spin. Without it the object would slide with $\alpha = 0$ and $a = g\sin\theta$. Energy accounting does not need the friction force as an energy input. The torque equation still needs it.

### Answer 5

1. $I = \tfrac{1}{2}MR^2$, so $I/R^2 = M/2 = 1.50\,\mathrm{kg}$.

$$
a = \frac{(4.00 - 2.00)9.80}{2.00 + 4.00 + 1.50} = \frac{19.6}{7.50} = 2.61\,\mathrm{m/s^2}
$$

2. The $2.00\,\mathrm{kg}$ mass accelerates upward: $T_1 - m_1 g = m_1 a$, so

$$
T_1 = 2.00(9.80 + 2.61) = 24.8\,\mathrm{N}
$$

The $4.00\,\mathrm{kg}$ mass accelerates downward: $m_2 g - T_2 = m_2 a$, so

$$
T_2 = 4.00(9.80 - 2.61) = 28.7\,\mathrm{N}
$$

The difference is $T_2 - T_1 = 3.92\,\mathrm{N}$, and $(I/R^2)a = 1.50(2.61) = 3.92\,\mathrm{N}$. The torque equation checks.

3. $\alpha = a/R = 2.61/0.200 = 13.1\,\mathrm{rad/s^2}$.

4. The light-pulley acceleration would be $19.6/(2.00 + 4.00) = 3.27\,\mathrm{m/s^2}$. It is larger than $2.61\,\mathrm{m/s^2}$. Ignoring $I$ pretends none of the available force has to angularly accelerate the disk, so it overstates $a$.

### Answer 6

1. $I = ML^2/3 = 4.00(1.20)^2/3 = 5.76/3 = 1.92\,\mathrm{kg\cdot m^2}$. In the horizontal position the weight acts at the center, perpendicular to the rod, with lever arm $L/2 = 0.600\,\mathrm{m}$.

$$
\tau = 4.00(9.80)(0.600) = 23.5\,\mathrm{N\cdot m}, \qquad \alpha = \frac{23.5}{1.92} = 12.3\,\mathrm{rad/s^2}
$$

2. The center drops a distance $L/2 = 0.600\,\mathrm{m}$. Take potential energy zero at the bottom of that drop.

$$
Mg(0.600) = \tfrac{1}{2}I\omega^2, \qquad 23.5 = \tfrac{1}{2}(1.92)\omega^2
$$

$$
\omega^2 = 24.5, \qquad \omega = 4.95\,\mathrm{rad/s}
$$

3. The lever arm of the weight is $(L/2)\cos\psi$ if $\psi$ is the angle from the horizontal, or $(L/2)\sin\theta$ if $\theta$ is measured from the vertical. Either way it changes as the rod falls. So $\tau$ and $\alpha$ change. The initial $\alpha$ is only the starting value. Using $\theta = \tfrac{1}{2}\alpha t^2$ with that $\alpha$ across the whole quarter turn invents a constant torque the weight does not provide. Energy does not need $\alpha$ to be constant.

### Answer 7

1. $I_i\omega_i = I_f\omega_f$ gives $5.00(2.00) = 2.00\,\omega_f$, so $\omega_f = 5.00\,\mathrm{rad/s}$.

2. $K_i = \tfrac{1}{2}(5.00)(2.00)^2 = 10.0\,\mathrm{J}$. $K_f = \tfrac{1}{2}(2.00)(5.00)^2 = 25.0\,\mathrm{J}$.

3. The student does positive work pulling the weights inward. In the rotating frame the weights tend to slide outward, and pulling them in is a displacement against that tendency. Angular momentum stays constant because the stool bearing supplies no significant external torque. Kinetic energy is not required to stay constant. The muscle work is the extra $15.0\,\mathrm{J}$.

### Answer 8

1. $\vec{L} = \vec{r}\times\vec{p} = m(\vec{r}\times\vec{v})$. Here $\vec{r}\times\vec{v} = 2.00(3.00)\,\hat{k} = 6.00\,\hat{k}$, so

$$
\vec{L} = 0.500(6.00)\,\hat{k} = 3.00\,\hat{k}\,\mathrm{kg\cdot m^2/s}
$$

2. The path being straight does not put the origin on the path. The perpendicular distance from the origin to the line of motion is $2.00\,\mathrm{m}$, and $L = mvd = 0.500(3.00)(2.00) = 3.00\,\mathrm{kg\cdot m^2/s}$. The straight line that would give zero angular momentum is the line through the origin in the $\hat{j}$ direction. This particle is on a parallel line, $2.00\,\mathrm{m}$ to the side.

3. Then $\phi = 0$ between $\vec{r}$ and $\vec{v}$, so $\sin\phi = 0$ and $\vec{L} = 0$. Radial velocity, toward or away from the origin, contributes no angular momentum about the origin.

### Answer 9

1. $I_{\mathrm{disk}} = \tfrac{1}{2}(8.00)(0.400)^2 = 4.00(0.160) = 0.640\,\mathrm{kg\cdot m^2}$. The clay at the rim has $I_{\mathrm{clay}} = mR^2 = 1.00(0.160) = 0.160\,\mathrm{kg\cdot m^2}$.

2. The clay arrives with no angular momentum about the axis. Then

$$
0.640(3.00) = (0.640 + 0.160)\omega, \qquad 1.92 = 0.800\,\omega, \qquad \omega = 2.40\,\mathrm{rad/s}
$$

3. $K_i = \tfrac{1}{2}(0.640)(9.00) = 2.88\,\mathrm{J}$. $K_f = \tfrac{1}{2}(0.800)(2.40)^2 = 2.30\,\mathrm{J}$. The loss is $0.576\,\mathrm{J}$. The hit is inelastic: the clay sticks and deforms. External torques about the rotation axis are negligible during the brief impact if the bearing is good, so $L$ is conserved. Inelastic sticking removes kinetic energy. The vertical momentum of the clay is a separate component, absorbed by the bearing, and it was never part of $L$ about the vertical axis.

### Answer 10

1. False. For a hoop, $I = MR^2$. Doubling $R$ multiplies $I$ by four, not by two.

2. False. Uniform circular motion has $a_{\mathrm{rad}} = v^2/r \neq 0$ and $\alpha = 0$, so the net torque about the center is zero. The net force is not zero. It is inward. Torque, not force, decides $\alpha$.

3. False. $v = r\omega$ needs $\omega$ in radians per second. One revolution per second is $2\pi\,\mathrm{rad/s}$. Using the revolution number as if it were $\omega$ understates the speed by $2\pi$.

4. True for the axis about which the external torque vanishes. $L = I\omega$ can stay constant while $I$ falls and $\omega$ rises. That is the stool. The statement is about $L$, not about $\omega$ and not about kinetic energy.
