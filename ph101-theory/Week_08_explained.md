# PH101 Week 08 — Conservation of Energy, and Force from Potential Energy

Source: `Week_08.pdf` (slides titled Week_08).

The weekly plan is work and kinetic energy, gravitational potential energy, elastic potential energy, conservative and nonconservative forces, the force from a potential-energy function, and energy diagrams. Week 07 derived $K+U$. This week uses it on curved paths, projectiles, springs with gravity and friction, and then goes backward from $U$ to $\vec{F}$.

$g = 9.80\,\mathrm{m/s^2}$. Choose a zero of gravitational potential energy and keep it.

---

## 1. The energy equation this week actually uses

If every force that does work is conservative (gravity, an ideal spring),

$$
K_1 + U_1 = K_2 + U_2
$$

with

$$
K = \tfrac12 mv^2, \qquad U_g = mgy, \qquad U_e = \tfrac12 kx^2
$$

If friction, air resistance, or a hand also does work,

$$
W_\mathrm{other} + K_1 + U_{g1} + U_{e1} = K_2 + U_{g2} + U_{e2}
$$

$W_\mathrm{other}$ is the work of those nonconservative forces only. Do not also put their work inside a potential energy. The slides write the same relation with the $W_\mathrm{other}$ term moved to the other side. Both are the same equation. Pick one and keep the sign of friction negative when friction opposes the displacement and $f$ is a positive magnitude.

A baseball thrown straight up at $20.0\,\mathrm{m/s}$, mass $0.145\,\mathrm{kg}$, still reaches

$$
h = \frac{v^2}{2g} = 20.4\,\mathrm{m}
$$

as in Week 07. The mass cancels. Air resistance is ignored, so $W_\mathrm{other} = 0$.

---

## 2. Gravity on a curved path

The gravitational force is $m\vec{g}$, straight down, even if the path is a curve. For a small step $\Delta\vec{s} = \Delta x\,\hat{i} + \Delta y\,\hat{j}$,

$$
\Delta W_g = (-mg\,\hat{j})\cdot\Delta\vec{s} = -mg\,\Delta y
$$

Integrate from the start of the path to the end:

$$
W_g = -mg(y_2 - y_1)
$$

Only the vertical change survives. The horizontal pieces of the path contribute nothing, because gravity has no horizontal component. That is why a curved frictionless ramp and a straight frictionless ramp between the same two heights give the same speed. The path does not appear in $U_g = mgy$.

---

## 3. When mechanical energy is not conserved

A parachutist falling at constant speed has constant kinetic energy. Gravitational potential energy is decreasing. The difference leaves the mechanical account as negative work done by air resistance:

$$
K_1 + U_{g1} = W_\mathrm{other} + K_2 + U_{g2}
$$

with $K_1 = K_2$ and $W_\mathrm{other} < 0$.

Total energy, counting thermal energy, sound, and chemical energy, is still conserved. Mechanical energy $K+U$ is the piece that friction and drag can reduce. The lecture lists friction, air resistance, and inelastic deformation as the processes that do this.

---

## 4. The thrown baseball, in two phases

Mass $0.145\,\mathrm{kg}$. During the throw the hand moves $0.50\,\mathrm{m}$ upward, and the ball leaves the hand at $20.0\,\mathrm{m/s}$. After that, the hand is gone.

This is the problem the slides spend many pages on, because gravity does not wait until the ball is released.

### While the hand is touching the ball

Two upward-positive forces act: the hand, $F$, and gravity, $mg$.

$$
F - mg = ma
$$

Kinematics of the throw, from rest over $0.50\,\mathrm{m}$ up to $20.0\,\mathrm{m/s}$:

$$
(20.0)^2 = 0 + 2a(0.50), \qquad a = 400\,\mathrm{m/s^2}
$$

$$
F = m(g+a) = 0.145(9.80 + 400) = 59.4\,\mathrm{N}
$$

Using $F = ma$ and forgetting $mg$ gives $58.0\,\mathrm{N}$. The missing $1.4\,\mathrm{N}$ is the weight. The hand has two jobs: hold the ball up, and accelerate it.

The energy version of the same throw, with $y = 0$ at release and $y = -0.50\,\mathrm{m}$ at the start of the throw:

$$
\begin{aligned}
K_1 &= 0, & U_1 &= (0.145)(9.80)(-0.50) = -0.71\,\mathrm{J}\\
K_2 &= \tfrac12(0.145)(20.0)^2 = 29.0\,\mathrm{J}, & U_2 &= 0
\end{aligned}
$$

