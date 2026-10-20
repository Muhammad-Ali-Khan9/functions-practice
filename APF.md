# Crystallographic Numerical Practice: Atomic Packing Factor (APF)

This repository provides clear, step-by-step numerical examples for calculating the **Atomic Packing Factor (APF)** across different crystal systems and alloy configurations. 

---

## Atomic Packing Factor (APF) Formula

The Atomic Packing Factor measures the volumetric efficiency of atom packing inside a unit cell:

$$\text{APF} = \frac{\text{Volume of atoms in a unit cell}}{\text{Total volume of the unit cell}} = \frac{n \cdot \left(\frac{4}{3}\pi R^3\right)}{V_c}$$

Where:
* $n$ = net number of atoms belonging to the unit cell
* $R$ = atomic radius
* $V_c$ = volume of the unit cell cube ($a^3$)

---

### Easy Problem (Direct Derivation)

#### Problem 1: Simple Cubic (SC) Structure
* **Question:** Derive the theoretical Atomic Packing Factor (APF) for a perfect Simple Cubic crystal structure assuming a hard-sphere model.
* **Solution:**
  1. **Atoms per unit cell ($n$):** A simple cubic cell has 8 corner positions. Each corner atom is shared among 8 adjacent cells: 
     $$n = 8 \times \frac{1}{8} = 1\text{ atom}$$
  2. **Lattice Geometry:** Along the cube edge, the hard spheres touch each other directly, establishing the relationship: 
     $$a = 2R$$
  3. **Volume Expressions:** 
     * Net volume of atoms: $V_{\text{atoms}} = 1 \times \frac{4}{3}\pi R^3$
     * Total volume of unit cell: $V_c = a^3 = (2R)^3 = 8R^3$
  4. **Calculation:**  
     $$\text{APF} = \frac{\frac{4}{3}\pi R^3}{8R^3} = \frac{\pi}{6} \approx \mathbf{0.52}$$

---

### Medium Problem (Structure Validation)

#### Problem 2: Finding BCC Packing Efficiency from Real Parameters
* **Question:** A metallic element crystallizes in a Body-Centered Cubic (BCC) structure with an atomic radius $R = 0.124\text{ nm}$ and a measured lattice parameter $a = 0.2864\text{ nm}$. Calculate its APF to verify if it satisfies the ideal maximum packaging layout.
* **Solution:**
  1. **Atoms per unit cell ($n$):** For any standard BCC structure, $n = 2\text{ atoms}$ (8 corners $\times \frac{1}{8}$ + 1 center atom).
  2. **Calculate Unit Cell Volume ($V_c$):**  
     $$V_c = a^3 = (0.2864\text{ nm})^3 = 0.02350\text{ nm}^3$$
  3. **Compute Total Atomic Sphere Volume:**  
     $$V_{\text{atoms}} = 2 \times \frac{4}{3}\pi R^3 = 2 \times \frac{4}{3}\pi (0.124\text{ nm})^3 = 0.01597\text{ nm}^3$$
  4. **Calculation:**  
     $$\text{APF} = \frac{0.01597\text{ nm}^3}{0.02350\text{ nm}^3} \approx \mathbf{0.68}$$
     *(Note: This matches the maximum theoretical packaging limits expected for a perfect BCC crystal system).*

---

### Hard Problem (Interstitial Alloy Packing)

#### Problem 3: APF of an Interstitial Intermetallic Alloy
* **Question:** Consider a BCC metal matrix host ($R_{\text{host}} = 0.150\text{ nm}$) where small interstitial guest atoms ($R_{\text{guest}} = 0.050\text{ nm}$) completely fill all $6$ octahedral interstitial sites located on the unit cell cube faces. The structural constraints force the lattice parameter to remain fixed at the standard BCC ideal value $a = \frac{4R_{\text{host}}}{\sqrt{3}}$. Calculate the new compound APF of this filled system.
* **Solution:**
  1. **Find Unit Cell Volume ($V_c$):**
     $$a = \frac{4 \times 0.150\text{ nm}}{\sqrt{3}} = 0.3464\text{ nm}$$
     $$V_c = a^3 = (0.3464\text{ nm})^3 = 0.04157\text{ nm}^3$$
  2. **Count Atom Quantities and Volumes:**
     * **Host BCC Matrix Atoms:** Contains $n_{\text{host}} = 2\text{ atoms}$.
       $$V_{\text{host}} = 2 \times \frac{4}{3}\pi (0.150\text{ nm})^3 = 0.02827\text{ nm}^3$$
     * **Guest Interstitial Atoms:** $6$ face sites shared identically by 2 adjacent cells $= 6 \times \frac{1}{2} = 3\text{ atoms}$.
       $$V_{\text{guest}} = 3 \times \frac{4}{3}\pi (0.050\text{ nm})^3 = 0.00157\text{ nm}^3$$
  3. **Calculate Combined Volume and Final APF:**
     $$V_{\text{total atoms}} = 0.02827\text{ nm}^3 + 0.00157\text{ nm}^3 = 0.02984\text{ nm}^3$$
     $$\text{APF}_{\text{alloy}} = \frac{0.02984\text{ nm}^3}{0.04157\text{ nm}^3} \approx \mathbf{0.718}$$

---

## APF Quick Reference Table

| Problem | Difficulty | Structure Classification | Net Atoms ($n$) | Unit Cell Volume ($V_c$) | Final APF |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **1** | Easy | Simple Cubic (SC) | $1$ | $8R^3$ | **$0.52$** |
| **2** | Medium | Body-Centered Cubic (BCC) | $2$ | $0.02350\text{ nm}^3$ | **$0.68$** |
| **3** | Hard | Interstitial BCC Alloy | $2\text{ (Host)} + 3\text{ (Guest)}$ | $0.04157\text{ nm}^3$ | **$0.718$** |
