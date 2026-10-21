# Lab Revision Paper: Air Track System & Photogate Timers
**Topic:** Frictionless Motion, Average vs. Instantaneous Velocity, and Electronic Timing Methods

---

## 🟢 Easy Level: Air Track Fundamentals & Velocity Calculations

### Question
1. Based on the lab introduction, explain how an **Air Track System** manages to create a nearly frictionless environment for the glider to move.
2. In a trial run, a glider passes through two photogates spaced at a distance of $D = 0.80\text{ m}$. The electronic timer records an average transit time of $t_{\text{avg}} = 1.25\text{ s}$. Compute the average velocity ($v_{\text{avg}}$) of the glider in meters per second ($\text{m/s}$).

### Solution
1. **Frictionless Mechanism:**
   * The air track is a long, hollow triangular rail featuring tiny, evenly spaced holes along its upper surfaces. 
   * A blower pumps pressurized air into the track, forcing air out through these holes. This creates a continuous **thin cushion of air** that lifts the glider slightly, preventing direct metal-to-metal contact and drastically reducing mechanical friction.

2. **Calculate Average Velocity ($v_{\text{avg}}$):**
   Using the fundamental velocity relationship from Section 5.3:
   $$v_{\text{avg}} = \frac{\text{Distance traveled } (D)}{\text{Time taken } (t_{\text{avg}})}$$
   $$v_{\text{avg}} = \frac{0.80\text{ m}}{1.25\text{ s}} = \mathbf{0.64\text{ m/s}}$$

---

## 🟡 Medium Level: Photogate Precision vs. Stopwatches

### Question
1. According to your Pre-Lab section, explain why using electronic **photogates** is significantly better than utilizing a manual **stopwatch** for short-interval timing experiments.
2. A student records three time measurements for a glider passing between two closely spaced sensors: $t_1 = 0.148\text{ s}$, $t_2 = 0.151\text{ s}$, and $t_3 = 0.150\text{ s}$. 
   * Calculate the **average time ($t_{\text{avg}}$)**.
   * If the distance over this short path is exactly $D = 0.099\text{ m}$, calculate the estimated **instantaneous velocity ($v_{\text{inst}}$)**.

### Solution
1. **Photogates vs. Stopwatches:**
   * Manual stopwatches rely entirely on a human operator pressing a button, introducing **human reaction time errors** (typically $\pm 0.1$ to $0.2$ seconds). For rapid lab movements, this error can completely ruin the data.
   * Photogates utilize automated infrared beams. The timer starts and stops instantly the moment the glider blocks the light path, achieving precision down to thousandths of a second ($0.001\text{ s}$) with **zero human reaction error**.

2. **Calculations:**
   * **Average Time ($t_{\text{avg}}$):**
     $$t_{\text{avg}} = \frac{0.148 + 0.151 + 0.150}{3} = \frac{0.449}{3} \approx \mathbf{0.1497\text{ s}}$$
   * **Instantaneous Velocity ($v_{\text{inst}}$):**
     $$v_{\text{inst}} = \frac{D}{t_{\text{avg}}} = \frac{0.099\text{ m}}{0.1497\text{ s}} \approx \mathbf{0.6613\text{ m/s}}$$

---

## 🔴 Hard Level: Estimating Instantaneous Velocity via Limits

### Question
1. In Task 02, the experiment requires you to progressively **reduce the distance ($D$)** between the two photogates while keeping them centered around a fixed point $x_1$. Explain the physical and mathematical rationale behind this step when trying to find *instantaneous velocity*.
2. Suppose a glider accelerates down a tilted track. The table below displays the calculated average velocities ($v_{\text{avg}}$) as the photogate gap distance $D$ shrinks around point $x_1$:

| Distance $D$ (m) | Average Time $t_{\text{avg}}$ (s) | Calculated $v_{\text{avg}}$ (m/s) |
| :--- | :--- | :--- |
| $1.00$ | $1.250$ | $0.800$ |
| $0.50$ | $0.575$ | $0.870$ |
| $0.20$ | $0.222$ | $0.901$ |
| $0.05$ | $0.055$ | $0.909$ |

Plotting a graph of *Average Velocity ($v_{\text{avg}}$) vs. Distance ($D$)* yields a straight line with a y-intercept value of **$0.912\text{ m/s}$**. State the true experimental **instantaneous velocity ($v_{\text{inst}}$)** at point $x_1$ and calculate the **percentage error** of the final $0.05\text{ m}$ single data point trial relative to this true graphical value.

### Solution
1. **Rationale Behind Shrinking Distance:**
   * Average velocity measures motion across an extended interval. Instantaneous velocity requires finding the speed at one single exact moment in time ($t$).
   * Mathematically, this is defined by a calculus limit where the time interval approaches zero: 
     $$v_{\text{inst}} = \lim_{\Delta t \to 0} \frac{\Delta x}{\Delta t}$$
   * By physically bringing the photogates closer together, the distance ($\Delta x$ or $D$) approaches zero, which forces the time interval ($\Delta t$) to also approach zero. The resulting average measurement becomes an accurate approximation of the true instantaneous velocity at that localized coordinate point.

2. **Error Calculations:**
   * **True Instantaneous Velocity:** The y-intercept of a $v_{\text{avg}}$ vs. $D$ graph represents the velocity value as $D \to 0$. Therefore, $v_{\text{inst}} = \mathbf{0.912\text{ m/s}}$.
   * **Percentage Error Calculation:**
     $$\%\text{ Error} = \left| \frac{v_{\text{cal}} - v_{\text{exp}}}{v_{\text{cal}}} \right| \times 100\%$$
     $$\%\text{ Error} = \left| \frac{0.912\text{ m/s} - 0.909\text{ m/s}}{0.912\text{ m/s}} \right| \times 100\%$$
     $$\%\text{ Error} = \left( \frac{0.003}{0.912} \right) \times 100\% \approx 0.003289 \times 100\% = \mathbf{0.33\%}$$
