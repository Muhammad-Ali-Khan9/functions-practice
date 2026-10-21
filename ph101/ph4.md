# Lab Revision Paper: Vector Addition & Force Table Equilibrium
**Topic:** Analytical Components, Graphical Representation, and Experimental Precautions

---

## 🟢 Easy Level: Component Definitions & Equibrant Principles

### Question
1. Write down the fundamental analytical formulas used to resolve a force vector $\vec{F}$ acting at an angle $\theta$ into its horizontal ($F_x$) and vertical ($F_y$) vector components.
2. If the analytical calculation gives a net resultant vector angle of $\theta_R = 49.4^\circ$, calculate the exact theoretical direction angle required for the **Equibrant Force ($\theta_E$)** to achieve perfect balance on the force table.

### Solution
1. **Component Formulas:**
   * **Horizontal Component:** $F_x = F \cdot \cos(\theta)$
   * **Vertical Component:** $F_y = F \cdot \sin(\theta)$

2. **Calculate Equibrant Angle ($\theta_E$):**
   The equilibrant vector must point in the exact opposite direction ($180^\circ$ offset) from the combined resultant:
   $$\theta_E = \theta_R + 180^\circ = 49.4^\circ + 180.0^\circ = \mathbf{229.4^\circ}$$

---

## 🟡 Medium Level: Orthogonal Vector Resultants & Mass Equivalence

### Question
Based on your lab's Task 2 measurements, two orthogonal forces are set up on the force table pulleys:
* Force $\vec{F}_A = 0.294\text{ N}$ directed along the positive x-axis ($\theta_A = 0^\circ$).
* Force $\vec{F}_B = 0.343\text{ N}$ directed along the positive y-axis ($\theta_B = 90^\circ$).

1. Calculate the magnitude ($|\vec{R}|$) and directional angle ($\theta$) of the single resultant force vector.
2. Determine the corresponding **Equibrant Mass ($m_E$)** in grams needed to physically balance this setup on a standard force table. *(Take $g = 9.80\text{ m/s}^2$)*

### Solution
1. **Calculate Resultant Vector ($\vec{R}$):**
   Since the vectors are orthogonal ($0^\circ$ and $90^\circ$):
   * **Magnitude ($|\vec{R}|$):**
     $$|\vec{R}| = \sqrt{(F_A)^2 + (F_B)^2} = \sqrt{(0.294)^2 + (0.343)^2} = \sqrt{0.086436 + 0.117649} = \sqrt{0.204085} \approx \mathbf{0.452\text{ N}}$$
   * **Direction Angle ($\theta$):**
     $$\theta = \tan^{-1}\left(\frac{F_B}{F_A}\right) = \tan^{-1}\left(\frac{0.343}{0.294}\right) = \tan^{-1}(1.1667) \approx \mathbf{49.4^\circ}$$

2. **Determine Equibrant Mass ($m_E$):**
   The magnitude of the equilibrant force matches the resultant force ($F_E = |\vec{R}| = 0.452\text{ N}$).
   $$F_E = m_E \cdot g \implies m_E = \frac{F_E}{g}$$
   $$m_E = \frac{0.452\text{ N}}{9.80\text{ m/s}^2} \approx 0.04612\text{ kg} = \mathbf{46.1\text{ g}}$$

---

## 🔴 Hard Level: Methodological Synthesis & Lab Precautions

### Question
1. According to Section 4.5 (Viva Questions), explain clearly how the **Component (Analytical) Method** and the **Graphical (Parallelogram) Method** complement each other when solving vector addition systems.
2. Outline **four vital experimental precautions** that a student must carefully follow while assembling and taking readings from a mechanical force table setup to minimize physical experimental errors.

### Solution
1. **Complementary Nature of Methods:**
   * **Component Method:** Provides highly precise, error-free numerical calculations by entirely avoiding manual scale or drawing mistakes.
   * **Graphical Method:** Complements the math by providing a clear, immediate visual check of the vector geometry. This visual layout allows students to qualitatively verify their math and physically visualize how balancing forces align.

2. **Four Critical Lab Precautions:**
   * **Friction Elimination:** Ensure all pulleys are low-friction, spin freely on their pins, and are cleared of any bound strings.
   * **String Alignment:** Confirm that every string passes straight over the center groove of its respective pulley to prevent lateral friction components.
   * **Hanger Inclusion:** Always add the mass of the weight hanger ($5.0\text{ g}$) to the total hanging net weight when converting mass into active force vectors ($F=mg$).
   * **Origin Centering:** Before finalizing an equilibrium angle or mass reading, verify that the central ring floats perfectly centered around the center post without touching or resting against it.
