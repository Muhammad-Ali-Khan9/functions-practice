# Lab Revision Paper: Uniformly Accelerated Motion (Tape Timer Experiment)
**Topic:** Tape Timers, Velocity-Time Graphs, and Free-Fall Acceleration ($g$)

---

## 🟢 Easy Level: Time Intervals & Dot Spacing

### Question
A standard tape timer operates at a frequency of $f = 40\text{ Hz}$ to record the motion of a falling $200\text{ g}$ mass. 
1. Calculate the time interval ($\Delta t$) between two consecutive dots marked on the paper tape.
2. If a section of the tape shows dots that are perfectly equally spaced at a constant distance of $2.0\text{ cm}$ apart, what is the acceleration of the mass during that interval? Explain your reasoning.

### Solution
1. **Calculate the time interval ($\Delta t$):**
   The time between two consecutive dots is the period of the timer:
   $$\Delta t = \frac{1}{f} = \frac{1}{40\text{ Hz}} = \mathbf{0.025\text{ s}}\text{ (or } \frac{1}{40}\text{ s)}$$

2. **Determine the acceleration:**
   * **Acceleration:** $\mathbf{0\text{ m/s}^2}$
   * **Reasoning:** Equally spaced dots mean that the object covers equal distances ($\Delta x$) in equal intervals of time ($\Delta t$). Therefore, the velocity ($v = \frac{\Delta x}{\Delta t}$) is constant. Since the velocity is not changing, the acceleration is exactly zero.

---

## 🟡 Medium Level: Velocity Calculation & Graphical Analysis

### Question
During an experiment, a student records the position ($x$) of consecutive dots on a tape timer operating at $40\text{ Hz}$. The positions of the 4th and 5th dots are measured from the starting reference point ($x=0$):
* Position of 4th dot ($x_4$): $8.0\text{ cm}$
* Position of 5th dot ($x_5$): $12.5\text{ cm}$

1. Calculate the distance traveled ($\Delta x$) between these two dots.
2. Compute the average velocity ($v$) of the object during this specific interval in both $\text{cm/s}$ and $\text{m/s}$.
3. If a student plots a graph of *Average Velocity ($v$) vs. Time ($t$)* using this data, what physical quantity does the **slope** of the best-fit straight line represent?

### Solution
1. **Calculate the distance traveled ($\Delta x$):**
   $$\Delta x = x_5 - x_4 = 12.5\text{ cm} - 8.0\text{ cm} = \mathbf{4.5\text{ cm}}$$

2. **Compute the average velocity ($v$):**
   The time interval $\Delta t$ between consecutive dots is $\frac{1}{40}\text{ s} = 0.025\text{ s}$.
   * **Velocity in $\text{cm/s}$:**
     $$v = \frac{\Delta x}{\Delta t} = \frac{4.5\text{ cm}}{0.025\text{ s}} = \mathbf{180.0\text{ cm/s}}$$
   * **Velocity in $\text{m/s}$:**
     $$v = 180.0 \div 100 = \mathbf{1.80\text{ m/s}}$$

3. **Physical meaning of the slope:**
   The slope of a velocity-time graph ($\frac{\Delta v}{\Delta t}$) represents the **acceleration of the object**. In this specific free-fall experiment, the slope represents the **experimentally obtained acceleration due to gravity ($g$)**.

---

## 🔴 Hard Level: Frequency Changes & Error Analysis

### Question
A physics group performs the free-fall tape timer lab but mistakenly configures their spark timer apparatus to a lower frequency of **$10\text{ Hz}$** instead of the standard **$40\text{ Hz}$**. 

1. Describe how this frequency shift impacts the physical appearance of the dots on the paper tape compared to a standard $40\text{ Hz}$ run.
2. In a separate ideal trial at $40\text{ Hz}$, the true local value of gravity is $g = 9.80\text{ m/s}^2$. However, due to severe **air resistance** acting on a very lightweight mass, the experimental acceleration calculated from the graph's slope is found to be only $8.95\text{ m/s}^2$. Calculate the experimental **percentage error** for this trial.

### Solution
1. **Impact of frequency shift to $10\text{ Hz}$:**
   * At $10\text{ Hz}$, the time interval between dots increases significantly: $\Delta t_{\text{new}} = \frac{1}{10} = 0.10\text{ s}$ (four times longer than $0.025\text{ s}$).
   * Because the object falls for a longer duration between successive marks, the **spatial distance between consecutive dots will increase drastically**, making the layout of the dots much more sparse (less dense) on the tape. 
   * *Note:* The total average acceleration calculated at the end of the experiment would still theoretically remain the same ($g$), assuming no extra friction.

2. **Calculate the percentage error:**
   Use the experimental error formula:
   $$\text{Percentage Error} = \left| \frac{\text{Standard Value} - \text{Experimental Value}}{\text{Standard Value}} \right| \times 100\%$$
   
   Substitute the given values into the equation:
   $$\text{Percentage Error} = \left| \frac{9.80\text{ m/s}^2 - 8.95\text{ m/s}^2}{9.80\text{ m/s}^2} \right| \times 100\%$$
   $$\text{Percentage Error} = \left( \frac{0.85}{9.80} \right) \times 100\% \approx 0.08673 \times 100\% = \mathbf{8.67\%}$$
