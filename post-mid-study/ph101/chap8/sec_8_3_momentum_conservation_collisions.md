# Section 8.3 — Momentum Conservation and Collisions

Young and Freedman, *University Physics*, Chapter 8. This section applies momentum conservation to collisions. Collisions are classified by what happens to kinetic energy. Elastic collisions, with their special one-dimensional formulas, are Section 8.4. Here the focus is the classification itself, inelastic and perfectly inelastic collisions, and the ballistic pendulum.

Use $g = 9.80\,\mathrm{m/s^2}$. During a brief collision, external impulses are often negligible compared with the internal collision impulses, so $\vec{P}_i = \vec{P}_f$ for the colliding system. That statement is about momentum. Kinetic energy is a separate question.

## Classifying collisions

A **collision** is a short interaction in which objects exert large forces on each other. For the system of colliding objects, over that short interval,

$$
\vec{P}_i = \vec{P}_f
$$

whenever the net external impulse is negligible.

| Type | Momentum (isolated) | Kinetic energy |
| --- | --- | --- |
| Elastic | conserved | conserved |
| Inelastic | conserved | not conserved ($K$ decreases) |
| Perfectly inelastic | conserved | not conserved; objects stick and share one final velocity |

“Inelastic” means some mechanical energy is lost to heat, sound, or permanent deformation. “Perfectly inelastic” is the extreme case in which the objects move as one afterward. Momentum conservation still holds when the external impulse is negligible. Energy conservation for kinetic energy does not.

An explosion is the opposite energy story: $K$ increases because stored chemical or spring energy is released. Momentum of an isolated system still stays the same.

## Perfectly inelastic collision in one dimension

Two masses stick. Take the second at rest for the standard case:

$$
m_1 v_{1i} = (m_1 + m_2)V, \qquad V = \frac{m_1}{m_1 + m_2}v_{1i}
$$

The final kinetic energy is

$$
K_f = \frac{1}{2}(m_1 + m_2)V^2 = \frac{m_1}{m_1 + m_2}K_i
$$

when the target starts at rest, with $K_i = \tfrac12 m_1 v_{1i}^2$. The fraction remaining is $m_1/(m_1 + m_2)$. A light object sticking into a heavy target loses most of its kinetic energy. A heavy object sticking into a light target keeps most of it.

If both move before impact,

$$
m_1 v_{1i} + m_2 v_{2i} = (m_1 + m_2)V
$$

Signs matter. Opposite directions mean opposite signs.

## Ballistic pendulum

A bullet of mass $m$ embeds in a hanging block of mass $M$. The combination rises a vertical height $h$.

1. **Impact** (perfectly inelastic): momentum conserved, kinetic energy not.

$$
m v = (m + M)V
$$

2. **Swing** (mechanical energy): if the support does no work and air resistance is ignored,

$$
\frac{1}{2}(m + M)V^2 = (m + M)gh \implies V = \sqrt{2gh}
$$

Combining,

$$
v = \frac{m + M}{m}\sqrt{2gh}
$$

If the pendulum length is $L$ and the maximum angle from vertical is $\theta$,

$$
h = L(1 - \cos\theta)
$$

Do not use energy across the embedding, and do not use momentum across the swing. Each law belongs to its own interval.

## Coefficient of restitution (optional check)

Some problems quote the coefficient of restitution $e$, the relative-speed ratio after and before along the line of impact:

$$
e = \frac{\text{relative speed of separation}}{\text{relative speed of approach}}
$$

For a one-dimensional collision, $e = 1$ is elastic, $0 < e < 1$ is inelastic, and $e = 0$ is perfectly inelastic (no separation; they stick or the relative speed afterward is zero). Momentum conservation plus $e$ can replace a full energy statement when $e$ is given.

## Mistakes that change the answer

- Conserving kinetic energy through a sticking collision.
- Using $\tfrac12 mv^2 = mgh$ for the bullet alone across the whole ballistic-pendulum process.
- Applying momentum conservation to the pendulum during the long swing, when the support exerts an external impulse.
- Forgetting signs when two cars approach from opposite directions and stick.
- Calling every inelastic collision “perfectly inelastic.” Sticking is the special case.

