# Momentum and Its Conservation

Momentum is the quantity a force changes. A large force acting for a short time, and a small force acting for a long time, can produce the same change in momentum. When the net external force on a system is zero, the total momentum of the system does not change, even if the pieces of the system collide and exchange momentum.

Use SI units: mass in kilograms, velocity in meters per second, momentum in $\mathrm{kg\cdot m/s}$, impulse in $\mathrm{N\cdot s}$. Those last two units are the same unit.

## Definition and impulse

$$
\vec{p} = m\vec{v}, \qquad \vec{J} = \Delta\vec{p} = \vec{p}_f - \vec{p}_i
$$

If the net force is constant during a time interval $\Delta t$,

$$
\vec{J} = \vec{F}_{\mathrm{net}}\,\Delta t = \Delta\vec{p}
$$

If the force varies, the impulse is the area under the $F$-versus-$t$ graph. The average force over the collision satisfies $\vec{F}_{\mathrm{avg}}\Delta t = \Delta\vec{p}$. A bouncing ball often has a larger momentum change than a ball that stops, because the velocity reverses instead of merely dropping to zero. The impulse, and the average force for a given contact time, are larger for the bounce.

Momentum is a vector. In two dimensions, conserve the $x$-component and the $y$-component separately. A collision that looks symmetric in a drawing can still send the two components to different final velocities.

## When the total is conserved

$$
\sum \vec{F}_{\mathrm{ext}} = \frac{d\vec{P}}{dt}
$$

$\vec{P}$ is the total momentum of the system. Internal forces come in third-law pairs. If those pairs are equal and opposite and act along the line joining the objects, they cancel in the total and cannot change $\vec{P}$.

During a hit, an explosion, or a short collision, external forces such as friction or gravity may be small compared with the impulsive internal forces. Then momentum is approximately conserved through the brief interval, even though it is not conserved over a long slide afterward. State the interval you are using.

Kinetic energy is a separate question. An elastic collision conserves kinetic energy. An inelastic collision does not. A perfectly inelastic collision is the special inelastic case in which the objects stick and move with a common velocity. Momentum can be conserved in all three, whenever the external impulse is negligible. Conserving momentum does not give you permission to conserve kinetic energy.

The center of mass of a system with no net external force moves at constant velocity. Collisions rearrange the pieces around that motion. They do not change the center-of-mass velocity.

## One-dimensional results worth rederiving

Two masses, the second at rest, perfectly inelastic:

$$
m_1 v_1 = (m_1 + m_2) V, \qquad V = \frac{m_1}{m_1 + m_2} v_1
$$

The kinetic energy afterward is smaller. The lost energy is converted to heat, deformation, or sound.

One dimension, elastic, second mass at rest:

$$
v_{1f} = \frac{m_1 - m_2}{m_1 + m_2} v_1, \qquad v_{2f} = \frac{2 m_1}{m_1 + m_2} v_1
$$

If $m_1 = m_2$, then $v_{1f} = 0$ and $v_{2f} = v_1$. The velocities are exchanged. If $m_1 \ll m_2$, the light mass rebounds with nearly $-v_1$ and the heavy mass barely moves. If $m_1 \gg m_2$, the heavy mass continues at nearly $v_1$ and the light mass is driven off at nearly $2v_1$.

Both formulas assume one dimension and a target at rest. A moving target, or a two-dimensional hit, needs the conservation statements written again from the start.

## Two dimensions

If $m_1 = m_2$ and the collision is elastic, and the target is at rest, the two final velocities are perpendicular. That is a theorem for this special case, not for every collision. A sticking collision cannot use it, because a sticking collision is not elastic, and the two objects do not have two different final velocities.

Components:

$$
m_1 v_{1ix} = m_1 v_{1fx} + m_2 v_{2fx}
$$

and the same pattern for $y$. If kinetic energy is also conserved, that is one more equation. You need a piece of angle or speed information so the number of unknowns matches.

## Explosions and recoil

An object at rest that splits into two pieces must give the pieces equal and opposite momenta if no external impulse acts. The lighter piece gets the larger speed. Kinetic energy increases. The chemical or spring energy stored in the system supplies it. Momentum conservation and energy conservation are not the same law, and an explosion is the clean example: $P$ stays zero while $K$ grows.