$$
W_\mathrm{hand} = (K_2 - K_1) + (U_2 - U_1) = 29.0 + 0.71 = 29.7\,\mathrm{J}
$$

$$
F = \frac{29.7}{0.50} = 59.4\,\mathrm{N}
$$

The $0.71\,\mathrm{J}$ is the gravitational potential energy gained during the throw. It is not a loss from the universe. It is energy the hand had to supply besides the kinetic energy.

### After release

From the release point to a point $15.0\,\mathrm{m}$ higher, $W_\mathrm{other} = 0$:

$$
29.0 + 0 = K_3 + (0.145)(9.80)(15.0)
$$

$$
K_3 = 29.0 - 21.3 = 7.7\,\mathrm{J}, \qquad v = \sqrt{\frac{2(7.7)}{0.145}} = 10\,\mathrm{m/s}
$$

The velocity is $+10\,\mathrm{m/s}$ on the way up and $-10\,\mathrm{m/s}$ on the way down. The speed is $10\,\mathrm{m/s}$ either way. The hand’s force is not in this second calculation. It already did its work before release.

---

## 5. Projectile speed does not depend on the launch angle

Two baseballs are hit with the same speed $v_0$ from the same height, at different angles. Ignore air resistance. At height $h$,

$$
\tfrac12 mv_0^2 + mgy_0 = \tfrac12 mv^2 + mgh
$$

$$
v = \sqrt{v_0^2 + 2g(y_0 - h)}
$$

The angle is not in the result, because $v_{0x}^2 + v_{0y}^2 = v_0^2$. The balls do not have the same velocity vector. They have the same speed. One can have a large $v_x$ and a small $v_y$, and the other the opposite, and $v_x^2 + v_y^2$ still matches.

This fails if air resistance matters, because drag depends on speed and on how long each ball has been flying.

---

## 6. Skateboard on a quarter-circle

Ali and the board, mass $25.0\,\mathrm{kg}$, start from rest at the top of a frictionless quarter-circle of radius $R = 3.00\,\mathrm{m}$.

Take $U_g = 0$ at the bottom. Then $U_1 = mgR$ and $K_1 = 0$. At the bottom, $U_2 = 0$.

$$
mgR = \tfrac12 mv_2^2, \qquad v_2 = \sqrt{2gR} = \sqrt{2(9.80)(3.00)} = 7.67\,\mathrm{m/s}
$$

The normal force does no work, because it is perpendicular to the velocity the whole way down. It does matter for the forces at the bottom. There the center of the circle is above Ali, so the centripetal acceleration is upward:

$$
a_\mathrm{rad} = \frac{v_2^2}{R} = \frac{2gR}{R} = 2g
$$

$$
n - mg = m(2g), \qquad n = 3mg = 3(25.0)(9.80) = 735\,\mathrm{N}
$$

Energy gave the speed. Newton’s second law gave the normal force. Neither one replaces the other. The slide’s phrase “$n = 2mg + w$” means $m a_\mathrm{rad} + mg$, since $a_\mathrm{rad} = 2g$ and $w = mg$.

---

## 7. Elevator, spring, and friction together

A $2000\,\mathrm{kg}$ elevator is falling at $4.00\,\mathrm{m/s}$ when it hits a spring. The spring compresses $2.00\,\mathrm{m}$ while stopping the elevator. A safety clamp adds a constant $17{,}000\,\mathrm{N}$ friction force. Find $k$.

The slide’s parenthetical weight, $119{,}600\,\mathrm{N}$, is not $2000 \times 9.80$. The arithmetic in the solution uses $mg = 19{,}600\,\mathrm{N}$. Use the mass.

Set $y = 0$ and $U_e = 0$ at the point where the spring is first touched. Downward displacement makes $y_2 = -2.00\,\mathrm{m}$. At the bottom, $v_2 = 0$.

$$
\begin{aligned}
K_1 &= \tfrac12(2000)(4.00)^2 = 1.60\times 10^4\,\mathrm{J}\\
U_1 &= 0\\
W_\mathrm{friction} &= -(17000)(2.00) = -3.40\times 10^4\,\mathrm{J}\\
U_{g2} &= (2000)(9.80)(-2.00) = -3.92\times 10^4\,\mathrm{J}\\
U_{e2} &= \tfrac12 k(2.00)^2 = 2.00\, k
\end{aligned}
$$

$$
1.60\times 10^4 + 0 - 3.40\times 10^4 = 0 - 3.92\times 10^4 + 2.00\, k
$$

