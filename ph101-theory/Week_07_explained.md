# PH101 Week 07 — Work, Power, and Mechanical Energy

Source: `Week_07.pdf`. The title slide inside the file says Week_06. The filename is Week_07. The weekly plan is applying Newton’s laws, then work and kinetic energy. Friction and drag open the file. Energy is the larger new topic.

\(g = 9.80\,\mathrm{m/s^2}\).

---

## 1. Forces carried forward from Week 06

Contact forces in this file: friction, the normal force, tension, an applied push, air resistance, the spring force, and buoyancy.

Kinetic and maximum static friction:

\[
f_k = \mu_k n, \qquad f_{s,\max} = \mu_s n
\]

The normal force is not always the weight. On a slope, \(n = mg\cos\alpha\) when there is no other perpendicular force.

A spring pulls or pushes back toward its relaxed length:

\[
F_x = -k\,\Delta x
\]

Compressed or stretched, the force is opposite the displacement. \(k\) is the force constant, in \(\mathrm{N/m}\).

### Drag and terminal speed

Drag acts on an object moving through a gas or a liquid, and it always opposes the velocity. The lecture writes

\[
F_D = \tfrac12 C\rho A v^2 = bv^2
\]

\(C\) is the drag coefficient, \(A\) is the front area, \(\rho\) is the fluid density, and \(b = \tfrac12 C\rho A\) collects those into one constant.

Terminal speed is the speed at which the drag has grown enough that the net force is zero, so the acceleration is zero. For an object falling straight down with no other vertical force except weight and drag,

\[
bv_t^2 = mg, \qquad v_t = \sqrt{\frac{mg}{b}}
\]

A heavier object, or a smaller \(b\), has a larger terminal speed. The parachutist in Week 08 is the energy version of this idea: once the speed is constant, kinetic energy is constant and air resistance is doing negative work.

The skier problem is on the slides with \(m = 60.0\,\mathrm{kg}\) and, in part (b), a friction force of \(45.0\,\mathrm{N}\). The slope angle is in the figure, and the figure’s number is not written in the text. The method, once you read \(\alpha\) off the figure, is

\[
a = g\sin\alpha
\]

with no friction, and

\[
a = g\sin\alpha - \frac{45.0}{60.0}
\]

when the \(45.0\,\mathrm{N}\) friction opposes the motion down the slope. The friction term is \(0.750\,\mathrm{m/s^2}\).

---

## 2. Work done by a constant force

\[
W = \vec{F}\cdot\vec{d} = Fd\cos\theta
\]

\(\theta\) is the angle between the force and the displacement, not the angle of a ramp unless the displacement is along the ramp and the force is along the ramp.

| \(\theta\) | Work | Meaning |
| --- | --- | --- |
| \(0^\circ\) | \(+Fd\) | Force and motion in the same direction |
| \(90^\circ\) | \(0\) | Force perpendicular to the motion |
| \(180^\circ\) | \(-Fd\) | Force opposite the motion |

On an \(F\)-\(x\) graph for a constant force, the work from \(x_1\) to \(x_2\) is the area of the rectangle, \(F(x_2-x_1)\).

**Tractor and sled.** The sled moves \(20\,\mathrm{m}\) on level ground. Its weight is \(14{,}700\,\mathrm{N}\), so its mass is

\[
m = \frac{14700}{9.80} = 1500\,\mathrm{kg}
\]

The tractor pulls with \(5000\,\mathrm{N}\) at \(36.9^\circ\) above the horizontal. Friction is \(3500\,\mathrm{N}\). \(\cos 36.9^\circ = 0.800\).

Work by each force, with displacement horizontal:

| Force | Why | Work |
| --- | --- | --- |
| Tractor pull | \(5000\cos 36.9^\circ = 4000\,\mathrm{N}\) along the motion | \(+4000\times 20 = +8.00\times 10^4\,\mathrm{J}\) |
| Friction | Opposite the displacement | \(-3500\times 20 = -7.00\times 10^4\,\mathrm{J}\) |
| Weight | Perpendicular to the displacement | \(0\) |
| Normal | Perpendicular to the displacement | \(0\) |

