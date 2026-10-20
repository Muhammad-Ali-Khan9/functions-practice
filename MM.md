# Crystallographic Linear Density: Solved Numerical Problems

This repository contains a comprehensive guide and a set of solved numerical problems for calculating **Linear Density (LD)** in crystalline materials. The problems are categorized by difficulty levels (Easy, Medium, and Hard) to serve as an excellent study reference for Materials Science and Engineering students.

---

## 📖 Theoretical Overview

**Linear Density (LD)** is defined as the number of atoms centered on a specific crystallographic direction vector divided by the length of that direction vector. 

$$\text{Linear Density (LD)} = \frac{\text{Number of atoms centered on direction vector } (N)}{\text{Length of the direction vector } (L)}$$

### Key Considerations:
1. **Net Atoms ($N$):** Only count the portions of the atomic spheres whose **centers** lie exactly on the line segment inside the unit cell.
   * A corner atom intersected by the vector contributes $\frac{1}{2}$ to that specific cell line segment.
   * An atom whose center is fully passed through by the line segment contributes $1$.
2. **Vector Length ($L$):** Computed using the lattice parameter ($a$) and the Miller indices $[uvw]$ of the vector direction:
   $$L = a\sqrt{u^2 + v^2 + w^2}$$

---

## 🟢 Easy Problems (Direct Substitution)

### Problem 1
**Question:** A simple cubic crystal has a lattice parameter $a = 0.35\text{ nm}$. Calculate the linear density along the $[100]$ direction.

**Solution:**
1. **Identify the Geometry:** In a simple cubic structure, the $[100]$ vector runs along a single cube edge.
2. **Find Vector Length ($L$):** 
   $$L = a = 0.35\text{ nm}$$
3. **Count Net Atoms ($N$):** The vector intersects two corner atoms at their centers. Each contributes $\frac{1}{2}$ within the segment:
   $$N = \frac{1}{2} + \frac{1}{2} = 1\text{ atom}$$
4. **Calculate LD:**
   $$\text{LD} = \frac{1\text{ atom}}{0.35\text{ nm}} = \mathbf{2.86\text{ nm}^{-1}}$$

---

### Problem 2
**Question:** Calculate the linear density along the $[100]$ direction of a Face-Centered Cubic (FCC) crystal with a lattice parameter $a = 0.40\text{ nm}$.

**Solution:**
1. **Identify the Geometry:** For the $[100]$ direction in FCC, the vector follows a cube edge. 
2. **Find Vector Length ($L$):**
   $$L = a = 0.40\text{ nm}$$
3. **Count Net Atoms ($N$):** In an FCC lattice, the face-centered atoms are on the faces, not the edges. Only the two corner atoms have centers on this line:
   $$N = \frac{1}{2} + \frac{1}{2} = 1\text{ atom}$$
4. **Calculate LD:**
   $$\text{LD} = \frac{1\text{ atom}}{0.40\text{ nm}} = \mathbf{2.50\text{ nm}^{-1}}$$

---

### Problem 3
**Question:** Determine the linear density for a Body-Centered Cubic (BCC) crystal along the $[100]$ direction where $a = 0.30\text{ nm}$.

**Solution:**
1. **Identify the Geometry:** The $[100]$ direction lies entirely along the unit cell edge.
2. **Find Vector Length ($L$):**
   $$L = a = 0.30\text{ nm}$$
3. **Count Net Atoms ($N$):** The center atom of the BCC unit cell sits in the absolute middle of the cube and is not intersected by this outer edge line. Only the corner atoms count:
   $$N = \frac{1}{2} + \frac{1}{2} = 1\text{ atom}$$
4. **Calculate LD:**
   $$\text{LD} = \frac{1\text{ atom}}{0.30\text{ nm}} = \mathbf{3.33\text{ nm}^{-1}}$$

---

### Problem 4
**Question:** What is the vector length ($L$) along the $[110]$ direction inside a cubic unit cell that has a lattice parameter of $a = 0.28\text{ nm}$?

**Solution:**
1. **Identify the Geometry:** The $[110]$ vector represents a face diagonal of the cube.
2. **Calculate Length ($L$):** Using the Pythagorean theorem or the vector length formula:
   $$L = a\sqrt{1^2 + 1^2 + 0^2} = a\sqrt{2}$$
   $$L = 0.28\text{ nm} \times \sqrt{2} = \mathbf{0.396\text{ nm}}$$

---

### Problem 5
**Question:** A hypothetical one-dimensional chain of atoms features 4 atom centers positioned perfectly along a straight line vector segment measuring $1.20\text{ nm}$. Calculate the linear density.

**Solution:**
1. **Identify Parameters:** $N = 4\text{ atoms}$, $L = 1.20\text{ nm}$.
2. **Calculate LD:**
   $$\text{LD} = \frac{4\text{ atoms}}{1.20\text{ nm}} = \mathbf{3.33\text{ nm}^{-1}}$$

---

## 🟡 Medium Problems (Radius Relationships)

### Problem 6
**Question:** Calculate the linear density of aluminum (**FCC structure**) along its close-packed $[110]$ direction given an atomic radius $R = 0.143\text{ nm}$.

