import sys

n = int(sys.stdin.readline())

for _ in range(n):
    num = int(sys.stdin.readline())
    if num > 0: print("plus")
    elif num < 0: print("minus")
    else: print("zero")