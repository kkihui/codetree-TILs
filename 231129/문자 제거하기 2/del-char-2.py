import sys
s,n = sys.stdin.readline().split()
s = list(s)

for _ in range(int(n)):
    a = int(sys.stdin.readline())
    if a <= len(s):
        del(s[a-1])
        s = ''.join(s)
        print(s)
        s = list(s)