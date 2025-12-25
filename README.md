# 🔄 Push_swap Collection

<p align="center">
  <img src="https://img.shields.io/badge/Score-125%2F125-success?style=for-the-badge&logo=42" />
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c" />
  <img src="https://img.shields.io/badge/Algorithms-Multiple-orange?style=for-the-badge" />
</p>

##  About The Project
**Push_swap** is a 42 School algorithm project where the goal is to sort a stack of integers using two stacks (`A` and `B`) and a limited set of instructions. The challenge is to produce the smallest number of moves possible.

This repository serves as a comprehensive study of sorting algorithms, featuring implementations of **Radix**, **Greedy**, **Turk**, and the optimized **Butterfly (Range Sort)** algorithm. It also includes a custom **Checker** for validation.

---

##  Algorithms Implemented

This project explores four different approaches to solving the sorting problem:

###  1. Butterfly Algorithm (Primary)
* **Type:** Optimized Range Sort.
* **Logic:** Pushes numbers to Stack B in calculated chunks (ranges) to create a bell-curve distribution. This ensures that when pushing back to A, the largest numbers are always easily accessible.
* **Performance:** Highly efficient balance of speed and code complexity. Best suited for the 100 and 500 number benchmarks.

###  2. Turk Algorithm
* **Type:** Cost-Based Heuristic.
* **Logic:** Calculates the exact "cost" (number of moves) to place every number in A into its correct position in B. It always executes the cheapest move available.
* **Performance:** Extremely efficient for large datasets, often producing the fewest absolute moves.

###  3. Radix Sort
* **Type:** Non-Comparative Integer Sort.
* **Logic:** Sorts numbers by processing individual bits (base-2) from least significant to most significant.
* **Performance:** stable time complexity O(n), but generally requires more operations than heuristic algorithms for the specific constraints of Push_swap.

###  4. Greedy Algorithm
* **Type:** Simple Optimization.
* **Logic:** Always makes the move that places a number in position immediately, without calculating future costs or stack layout.
* **Performance:** Effective for very small stacks but inefficient for larger datasets.

---

##  Bonus: The Checker
The repository includes a custom **Checker** program. Its purpose is to validate the output of the sorting algorithms.
* **Function:** Reads a stream of instructions (Standard Input) and applies them to the stack.
* **Result:** Returns `OK` if the stack is sorted and empty, or `KO` if it fails.

---

##  Instruction Set
The project is restricted to the following operations:

| Code | Instruction | Action |
| :--- | :--- | :--- |
| `sa` | **Swap A** | Swap the first 2 elements of Stack A. |
| `sb` | **Swap B** | Swap the first 2 elements of Stack B. |
| `ss` | **Swap Both** | `sa` and `sb` at the same time. |
| `pa` | **Push A** | Take the first element of B and put it on A. |
| `pb` | **Push B** | Take the first element of A and put it on B. |
| `ra` | **Rotate A** | Shift all elements of A up by 1. First becomes Last. |
| `rb` | **Rotate B** | Shift all elements of B up by 1. First becomes Last. |
| `rr` | **Rotate Both** | `ra` and `rb` at the same time. |
| `rra` | **Rev-Rotate A** | Shift all elements of A down by 1. Last becomes First. |
| `rrb` | **Rev-Rotate B** | Shift all elements of B down by 1. Last becomes First. |
| `rrr` | **Rev-Rotate Both** | `rra` and `rrb` at the same time. |

---

## 👨‍💻 Author
* **Login:** `oused-da`
* **School:** 42 Network

<p align="center">
  by oused-da aka "und3rr00t"
</p>