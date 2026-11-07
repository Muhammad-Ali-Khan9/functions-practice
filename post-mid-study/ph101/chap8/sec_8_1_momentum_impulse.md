# Section 8.1 — Momentum and Impulse

Young and Freedman, *University Physics*, Chapter 8. This section introduces momentum and the impulse–momentum theorem. Conservation of momentum, collisions that stick, and elastic formulas belong to later sections. Here the object is one body, a force acts for a short time, and the question is how the momentum changes.

Use $g = 9.80\,\mathrm{m/s^2}$. Momentum is in $\mathrm{kg\cdot m/s}$. Impulse is in $\mathrm{N\cdot s}$. Those units are the same.

## Momentum

$$
\vec{p} = m\vec{v}
$$

Momentum is a vector. Its direction is the direction of the velocity. Doubling the speed doubles the magnitude of $\vec{p}$. Doubling the mass does the same. A $2.00\,\mathrm{kg}$ object at $3.00\,\mathrm{m/s}$ has magnitude $6.00\,\mathrm{kg\cdot m/s}$. Reversing the velocity reverses $\vec{p}$.

Newton’s second law in momentum form is

$$
\sum \vec{F} = \frac{d\vec{p}}{dt}
$$

When the mass is constant this is $\sum \vec{F} = m\vec{a}$. The momentum form is the one that leads to impulse.

## Impulse

The impulse of a force over a time interval is

$$
\vec{J} = \int_{t_1}^{t_2} \vec{F}\,dt
$$

If the force is constant, $\vec{J} = \vec{F}\,\Delta t$. If the force varies, $\vec{J}$ is the area under the $F$-versus-$t$ graph between the two times. The average force over that interval satisfies

$$
\vec{F}_{\mathrm{avg}} = \frac{1}{\Delta t}\int_{t_1}^{t_2} \vec{F}\,dt, \qquad \vec{J} = \vec{F}_{\mathrm{avg}}\,\Delta t
$$

A tall thin force pulse and a short wide force pulse can deliver the same impulse. The areas match. The peak forces do not.

## Impulse–momentum theorem

Integrating $\sum \vec{F} = d\vec{p}/dt$ over a time interval gives

$$
\vec{J}_{\mathrm{net}} = \Delta\vec{p} = \vec{p}_f - \vec{p}_i
$$

The net impulse on an object equals the change in its momentum. Directions matter. Choose a positive axis and keep it. An object that arrives with $v_i$ to the right and leaves with $v_f$ to the left has a large $\Delta p$ because the velocity change includes the full reversal.

$$
\Delta p = m v_f - m v_i
$$

If right is positive, $v_i > 0$ and $v_f < 0$, so $\Delta p$ is negative. The impulse on the object is in the negative direction. The force the object exerts on the bat is opposite, by Newton’s third law.

A ball that stops has $\Delta p = -m v_i$. A ball that rebounds with the same speed has $\Delta p = -2m v_i$. The rebound needs twice the impulse magnitude for the same contact time, so the average force is twice as large.

## Weight during a short hit

During a bat–ball contact lasting a few milliseconds, the impulse from the bat is typically thousands of $\mathrm{N\cdot s}$ worth of force times time. The weight $mg$ acting for that same brief $\Delta t$ contributes a tiny impulse $mg\Delta t$. At the precision of the collision numbers, weight is dropped from the average-force estimate. Over a long flight, weight is the whole story. The short interval is what makes it negligible.

## Mistakes that change the answer

- Computing $m\Delta v$ with speeds only and dropping the sign of a reversal.
- Using $F = \Delta p$ without dividing by $\Delta t$.
- Reading the area under an $F$-$t$ graph as a force instead of an impulse.
- Treating a bounce and a stop as the same $\Delta p$.
- Converting grams to kilograms after the arithmetic, or never converting at all.

---

## Questions

### Question 1

A $0.145\,\mathrm{kg}$ baseball arrives at $40.0\,\mathrm{m/s}$ to the right and leaves at $50.0\,\mathrm{m/s}$ to the left after a $2.00\,\mathrm{ms}$ contact with a bat. Take right as positive.

1. Find the initial and final momenta.
2. Find the impulse of the bat on the ball.
3. Find the average force of the bat on the ball.

