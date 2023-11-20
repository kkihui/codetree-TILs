import sys

N,K =map(int,sys.stdin.readline().split())
test = [0]*4
candinate = []
candinate2 = []
candinate3 = []
dic = dict()
ans = 0

for i in range(4):
    test[i] = list(map(int,sys.stdin.readline().split()))
    test[i].sort()

for i in range(N):
    if test[0][i] < K:
        candinate.append(test[0][i])
    else:
        break

for i in range(len(candinate)):
    for j in range(N):
        if candinate[i] + test[1][j] < K:
            candinate2.append(candinate[i] + test[1][j])
        else:
            break
candinate = []

for i in range(N):
    if test[2][i] < K:
        candinate.append(test[2][i])
    else:
        break

for i in range(len(candinate)):
    for j in range(N):
        if candinate[i] + test[3][j] < K:
            candinate3.append(candinate[i] + test[3][j])
        else:
            break

for i in range(len(candinate2)):
    if candinate2[i] in dic:
        dic[candinate2[i]] += 1
    else:
        dic[candinate2[i]] = 1

for i in range(len(candinate3)):
    if (K - candinate3[i]) in dic:
            ans += dic[K - candinate3[i]]

print(ans)
