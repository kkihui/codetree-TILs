n,m = map(str,input().split())
m = int(m)
ans = 0

for i in range(len(n)-1,-1,-1):
    expo = len(n) -i -1
    if ord(n[i]) < 58: # 숫자일 때
        num = ord(n[i]) - ord('0')
    else:
        num = ord(n[i]) - ord('A') + 10     
    ans += num *m**expo
print(ans)