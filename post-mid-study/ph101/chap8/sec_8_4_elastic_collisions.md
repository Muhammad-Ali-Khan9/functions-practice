# Section 8.4 — Elastic Collisions

Young and Freedman, *University Physics*, Chapter 8. An elastic collision conserves both the total momentum and the total kinetic energy of the colliding system (when external impulse is negligible). Section 8.3 handled inelastic and perfectly inelastic cases. This section derives the one-dimensional elastic results and the useful two-dimensional special case.

Use $g = 9.80\,\mathrm{m/s^2}$. Keep a fixed positive axis. Elastic does not mean “bouncy looking.” It means $K_i = K_f$ for the system, together with $\vec{P}_i = \vec{P}_f$.

## Two conservation laws

For two objects in one dimension,

$$
m_1 v_{1i} + m_2 v_{2i} = m_1 v_{1f} + m_2 v_{2f}
$$

$$
\frac12 m_1 v_{1i}^2 + \frac12 m_2 v_{2i}^2 = \frac12 m_1 v_{1f}^2 + \frac12 m_2 v_{2f}^2
$$

Those two equations determine the two unknowns $v_{1f}$ and $v_{2f}$ when the masses and initial velocities are known. Solving them also gives the relative-velocity rule for a one-dimensional elastic collision:

$$
v_{1i} - v_{2i} = -(v_{1f} - v_{2f})
$$

The relative speed of approach equals the relative speed of separation. The coefficient of restitution is $e = 1$.

## Target initially at rest

Set $v_{2i} = 0$. The final velocities are

$$
v_{1f} = \frac{m_1 - m_2}{m_1 + m_2}\,v_{1i}, \qquad v_{2f} = \frac{2 m_1}{m_1 + m_2}\,v_{1i}
$$

Remember the assumptions: one dimension, elastic, target at rest. A moving target needs the general solution, not these shortcuts.

### Equal masses

If $m_1 = m_2$ and $v_{2i} = 0$, then $v_{1f} = 0$ and $v_{2f} = v_{1i}$. The velocities are exchanged. The first object stops; the second takes the original speed. Newton’s cradle uses this idea in a line of equal spheres.

### Light on heavy

If $m_1 \ll m_2$, then $v_{1f} \approx -v_{1i}$ and $v_{2f} \approx 0$. A light ball rebounds from a heavy wall-like target at nearly the same speed. The heavy target barely moves.

### Heavy on light

If $m_1 \gg m_2$, then $v_{1f} \approx v_{1i}$ and $v_{2f} \approx 2 v_{1i}$. The heavy object continues almost unchanged; the light target is driven forward at nearly twice the incident speed.

## Both objects moving (one dimension)

The general elastic one-dimensional results are

$$
v_{1f} = \frac{m_1 - m_2}{m_1 + m_2}v_{1i} + \frac{2 m_2}{m_1 + m_2}v_{2i}
$$

$$
v_{2f} = \frac{2 m_1}{m_1 + m_2}v_{1i} + \frac{m_2 - m_1}{m_1 + m_2}v_{2i}
$$

When $v_{2i} = 0$, these reduce to the target-at-rest formulas. When $m_1 = m_2$, they reduce to a clean exchange: $v_{1f} = v_{2i}$ and $v_{2f} = v_{1i}$.

## Two dimensions

Conserve momentum in $x$ and in $y$, and conserve kinetic energy. That is three equations. Four unknown final-velocity components need one more piece of data (an angle or a speed from the problem).

Special theorem: if $m_1 = m_2$, the collision is elastic, and the target starts at rest, then the two final velocity vectors are perpendicular,

$$
\vec{v}_{1f}\cdot\vec{v}_{2f} = 0
$$

so the paths after the hit form a right angle. That is not true for unequal masses, for inelastic hits, or for a moving target. Do not paste it onto a sticking collision.

## Mistakes that change the answer

- Using the target-at-rest formulas when $v_{2i} \neq 0$.
- Using the equal-mass exchange rule when the masses differ.
- Conserving kinetic energy in a sticking problem and calling it elastic.
- Applying the $90^\circ$ final-path rule to unequal masses or to perfectly inelastic collisions.
- Solving only momentum and forgetting that elastic also requires $K_i = K_f$ when the shortcut formulas are not used.

---

## Questions

### Question 1

