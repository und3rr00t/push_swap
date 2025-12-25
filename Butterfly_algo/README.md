# 🦋 Push_swap - The Butterfly Algorithm

<p align="center">
  <img src="https://img.shields.io/badge/Score-100%2F100-success?style=for-the-badge&logo=42" />
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c" />
  <img src="https://img.shields.io/badge/Algorithm-Range%20Sort%20(Butterfly)-orange?style=for-the-badge" />
</p>

## About The Project
**Push_swap** is a 42 School algorithm project where we must sort a stack of integers using two stacks (`A` and `B`) and a limited set of instructions. The goal is to sort the numbers with the **minimum number of operations** possible.

This project implements the **Butterfly Algorithm** (also known as Range Sort), which is highly efficient for large datasets.

---

## 🦋 The Algorithm Explained
Why "Butterfly"? When visualized, the numbers in Stack B form a shape resembling butterfly wings (small numbers at the bottom, large numbers at the top/middle).

### Phase 1: A ➔ B (Building the Curve)
Instead of searching for specific numbers, we define a **Range** (or chunk) based on the size of the stack.
1.  **Normalization:** First, we rank all numbers from `0` to `Size-1` (Indexing). This allows us to work with relative positions rather than raw values.
2.  **The Loop:** We iterate through Stack A:
    * If a number's rank is in the **lower half** of the current range: Push to B (`pb`) and rotate B (`rb`). *Sends small numbers to the bottom.*
    * If a number's rank is in the **upper half** of the current range: Push to B (`pb`). *Keeps large numbers at the top.*
    * If the number is outside the range: Rotate A (`ra`) to find a better candidate.
3.  **Result:** Stack B contains a roughly sorted "bell curve" of numbers.

### Phase 2: B ➔ A (The Clean Up)
Now that Stack B contains all numbers in a curve pattern:
1.  We find the **Maximum Rank** in Stack B.
2.  We calculate whether it is faster to rotate up (`rb`) or reverse rotate down (`rrb`) to bring it to the top.
3.  Push it back to A (`pa`).
4.  Repeat until B is empty.

---

## Performance
The algorithm is optimized for the 42 School evaluation benchmarks:

| Stack Size | Target Moves | My Average | Algorithm |
| :--- | :--- | :--- | :--- |
| **3 Numbers** | < 3 | 2-3 | Hardcoded |
| **5 Numbers** | < 12 | 8-10 | Hardcoded |
| **100 Numbers** | < 700 | **~450-630** | Butterfly (Range ~15) |
| **500 Numbers** | < 5500 | **~4600-5200** | Butterfly (Range ~35) |

*Note: The Range size is dynamically adjusted based on stack size to ensure optimal performance.*

---

## Installation & Usage

### 1. Compilation
Clone the repository and run `make` to compile the executable.
```bash
git clone https://github.com/und3rr00t/push_swap
cd push_swap/Butterfly_algo
make
make clean
```
### 2. Running the Sorter
Run the program with a list of integers:
```Bash
#manual testing
./push_swap <args>
#testing script
chmod +x test.sh
./tset.sh
```
```Plaintext
❯ ./test.sh
==================================================
  RUNNING STACK 100 TEST (20 iterations)
==================================================
Progress: 20 / 20

--- STACK 100 STATISTICS ---
Average Moves: 573
Max Moves:     597
Min Moves:     524
Sorting:       PASS (All OK)
Memory:        PASS (No leaks)

==================================================
  RUNNING STACK 500 TEST (20 iterations)
==================================================
Progress: 20 / 20

--- STACK 500 STATISTICS ---
Average Moves: 5084
Max Moves:     5248
Min Moves:     4889
Sorting:       PASS (All OK)
Memory:        PASS (No leaks)
```
## Instruction Set :
The program uses only the following operations:
* `sa`, `sb`, `s`s: Swap the first two elements of stack A/B/Both.
* `pa`, `pb`: Push the top element from one stack to the other.
* `ra`, `rb`, `rr`: Rotate stack A/B/Both upwards (first becomes last).
* `rra`, `rrb`, `rrr`: Reverse rotate stack A/B/Both downwards (last becomes first).
## Error Handling :
The program handles:
* Non-integer arguments.
* Arguments bigger than `INT_MAX` or smaller than `INT_MIN`.
* Duplicate numbers. In case of error, it prints `Error` followed by a newline to `stderr`.

## 👨‍💻 Author

* **Login:** `oused-da`
* **Profile:** [oused-da](https://profile-v3.intra.42.fr/users/oused-da)
* **School:** 42 Network

---
<p align="center">
  by oused-da aka "und3rr00t"
</p>