Net work:

\[
W_\mathrm{net} = 8.00\times 10^4 - 7.00\times 10^4 = 1.00\times 10^4\,\mathrm{J}
\]

The same number comes from the net horizontal force, \(4000-3500 = 500\,\mathrm{N}\), times \(20\,\mathrm{m}\).

---

## 3. Work–energy theorem

The lecture starts from \(v_2^2 = v_1^2 + 2a s\), multiplies by \(m/2\), and uses \(F_\mathrm{net} = ma\):

\[
W_\mathrm{net} = F_\mathrm{net}\, s = \tfrac12 mv_2^2 - \tfrac12 mv_1^2 = K_2 - K_1
\]

Kinetic energy is

\[
K = \tfrac12 mv^2
\]

Net work equals the change in kinetic energy. Negative net work takes kinetic energy away.

**Sled speed.** The sled starts at \(2.0\,\mathrm{m/s}\). The net work over \(20\,\mathrm{m}\) is \(1.00\times 10^4\,\mathrm{J}\).

\[
1.00\times 10^4 = \tfrac12(1500)v_2^2 - \tfrac12(1500)(2.0)^2
\]

\[
10000 = 750\, v_2^2 - 3000, \qquad v_2 = 4.16\,\mathrm{m/s}
\]

The positive root is the speed. The direction is still the direction of the pull. The initial kinetic energy is \(3000\,\mathrm{J}\), not \(1500\,\mathrm{J}\): the \(2.0\) has to be squared.

---

## 4. Variable force, and the spring

If \(F_x\) changes with \(x\), the rectangle becomes a sum of thin rectangles:

\[
W = \int_{x_1}^{x_2} F_x(x)\, dx
\]

That integral is the area under the \(F\)-\(x\) curve.

For a spring whose force on the object is \(F_x = -kx\), the work done **by the spring** from \(x_1\) to \(x_2\) is

\[
W_\mathrm{spring} = \int_{x_1}^{x_2}(-kx)\,dx = \tfrac12 kx_1^2 - \tfrac12 kx_2^2
\]

The lecture also computes \(\int kx\,dx\) when it is talking about the work done **on** the spring by the outside agent who stretches it slowly. Those two works are opposites:

\[
W_\mathrm{on\ spring} = \tfrac12 kx_2^2 - \tfrac12 kx_1^2, \qquad W_\mathrm{by\ spring} = -W_\mathrm{on\ spring}
\]

**Bathroom scale.** A \(600\,\mathrm{N}\) person compresses the spring by \(1.0\,\mathrm{cm} = 0.010\,\mathrm{m}\) and stops. At equilibrium the spring force balances the weight:

\[
k(0.010) = 600, \qquad k = 6.0\times 10^4\,\mathrm{N/m}
\]

The work done on the spring during the compression, starting from \(x = 0\), is

\[
W = \tfrac12 k x^2 = \tfrac12(6.0\times 10^4)(0.010)^2 = 3.0\,\mathrm{J}
\]

The average force during the compression is \(300\,\mathrm{N}\), and \(300\times 0.010 = 3.0\,\mathrm{J}\). Same result. The slide writes \(k = (-600)/(-0.010)\). The two minus signs are the spring force and the compression. The constant \(k\) itself is positive.

---

## 5. Power

Power is work per time, or the rate at which energy is transferred:

\[
P_\mathrm{avg} = \frac{W}{t}, \qquad P = \frac{dW}{dt}
\]

For a force that stays along the velocity,

\[
P = \vec{F}\cdot\vec{v} = Fv\cos\theta
\]

The SI unit is the watt:

\[
1\,\mathrm{W} = 1\,\mathrm{J/s}
\]

A kilowatt-hour is an energy, not a power. It is the energy transferred by running at \(1\,\mathrm{kW}\) for one hour:

\[
1\,\mathrm{kWh} = (1000\,\mathrm{J/s})(3600\,\mathrm{s}) = 3.6\times 10^6\,\mathrm{J}
\]

The slide asks for the relation between the watt and the horsepower. One mechanical horsepower is \(746\,\mathrm{W}\).