A ballistic pendulum uses both laws in sequence. The collision is perfectly inelastic, so momentum is conserved through the impact and kinetic energy is not. After the combined object swings up, mechanical energy is conserved if the support does no work and friction is ignored. Using energy across the collision, or momentum across the swing, answers the wrong interval.

## Mistakes that change the answer

- Conserving kinetic energy in a sticking collision.
- Conserving momentum of one object instead of the system. Each object’s momentum changes. The total does not, when the hypothesis holds.
- Forgetting a component in two dimensions.
- Using the elastic exchange rule when the masses are unequal.
- Treating a long interval with friction as momentum-conserving just because a collision occurred at the beginning.
- Giving a recoiling lighter piece the smaller speed.

---

## Questions

### Question 1

A $0.400\,\mathrm{kg}$ ball moves at $12.0\,\mathrm{m/s}$ and is struck by a bat. It leaves at $20.0\,\mathrm{m/s}$ in the opposite direction. The contact lasts $8.00\,\mathrm{ms}$.

1. Find the change in momentum and the average force on the ball. Take the incoming direction as positive.
2. Compare the magnitude of that momentum change with the momentum change if the bat had merely stopped the ball.
3. Why does the ball’s weight not belong in the average-force estimate at this precision?

### Question 2

A $2.00\,\mathrm{kg}$ cart moving at $3.00\,\mathrm{m/s}$ collides and sticks to a $1.00\,\mathrm{kg}$ cart at rest on a frictionless track.

1. Find the final speed.
2. Find the kinetic energy before and after, and the energy lost.
3. Is momentum conserved? Is this collision elastic?

### Question 3

A $2.00\,\mathrm{kg}$ object moving at $4.00\,\mathrm{m/s}$ has a one-dimensional elastic collision with a $6.00\,\mathrm{kg}$ object at rest.

1. Find both final velocities.
2. Check momentum and kinetic energy.
3. Repeat the velocity formulas with the masses swapped, a $6.00\,\mathrm{kg}$ object hitting a $2.00\,\mathrm{kg}$ object at rest at the same speed, and explain the sign of the heavy object’s final velocity in the first case.

### Question 4

Two equal masses $m$ collide elastically. The target is at rest. After the collision, the incoming mass moves at $30.0^\circ$ above the $x$-axis. Its initial velocity was $4.00\,\mathrm{m/s}$ along $+x$.

1. Use the $90^\circ$ rule for this special collision to find the direction of the target’s final velocity.
2. Find both final speeds from momentum components.
3. Check that kinetic energy is conserved.

### Question 5

A $0.0200\,\mathrm{kg}$ bullet moving horizontally strikes a $1.98\,\mathrm{kg}$ block hanging at rest and embeds in it. The combined object rises $0.150\,\mathrm{m}$.

1. Find the speed just after the collision.
2. Find the bullet’s speed before the collision.
3. Find the kinetic energy lost in the collision. Say which law you used on which interval, and why one law is illegal on the other interval.

### Question 6

A $4.00\,\mathrm{kg}$ object at rest on a frictionless surface explodes into a $1.00\,\mathrm{kg}$ piece and a $3.00\,\mathrm{kg}$ piece. The $1.00\,\mathrm{kg}$ piece moves east at $12.0\,\mathrm{m/s}$.

1. Find the velocity of the $3.00\,\mathrm{kg}$ piece.
2. Find the kinetic energy created by the explosion.
3. Why is “the total momentum afterward is zero” compatible with a nonzero total kinetic energy?

### Question 7

A $70.0\,\mathrm{kg}$ person standing on a $30.0\,\mathrm{kg}$ cart, both at rest, throws a $2.00\,\mathrm{kg}$ package horizontally at $8.00\,\mathrm{m/s}$ relative to the ground. The cart wheels are frictionless. The person stays on the cart.

1. Find the velocity of the person-cart system after the throw.
2. If the $8.00\,\mathrm{m/s}$ had been relative to the cart instead of the ground, set up the correct momentum equation and solve it. Do not use the answer from part 1.
3. Why does the package’s throw not violate momentum conservation even though the person uses muscle force?

### Question 8

The force on a $0.500\,\mathrm{kg}$ puck is $F_x = 0$ for $t < 0$, rises linearly from $0$ to $40.0\,\mathrm{N}$ between $t = 0$ and $t = 0.100\,\mathrm{s}$, and is zero after that. The puck starts at rest.