---

## Questions

### Question 1

A $2.00\,\mathrm{kg}$ cart at $4.00\,\mathrm{m/s}$ collides and sticks to a $3.00\,\mathrm{kg}$ cart at rest on a frictionless track.

1. Find the final common speed.
2. Find $K_i$, $K_f$, and the fraction of kinetic energy remaining.
3. Verify that the remaining fraction equals $m_1/(m_1 + m_2)$.

### Question 2

A $1200\,\mathrm{kg}$ car moving at $15.0\,\mathrm{m/s}$ to the right collides and sticks with a $900\,\mathrm{kg}$ car moving at $10.0\,\mathrm{m/s}$ to the left. Take right as positive.

1. Find the final velocity of the wreck.
2. Find the change in kinetic energy.
3. Is this collision elastic, inelastic, or perfectly inelastic? Why?

### Question 3

A $12.0\,\mathrm{g}$ bullet is fired into a $2.00\,\mathrm{kg}$ wooden block hanging as a ballistic pendulum. The block + bullet swing to a height of $8.00\,\mathrm{cm}$.

1. Find the speed of the block + bullet just after the embedding.
2. Find the bullet’s speed just before impact.
3. What fraction of the bullet’s kinetic energy remains as mechanical energy just after the embedding?

### Question 4

Same ballistic pendulum as Question 3, but now the cord length is $L = 1.20\,\mathrm{m}$ and the maximum angle from vertical is $\theta = 22.0^\circ$ instead of a given height.

1. Find the rise height $h$.
2. Find the bullet’s impact speed.
3. Why is $h = L\theta$ with $\theta$ in radians the wrong height formula here?

### Question 5

A $0.450\,\mathrm{kg}$ glider on an air track moves at $0.150\,\mathrm{m/s}$ to the right and sticks to a $0.300\,\mathrm{kg}$ glider moving at $0.200\,\mathrm{m/s}$ to the left.

1. Find the final velocity.
2. Find $\Delta K$.
3. If the track were not frictionless after the stick, would momentum of the two-glider system stay constant during the later slide? Explain.

### Question 6

True or false, with a reason or a counterexample.

1. Every collision that conserves momentum also conserves kinetic energy.
2. In a perfectly inelastic collision of two objects, they must have the same final velocity.
3. The ballistic pendulum uses momentum conservation for the swing up.
4. An inelastic collision can still conserve the total momentum of an isolated system.

### Question 7

A $5.00\,\mathrm{g}$ bullet passes through a $1.00\,\mathrm{kg}$ block initially at rest on a frictionless horizontal surface. The bullet’s speed falls from $400\,\mathrm{m/s}$ to $100\,\mathrm{m/s}$; the block then slides. The collision is inelastic but not perfectly inelastic (the bullet does not stick).

1. Find the speed of the block just after the bullet exits.
2. Find the kinetic energy lost during the interaction.
3. Why is “perfectly inelastic” the wrong label here even though $K$ decreases?

### Question 8

Two railroad cars, each of mass $2.50\times 10^4\,\mathrm{kg}$, roll toward each other on a level track. One moves at $0.800\,\mathrm{m/s}$ to the right, the other at $0.600\,\mathrm{m/s}$ to the left. They couple and stick.

1. Find the final velocity of the coupled cars.
2. Find the energy converted to heat, deformation, and sound.
3. If both had moved in the same direction at those speeds and then coupled, would $\lvert\Delta K\rvert$ be larger or smaller than in the head-on case? Compute it.

### Question 9

A clay blob of mass $m$ moving at speed $v_0$ sticks to the end of a rigid rod of length $L$ and negligible mass that can pivot freely about the other end. A small block of mass $M$ is fixed at the free end; treat the clay + block as particles that stick at the rim. Immediately after the stick, they move together on a circular arc. (Ignore gravity for the instant of impact.)

1. What quantity is conserved through the impact, and what is not?
2. Writing only translational momentum $mv_0 = (m + M)V$ is incomplete for a pivoted system. Why?
3. For the ordinary free ballistic-pendulum block (no fixed pivot force during the hit), why is ordinary linear momentum conservation acceptable?

