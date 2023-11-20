import sys

n,s = map(int,sys.stdin.readline().split())
charge = []
entiresum = 0
cnt = 0

for i in range(n):
    cost,ea = map(int,sys.stdin.readline().split())
    entiresum += cost*ea
    for _ in range(ea):
        charge.append(cost)
        cnt += 1

if entiresum < s:
    print(-1)
else:
    dp = [cnt+1]*(s+1)
    dp[0] = 0
    for i in range(cnt): # 모든 동전을 1개씩 추가해가면서 dp 구하기
        for j in range(charge[i],s+1):
            if dp[j-charge[i]] != cnt+1:
                dp[j] = min(dp[j],dp[j-charge[i]]+1)
    
    if dp[s] == cnt+1:
        print(-1)
    else:
        print(dp[s])
