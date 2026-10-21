# Lab Revision Paper: Projectile Motion & Conservation of Energy
**Topic:** Projectile Launchers, Time of Flight, Kinetic vs. Potential Energy, and Conservation Laws

---

## 🟢 Easy Level: Time of Flight & Motion Characteristics

### Question
1. Based on your lab manual's introduction, explain the primary difference between **linear motion** and **projectile motion** regarding their dimensions and paths.
2. A projectile launcher is clamped horizontally onto a lab bench. The vertical distance from the release point of the ball to the floor is measured to be $y = 0.265\text{ m}$. Assuming the acceleration due to gravity is $g = 9.80\text{ m/s}^2$, calculate the **time of flight ($t$)** it takes for the ball to hit the ground.

### Solution
1. **Differences in Motion:**
   * **Linear Motion:** This is one-dimensional (1D) motion. The object travels along a completely straight path because velocity and acceleration act along the same line.
   * **Projectile Motion:** This is two-dimensional (2D) motion. The object travels along a curved (parabolic) path under the continuous influence of gravity.

2. **Calculate Time of Flight ($t$):**
   Using the second equation of motion for a horizontal launch where initial vertical velocity ($v_{0y}$) is zero:
   $$y = \frac{1}{2}gt^2 \implies t = \sqrt{\frac{2y}{g}}$$
   Substitute the lab values:
   $$t = \sqrt{\frac{2 \times 0.265\text{ m}}{9.80\text{ m/s}^2}} = \sqrt{\frac{0.530}{9.80}} = \sqrt{0.05408} \approx \mathbf{0.23\text{ s}}$$

---

## 🟡 Medium Level: Horizontal Launch Velocity & Kinetic Energy

### Question
A student fires a plastic ball of mass **$m = 10.0\text{ g}$** horizontally from the lab launcher. The total average horizontal range traveled by the ball before striking the floor is **$x = 0.717\text{ m}$**, and its calculated time of flight is **$t = 0.23\text{ s}$**.

1. Compute the initial horizontal launch velocity ($v_0$) of the ball.
2. Calculate the initial **Kinetic Energy ($KE$)** of the ball in Joules immediately after it is launched. 

### Solution
1. **Compute Initial Velocity ($v_0$):**
   Since no horizontal forces act on the ball (neglecting air resistance), horizontal velocity remains constant:
   $$x = v_0 t \implies v_0 = \frac{x}{t}$$
   $$v_0 = \frac{0.717\text{ m}}{0.23\text{ s}} \approx \mathbf{3.12\text{ m/s}}$$

2. **Calculate Kinetic Energy ($KE$):**
   First, convert the mass from grams to kilograms:
   $$m = 10.0\text{ g} = 0.010\text{ kg}$$
   Now, apply the kinetic energy formula:
   $$KE = \frac{1}{2}mv_0^2$$
   $$KE = \frac{1}{2} \times 0.010\text{ kg} \times (3.12\text{ m/s})^2$$
   $$KE = 0.005 \times 9.7344 = \mathbf{0.049\text{ J}}$$

---

## 🔴 Hard Level: Vertical Launch & Conservation of Energy Verification

### Question
To verify the **Conservation of Mechanical Energy**, the launcher is adjusted to fire the same $10.0\text{ g}$ plastic ball perfectly vertically ($90.0^\circ$). The student performs three experimental trials and records the maximum peak heights reached by the ball:
* **Trial 1:** $49.7\text{ cm}$
* **Trial 2:** $48.0\text{ cm}$
* **Trial 3:** $50.2\text{ cm}$

1. Calculate the **Average Height ($h_{\text{average}}$)** in meters.
2. Calculate the peak **Potential Energy ($PE$)** obtained by the ball at its maximum vertical displacement. *(Use $g = 9.80\text{ m/s}^2$)*
3. Using the initial kinetic energy value from the horizontal launch ($KE = 0.049\text{ J}$), calculate the **Percentage Difference** between $KE$ and $PE$ using the lab manual's specific formula:
   $$\%\text{ Difference} = \left| \frac{KE - PE}{KE} \right| \times 100$$
4. Based on your lab's viva reflections, if the launcher was slightly tilted away from a perfect $90.0^\circ$ vertical alignment during this stage, how would it affect your results?

### Solution
1. **Calculate Average Height ($h_{\text{average}}$):**
   $$h_{\text{average}} = \frac{49.7\text{ cm} + 48.0\text{ cm} + 50.2\text{ cm}}{3} = \frac{147.9\text{ cm}}{3} = 49.3\text{ cm} = \mathbf{0.493\text{ m}}$$

2. **Calculate Potential Energy ($PE$):**
   $$m = 0.010\text{ kg}$$
   $$PE = m \cdot g \cdot h_{\text{average}}$$
   $$PE = 0.010\text{ kg} \times 9.80\text{ m/s}^2 \times 0.493\text{ m} = \mathbf{0.048\text{ J}}$$

3. **Calculate Percentage Difference:**
   $$\%\text{ Difference} = \left| \frac{0.049\text{ J} - 0.048\text{ J} & }{0.049\text{ J}} \right| \times 100$$
   $$\%\text{ Difference} = \left| \frac{0.001}{0.049} \right| \times 100 \approx 0.0204 \times 100 = \mathbf{2.04\%}$$

4. **Impact of Imperfect Alignment (Viva Q4 Context):**
   If the launcher is not perfectly vertical, the launch introduces an unwanted horizontal component of velocity ($v_x$). At the peak of its flight, the ball would not stop completely; it would still possess horizontal kinetic energy ($KE_x > 0$). Consequently, not all initial kinetic energy is converted into gravitational potential energy, resulting in a lower measured maximum height and introducing a systematic error into the conservation calculations.