### Question 2

The same baseball from Question 1 is instead caught and brought to rest in $2.00\,\mathrm{ms}$.

1. Find $\Delta\vec{p}$ and $\vec{F}_{\mathrm{avg}}$ on the ball.
2. Compare those magnitudes with the bounce in Question 1.
3. Why does “same contact time, larger force for the bounce” follow from the impulse–momentum theorem?

### Question 3

A $57.0\,\mathrm{g}$ tennis ball is at rest just before a vertical hit. It then rises $5.50\,\mathrm{m}$ before stopping briefly at the top.

1. Find the speed just after the hit, from kinematics. Take upward positive and use $g = 9.80\,\mathrm{m/s^2}$.
2. Find the impulse of the racket on the ball.
3. If that impulse lasts $4.00\,\mathrm{ms}$, find the average force of the racket on the ball. Why can the weight be ignored in that average?

### Question 4

A constant force of $2500\,\mathrm{N}$ to the right acts on a $2.00\,\mathrm{kg}$ cart for $1.00\,\mathrm{ms}$. The cart is already moving at $5.00\,\mathrm{m/s}$ to the right.

1. Find the impulse.
2. Find the final speed if the force is in the same direction as the velocity.
3. Find the final speed if the same magnitude force acts to the left for the same time.

### Question 5

The force on a $0.500\,\mathrm{kg}$ particle is the triangular pulse in the figure described by words: $F = 0$ at $t = 0$, rises linearly to $40.0\,\mathrm{N}$ at $t = 0.0500\,\mathrm{s}$, then falls linearly to $0$ at $t = 0.100\,\mathrm{s}$. The force is in the $+x$ direction. The particle starts at rest.

1. Find the impulse from the area of the triangle.
2. Find the final velocity.
3. A constant $20.0\,\mathrm{N}$ force acts for the same $0.100\,\mathrm{s}$. Show that it gives the same impulse, and say what that means for the peak force.

### Question 6

A $1200\,\mathrm{kg}$ car traveling at $20.0\,\mathrm{m/s}$ hits a wall and stops in $0.150\,\mathrm{s}$.

1. Find the magnitude of the impulse on the car and the magnitude of the average force.
2. If a crumple zone stretches the stop to $0.450\,\mathrm{s}$, find the new average force.
3. The change in momentum is the same in both cases. What changed, and why does that protect the passengers?

### Question 7

Two forces act on a $3.00\,\mathrm{kg}$ object for $2.00\,\mathrm{s}$: $\vec{F}_1 = (6.00\,\hat{i} - 2.00\,\hat{j})\,\mathrm{N}$ and $\vec{F}_2 = (-1.00\,\hat{i} + 5.00\,\hat{j})\,\mathrm{N}$, both constant. The object starts at rest.

1. Find the net impulse.
2. Find the final momentum and the final velocity.
3. Find the magnitude of the final velocity.

### Question 8

True or false, with a reason or a counterexample.

1. If two objects have the same kinetic energy, they have the same momentum.
2. Impulse has the same units as momentum.
3. A zero net force over a time interval implies a zero impulse and a zero change in momentum.
4. The average force during a collision is always equal to the peak force on the $F$-$t$ graph.

### Question 9

A $0.400\,\mathrm{kg}$ stone is dropped from rest from a height of $5.00\,\mathrm{m}$ onto a soft pad. It comes to rest without bouncing in $0.0200\,\mathrm{s}$ after first touching the pad. Take downward as positive for the landing.

1. Find the speed just before contact, from free fall.
2. Find the impulse of the pad on the stone during the stop.
3. Find the average force of the pad on the stone. Is that force larger than the stone’s weight?

### Question 10

A rocket sled of mass $250\,\mathrm{kg}$ moves at $100\,\mathrm{m/s}$. Thrusters fire for $3.00\,\mathrm{s}$ and deliver a constant net force of $-1.50\times 10^4\,\mathrm{N}$ (opposite the velocity). Ignore other horizontal forces during the burn.

1. Find the impulse of the thrusters.
2. Find the final velocity.
3. How long would the same thrusters need to fire to bring the sled to rest from $100\,\mathrm{m/s}$?

---

## Answers

### Answer 1

