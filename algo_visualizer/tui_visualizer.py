import sys
import os
import time
import subprocess
import random

STACK_SIZE = 500
SPEED = 0.02

def generate_arg(size):
    return random.sample(range(0, size), size)

def run_push_swap(args):
    arg_str = " ".join(map(str, args))
    try:
        result = subprocess.check_output(f"./push_swap {arg_str}", shell=True)
        return result.decode("utf-8").strip().split("\n")
    except subprocess.CalledProcessError:
        print("Error: Could not run ./push_swap. Make sure it is compiled!")
        sys.exit(1)

def apply_op(op, a, b):
    if op == "sa" and len(a) > 1: a[0], a[1] = a[1], a[0]
    elif op == "sb" and len(b) > 1: b[0], b[1] = b[1], b[0]
    elif op == "ss": apply_op("sa", a, b); apply_op("sb", a, b)
    elif op == "pa" and b: a.insert(0, b.pop(0))
    elif op == "pb" and a: b.insert(0, a.pop(0))
    elif op == "ra" and a: a.append(a.pop(0))
    elif op == "rb" and b: b.append(b.pop(0))
    elif op == "rr": apply_op("ra", a, b); apply_op("rb", a, b)
    elif op == "rra" and a: a.insert(0, a.pop())
    elif op == "rrb" and b: b.insert(0, b.pop())
    elif op == "rrr": apply_op("rra", a, b); apply_op("rrb", a, b)

def draw_stacks(a, b, total):
    os.system('clear')

    def get_bar(val):
        width = int((val / total) * 20) + 1
        return "#" * width + f" ({val})"

    limit = max(len(a), len(b))
    
    print(f"STACK A ({len(a)})".ljust(30) + f"STACK B ({len(b)})")
    print("-" * 60)

    for i in range(limit):
        str_a = get_bar(a[i]) if i < len(a) else ""
        str_b = get_bar(b[i]) if i < len(b) else ""
        print(f"{str_a:<30} {str_b}")

def main():
    nums = generate_arg(STACK_SIZE)
    a = list(nums)
    b = []
    
    print(f"Running ./push_swap with {STACK_SIZE} numbers...")
    ops = run_push_swap(nums)

    ops = [op for op in ops if op]

    print(f"Sorting {STACK_SIZE} numbers with {len(ops)} moves...")
    time.sleep(2)

    for op in ops:
        apply_op(op, a, b)
        draw_stacks(a, b, STACK_SIZE)
        print(f"\nCommand: {op}")
        time.sleep(SPEED)

    print("\nSorted!")

if __name__ == "__main__":
    main()
