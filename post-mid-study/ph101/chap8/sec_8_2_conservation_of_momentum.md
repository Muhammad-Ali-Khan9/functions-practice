# Section 8.2 — Conservation of Momentum

Young and Freedman, *University Physics*, Chapter 8. Section 8.1 asked how a force changes one object’s momentum. This section asks when the *total* momentum of a system stays the same. Detailed elastic and inelastic collision formulas belong to later sections. Here the tools are the isolated-system condition and $\vec{P}_i = \vec{P}_f$.

Use $g = 9.80\,\mathrm{m/s^2}$. Momentum is in $\mathrm{kg\cdot m/s}$. Choose axes carefully; momentum is a vector.

## Isolated system

For a system of particles,

$$
\sum \vec{F}_{\mathrm{ext}} = \frac{d\vec{P}}{dt}, \qquad \vec{P} = \sum_i m_i\vec{v}_i
$$

If the net external force is zero, then $d\vec{P}/dt = 0$, so

$$
\vec{P} = \mathrm{constant}, \qquad \vec{P}_i = \vec{P}_f
$$

That is the conservation of momentum. The system is called isolated (or the external impulse is negligible over the interval you care about).

Internal forces come in Newton third-law pairs. Those pairs cancel in the total $\sum\vec{F}$, so they cannot change $\vec{P}$. They *can* change each piece’s own momentum. Momentum is traded inside the system. The sum stays fixed.

## Choosing the system

The statement “momentum is conserved” is meaningless until you name the system and the time interval.

- Bat alone: the bat’s momentum changes. The system is not isolated.
- Bat + ball, during the short hit: the large forces are internal. External impulses from gravity and the batter’s hands may be small by comparison. Then $\vec{P}$ of bat + ball is approximately conserved through the contact.
- After the hit, friction and other long-interval forces matter again. Do not stretch the conservation claim past the brief collision.

During an explosion, a recoil, or a catch on ice, the same idea applies: put every interacting piece inside the system, and use an interval in which external impulse is negligible.

## One dimension

Take right as positive. For two objects,

$$
m_1 v_{1i} + m_2 v_{2i} = m_1 v_{1f} + m_2 v_{2f}
$$

If the second object starts at rest and they stick together,

$$
m_1 v_{1i} = (m_1 + m_2)V, \qquad V = \frac{m_1}{m_1 + m_2}v_{1i}
$$

That sticking result is momentum conservation only. Kinetic energy decreases. Do not add an energy equation for the impact unless the problem separately requires it.

If a system starts at rest and splits into two pieces with no external impulse,

$$
0 = m_1 v_{1f} + m_2 v_{2f} \implies m_1 v_{1f} = -m_2 v_{2f}
$$

The lighter piece gets the larger speed. Kinetic energy *increases*; stored chemical or spring energy supplies it. Momentum can stay zero while kinetic energy grows.

## Two dimensions

Conserve components separately:

$$
\sum m_i v_{ix,i} = \sum m_i v_{ix,f}, \qquad \sum m_i v_{iy,i} = \sum m_i v_{iy,f}
$$

A pickup moving west and a sedan moving north each contribute only one component to the total. After a collision, the pieces can share both components. Draw the axes, write both equations, and solve. Do not add speeds as if they were scalars.

## Mistakes that change the answer

- Conserving momentum of one object instead of the system.
- Using a friction or gravity interval as if it were collision-short and impulse-free.
- Conserving kinetic energy just because momentum is conserved.
- Dropping a sign when one velocity reverses or one mass recoils opposite the throw.
- Adding vector momenta by adding magnitudes without components.
- Giving the lighter fragment the smaller speed after a rest-to-explosion split.

---

## Questions

### Question 1

A $68.5\,\mathrm{kg}$ astronaut at rest relative to a space station throws a $2.25\,\mathrm{kg}$ tool at $3.20\,\mathrm{m/s}$ relative to the station, away from herself. There is no external force during the throw.

1. Find the astronaut’s recoil velocity relative to the station.
2. Find the total momentum of astronaut + tool before and after the throw.
3. Why is kinetic energy not zero after the throw even though the total momentum is zero?

### Question 2