$$
k = 1.06\times 10^4\,\mathrm{N/m}
$$

Three different energies are in one line: kinetic, gravitational, and elastic. Friction is not given a potential energy. It is $W_\mathrm{other}$.

---

## 8. Conservative and nonconservative forces

| | Conservative | Nonconservative |
| --- | --- | --- |
| Path | Work between two points is the same for every path | Work depends on the path |
| Closed loop | Work is zero | Work is not zero in general |
| Potential energy | A $U$ exists, and $W = -\Delta U$ | No potential energy |
| Mechanical energy | $K+U$ is constant if only these forces do work | $K+U$ changes |

Conservative examples in the lecture: gravity, the spring force.

Nonconservative examples: kinetic friction, air resistance. Pushing a couch farther means more negative work by friction, even if you start and end at the same two points. Gravity would have done the same work on either route.

### The futon

Mass $40.0\,\mathrm{kg}$, $\mu_k = 0.200$, level floor. The straight path is $2.50\,\mathrm{m}$. The dogleg is $2.00\,\mathrm{m}$ then $1.50\,\mathrm{m}$, so $3.50\,\mathrm{m}$. You push at constant speed, so $\Delta K = 0$ and $\Delta U_g = 0$. Your positive work cancels the negative work of friction:

$$
W_\mathrm{you} = f_k d = \mu_k mg\, d
$$

$$
\begin{aligned}
W_\mathrm{straight} &= (0.200)(40.0)(9.80)(2.50) = 196\,\mathrm{J}\\
W_\mathrm{dogleg} &= (0.200)(40.0)(9.80)(3.50) = 274\,\mathrm{J}
\end{aligned}
$$

You do $78\,\mathrm{J}$ more on the longer path. Gravity would not have cared which path you used. Friction does. That is the definition of a nonconservative force, in a numerical example.

---

## 9. Force from potential energy

The defining relation $W = -\Delta U$, for a small step, is $F_x\Delta x = -\Delta U$. Divide by $\Delta x$ and let the step shrink:

$$
F_x = -\frac{dU}{dx}
$$

In three dimensions,

$$
F_x = -\frac{\partial U}{\partial x}, \quad F_y = -\frac{\partial U}{\partial y}, \quad F_z = -\frac{\partial U}{\partial z}
$$

$$
\vec{F} = -\left(\frac{\partial U}{\partial x}\,\hat{i} + \frac{\partial U}{\partial y}\,\hat{j} + \frac{\partial U}{\partial z}\,\hat{k}\right) = -\nabla U
$$

The minus sign means the force points toward lower potential energy. A ball rolls down a hill, not up it.

Checks against forces you already know:

$$
U_g = mgy \implies F_y = -\frac{d}{dy}(mgy) = -mg
$$

which is downward when upward is positive.

$$
U_e = \tfrac12 kx^2 \implies F_x = -kx
$$

**Two charges.** One charge is fixed at $x = 0$. The other moves on the positive $x$-axis. $U(x) = C/x$ with $C > 0$.

$$
F_x = -\frac{d}{dx}\left(\frac{C}{x}\right) = \frac{C}{x^2}
$$

Positive $F_x$ means repulsion, away from the origin, which is what equal charges do.

**Lecture partial-derivative example.**

$$
U = \tfrac12 k(x^2 + y^2)
$$

$$
\vec{F} = -kx\,\hat{i} - ky\,\hat{j}
$$

There is no $z$ piece. This is a spring-like force pulling toward the origin in the $xy$-plane.

### Equilibrium on an energy diagram

The last slide is titled “Energy Diagram” and does not print a figure caption. The diagram that belongs with $F_x = -dU/dx$ is a plot of $U(x)$, with the total mechanical energy $E$ drawn as a horizontal line.

- $K = E - U$. The particle can only be where $E \ge U$.
- Turning points are where $E = U$, so $K = 0$.
- Equilibrium is where the slope is zero, because that is where $F_x = 0$.
- A minimum of $U$ is stable. A small nudge raises $U$ and the force pushes back.
- A maximum of $U$ is unstable. A small nudge lowers $U$ and the force pushes farther away.

---

## 10. Crate that does not reach the top

A $12\,\mathrm{kg}$ crate is given $5.0\,\mathrm{m/s}$ at the bottom of a $2.5\,\mathrm{m}$ ramp at $30^\circ$. Friction is not negligible. The crate travels $1.6\,\mathrm{m}$ up the ramp and stops.

The height that belongs in $U_g$ is the height actually gained,