---

## 6. Potential energy

Potential energy belongs to a system, and it depends on position or arrangement. It is energy that can become kinetic energy.

### Gravity

The work done **by gravity** when a particle moves from height \(y_1\) to height \(y_2\) is

\[
W_g = mg(y_1 - y_2) = -(U_2 - U_1)
\]

so the gravitational potential energy is

\[
U_g = mgy
\]

The zero of \(U_g\) is a choice. Changing the zero adds the same constant at the start and at the end, and the constant cancels in every difference.

The minus sign is the whole point of the definition. Lift an object at constant speed: gravity’s force is opposite the displacement, so gravity does negative work, and \(U_g\) increases. Drop it: gravity does positive work, and \(U_g\) decreases.

### The spring

\[
U_e = \tfrac12 kx^2
\]

\(x\) is measured from the relaxed position. The work done by the spring is \(-\Delta U_e\). Stretching the spring stores energy. As it returns toward \(x = 0\), that energy leaves \(U_e\).

The lecture’s chain

\[
W_e = \tfrac12 kx_1^2 - \tfrac12 kx_2^2 = -(U_{e2} - U_{e1})
\]

is this statement. \(W_e + W_F = 0\) on that slide means the work by the spring and the work by the ideal external force that balances it, during a slow stretch, add to zero. The energy did not disappear. It is in \(U_e\).

---

## 7. Conservation of mechanical energy

If the work in the work–energy theorem is only the work of gravity (or of a spring), replace that work by \(-\Delta U\):

\[
K_2 - K_1 = -(U_2 - U_1)
\]

\[
K_1 + U_1 = K_2 + U_2
\]

Mechanical energy \(E = K + U\) is constant. The lecture is explicit: this is true when gravity, or the spring, is the only force doing work. Friction, air resistance, and a push from a hand are not inside \(U\).

When those other forces do work \(W_\mathrm{other}\),

\[
W_\mathrm{other} + K_1 + U_1 = K_2 + U_2
\]

\(W_\mathrm{other}\) is negative for kinetic friction and for drag. The summary line on the slides,

\[
W = K_f - K_i, \qquad W = -\Delta U, \qquad K_2 + U_2 = K_1 + U_1
\]

is three different statements. The first is the work–energy theorem for the net work. The second defines potential energy from the work of a conservative force. The third is conservation, and it is not true just because the first two exist. Friction breaks the third one.

Both stores can be present at once:

\[
K_1 + U_{g1} + U_{e1} = K_2 + U_{g2} + U_{e2}
\]

again only if \(W_\mathrm{other} = 0\).

### Baseball thrown straight up

Mass \(0.145\,\mathrm{kg}\), \(v_0 = 20.0\,\mathrm{m/s}\), air resistance ignored. Take \(U_g = 0\) at the release point. At the top, \(K_2 = 0\).

\[
0 + mgh = \tfrac12 m(20.0)^2
\]

The mass cancels.

\[
h = \frac{(20.0)^2}{2(9.80)} = 20.4\,\mathrm{m}
\]

### Glider on a spring

Mass \(0.200\,\mathrm{kg}\), \(k = 5.00\,\mathrm{N/m}\), released from rest at \(x = 0.100\,\mathrm{m}\). Find \(v_x\) at \(x = 0.080\,\mathrm{m}\). The track is frictionless and horizontal, so \(U_g\) does not change and can be left out.

\[
\begin{align*}
K_1 &= 0 \\
U_1 &= \tfrac12(5.00)(0.100)^2 = 0.0250\,\mathrm{J} \\
U_2 &= \tfrac12(5.00)(0.080)^2 = 0.0160\,\mathrm{J}
\end{align*}
\]

\[
K_2 = 0.0250 - 0.0160 = 0.0090\,\mathrm{J}
\]

\[
v_x = -\sqrt{\frac{2(0.0090)}{0.200}} = -0.30\,\mathrm{m/s}
\]