A $0.600\,\mathrm{kg}$ ball moves horizontally at $10.0\,\mathrm{m/s}$ on frictionless ice. A $70.0\,\mathrm{kg}$ student at rest catches it.

1. Find the common speed afterward.
2. If instead the ball bounces off the student’s chest at $8.00\,\mathrm{m/s}$ opposite its original direction, find the student’s speed afterward.
3. In which case is $\lvert\Delta p\rvert$ of the ball larger, and how does that relate to the student’s final speed?

### Question 3

On a frictionless air table, puck A ($0.250\,\mathrm{kg}$) moves toward puck B ($0.350\,\mathrm{kg}$), which is at rest. After the collision, A moves at $0.120\,\mathrm{m/s}$ to the left and B at $0.650\,\mathrm{m/s}$ to the right. Take right as positive.

1. Find the speed of A before the collision.
2. Find the change in total kinetic energy.
3. Was kinetic energy conserved? Was momentum conserved? Explain the difference.

### Question 4

A $1750\,\mathrm{kg}$ car traveling right at $1.50\,\mathrm{m/s}$ collides with a $1450\,\mathrm{kg}$ car traveling left at $1.10\,\mathrm{m/s}$. After the collision the heavier car moves right at $0.250\,\mathrm{m/s}$. Ignore road friction during the brief collision. Take right as positive.

1. Find the velocity of the lighter car just after the collision.
2. Find the change in the combined kinetic energy.
3. Why is it valid to ignore the cars’ weights for the momentum balance during the hit?

### Question 5

Two ice skaters push off from rest on frictionless ice. Daniel has mass $65.0\,\mathrm{kg}$ and Rebecca has mass $45.0\,\mathrm{kg}$. After they separate, Rebecca moves at $2.50\,\mathrm{m/s}$ to the right.

1. Find Daniel’s velocity.
2. Find the total kinetic energy afterward.
3. Where did that kinetic energy come from?

### Question 6

A $2500\,\mathrm{kg}$ pickup travels west at $14.0\,\mathrm{m/s}$. A $1500\,\mathrm{kg}$ sedan travels north at $23.0\,\mathrm{m/s}$. Take east as $+x$ and north as $+y$.

1. Find the $x$- and $y$-components of the total momentum.
2. Find the magnitude and direction of the total momentum (angle from east toward north, or state a clear reference).
3. If the vehicles stick together in an intersection collision with negligible external impulse, find their common velocity components just afterward.

### Question 7

A $4.00\,\mathrm{kg}$ rifle at rest fires a $10.0\,\mathrm{g}$ bullet at $800\,\mathrm{m/s}$ relative to the ground. The rifle is free to recoil on a smooth horizontal surface.

1. Find the recoil speed of the rifle.
2. Find the kinetic energy of the bullet and of the rifle.
3. Why is the rifle’s kinetic energy much smaller even though the momenta are equal in magnitude?

### Question 8

True or false, with a reason or a counterexample.

1. If the net external force on a system is zero, each object in the system has constant momentum.
2. Internal forces can change the total momentum of an isolated system.
3. A system can have zero total momentum and nonzero total kinetic energy.
4. Momentum conservation requires that kinetic energy also be conserved.

### Question 9

A $2.00\,\mathrm{kg}$ cart moving at $3.00\,\mathrm{m/s}$ to the right on a frictionless track collides and sticks to a $1.00\,\mathrm{kg}$ cart at rest.

1. Find the final common speed.
2. Find the fraction of the initial kinetic energy that remains after the collision.
3. A student writes “energy is conserved, so $\tfrac12(2.00)(3.00)^2 = \tfrac12(3.00)V^2$.” What is wrong with that step for this impact?

### Question 10

An artillery shell of mass $20.0\,\mathrm{kg}$ is flying horizontally at $150\,\mathrm{m/s}$ when it explodes into two fragments. One fragment of mass $12.0\,\mathrm{kg}$ continues forward at $200\,\mathrm{m/s}$. The explosion’s external impulse is negligible during the split. Motion stays horizontal.

1. Find the velocity of the $8.00\,\mathrm{kg}$ fragment.
2. Find the change in kinetic energy of the shell system.
3. Why can momentum be conserved while kinetic energy increases?

---

## Answers

### Answer 1

Take the tool’s direction as positive.

