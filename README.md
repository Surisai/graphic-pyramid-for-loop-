# graphic-pyramid-for-loop-
# Pyramid Generator

This C++ program prints two side-by-side pyramids (`N = 2`) of a specified height using ASCII characters (`*`).  

---

## 📖 How It Works

- The program asks the user for the pyramid height (`h`).
- It builds the pyramid row by row:
  1. **Top of the pyramids** – Prints the tips (`*`).
  2. **Side walls** – Expands with spaces inside, forming the pyramid walls.
  3. **Base** – A solid row of `*` forming the bottom.  

The pyramid width expands with each row until the base is reached.

---

## 🛠️ Code Breakdown

- `N = 2` → Number of pyramids (set to 2 in this program).  
- `spa` → Initial space before the tip (`*`).  
- `beg` → Extra leading space at each level as the pyramid expands.  
- `ins` → Inside spacing between the pyramid side walls.  

### Loops
- **Outer loops** build pyramid rows.  
- **Inner loops** handle spacing and printing `*` characters.  

---

## ▶️ Example Usage

### Input
Pyramid height = 5


### Output

            *                *
           * *              * *
          *   *            *   *
         *     *          *     *
        *******          *******


---

## 🚀 How to Run

1. Save the code as `pyramid.cpp`.
2. Compile:
   ```bash
   g++ pyramid.cpp -o pyramid


Run:

./pyramid


Enter the desired pyramid height when prompted.