A $0.300\,\mathrm{kg}$ glider moves at $0.250\,\mathrm{m/s}$ on an air track and collides elastically with a $0.150\,\mathrm{kg}$ glider at rest.

1. Find both final velocities.
2. Show that total momentum is conserved.
3. Show that total kinetic energy is conserved.

### Question 2

A $0.400\,\mathrm{kg}$ billiard ball moving at $2.00\,\mathrm{m/s}$ strikes an identical ball at rest. The collision is elastic and head-on (one dimension).

1. Find the final velocities.
2. What would the final common velocity be if they had stuck instead?
3. Compare $K_f$ for the elastic case with $K_f$ for the sticking case.

### Question 3

A $2.00\,\mathrm{kg}$ object moving at $5.00\,\mathrm{m/s}$ to the right collides elastically and head-on with a $4.00\,\mathrm{kg}$ object moving at $2.00\,\mathrm{m/s}$ to the left. Take right as positive.

1. Find both final velocities.
2. Check the relative-velocity rule $v_{1i} - v_{2i} = -(v_{1f} - v_{2f})$.
3. Find $\Delta K$.

### Question 4

A light ball of mass $m$ hits a heavy wall-like block of mass $M = 100m$ at rest, elastically and head-on, at speed $v_0$.

1. Using the target-at-rest formulas, find $v_{1f}$ and $v_{2f}$ in terms of $v_0$.
2. How close is $v_{1f}$ to $-v_0$?
3. Why does “bounce off a wall at the same speed” work as an approximation here?

### Question 5

A heavy hammer of mass $M = 20.0\,m$ moving at $v_0$ hits a light nail-like mass $m$ at rest. The collision is elastic and one-dimensional.

1. Find the nail’s final speed in terms of $v_0$.
2. Find the hammer’s final speed in terms of $v_0$.
3. Compare the nail’s final speed with $2v_0$.

### Question 6

True or false, with a reason or a counterexample.

1. If two equal masses collide elastically in one dimension and one starts at rest, they exchange velocities.
2. If two equal masses stick together, their final paths are perpendicular when the target started at rest.
3. An elastic collision always has $e = 1$.
4. Momentum conservation alone is enough to find both final speeds in a one-dimensional two-body collision with unknown finals.

### Question 7

On a frictionless air table, puck A ($0.250\,\mathrm{kg}$) moves at $0.400\,\mathrm{m/s}$ in the $+x$ direction and collides elastically with puck B ($0.250\,\mathrm{kg}$) at rest. Afterward, A moves at $30.0^\circ$ above the $+x$-axis and B at $60.0^\circ$ below the $+x$-axis.

1. Why must the angle between the final velocities be $90^\circ$?
2. Find the final speeds of A and B from momentum components. (Energy should then check automatically if the geometry is elastic and equal-mass.)
3. Verify $K_i = K_f$.

### Question 8

A $1.00\,\mathrm{kg}$ cart moving at $3.00\,\mathrm{m/s}$ collides elastically with a $2.00\,\mathrm{kg}$ cart at rest on a frictionless track.

1. Find both final velocities from the target-at-rest formulas.
2. A student writes $v_{1f} = 0$ and $v_{2f} = 3.00\,\mathrm{m/s}$ because “elastic means exchange.” Correct the mistake.
3. Find the fraction of kinetic energy transferred to the second cart.

### Question 9

Two steel balls approach each other. Ball 1 ($0.500\,\mathrm{kg}$) moves at $4.00\,\mathrm{m/s}$ to the right; ball 2 ($0.300\,\mathrm{kg}$) moves at $2.00\,\mathrm{m/s}$ to the left. They collide elastically and head-on.

1. Find $v_{1f}$ and $v_{2f}$.
2. Which ball reverses direction?
3. Show that the relative speed of separation equals the relative speed of approach.

### Question 10

A neutron (mass $m$) collides elastically and head-on with a nucleus of mass $M$ at rest. Moderators in reactors use this idea.

1. Write $v_{1f}$ and $v_{2f}$ for the neutron and nucleus.
2. Show that the fraction of kinetic energy transferred to the nucleus is $\dfrac{4mM}{(m + M)^2}$.
3. For $M = m$ (hydrogen nucleus) and for $M = 12m$ (carbon), which transfers a larger fraction of the neutron’s kinetic energy? Compute both fractions.

---

## Answers

### Answer 1

$m_1 = 0.300\,\mathrm{kg}$, $m_2 = 0.150\,\mathrm{kg}$, $v_{1i} = 0.250\,\mathrm{m/s}$, $v_{2i} = 0$.