1. $p_i = 0.145(40.0) = 5.80\,\mathrm{kg\cdot m/s}$. $p_f = 0.145(-50.0) = -7.25\,\mathrm{kg\cdot m/s}$.

2. $J = \Delta p = m(v_f - v_i) = 0.145(-50.0 - 40.0) = 0.145(-90.0) = -13.05\,\mathrm{kg\cdot m/s}$. Rounded to three significant figures that is $-13.1\,\mathrm{kg\cdot m/s}$. The impulse on the ball is to the left.

3. $\Delta t = 0.00200\,\mathrm{s}$, so

$$
F_{\mathrm{avg}} = \frac{J}{\Delta t} = \frac{-13.05}{0.00200} = -6.525\times 10^3\,\mathrm{N}
$$

The average force on the ball is $6.53\,\mathrm{kN}$ to the left.

### Answer 2

1. $p_f = 0$, so $\Delta p = 0 - 5.80 = -5.80\,\mathrm{kg\cdot m/s}$. Then

$$
F_{\mathrm{avg}} = \frac{-5.80}{0.00200} = -2.90\times 10^3\,\mathrm{N}
$$

2. The bounce had $\lvert\Delta p\rvert = 13.05$ and $\lvert F_{\mathrm{avg}}\rvert = 6.53\,\mathrm{kN}$. The stop has about half those magnitudes: $5.80$ and $2.90\,\mathrm{kN}$.

3. Same $\Delta t$ means $\lvert F_{\mathrm{avg}}\rvert = \lvert\Delta p\rvert/\Delta t$. The bounce reverses the velocity, so $\lvert\Delta p\rvert$ is larger. The average force must be larger.

### Answer 3

Mass $m = 0.0570\,\mathrm{kg}$.

1. At the top, $v = 0$. With $v^2 = v_0^2 - 2gH$,

$$
0 = v_0^2 - 2(9.80)(5.50), \qquad v_0^2 = 107.8, \qquad v_0 = 10.4\,\mathrm{m/s}
$$

upward.

2. The ball starts at rest, so $J = \Delta p = m v_0 - 0 = 0.0570(10.4) = 0.593\,\mathrm{N\cdot s}$ upward.

3. $F_{\mathrm{avg}} = J/\Delta t = 0.593/0.00400 = 148\,\mathrm{N}$ upward. The weight is $0.0570(9.80) = 0.559\,\mathrm{N}$. Over $4.00\,\mathrm{ms}$ its impulse is about $0.002\,\mathrm{N\cdot s}$, negligible next to $0.593\,\mathrm{N\cdot s}$.

### Answer 4

1. $J = F\Delta t = 2500(0.00100) = 2.50\,\mathrm{N\cdot s}$ to the right.

2. $\Delta p = 2.50$, so

$$
v_f = v_i + \frac{J}{m} = 5.00 + \frac{2.50}{2.00} = 6.25\,\mathrm{m/s}
$$

to the right.

3. Now $J = -2.50\,\mathrm{N\cdot s}$, so

$$
v_f = 5.00 + \frac{-2.50}{2.00} = 3.75\,\mathrm{m/s}
$$

to the right. The force slows the cart but does not reverse it.

### Answer 5

1. The triangle has base $0.100\,\mathrm{s}$ and height $40.0\,\mathrm{N}$.

$$
J = \tfrac{1}{2}(0.100)(40.0) = 2.00\,\mathrm{N\cdot s}
$$

2. Starting from rest, $p_f = J = 2.00$, so $v_f = 2.00/0.500 = 4.00\,\mathrm{m/s}$ in the $+x$ direction.

3. $20.0(0.100) = 2.00\,\mathrm{N\cdot s}$. A rectangle of height $20.0\,\mathrm{N}$ and width $0.100\,\mathrm{s}$ has the same area as the triangle of height $40.0\,\mathrm{N}$. Impulse depends on that area, not on the peak. The final velocities match. The peak force, and the damage it might do, need not match.

### Answer 6

1. Take the initial direction as positive. $\Delta p = 0 - 1200(20.0) = -2.40\times 10^4\,\mathrm{kg\cdot m/s}$. The impulse magnitude is $2.40\times 10^4\,\mathrm{N\cdot s}$. The average-force magnitude is