1. Find the impulse.
2. Find the final velocity.
3. A constant $20.0\,\mathrm{N}$ force acts for the same $0.100\,\mathrm{s}$. Show that it gives the same impulse, and say what that means for the area of the graph.

### Question 9

True or false, with a reason or a counterexample.

1. If two objects have equal kinetic energies, they have equal momenta.
2. A perfectly inelastic collision conserves momentum whenever the external impulse is negligible, and it does not conserve kinetic energy.
3. The center of mass of a system accelerates only when a net external force acts.
4. In every two-dimensional elastic collision, the final velocities are perpendicular.

### Question 10

A $1500\,\mathrm{kg}$ car moving north at $12.0\,\mathrm{m/s}$ collides and sticks to a $2000\,\mathrm{kg}$ car moving east at $9.00\,\mathrm{m/s}$.

1. Find the velocity of the wreckage, magnitude and direction.
2. Find the kinetic energy lost.
3. During the $0.200\,\mathrm{s}$ collision, friction from the road is a few thousand newtons at most. The momentum change of either car is tens of thousands of $\mathrm{kg\cdot m/s}$. Use that comparison to say why ignoring external forces during the impact is reasonable, and why it stops being reasonable during the long skid after the wreckage starts sliding.

---

## Answers

### Answer 1

1. Take the incoming direction as positive. $p_i = 0.400(12.0) = 4.80\,\mathrm{kg\cdot m/s}$ and $p_f = 0.400(-20.0) = -8.00\,\mathrm{kg\cdot m/s}$.

$$
\Delta p = -8.00 - 4.80 = -12.8\,\mathrm{kg\cdot m/s}
$$

$$
F_{\mathrm{avg}} = \frac{\Delta p}{\Delta t} = \frac{-12.8}{0.00800} = -1.60\times 10^3\,\mathrm{N}
$$

The negative sign means the average force on the ball is opposite the incoming velocity, which is the direction a bat must push.

2. Stopping the ball changes the momentum from $4.80$ to $0$, so $\Delta p = -4.80\,\mathrm{kg\cdot m/s}$. The bounce changes it by $12.8$ in magnitude, $2.67$ times as much, because the ball’s momentum has to be removed and then built in the opposite direction.

3. The weight is $0.400(9.80) = 3.92\,\mathrm{N}$. Over $8.00\,\mathrm{ms}$ its impulse is about $0.031\,\mathrm{N\cdot s}$, compared with $12.8\,\mathrm{N\cdot s}$ from the bat. It changes the third significant figure by nothing that this data can see. Over a long flight, the same weight is the whole story. The short interval is what makes it negligible.

### Answer 2

1. $2.00(3.00) + 0 = 3.00 V$, so $V = 2.00\,\mathrm{m/s}$ in the original direction.

2. $K_i = \tfrac{1}{2}(2.00)(3.00)^2 = 9.00\,\mathrm{J}$. $K_f = \tfrac{1}{2}(3.00)(2.00)^2 = 6.00\,\mathrm{J}$. The collision removes $3.00\,\mathrm{J}$.

3. Momentum is conserved: $6.00 = 3.00(2.00)$. The collision is not elastic, because $9.00\,\mathrm{J}$ became $6.00\,\mathrm{J}$. Sticking is the definition of perfectly inelastic, which is a kind of inelastic collision.

### Answer 3

1. 

$$
v_{1f} = \frac{2.00 - 6.00}{2.00 + 6.00}(4.00) = \frac{-4.00}{8.00}(4.00) = -2.00\,\mathrm{m/s}
$$

$$
v_{2f} = \frac{2(2.00)}{8.00}(4.00) = 2.00\,\mathrm{m/s}
$$

The light incoming object rebounds. The heavy target moves forward more slowly than the original speed.

2. Momentum: $2.00(4.00) = 8.00$, and $2.00(-2.00) + 6.00(2.00) = -4.00 + 12.0 = 8.00$. Kinetic energy: $\tfrac{1}{2}(2.00)(16.0) = 16.0\,\mathrm{J}$ before, and $\tfrac{1}{2}(2.00)(4.00) + \tfrac{1}{2}(6.00)(4.00) = 4.00 + 12.0 = 16.0\,\mathrm{J}$ after.

3. With the masses swapped, $m_1 = 6.00\,\mathrm{kg}$ and $m_2 = 2.00\,\mathrm{kg}$.