1.

$$
v_{1f} = \frac{0.300 - 0.150}{0.450}(0.250) = 0.0833\,\mathrm{m/s}
$$

$$
v_{2f} = \frac{2(0.300)}{0.450}(0.250) = 0.333\,\mathrm{m/s}
$$

both to the right.

2. $P_i = 0.300(0.250) = 0.0750\,\mathrm{kg\cdot m/s}$. $P_f = 0.300(0.0833) + 0.150(0.333) = 0.0250 + 0.0500 = 0.0750\,\mathrm{kg\cdot m/s}$.

3. $K_i = \tfrac12(0.300)(0.250)^2 = 0.00938\,\mathrm{J}$.

$$
K_f = \tfrac12(0.300)(0.0833)^2 + \tfrac12(0.150)(0.333)^2 = 0.00104 + 0.00833 = 0.00937\,\mathrm{J}
$$

(equal within rounding).

### Answer 2

1. Equal masses, target at rest, elastic: $v_{1f} = 0$, $v_{2f} = 2.00\,\mathrm{m/s}$.

2. Stick: $0.400(2.00) = (0.800)V$, so $V = 1.00\,\mathrm{m/s}$.

3. Elastic: $K_f = K_i = \tfrac12(0.400)(2.00)^2 = 0.800\,\mathrm{J}$. Sticking: $K_f = \tfrac12(0.800)(1.00)^2 = 0.400\,\mathrm{J}$. Half the kinetic energy is lost if they stick.

### Answer 3

$m_1 = 2.00\,\mathrm{kg}$, $v_{1i} = 5.00\,\mathrm{m/s}$, $m_2 = 4.00\,\mathrm{kg}$, $v_{2i} = -2.00\,\mathrm{m/s}$.

1.

$$
v_{1f} = \frac{2 - 4}{6}(5.00) + \frac{2(4)}{6}(-2.00) = -\frac{10}{6} - \frac{16}{6} = -4.33\,\mathrm{m/s}
$$

$$
v_{2f} = \frac{2(2)}{6}(5.00) + \frac{4 - 2}{6}(-2.00) = \frac{20}{6} - \frac{4}{6} = 2.67\,\mathrm{m/s}
$$

2. Approach: $v_{1i} - v_{2i} = 5.00 - (-2.00) = 7.00\,\mathrm{m/s}$. Separation with a minus: $-(v_{1f} - v_{2f}) = -(-4.33 - 2.67) = -(-7.00) = 7.00\,\mathrm{m/s}$. Matches.

3. $\Delta K = 0$ for an elastic collision. Explicitly: $K_i = \tfrac12(2)(5)^2 + \tfrac12(4)(2)^2 = 25.0 + 8.00 = 33.0\,\mathrm{J}$, and $K_f = \tfrac12(2)(4.33)^2 + \tfrac12(4)(2.67)^2 = 18.7 + 14.3 = 33.0\,\mathrm{J}$.

### Answer 4

1.

$$
v_{1f} = \frac{m - 100m}{101m}v_0 = -\frac{99}{101}v_0 = -0.980\,v_0
$$

$$
v_{2f} = \frac{2m}{101m}v_0 = \frac{2}{101}v_0 = 0.0198\,v_0
$$

2. $\lvert v_{1f}\rvert = 0.980\,v_0$, only $2.0\%$ below $v_0$.

3. The target is so heavy that it absorbs almost no velocity. The light ball reverses with nearly unchanged speed, which is the hard-wall idealization.

### Answer 5

1. $v_{2f} = \dfrac{2(20.0\,m)}{21.0\,m}v_0 = \dfrac{40}{21}v_0 = 1.90\,v_0$.

2. $v_{1f} = \dfrac{20.0\,m - m}{21.0\,m}v_0 = \dfrac{19}{21}v_0 = 0.905\,v_0$.

3. The light target reaches $1.90\,v_0$, close to the $2v_0$ heavy-on-light limit, but not quite there because $M/m = 20$ is large, not infinite.

### Answer 6

1. True. Target-at-rest equal-mass elastic formulas give exchange.

2. False. Sticking is perfectly inelastic. There is only one final velocity for the combined mass; the $90^\circ$ theorem is for equal-mass elastic collisions with a resting target.

3. True in one dimension along the line of impact: relative speed of separation equals relative speed of approach.