$$
F_{\mathrm{avg}} = \frac{2.40\times 10^4}{0.150} = 1.60\times 10^5\,\mathrm{N}
$$

2. With $\Delta t = 0.450\,\mathrm{s}$,

$$
F_{\mathrm{avg}} = \frac{2.40\times 10^4}{0.450} = 5.33\times 10^4\,\mathrm{N}
$$

3. $\Delta p$ is fixed by the stop from $20.0\,\mathrm{m/s}$ to rest. Stretching $\Delta t$ reduces $F_{\mathrm{avg}} = \Delta p/\Delta t$. The passengers feel a smaller average force for a longer time.

### Answer 7

1. $\vec{F}_{\mathrm{net}} = (5.00\,\hat{i} + 3.00\,\hat{j})\,\mathrm{N}$. Then

$$
\vec{J} = \vec{F}_{\mathrm{net}}\Delta t = (10.0\,\hat{i} + 6.00\,\hat{j})\,\mathrm{N\cdot s}
$$

2. Starting from rest, $\vec{p}_f = \vec{J} = (10.0\,\hat{i} + 6.00\,\hat{j})\,\mathrm{kg\cdot m/s}$. Then

$$
\vec{v}_f = \frac{\vec{p}_f}{m} = (3.33\,\hat{i} + 2.00\,\hat{j})\,\mathrm{m/s}
$$

3. $v_f = \sqrt{3.33^2 + 2.00^2} = \sqrt{15.1} = 3.89\,\mathrm{m/s}$.

### Answer 8

1. False. $K = p^2/(2m)$, so equal kinetic energies at different masses mean different momenta. A $1.00\,\mathrm{kg}$ object and a $4.00\,\mathrm{kg}$ object with $K = 8.00\,\mathrm{J}$ have speeds $4.00\,\mathrm{m/s}$ and $2.00\,\mathrm{m/s}$, and momenta $4.00$ and $8.00\,\mathrm{kg\cdot m/s}$.

2. True. $\mathrm{N\cdot s} = (\mathrm{kg\cdot m/s^2})\cdot\mathrm{s} = \mathrm{kg\cdot m/s}$.

3. True. $\vec{J}_{\mathrm{net}} = \sum\vec{F}\,\Delta t = 0$ when the net force is zero throughout the interval, so $\Delta\vec{p} = 0$.

4. False. The average equals the peak only for a constant force. A triangular pulse has peak $40.0\,\mathrm{N}$ and average $20.0\,\mathrm{N}$.

### Answer 9

1. $v^2 = 2gh = 2(9.80)(5.00) = 98.0$, so $v = 9.90\,\mathrm{m/s}$ downward.

2. Downward positive: $p_i = 0.400(9.90) = 3.96\,\mathrm{kg\cdot m/s}$ and $p_f = 0$. The impulse of the pad on the stone is $\Delta p = -3.96\,\mathrm{N\cdot s}$ (upward).

3. $F_{\mathrm{avg}} = \Delta p/\Delta t = -3.96/0.0200 = -198\,\mathrm{N}$. The pad pushes upward with average magnitude $198\,\mathrm{N}$. The weight is only $3.92\,\mathrm{N}$, so the pad force is much larger than the weight during the stop.

### Answer 10

1. $J = F\Delta t = (-1.50\times 10^4)(3.00) = -4.50\times 10^4\,\mathrm{N\cdot s}$.

2. $p_i = 250(100) = 2.50\times 10^4\,\mathrm{kg\cdot m/s}$. Then

$$
p_f = p_i + J = 2.50\times 10^4 - 4.50\times 10^4 = -2.00\times 10^4\,\mathrm{kg\cdot m/s}
$$

$$
v_f = \frac{p_f}{m} = -80.0\,\mathrm{m/s}
$$

The sled reverses and moves at $80.0\,\mathrm{m/s}$ opposite the original direction.

3. To reach rest, $\Delta p = -2.50\times 10^4\,\mathrm{kg\cdot m/s}$. With the same force,

$$
\Delta t = \frac{\Delta p}{F} = \frac{-2.50\times 10^4}{-1.50\times 10^4} = 1.67\,\mathrm{s}
$$