$$
v_{1f} = \frac{6.00 - 2.00}{8.00}(4.00) = 2.00\,\mathrm{m/s}, \qquad v_{2f} = \frac{2(6.00)}{8.00}(4.00) = 6.00\,\mathrm{m/s}
$$

The heavy object continues forward. In the first case its final velocity was negative because it was the lighter object hitting a heavier target. The formula $(m_1 - m_2)/(m_1 + m_2)$ is negative only when the incoming mass is smaller than the target. That sign is a rebound, not a direction you are free to drop.

### Answer 4

1. For an elastic collision of equal masses with the target at rest, the final velocity vectors are perpendicular. If one leaves at $30.0^\circ$, the other leaves at $30.0^\circ - 90.0^\circ = -60.0^\circ$.

2. Let $v_1$ be the final speed of the incoming mass and $v_2$ the final speed of the target.

$$
v_1\cos 30.0^\circ + v_2\cos 60.0^\circ = 4.00
$$

$$
v_1\sin 30.0^\circ + v_2\sin(-60.0^\circ) = 0
$$

The $y$ equation is $v_1(0.500) = v_2(\sqrt{3}/2)$, so $v_1 = v_2\sqrt{3}$. Then

$$
(v_2\sqrt{3})\left(\frac{\sqrt{3}}{2}\right) + v_2\left(\frac{1}{2}\right) = 4.00
$$

$$
v_2\left(\frac{3}{2} + \frac{1}{2}\right) = 4.00, \qquad v_2 = 2.00\,\mathrm{m/s}
$$

and $v_1 = 2.00\sqrt{3} = 3.46\,\mathrm{m/s}$.

3. $K_i = \tfrac{1}{2}m(4.00)^2 = 8.00 m$. After the collision, use the exact speeds $v_1 = 2.00\sqrt{3}$ and $v_2 = 2.00$:

$$
\tfrac{1}{2}m(2.00\sqrt{3})^2 + \tfrac{1}{2}m(2.00)^2 = \tfrac{1}{2}m(12.0) + \tfrac{1}{2}m(4.00) = 8.00 m
$$

The displayed speed $3.46\,\mathrm{m/s}$ is $2.00\sqrt{3}$ rounded to three significant figures. Squaring $3.46$ gives $11.97$, which rounds back to $12.0$. The kinetic energy is unchanged.

### Answer 5

1. After the collision the mass is $2.00\,\mathrm{kg}$. From the bottom of the swing to the top, mechanical energy gives

$$
\tfrac{1}{2}(2.00) V^2 = (2.00)(9.80)(0.150)
$$

$$
V^2 = 2(9.80)(0.150) = 2.94, \qquad V = 1.71\,\mathrm{m/s}
$$

2. Momentum through the embedding: $0.0200 v = 2.00(1.71)$, so $v = 171\,\mathrm{m/s}$.

3. $K_i = \tfrac{1}{2}(0.0200)(171)^2 = 293\,\mathrm{J}$. $K$ just after impact is $\tfrac{1}{2}(2.00)(1.71)^2 = 2.94\,\mathrm{J}$. About $290\,\mathrm{J}$ is lost in the collision. Momentum was used only on the brief impact, where the support’s impulse is negligible compared with the impulsive contact. Energy was used only on the swing, where the tension is perpendicular to the motion and gravity is conservative. Using energy on the impact would miss the lost $290\,\mathrm{J}$. Using momentum on the swing would miss the external impulse from the support as the block changes direction.

### Answer 6

1. $1.00(12.0) + 3.00 v = 0$, so $v = -4.00\,\mathrm{m/s}$. The heavier piece moves west at $4.00\,\mathrm{m/s}$.

2. $K = \tfrac{1}{2}(1.00)(144) + \tfrac{1}{2}(3.00)(16.0) = 72.0 + 24.0 = 96.0\,\mathrm{J}$. All of it was supplied by the explosion. None of it was present as kinetic energy beforehand.

3. Momenta are vectors. $12.0\,\mathrm{kg\cdot m/s}$ east plus $12.0\,\mathrm{kg\cdot m/s}$ west is zero. Kinetic energy depends on speed, and both speeds are positive contributions. Equal and opposite momenta cancel. The kinetic energies add.

### Answer 7

1. The system is person, cart, and package, total mass $102\,\mathrm{kg}$, initially at rest. After the throw, let $V$ be the velocity of the $100\,\mathrm{kg}$ person-cart combination, positive in the direction of the package.

