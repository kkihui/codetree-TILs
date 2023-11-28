import sys

n = int(sys.stdin.readline())

for _ in range(n):
    a,b,c = sys.stdin.readline().split()
    if c == 's':
        print(int(a)*int(b))
    elif c == 't':
        t = int(a) * int(b) /2
        print("%.1f"%(t))