### Question 10

A $0.150\,\mathrm{kg}$ baseball at $35.0\,\mathrm{m/s}$ is caught and held by a $70.0\,\mathrm{kg}$ catcher initially at rest on frictionless ice. The catcher then slides.

1. Find the common speed after the catch.
2. Find the fraction of kinetic energy remaining.
3. Compare that fraction with a catch in which the catcher’s mass is only $5.00\,\mathrm{kg}$. Which catch “wastes” a larger fraction of $K$, and why?

---

## Answers

### Answer 1

1. $2.00(4.00) = (5.00)V$, so $V = 1.60\,\mathrm{m/s}$.

2. $K_i = \tfrac12(2.00)(4.00)^2 = 16.0\,\mathrm{J}$. $K_f = \tfrac12(5.00)(1.60)^2 = 6.40\,\mathrm{J}$. Fraction remaining: $6.40/16.0 = 0.400$.

3. $m_1/(m_1 + m_2) = 2.00/5.00 = 0.400$. Matches.

### Answer 2

1.

$$
1200(15.0) + 900(-10.0) = (2100)V
$$

$$
18000 - 9000 = 2100\,V, \qquad V = 4.29\,\mathrm{m/s}
$$

to the right.

2. $K_i = \tfrac12(1200)(15.0)^2 + \tfrac12(900)(10.0)^2 = 1.35\times 10^5 + 4.50\times 10^4 = 1.80\times 10^5\,\mathrm{J}$.

$$
K_f = \tfrac12(2100)(4.29)^2 = 1.93\times 10^4\,\mathrm{J}
$$

$$
\Delta K = 1.93\times 10^4 - 1.80\times 10^5 = -1.61\times 10^5\,\mathrm{J}
$$

3. Perfectly inelastic: the cars stick and share one final velocity. Momentum of the two-car system is conserved through the hit; kinetic energy is not.

### Answer 3

$m = 0.0120\,\mathrm{kg}$, $M = 2.00\,\mathrm{kg}$, $h = 0.0800\,\mathrm{m}$.

1. $V = \sqrt{2gh} = \sqrt{2(9.80)(0.0800)} = \sqrt{1.568} = 1.25\,\mathrm{m/s}$.

2. $mv = (m + M)V$ gives

$$
v = \frac{2.012}{0.0120}(1.25) = 210\,\mathrm{m/s}
$$

3. $K_{\mathrm{bullet}} = \tfrac12(0.0120)(210)^2 = 264\,\mathrm{J}$. Just after embedding, $K = \tfrac12(2.012)(1.25)^2 = 1.57\,\mathrm{J}$. Fraction remaining: $1.57/264 = 0.00595$ (about $0.60\%$). Almost all of the bullet’s kinetic energy is lost in the embedding.

### Answer 4

1. $h = L(1 - \cos\theta) = 1.20(1 - \cos 22.0^\circ) = 1.20(1 - 0.9272) = 1.20(0.0728) = 0.0874\,\mathrm{m}$.

2. $V = \sqrt{2gh} = \sqrt{2(9.80)(0.0874)} = 1.31\,\mathrm{m/s}$. Then

$$
v = \frac{2.012}{0.0120}(1.31) = 220\,\mathrm{m/s}
$$

3. $L\theta$ is an arc length, not the vertical rise. The rise is the difference in height of the bob: $L - L\cos\theta$. For $22^\circ$, $L\theta$ (radians) is about $0.46\,\mathrm{m}$, far larger than the true $h$.

### Answer 5

1. $0.450(0.150) + 0.300(-0.200) = (0.750)V$

$$
0.0675 - 0.0600 = 0.750\,V, \qquad V = 0.0100\,\mathrm{m/s}
$$

to the right.

2. $K_i = \tfrac12(0.450)(0.150)^2 + \tfrac12(0.300)(0.200)^2 = 0.00506 + 0.00600 = 0.0111\,\mathrm{J}$.

$$
K_f = \tfrac12(0.750)(0.0100)^2 = 3.75\times 10^{-5}\,\mathrm{J}
$$

