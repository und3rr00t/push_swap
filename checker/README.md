# Push_swap Checker

<p align="center">
  <img src="https://img.shields.io/badge/Bonus-Completed-success?style=for-the-badge&logo=42" />
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c" />
</p>

## About The Checker
The **Checker** is a utility program designed to verify whether a stack of numbers is sorted correctly. It works in tandem with `push_swap` or as a standalone validation tool.

While `push_swap` calculates the most efficient moves to sort a stack, `checker` executes those moves and confirms if the final result is actually sorted.

---

## 🛠️ Compilation
To compile the bonus part of the project:

```bash
git clone https://github.com/und3rr00t/push_swap
cd push_swap/checker
make
make clean
```
This will generate an executable named `checker`.

## Usage

The checker takes a list of integers as arguments. It then waits for instructions (like `sa`, `pb`, `ra`) to be sent to Standard Input (`stdin`).

1. **Interactive Mode**
You can run it manually and type instructions:
```bash
./checker 3 2 1
```
Type instructions (press `Ctrl+D` to finish):
```Plaintext
sa
rra
```
*Output*
```
OK
```
2 . **Piped Mode (The Standard Way)**

Usually, you pipe the output of `push_swap` directly into `checker`:
```Bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
```
### Outputs :
| Output | Meaning |
| :--- | :--- |
| **OK** | The stack is correctly sorted and Stack B is empty. |
| **KO** | The stack is NOT sorted or Stack B is not empty. |
| **Error** | Invalid instruction, duplicate numbers, or non-numeric arguments. |

### Testing Examples :

**Valid Sort:**
```bash
./checker 2 1 3
sa
(Ctrl+D)
> OK
```
**Invalid Sort:**
```bash
./checker 2 1 3
pb
(Ctrl+D)
> KO
```
**Error Case**
```Bash
./checker 2 1 3
not_a_move
(Ctrl+D)
> Error
```
## 👨‍💻 Author

* **Login:** `oused-da`
* **Profile:** [oused-da](https://profile-v3.intra.42.fr/users/oused-da)
* **School:** 42 Network

---
<p align="center">
  by oused-da aka "und3rr00t"
</p>