**Solution:**
1. **Identify the Geometry:** In FCC crystals, the atoms touch along the face diagonal $[110]$. Therefore, the vector length matches exactly 4 atomic radii:
   $$L = 4R = 4 \times 0.143\text{ nm} = 0.572\text{ nm}$$
2. **Count Net Atoms ($N$):** The line passes through 2 corner atoms (each contributing $\frac{1}{2}$) and completely cuts through 1 face-centered atom (contributing $1$):
   $$N = \frac{1}{2} + 1 + \frac{1}{2} = 2\text{ atoms}$$
3. **Calculate LD:**
   $$\text{LD} = \frac{2\text{ atoms}}{0.572\text{ nm}} = \mathbf{3.50\text{ nm}^{-1}}$$
   *(Note: $\text{LD} = \frac{2}{4R} = \frac{1}{2R}$ for close-packed directions)*

---

### Problem 7
**Question:** Compute the linear density of tungsten (**BCC structure**) along the body diagonal $[111]$ direction if the atomic radius $R = 0.137\text{ nm}$.

**Solution:**
1. **Identify the Geometry:** In BCC crystals, atoms touch along the body diagonal $[111]$. The total vector length equals 4 atomic radii:
   $$L = 4R = 4 \times 0.137\text{ nm} = 0.548\text{ nm}$$
2. **Count Net Atoms ($N$):** The line passes through two corner atoms ($\frac{1}{2} \times 2$) and completely pierces the central body atom ($1$):
   $$N = \frac{1}{2} + 1 + \frac{1}{2} = 2\text{ atoms}$$
3. **Calculate LD:**
   $$\text{LD} = \frac{2\text{ atoms}}{0.548\text{ nm}} = \mathbf{3.65\text{ nm}^{-1}}$$

---

## 🔴 Hard Problem (Bulk Parameter Derivation)

### Problem 8
**Question:** Copper has an **FCC structure**, a bulk material density of $8.96\text{ g/cm}^3$, and an atomic weight of $63.55\text{ g/mol}$. Calculate its linear density along the $[111]$ direction in $\text{nm}^{-1}$.

**Solution:**

#### Step 1: Find the lattice constant ($a$)
Use the bulk density formula for a unit cell:
$$\rho = \frac{n \cdot MW}{V_c \cdot N_A}$$
Where:
* $n = 4$ atoms/cell (for FCC)
* $MW = 63.55\text{ g/mol}$
* $\rho = 8.96\text{ g/cm}^3$
* $N_A = 6.022 \times 10^{23}\text{ atoms/mol}$

Rearranging for the unit cell volume ($V_c = a^3$):
$$a^3 = \frac{4 \times 63.55}{8.96 \times 6.022 \times 10^{23}} = 4.712 \times 10^{-23}\text{ cm}^3$$
$$a = \sqrt[3]{4.712 \times 10^{-23}} = 3.612 \times 10^{-8}\text{ cm} = 0.3612\text{ nm}$$

#### Step 2: Find vector parameters for $[111]$ in FCC
* **Vector Length ($L$):** The length of a body diagonal vector is:
  $$L = a\sqrt{1^2 + 1^2 + 1^2} = a\sqrt{3}$$
  $$L = 0.3612\text{ nm} \times \sqrt{3} = 0.6256\text{ nm}$$
* **Count Net Atoms ($N$):** In FCC, the body diagonal passes *only* through the corner atoms of a single cell unit. It does not hit any face-centered atoms:
  $$N = \frac{1}{2} + \frac{1}{2} = 1\text{ atom}$$

#### Step 3: Calculate linear density
$$\text{LD} = \frac{1\text{ atom}}{0.6256\text{ nm}} = \mathbf{1.60\text{ nm}^{-1}}$$

---

## 📊 Summary Comparison Table

The following structured table summarizes the attributes and final calculated values for all 8 numerical scenarios:

| Problem | Difficulty | Crystal Structure | Direction Vector | Net Atoms ($N$) | Vector Length ($L$) | Linear Density ($LD$) |
| :---: | :--- | :--- | :---: | :---: | :---: | :---: |
| **1** | Easy | Simple Cubic | $[100]$ | $1$ | $0.350\text{ nm}$ | $2.86\text{ nm}^{-1}$ |
| **2** | Easy | FCC | $[100]$ | $1$ | $0.400\text{ nm}$ | $2.50\text{ nm}^{-1}$ |
| **3** | Easy | BCC | $[100]$ | $1$ | $0.300\text{ nm}$ | $3.33\text{ nm}^{-1}$ |
| **4** | Easy | Cubic | $[110]$ | — | $0.396\text{ nm}$ | — *(Length only)* |
| **5** | Easy | 1D Chain | Linear Line | $4$ | $1.200\text{ nm}$ | $3.33\text{ nm}^{-1}$ |
| **6** | Medium | FCC (Aluminum) | $[110]$ | $2$ | $0.572\text{ nm}$ | $3.50\text{ nm}^{-1}$ |
| **7** | Medium | BCC (Tungsten) | $[111]$ | $2$ | $0.548\text{ nm}$ | $3.65\text{ nm}^{-1}$ |
| **8** | Hard | FCC (Copper) | $[111]$ | $1$ | $0.626\text{ nm}$ | $1.60\text{ nm}^{-1}$ |