1. $0 = m_A v_A + m_t v_t$ gives

$$
v_A = -\frac{m_t}{m_A}v_t = -\frac{2.25}{68.5}(3.20) = -0.105\,\mathrm{m/s}
$$

The astronaut recoils at $0.105\,\mathrm{m/s}$ opposite the throw.

2. Before: $\vec{P} = 0$. After: $68.5(-0.105) + 2.25(3.20) = -7.19 + 7.20 \approx 0$ (rounding). Total momentum stays zero.

3. The astronaut does positive work with her muscles (chemical energy). That increases $K$ while the momenta cancel. $P = 0$ does not force $K = 0$.

### Answer 2

1. $0.600(10.0) = (70.0 + 0.600)V$, so

$$
V = \frac{6.00}{70.6} = 0.0850\,\mathrm{m/s}
$$

in the ball’s original direction.

2. Take the original ball direction as positive. After the bounce, $v_{\mathrm{ball}} = -8.00\,\mathrm{m/s}$. Then

$$
0.600(10.0) = 70.0\,v_s + 0.600(-8.00)
$$

$$
6.00 = 70.0\,v_s - 4.80, \qquad v_s = \frac{10.8}{70.0} = 0.154\,\mathrm{m/s}
$$

3. Catch: $\Delta p_{\mathrm{ball}} = 0.600(0.0850 - 10.0) = -5.95\,\mathrm{kg\cdot m/s}$. Bounce: $\Delta p_{\mathrm{ball}} = 0.600(-8.00 - 10.0) = -10.8\,\mathrm{kg\cdot m/s}$. The bounce transfers a larger impulse to the student, so the student ends faster: $0.154\,\mathrm{m/s}$ versus $0.0850\,\mathrm{m/s}$.

### Answer 3

1. Momentum conservation:

$$
0.250\,v_{Ai} + 0 = 0.250(-0.120) + 0.350(0.650)
$$

$$
0.250\,v_{Ai} = -0.0300 + 0.2275 = 0.1975, \qquad v_{Ai} = 0.790\,\mathrm{m/s}
$$

to the right.

2. Initial: $K_i = \tfrac12(0.250)(0.790)^2 = 0.0780\,\mathrm{J}$. Final:

$$
K_f = \tfrac12(0.250)(0.120)^2 + \tfrac12(0.350)(0.650)^2 = 0.00180 + 0.0739 = 0.0757\,\mathrm{J}
$$

$$
\Delta K = K_f - K_i = -0.0023\,\mathrm{J}
$$

(about $-0.002\,\mathrm{J}$ at this precision).

3. Kinetic energy was not conserved; a little was lost to deformation or sound. Momentum was conserved because the table is frictionless and the collision forces are internal to A + B. Momentum conservation does not require energy conservation.

### Answer 4

1.

$$
1750(1.50) + 1450(-1.10) = 1750(0.250) + 1450\,v_{2f}
$$

$$
2625 - 1595 = 437.5 + 1450\,v_{2f}
$$

$$
1030 = 437.5 + 1450\,v_{2f}, \qquad v_{2f} = 0.409\,\mathrm{m/s}
$$

to the right.

2. $K_i = \tfrac12(1750)(1.50)^2 + \tfrac12(1450)(1.10)^2 = 1969 + 877 = 2846\,\mathrm{J}$.

$$
K_f = \tfrac12(1750)(0.250)^2 + \tfrac12(1450)(0.409)^2 = 54.7 + 121 = 176\,\mathrm{J}
$$

$$
\Delta K = 176 - 2846 = -2670\,\mathrm{J}
$$

(about $-2.67\times 10^3\,\mathrm{J}$). Kinetic energy decreases.

3. Weight is vertical. During the horizontal collision the important impulses are horizontal and internal. Vertical forces do not change the horizontal momentum balance for the two-car system.

### Answer 5

1. $0 = 65.0\,v_D + 45.0(2.50)$ gives

$$
v_D = -\frac{112.5}{65.0} = -1.73\,\mathrm{m/s}
$$

Daniel moves at $1.73\,\mathrm{m/s}$ to the left.

2. $K = \tfrac12(65.0)(1.73)^2 + \tfrac12(45.0)(2.50)^2 = 97.3 + 141 = 238\,\mathrm{J}$.

