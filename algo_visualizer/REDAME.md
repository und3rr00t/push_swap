#  Push_swap Visualizers

A collection of Python-based tools to visualize the sorting logic of your `push_swap` project.

This repository includes two modes:
1.  **GUI Mode (Graphical):** A windowed application with color gradients to visualize the "Butterfly" curve.
2.  **TUI Mode (Terminal):** A text-based bar chart that runs directly in your terminal shell.

---

##  Features

###  GUI Visualizer (`gui_visualizer.py`)
* **Best for:** Analyzing the "Butterfly" or "Bell Curve" distribution.
* **Visuals:** Uses colored bars.
    * 🔵 **Blue/Cyan:** Small numbers (Bottom of stack).
    * 🔴 **Red/Pink:** Large numbers (Top of stack).
* **Tech:** Built with Python `tkinter`.

###  TUI Visualizer (`tui_visualizer.py`)
* **Best for:** Quick checks over SSH or when a GUI is not available.
* **Visuals:** Uses ASCII characters (`#`) to draw bars in the terminal.
* **Tech:** Pure Python standard library (no external deps).

---

##  Prerequisites

Both tools require **Python 3**.

**For the GUI version**, you must have `tkinter` installed (it comes default with most Python installs, but Linux users may need to add it):

```bash
# Debian / Ubuntu / Kali
sudo apt-get install python3-tk

# Arch Linux
sudo pacman -S tk

# MacOS
brew install python-tk
```
---

##  How to Run

1. **Prepare your Project**

Ensure your `push_swap` executable is compiled and located in the parent directory (or the same directory as these scripts).

```Bash
make
make clean
```
2. **Run GUI Mode**

```Bash
python3 gui_visualizer.py
```
*A window will open showing the sorting animation in real-time.*

3. **Run TUI Mode**

```Bash
python3 tui_visualizer.py
```
*The animation will play directly in your terminal window.*

---

##  Configuration

You can tweak the settings directly inside both python scripts to test different scenarios. Open either file and look for the CONFIG section at the top:

```Python
STACK_SIZE = 100   # Set to 100 or 500 for benchmarks
SPEED = 0.01       # Animation delay (Lower = Faster)
```
* **Tip:** For `STACK_SIZE = 500`, set `SPEED `to `0.001` or lower to save time.

---

## Interpreting the Output

Both visualizers are designed to highlight the **Range Sort (Butterfly)** logic:
* **Phase 1(A ➔ B):**
	* Watch **Stack B**(Right side).
	* You should see a curve forming where large numbers (Red / Long bars) stay at the top, and small numbers (Blue / Short bars) rotate to the bottom.
* **Phase 2 (B ➔ A):**
	* The algorithm should efficiently pick the largest available number from Stack B and push it back to Stack A, effectively "unwinding" the sorted curve.

---

## 👨‍💻 Author

* **Login:** `oused-da`
* **School:** 42 Network

<p align="center">
  by oused-da aka "und3rr00t"
</p>