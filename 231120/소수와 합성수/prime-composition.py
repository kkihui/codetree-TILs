num = int(input())

if num == 1:
    print("one")
else:
    prime = 1
    for i in range(2,round(num**(0.5))+1):
        if num % i == 0:
            prime = 0
            break
    if prime:
        print("prime")
    else:
        print("composition")