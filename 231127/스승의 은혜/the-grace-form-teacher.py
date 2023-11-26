import sys

n,b = map(int,sys.stdin.readline().split())
student = [0] * n
ans = 0

for i in range(n):
    p,s = map(int,sys.stdin.readline().split())
    student[i] = [p+s,p,s]

student.sort() # 전체 가격 오름차순 

for i in range(n):
    if student[i][0] <= b:
        ans += 1
        b -= student[i][0]
    else:
        out = i
        break

for i in range(out,n):
    if student[i][1]//2 + student[i][2] <= b:
        ans += 1
        break

print(ans)