4. False. One momentum equation and two unknown final velocities leave the problem underdetermined without elasticity (or another condition such as sticking or a given $e$).

### Answer 7

1. Equal masses, elastic, target at rest: $\vec{v}_{1f}\cdot\vec{v}_{2f} = 0$. Here $30^\circ + 60^\circ = 90^\circ$, so the geometry matches the theorem.

2. Momentum $x$: $0.250(0.400) = 0.250\,v_A\cos 30^\circ + 0.250\,v_B\cos 60^\circ$, so

$$
0.400 = v_A(0.866) + v_B(0.500)
$$

Momentum $y$: $0 = 0.250\,v_A\sin 30^\circ + 0.250\,v_B\sin(-60^\circ)$, so

$$
0 = v_A(0.500) - v_B(0.866) \implies v_A = 1.732\,v_B
$$

Substitute: $0.400 = 1.732\,v_B(0.866) + 0.500\,v_B = 1.50\,v_B + 0.500\,v_B = 2.00\,v_B$, so $v_B = 0.200\,\mathrm{m/s}$ and $v_A = 0.346\,\mathrm{m/s}$.

3. $K_i = \tfrac12(0.250)(0.400)^2 = 0.0200\,\mathrm{J}$.

$$
K_f = \tfrac12(0.250)(0.346)^2 + \tfrac12(0.250)(0.200)^2 = 0.0150 + 0.00500 = 0.0200\,\mathrm{J}
$$

### Answer 8

1.

$$
v_{1f} = \frac{1 - 2}{3}(3.00) = -1.00\,\mathrm{m/s}, \qquad v_{2f} = \frac{2(1)}{3}(3.00) = 2.00\,\mathrm{m/s}
$$

The first cart rebounds at $1.00\,\mathrm{m/s}$ to the left; the second moves right at $2.00\,\mathrm{m/s}$.

2. Velocity exchange holds only for equal masses. Here $m_2 = 2m_1$, so the lighter cart rebounds and the heavier one moves forward slower than the incident speed.

3. $K_i = \tfrac12(1.00)(3.00)^2 = 4.50\,\mathrm{J}$. Energy of cart 2 afterward: $\tfrac12(2.00)(2.00)^2 = 4.00\,\mathrm{J}$. Fraction transferred: $4.00/4.50 = 0.889$.

### Answer 9

$m_1 = 0.500\,\mathrm{kg}$, $v_{1i} = 4.00\,\mathrm{m/s}$, $m_2 = 0.300\,\mathrm{kg}$, $v_{2i} = -2.00\,\mathrm{m/s}$.

1.

$$
v_{1f} = \frac{0.500 - 0.300}{0.800}(4.00) + \frac{2(0.300)}{0.800}(-2.00) = 1.00 - 1.50 = -0.500\,\mathrm{m/s}
$$

$$
v_{2f} = \frac{2(0.500)}{0.800}(4.00) + \frac{0.300 - 0.500}{0.800}(-2.00) = 5.00 + 0.500 = 5.50\,\mathrm{m/s}
$$

2. Ball 1 reverses (ends leftward). Ball 2 was leftward and ends rightward, so it reverses as well.

3. Approach speed: $\lvert 4.00 - (-2.00)\rvert = 6.00\,\mathrm{m/s}$. Separation speed: $\lvert -0.500 - 5.50\rvert = 6.00\,\mathrm{m/s}$. Equal.

### Answer 10

1. $v_{1f} = \dfrac{m - M}{m + M}v_0$, $v_{2f} = \dfrac{2m}{m + M}v_0$.

2. $K_{\mathrm{transferred}} = \tfrac12 M v_{2f}^2 = \tfrac12 M\left(\dfrac{2m}{m + M}\right)^2 v_0^2 = \dfrac{4m^2 M}{2(m + M)^2}v_0^2$. Initial neutron energy $K_i = \tfrac12 m v_0^2$, so the fraction is

$$
\frac{K_{\mathrm{transferred}}}{K_i} = \frac{4m M}{(m + M)^2}
$$

3. $M = m$: fraction $= 4m^2/(2m)^2 = 1$. All of the neutron’s kinetic energy can be transferred in a head-on hit on an equal mass. $M = 12m$: fraction $= 4m(12m)/(13m)^2 = 48/169 = 0.284$. Hydrogen is the better single-collision moderator for removing neutron kinetic energy head-on.
