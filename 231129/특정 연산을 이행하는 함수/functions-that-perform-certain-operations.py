a = list(map(int,input().split()))
for i in range(3):
    if a[i] % 2 == 0:
        a[i] = a[i] //2
    else:
        a[i] = 3*a[i] - 20
print(*a)