The negative sign is the direction: the glider was released from positive \(x\) and is moving back toward \(x = 0\). The speed is \(0.30\,\mathrm{m/s}\). One slide writes \(K_2 = U_2 - (K_1+U_1)\), which has the stored energies backward. The numbers on the next slide use \(K_2 = 0.009\,\mathrm{J}\), which is the correct difference.

---

## 8. The arrow question

One slide asks only “What is the speed of the arrow?” The figure and the numbers are not in the extracted text. Problems of that type in this chapter are work–energy problems: the work done while drawing the bow, or the elastic energy \(\tfrac12 kx^2\) stored in the bow, equals the kinetic energy of the arrow after it leaves the string, if you ignore the height change and the friction. If your copy of the slide shows a force and a draw distance, use

\[
W = \tfrac12 mv^2
\]

if the arrow starts from rest and no other work is done. If it shows \(k\) and a draw \(x\), use

\[
\tfrac12 kx^2 = \tfrac12 mv^2
\]

---

## Sample quiz

\(g = 9.80\,\mathrm{m/s^2}\).

### Question 1

A \(25.0\,\mathrm{kg}\) crate is pulled \(8.00\,\mathrm{m}\) along a horizontal floor by a rope at \(40.0^\circ\) above the horizontal. The tension is \(80.0\,\mathrm{N}\). Kinetic friction is \(30.0\,\mathrm{N}\). The crate starts from rest.

(a) Find the work done by the rope, by friction, by the normal force, and by gravity.

(b) Find the net work.

(c) Find the speed after \(8.00\,\mathrm{m}\).

(d) Why is \(W = 80.0 \times 8.00\) the wrong work for the rope?

### Question 2

A horizontal spring is relaxed. You push a \(0.50\,\mathrm{kg}\) block into it, compressing it \(0.12\,\mathrm{m}\), and release the block from rest. \(k = 200\,\mathrm{N/m}\). The floor is frictionless until the block leaves the spring. After it leaves, it slides onto a rough patch \(2.0\,\mathrm{m}\) long with \(\mu_k = 0.15\), and then the floor is frictionless again.

(a) Find the speed as the block leaves the spring.

(b) Find the speed after the rough patch.

(c) A classmate uses \(K+U\) conservation across the rough patch. Which term did they leave out, and is their speed too high or too low?

### Question 3

A pump lifts water at a steady \(4.0\,\mathrm{kg/s}\) through a vertical height of \(12\,\mathrm{m}\). The water is essentially at rest in the reservoir and leaves the pipe at \(3.0\,\mathrm{m/s}\). Ignore friction in the pipe.

(a) How much work must the pump do on \(4.0\,\mathrm{kg}\) of water?

(b) What power must the pump supply?

(c) How many kilowatt-hours is that if the pump runs for \(2.0\,\mathrm{h}\)? Use \(1\,\mathrm{kWh} = 3.6\times 10^6\,\mathrm{J}\).

### Question 4

A \(2.00\,\mathrm{kg}\) block slides down a frictionless ramp from rest. The ramp is \(1.50\,\mathrm{m}\) long and \(30.0^\circ\) above the horizontal. It then enters a rough horizontal patch.

(a) Find the speed at the bottom using energy. Do not use \(a = g\sin\theta\) followed by a kinematic equation, except as a check if you want one.

(b) The rough patch is long, and \(\mu_k = 0.25\). How far does the block slide before stopping?

(c) The normal force on the ramp did no work. Explain why, even though the normal force is not zero.

### Question 5

A \(1500\,\mathrm{kg}\) car travels at a constant \(20\,\mathrm{m/s}\) up a \(10.0^\circ\) incline. Friction and air resistance together are a \(400\,\mathrm{N}\) force down the incline. The engine drives the wheels so that the car does not slow down.

(a) Find the power the engine must deliver to keep the speed constant. Take the driving force along the incline.

(b) The same car comes to a level road, the resistive force stays \(400\,\mathrm{N}\), and the speed stays \(20\,\mathrm{m/s}\). What power is required now?

(c) Why did the incline cost extra power even though the kinetic energy is not changing in either part?

---

## Answer key

### Question 1

(a) Rope: \(80.0 \times 8.00 \times \cos 40.0^\circ = 490\,\mathrm{J}\).