$$
h = (1.6)\sin 30^\circ = 0.80\,\mathrm{m}
$$

not the height of the unused part of the ramp, and not $2.5\cos 30^\circ$. One slide substitutes $2.5\cos 30$ and a positive $f d$ on the kinetic-energy side. Use the work of friction as negative if $f$ is a positive magnitude, and use the $1.6\,\mathrm{m}$ the crate really travels.

$$
-f(1.6) + \tfrac12(12)(5.0)^2 + 0 = 0 + (12)(9.80)(0.80)
$$

$$
-1.6f + 150 = 94.1, \qquad f = 35\,\mathrm{N}
$$

The worker’s frictionless prediction would have used $h = 2.5\sin 30^\circ = 1.25\,\mathrm{m}$ and $f = 0$. Then

$$
\tfrac12 m(5.0)^2 = mgh
$$

needs $h = 1.28\,\mathrm{m}$, almost exactly the full ramp. With friction, the crate runs out of kinetic energy at $0.80\,\mathrm{m}$ of height and slides back.

---

## Sample quiz

$g = 9.80\,\mathrm{m/s^2}$. Ignore air resistance unless the question includes it.

### Question 1

You throw a $0.200\,\mathrm{kg}$ ball straight up. Your hand moves $0.40\,\mathrm{m}$ upward during the throw, the ball starts from rest, and it leaves your hand at $12.0\,\mathrm{m/s}$.

(a) Find the average force of your hand during the throw. Keep gravity in the calculation.

(b) Someone computes $F = ma$ and gets a smaller force. How many newtons did they miss, and what is that number physically?

(c) How fast is the ball when it is $4.0\,\mathrm{m}$ above the release point?

### Question 2

A $40.0\,\mathrm{kg}$ child slides from rest down a frictionless slide. The slide drops $2.50\,\mathrm{m}$ vertically. Its shape is a curve, not a straight ramp. At the bottom the slide becomes a short horizontal section, and the child then enters a circular loop of radius $1.20\,\mathrm{m}$. The bottom of the loop is at the same height as the end of the slide. Assume the child has the speed from the $2.50\,\mathrm{m}$ drop when they reach the bottom of the loop, and treat them as a particle.

(a) Find the speed at the bottom.

(b) Find the normal force of the track on the child at the bottom of the loop.

(c) Why did the curved shape of the slide not appear in part (a)?

### Question 3

A $5.00\,\mathrm{kg}$ block is released from rest at the top of a $3.00\,\mathrm{m}$ ramp inclined at $35.0^\circ$. $\mu_k = 0.20$ along the ramp. At the bottom, the block is on level frictionless ice and hits a spring, $k = 800\,\mathrm{N/m}$. The spring is at the foot of the ramp.

(a) Find the speed at the bottom of the ramp, before the spring.

(b) How far does the spring compress? The block is on level ice while the spring compresses, so the height is not still changing during the compression.

(c) Is the friction force conservative? Use the ramp and a longer, shallower ramp between the same two heights to justify the answer. You do not have to compute the second ramp if the reasoning is complete.

### Question 4

$$
U(x) = 2.00\, x^2 - x^3
$$

with $U$ in joules and $x$ in meters, for motion on the $x$-axis.

(a) Find $F_x(x)$.

(b) Find the equilibrium positions.

(c) A particle has total mechanical energy $E = 0$ and is at $x = 1.00\,\mathrm{m}$, moving in the positive direction. What is its kinetic energy there? Where is the next turning point on the positive $x$-axis?

### Question 5

You slide a $20.0\,\mathrm{kg}$ box $4.00\,\mathrm{m}$ across a level floor at constant speed. $\mu_k = 0.30$. You can push it in a straight line, or along a two-segment path of $3.00\,\mathrm{m}$ and $2.00\,\mathrm{m}$ that starts and ends at the same points.

(a) How much work do you do on the straight path?

(b) How much more work do you do on the longer path?

(c) Gravity is a conservative force, and your push plus friction are not. Which result in this problem is the evidence, and why would a $1.00\,\mathrm{m}$ vertical lift between two fixed points have given the opposite kind of evidence?

---

## Answer key

### Question 1

(a) $v^2 = 2a(0.40)$, so $a = (12.0)^2 / 0.80 = 180\,\mathrm{m/s^2}$.

$$
F = m(g+a) = 0.200(9.80+180) = 38.0\,\mathrm{N}
$$

