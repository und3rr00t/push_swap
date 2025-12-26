import tkinter as tk
import subprocess
import random
import time
import sys

STACK_SIZE = 100
SPEED = 0.01
WINDOW_WIDTH = 1000
WINDOW_HEIGHT = 600

class PushSwapGUI:
    def __init__(self, root, stack_size):
        self.root = root
        self.root.title("Push_Swap Butterfly Visualizer")
        self.stack_size = stack_size

        self.a = random.sample(range(0, stack_size), stack_size)
        self.b = []
        self.ops = self.run_push_swap(self.a)
        self.op_idx = 0
        self.total_ops = len(self.ops)

        self.canvas = tk.Canvas(root, width=WINDOW_WIDTH, height=WINDOW_HEIGHT, bg="black")
        self.canvas.pack()

        self.label = tk.Label(root, text=f"Moves: 0 / {self.total_ops}", fg="white", bg="black", font=("Arial", 14))
        self.label.pack(fill=tk.X)

        self.animate()

    def run_push_swap(self, args):
        arg_str = " ".join(map(str, args))
        try:
            print("Calculating moves...")
            result = subprocess.check_output(f"./push_swap {arg_str}", shell=True)
            return [op for op in result.decode("utf-8").strip().split("\n") if op]
        except subprocess.CalledProcessError:
            print("Error: Could not run ./push_swap")
            sys.exit(1)

    def get_color(self, value):

        ratio = value / self.stack_size
        red = int(255 * ratio)
        blue = int(255 * (1 - ratio))
        return f'#{red:02x}00{blue:02x}'

    def draw_stacks(self):
        self.canvas.delete("all")

        col_width = WINDOW_WIDTH // 2
        bar_height = WINDOW_HEIGHT / self.stack_size

        for i, val in enumerate(self.a):
            bar_width = (val / self.stack_size) * (col_width - 20)
            y0 = i * bar_height
            y1 = y0 + bar_height
            color = self.get_color(val)
            self.canvas.create_rectangle(10, y0, 10 + bar_width, y1, fill=color, outline="")

        for i, val in enumerate(self.b):
            bar_width = (val / self.stack_size) * (col_width - 20)
            y0 = i * bar_height
            y1 = y0 + bar_height
            color = self.get_color(val)

            x_start = col_width + 10
            self.canvas.create_rectangle(x_start, y0, x_start + bar_width, y1, fill=color, outline="")

        self.label.config(text=f"Moves: {self.op_idx} / {self.total_ops} | Last: {self.ops[self.op_idx-1] if self.op_idx > 0 else 'Start'}")

    def apply_op(self, op):
        a, b = self.a, self.b
        if op == "sa" and len(a) > 1: a[0], a[1] = a[1], a[0]
        elif op == "sb" and len(b) > 1: b[0], b[1] = b[1], b[0]
        elif op == "ss": self.apply_op("sa"); self.apply_op("sb")
        elif op == "pa" and b: a.insert(0, b.pop(0))
        elif op == "pb" and a: b.insert(0, a.pop(0))
        elif op == "ra" and a: a.append(a.pop(0))
        elif op == "rb" and b: b.append(b.pop(0))
        elif op == "rr": self.apply_op("ra"); self.apply_op("rb")
        elif op == "rra" and a: a.insert(0, a.pop())
        elif op == "rrb" and b: b.insert(0, b.pop())
        elif op == "rrr": self.apply_op("rra"); self.apply_op("rrb")

    def animate(self):
        if self.op_idx < len(self.ops):
            self.apply_op(self.ops[self.op_idx])
            self.op_idx += 1
            self.draw_stacks()
            self.root.after(int(SPEED * 1000), self.animate)
        else:
            self.label.config(text="Finished! Sorted.")

if __name__ == "__main__":
    root = tk.Tk()
    app = PushSwapGUI(root, STACK_SIZE)
    root.mainloop()