Friction: \(-30.0 \times 8.00 = -240\,\mathrm{J}\).

Normal and gravity are perpendicular to the horizontal displacement, so each does \(0\).

(b) \(W_\mathrm{net} = 490 - 240 = 250\,\mathrm{J}\).

(c)

\[
250 = \tfrac12(25.0)v^2, \qquad v = 4.47\,\mathrm{m/s}
\]

(d) Only the component of the tension along the displacement does work. \(\cos 40^\circ\) is required because \(40^\circ\) of the pull is vertical.

### Question 2

(a) \(\tfrac12 kx^2 = \tfrac12 mv^2\), with \(x = 0.12\,\mathrm{m}\) and \(K = 0\) at release.

\[
\tfrac12(200)(0.12)^2 = 1.44\,\mathrm{J} = \tfrac12(0.50)v^2, \qquad v = 2.40\,\mathrm{m/s}
\]

(b) On the rough patch the spring is no longer touching the block, so \(U_e\) is gone. Friction does

\[
W_f = -\mu_k mg d = -(0.15)(0.50)(9.80)(2.0) = -1.47\,\mathrm{J}
\]

\[
K_2 = 1.44 - 1.47 = -0.03\,\mathrm{J}
\]

Kinetic energy cannot become negative. The block stops before the end of the patch. Set \(K_2 = 0\):

\[
1.44 = (0.15)(0.50)(9.80)\, d, \qquad d = 1.96\,\mathrm{m}
\]

The speed after a full \(2.0\,\mathrm{m}\) patch is zero. It stops \(1.96\,\mathrm{m}\) into the patch.

(c) They left out \(W_\mathrm{other}\), the negative work of friction. Their speed is too high. Conservation of \(K+U\) does not survive a nonconservative force unless that work is written in by hand.

### Question 3

(a) For \(4.0\,\mathrm{kg}\),

\[
W = mgh + \tfrac12 mv^2 = 4.0(9.80)(12) + \tfrac12(4.0)(3.0)^2 = 470 + 18 = 488\,\mathrm{J}
\]

(b) That \(4.0\,\mathrm{kg}\) passes every second, so \(P = 488\,\mathrm{W}\).

(c) Energy in \(2.0\,\mathrm{h}\):

\[
E = (488\,\mathrm{J/s})(7200\,\mathrm{s}) = 3.51\times 10^6\,\mathrm{J} = 0.98\,\mathrm{kWh}
\]

### Question 4

(a) Height drop \(h = 1.50\sin 30.0^\circ = 0.750\,\mathrm{m}\).

\[
mgh = \tfrac12 mv^2, \qquad v = \sqrt{2(9.80)(0.750)} = 3.83\,\mathrm{m/s}
\]

(b) \(W_f = -\mu_k mg d = 0 - \tfrac12 mv^2\), so

\[
d = \frac{v^2}{2\mu_k g} = \frac{2gh}{2\mu_k g} = \frac{0.750}{0.25} = 3.00\,\mathrm{m}
\]

(c) On the ramp the normal force is perpendicular to the displacement along the ramp. \(\cos 90^\circ = 0\), so its work is zero. A force can be large and still do no work.

### Question 5

(a) Constant velocity, so the net force along the incline is zero. The engine force must balance the component of the weight and the resistance:

\[
F = mg\sin 10.0^\circ + 400 = 1500(9.80)\sin 10.0^\circ + 400 = 2550 + 400 = 2950\,\mathrm{N}
\]

\[
P = Fv = (2950)(20) = 5.90\times 10^4\,\mathrm{W} = 59.0\,\mathrm{kW}
\]

(b) On level ground the \(mg\sin\theta\) term is gone:

\[
P = (400)(20) = 8000\,\mathrm{W} = 8.0\,\mathrm{kW}
\]

(c) Kinetic energy is constant in both cases, so the net work is zero. On the incline the engine’s positive work is paying for the increase in gravitational potential energy and for the negative work of resistance. On the flat road it only pays for the resistance. “\(K\) is constant” does not mean the engine is doing no work.