$$
0 = 2.00(8.00) + 100 V, \qquad V = -0.160\,\mathrm{m/s}
$$

The person and cart recoil opposite the package at $0.160\,\mathrm{m/s}$.

2. Let $V$ again be the ground velocity of the person-cart, positive in the direction the package is thrown relative to the cart. The package’s ground velocity is $V + 8.00$.

$$
0 = 100 V + 2.00(V + 8.00)
$$

$$
102 V = -16.0, \qquad V = -0.157\,\mathrm{m/s}
$$

The package’s ground speed is $7.84\,\mathrm{m/s}$. The two problems are different because $8.00\,\mathrm{m/s}$ was measured in two different frames.

3. Muscle forces are internal to the system of person plus package plus cart. They cancel in the total momentum. The person pushes the package forward and the package pushes the person backward. The total stays zero.

### Answer 8

1. The graph is a triangle of base $0.100\,\mathrm{s}$ and height $40.0\,\mathrm{N}$. The area is $\tfrac{1}{2}(0.100)(40.0) = 2.00\,\mathrm{N\cdot s}$.

2. $m v = 2.00$, so $v = 2.00/0.500 = 4.00\,\mathrm{m/s}$.

3. $20.0(0.100) = 2.00\,\mathrm{N\cdot s}$. A rectangle of height $20.0\,\mathrm{N}$ and width $0.100\,\mathrm{s}$ has the same area as the triangle of height $40.0\,\mathrm{N}$. Impulse depends on that area, not on the peak force. The final velocities match. The peak force, and the damage it might do, do not have to match.

### Answer 9

1. False. $K = p^2/(2m)$, so the same kinetic energy at two different masses means two different momenta. A $1.00\,\mathrm{kg}$ object and a $4.00\,\mathrm{kg}$ object with $K = 8.00\,\mathrm{J}$ have speeds $4.00\,\mathrm{m/s}$ and $2.00\,\mathrm{m/s}$, and momenta $4.00$ and $8.00\,\mathrm{kg\cdot m/s}$.

2. True. That is the definition used in these notes: external impulse negligible implies momentum conservation, and “perfectly inelastic” means the objects stick, which dissipates kinetic energy unless the collision was already trivial.

3. True. $\sum \vec{F}_{\mathrm{ext}} = M\vec{a}_{\mathrm{cm}}$. Zero net external force means the center of mass does not accelerate.

4. False. Perpendicular final velocities require equal masses, an elastic collision, and a target at rest. Two unequal masses, or a sticking collision, do not obey that geometry. Question 4 used the case where the rule applies. Question 10 is a sticking collision, and one wreckage velocity cannot be “two perpendicular velocities.”

### Answer 10

1. Take east as $+x$ and north as $+y$.

$$
P_x = 2000(9.00) = 1.80\times 10^4\,\mathrm{kg\cdot m/s}
$$

$$
P_y = 1500(12.0) = 1.80\times 10^4\,\mathrm{kg\cdot m/s}
$$

Total mass $3500\,\mathrm{kg}$.

$$
v_x = v_y = \frac{1.80\times 10^4}{3500} = 5.14\,\mathrm{m/s}
$$

$$
v = \sqrt{5.14^2 + 5.14^2} = 7.27\,\mathrm{m/s}
$$

at $45.0^\circ$ north of east, because the two momentum components happened to be equal.

2. 

$$
K_i = \tfrac{1}{2}(1500)(144) + \tfrac{1}{2}(2000)(81.0) = 1.08\times 10^5 + 8.10\times 10^4 = 1.89\times 10^5\,\mathrm{J}
$$

$$
K_f = \tfrac{1}{2}(3500)(7.27)^2 = 9.25\times 10^4\,\mathrm{J}
$$

The loss is about $9.65\times 10^4\,\mathrm{J}$.

3. A momentum change of order $10^4\,\mathrm{kg\cdot m/s}$ in $0.200\,\mathrm{s}$ requires an average force of order $5\times 10^4\,\mathrm{N}$. A few thousand newtons of friction is a small fraction of that during the impact, so the external impulse is a small correction. After the cars stick, the only horizontal forces left are friction and similar external forces, acting for seconds rather than a fifth of a second. Those forces are no longer negligible, and they are what bring the wreckage to rest. Momentum of the two-car system is not conserved during the skid.