$$
\Delta K = 3.75\times 10^{-5} - 0.0111 = -0.0110\,\mathrm{J}
$$

3. No. Friction is an external horizontal force on the two-glider system, so $\vec{P}$ changes during the later slide. Momentum conservation applied to the sticking impact assumed a short, nearly impulse-free-from-outside interval.

### Answer 6

1. False. Perfectly inelastic collisions conserve momentum (when isolated) but not kinetic energy.

2. True. “Stick” means a common final velocity for the combined object.

3. False. The swing uses mechanical energy conservation. Momentum conservation applies to the brief embedding.

4. True. That is the definition used in this section: isolated-system momentum is conserved; $K$ need not be.

### Answer 7

1. Take the bullet direction as positive.

$$
0.00500(400) = 0.00500(100) + 1.00\,v_B
$$

$$
2.00 = 0.500 + v_B, \qquad v_B = 1.50\,\mathrm{m/s}
$$

2. $K_i = \tfrac12(0.00500)(400)^2 = 400\,\mathrm{J}$.

$$
K_f = \tfrac12(0.00500)(100)^2 + \tfrac12(1.00)(1.50)^2 = 25.0 + 1.13 = 26.1\,\mathrm{J}
$$

$$
\Delta K = 26.1 - 400 = -374\,\mathrm{J}
$$

3. Perfectly inelastic means the objects stick and share one velocity. Here the bullet exits with a different speed from the block. The collision is inelastic ($K$ drops) but not perfectly inelastic.

### Answer 8

1. $2.50\times 10^4(0.800) + 2.50\times 10^4(-0.600) = (5.00\times 10^4)V$

$$
V = \frac{0.200}{2} = 0.100\,\mathrm{m/s}
$$

to the right. (Each mass factor cancels: $V = (0.800 - 0.600)/2$.)

2. $K_i = \tfrac12(2.50\times 10^4)(0.800)^2 + \tfrac12(2.50\times 10^4)(0.600)^2 = 8.00\times 10^3 + 4.50\times 10^3 = 1.25\times 10^4\,\mathrm{J}$.

$$
K_f = \tfrac12(5.00\times 10^4)(0.100)^2 = 250\,\mathrm{J}
$$

Energy converted: $1.25\times 10^4 - 250 = 1.225\times 10^4\,\mathrm{J}$.

3. Same direction: $V = (0.800 + 0.600)/2 = 0.700\,\mathrm{m/s}$.

$$
K_i = 1.25\times 10^4\,\mathrm{J}
$$

(same speeds), $K_f = \tfrac12(5.00\times 10^4)(0.700)^2 = 1.225\times 10^4\,\mathrm{J}$. Energy lost: $250\,\mathrm{J}$. Much smaller than the head-on loss. Relative speed before impact is smaller when they move the same way, so less kinetic energy is available to dissipate.

### Answer 9

1. Angular momentum about the pivot is conserved through the brief impact if the pivot’s impulse has no torque (it acts at the pivot). Kinetic energy is not conserved; the stick is perfectly inelastic.

2. The pivot can exert a large external impulse during the hit. That impulse changes the *linear* momentum of clay + block. Linear $\vec{P}$ of those two alone is not conserved. Angular momentum about the pivot still is.

3. For a free hanging block, during the short embedding the support tension is finite while the collision force is huge, so the external impulse is often negligible compared with the internal impulse. Linear momentum of bullet + block is then approximately conserved. A rigid rod with a fixed pivot is the opposite extreme: the pivot impulse is not negligible.

### Answer 10

1. $0.150(35.0) = (70.15)V$, so $V = 0.0748\,\mathrm{m/s}$.

2. Fraction remaining: $m/(m + M) = 0.150/70.15 = 0.00214$ (about $0.214\%$).

3. With $M = 5.00\,\mathrm{kg}$, fraction $= 0.150/5.15 = 0.0291$ (about $2.91\%$). The catch into the much heavier catcher leaves a smaller fraction of $K$. More of the original kinetic energy is dissipated when the target mass is larger relative to the projectile, for a stick with the target initially at rest.
