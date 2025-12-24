# PUSH_SWAP: RADIX SORT ALGORITHM

## Description :

This repository implements the Binary Radix Sort algorithm. Unlike comparison-based sorts (like Quick Sort or Merge Sort), Radix Sort is non-comparative. It processes the numbers digit by digit (or in our case, bit by bit), making it highly efficient and stable for this specific stack-based constraint

## The Algorithm: Binary Radix Sort :

1. **Pre-Processing (Indexing)**
**Radix sort** depends on the number of bits. A raw integer like `2147483647` has `31` bits, which would require 31 loops. This is inefficient

* **Solution:** We simplify the numbers by replacing them with their **Rank** (0 to N-1)
* **Example:** `[500, -10, 100]` becomes `[2, 0, 1]`
* Now, for 100 numbers, the maximum value is 99 (`1100011` in binary). We only need 7 **loops** to sort it perfectly

2. **The Sorting Loop**

We rely on the binary representation of the numbers. We iterate from the **Least Significant Bit (LSB)** to the **Most Significant Bit (MSB)**

For every bit position `i`:

* **Inspect Stack A**: Check the `i-th` bit of the top number
* **Move 0s**: If the bit is `0`, push the number to **Stack B** (`pb`)
* **Keep 1s**: If the bit is `1`, rotate **Stack A** (`ra`) to send it to the bottom
* **Collect**: After checking all numbers, push everything from **Stack B** back to **Stack A** (`pa`)

By the time we process the final bit, the stack is perfectly sorted

3. **Complexity**

* **Time Complexity**: `O(N * k)` where `N` is the number of elements and `k` is the number of bits (max 32)
* **Space Complexity**: `O(N)` for the stack

## Instructions :

The project only allows the following operations:

| Code | Instruction | Action |
| :--- | :--- | :--- |
| `sa` | **Swap A** | Swap the first 2 elements at the top of stack A |
| `sb` | **Swap B** | Swap the first 2 elements at the top of stack B |
| `ss` | **Swap Both** | `sa` and `sb` at the same time |
| `pa` | **Push A** | Take the first element at the top of B and put it at the top of A |
| `pb` | **Push B** | Take the first element at the top of A and put it at the top of B |
| `ra` | **Rotate A** | Shift all elements of stack A up by 1. First element becomes the last |
| `rb` | **Rotate B** | Shift all elements of stack B up by 1. First element becomes the last |
| `rr` | **Rotate Both** | `ra` and `rb` at the same time |
| `rra` | **Rev Rotate A** | Shift all elements of stack A down by 1. Last element becomes the first |
| `rrb` | **Rev Rotate B** | Shift all elements of stack B down by 1. Last element becomes the first |
| `rrr` | **Rev Rotate Both** | `rra` and `rrb` at the same time |

## Installation & Usage :

1. Compilation :

Clone the repository and run `make` to compile the executable

```Bash
git clone https://github.com/und3rr00t/push_swap/tree/main
cd push_swap
make
```

2. Running the Program :

Run `./push_swap` followed by a list of integers
```Bash
./push_swap 2 1 3 6 5 8
```
**Output**
```Bash
sa
pb
pb
pb
sa
pa
pa
pa
```
3. Validation

To verify the sorting, you can pipe the output to a checker (provided by 42 or standard sort)
```Bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_linux $ARG
```
*Should output:* `OK`

## Performance Benchmarks

Since Radix Sort relies on bit-level passes, the number of moves is relatively consistent and safe, though not always the absolute minimum

| Stack Size | Radix Moves (Approx) | Limit (100%) | Status |
| :--- | :---: | :---: | :---: |
| **3 Numbers** | < 3 | 3 | ✅ |
| **5 Numbers** | < 12 | 12 | ✅ |
| **100 Numbers** | ~1050 | 700 | ⚠️ (See Note) |
| **500 Numbers** | ~6700 | 5500 | ⚠️ (See Note) |

**Note**:
	 Binary Radix sort is chosen for its **implementation simplicity and stability**. While it guarantees sorting, it may exceed the strict move limits for the highest honors (100/100) in the 42 curriculum compared to the "Turk Algorithm" or "Quick Sort" variants. It typically passes the mandatory requirements comfortably.

## Project Structure :

| Stack Size | Radix Moves (Approx) | Limit (100%) | Status |
| :--- | :---: | :---: | :---: |
| **3 Numbers** | < 3 | 3 | ✅ |
| **5 Numbers** | < 12 | 12 | ✅ |
| **100 Numbers** | ~1050 | 700 | ⚠️ (See Note) |
| **500 Numbers** | ~6700 | 5500 | ⚠️ (See Note) |

## Author :

****Und3r_Sofa (und3rr00t)****
*42 login* : *oused-da*