3. From the work the skaters do as they push apart (chemical energy in their muscles). Momentum stays zero; kinetic energy does not.

### Answer 6

1. Pickup: $p_x = 2500(-14.0) = -3.50\times 10^4\,\mathrm{kg\cdot m/s}$, $p_y = 0$. Sedan: $p_x = 0$, $p_y = 1500(23.0) = 3.45\times 10^4\,\mathrm{kg\cdot m/s}$. Total:

$$
P_x = -3.50\times 10^4\,\mathrm{kg\cdot m/s}, \qquad P_y = 3.45\times 10^4\,\mathrm{kg\cdot m/s}
$$

2. $P = \sqrt{P_x^2 + P_y^2} = 4.91\times 10^4\,\mathrm{kg\cdot m/s}$. Direction from $+x$ (east):

$$
\theta = \tan^{-1}\!\left(\frac{P_y}{\lvert P_x\rvert}\right) = \tan^{-1}\!\left(\frac{3.45}{3.50}\right) = 44.6^\circ
$$

north of west (or $180^\circ - 44.6^\circ = 135.4^\circ$ counterclockwise from east).

3. Total mass $4000\,\mathrm{kg}$. Common velocity:

$$
V_x = \frac{P_x}{4000} = -8.75\,\mathrm{m/s}, \qquad V_y = \frac{P_y}{4000} = 8.63\,\mathrm{m/s}
$$

### Answer 7

Bullet mass $m_b = 0.0100\,\mathrm{kg}$.

1. $0 = m_r v_r + m_b v_b$ gives

$$
v_r = -\frac{0.0100}{4.00}(800) = -2.00\,\mathrm{m/s}
$$

Recoil speed $2.00\,\mathrm{m/s}$.

2. $K_b = \tfrac12(0.0100)(800)^2 = 3200\,\mathrm{J}$. $K_r = \tfrac12(4.00)(2.00)^2 = 8.00\,\mathrm{J}$.

3. Equal momentum magnitudes mean $m_r\lvert v_r\rvert = m_b\lvert v_b\rvert$. Kinetic energy is $p^2/(2m)$. The lighter bullet has much larger $K$ for the same $\lvert p\rvert$.

### Answer 8

1. False. Only the *total* momentum is constant. Objects can exchange momentum through internal forces.

2. False. Internal third-law pairs cancel in $\sum\vec{F}_{\mathrm{ext}}$’s partner sum; they do not change $\vec{P}$ for an isolated system.

3. True. Two equal masses moving opposite ways at the same speed: $\vec{P} = 0$ but $K > 0$.

4. False. Sticking collisions and explosions conserve momentum (when external impulse is negligible) without conserving kinetic energy.

### Answer 9

1. $2.00(3.00) = (3.00)V$, so $V = 2.00\,\mathrm{m/s}$ to the right.

2. $K_i = \tfrac12(2.00)(3.00)^2 = 9.00\,\mathrm{J}$. $K_f = \tfrac12(3.00)(2.00)^2 = 6.00\,\mathrm{J}$. Fraction remaining: $6.00/9.00 = 0.667$ (two thirds).

3. That equation assumes kinetic energy is conserved through a sticking collision. It is not. Momentum conservation is the correct impact equation here; energy is lost to deformation and heat.

### Answer 10

1. Take forward as positive.

$$
20.0(150) = 12.0(200) + 8.00\,v_2
$$

$$
3000 = 2400 + 8.00\,v_2, \qquad v_2 = 75.0\,\mathrm{m/s}
$$

forward.

2. $K_i = \tfrac12(20.0)(150)^2 = 2.25\times 10^5\,\mathrm{J}$.

$$
K_f = \tfrac12(12.0)(200)^2 + \tfrac12(8.00)(75.0)^2 = 2.40\times 10^5 + 2.25\times 10^4 = 2.625\times 10^5\,\mathrm{J}
$$

$$
\Delta K = 3.75\times 10^4\,\mathrm{J}
$$

3. Chemical energy in the explosive adds kinetic energy. During the brief split the internal explosion forces dominate, so external impulse is negligible and $\vec{P}$ stays the same while $K$ rises.