Energy check: $K$ gained is $14.4\,\mathrm{J}$, $U_g$ gained is $0.784\,\mathrm{J}$, and $(14.4+0.784)/0.40 = 38.0\,\mathrm{N}$.

(b) They missed $mg = 1.96\,\mathrm{N}$, the weight. The hand must support the ball and accelerate it.

(c)

$$
\tfrac12 m(12.0)^2 = \tfrac12 mv^2 + mg(4.0)
$$

$$
v^2 = 144 - 2(9.80)(4.0) = 65.6, \qquad v = 8.10\,\mathrm{m/s}
$$

### Question 2

(a) $mgh = \tfrac12 mv^2$, so

$$
v = \sqrt{2(9.80)(2.50)} = 7.00\,\mathrm{m/s}
$$

(b) At the bottom, centripetal acceleration is upward, toward the center of the loop:

$$
n - mg = m\frac{v^2}{R}
$$

$$
n = 40.0(9.80) + 40.0\frac{49.0}{1.20} = 392 + 1633 = 2025\,\mathrm{N}
$$

(c) $W_g = -mg\Delta y$. Only the vertical drop enters $U_g$. Any frictionless shape between the same heights gives the same speed. The loop’s normal force is a different question, asked at one point, and it does not change that energy result because the normal force does no work.

### Question 3

(a) Height drop $h = 3.00\sin 35.0^\circ = 1.72\,\mathrm{m}$.

$$
W_f = -\mu_k mg\cos 35.0^\circ \,(3.00) = -24.1\,\mathrm{J}
$$

$$
W_f + mgh = \tfrac12 mv^2
$$

$$
-24.1 + 5.00(9.80)(1.72) = \tfrac12(5.00)v^2
$$

$$
60.2 = 2.50\, v^2, \qquad v = 4.91\,\mathrm{m/s}
$$

(b) On the ice, friction is gone and the height stays constant. The kinetic energy at the bottom becomes spring energy:

$$
\tfrac12(5.00)(4.91)^2 = \tfrac12(800)x^2, \qquad x = 0.388\,\mathrm{m}
$$

(c) Friction is nonconservative. A longer ramp between the same heights has a larger distance, so $\lvert W_f\rvert = \mu_k (mg\cos\alpha)\, L$ changes. Gravity’s work between those same heights is $-mg\Delta y$ on every path. The extra ramp length would change the speed at the bottom. A different path for gravity alone would not.

### Question 4

(a)

$$
F_x = -\frac{dU}{dx} = -(4.00x - 3x^2) = -4.00x + 3x^2
$$

(b) $F_x = 0$ when $x(3x - 4.00) = 0$, so $x = 0$ or $x = 1.33\,\mathrm{m}$.

The second derivative of $U$ is $4 - 6x$. At $x = 0$ it is positive, so $U$ has a minimum and the equilibrium is stable. At $x = 1.33\,\mathrm{m}$ it is negative, so $U$ has a maximum and the equilibrium is unstable.

(c) $U(1.00) = 2.00 - 1.00 = 1.00\,\mathrm{J}$. With $E = 0$,

$$
K = E - U = -1.00\,\mathrm{J}
$$

which is impossible. The particle cannot be at $x = 1.00\,\mathrm{m}$ if $E = 0$. The allowed region near the origin is where $U(x) \le 0$.

$$
2x^2 - x^3 \le 0 \implies x^2(2 - x) \le 0
$$

For $x > 0$ this means $x \ge 2$, and $U(2) = 0$. Between $x = 0$ and $x = 2$, $U$ is positive (its maximum is at $x = 4/3$), so $E = 0$ cannot enter that interval. There is no “next turning point” on a trip that starts at $x = 1$, because that point is forbidden. The turning point of the $E = 0$ motion on the positive axis is $x = 2.00\,\mathrm{m}$, and the particle would have to be at $x \ge 2$, not at $x = 1$.

### Question 5

(a)

$$
W = \mu_k mg d = (0.30)(20.0)(9.80)(4.00) = 235\,\mathrm{J}
$$

(b) The long path is $5.00\,\mathrm{m}$, so $W = 294\,\mathrm{J}$. The extra work is $59\,\mathrm{J}$.

(c) The extra $59\,\mathrm{J}$ is the evidence. The same two endpoints cost different amounts of work once friction is involved, so that work is path dependent. A $1.00\,\mathrm{m}$ vertical lift under gravity costs $mgh$ for every path with those endpoints. A staircase and a straight lift of $1.00\,\mathrm{m}$ do not change gravity’s work. That path independence is what “conservative” means.
