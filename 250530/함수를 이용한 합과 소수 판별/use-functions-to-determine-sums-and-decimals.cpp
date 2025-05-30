#include <iostream>

using namespace std;

int a, b;

bool IsSumEven(int num)
{
    int total = 0;
    while (num > 0)
    {
        total += num%10;
        num /= 10;
    }

    if (total % 2 == 0)
        return 1;
    else
        return 0;
}

bool IsPrime(int num)
{
    for (int i=2; i<num; i++)
    {
        if (num%i == 0)
            return 0;
    }
    return 1;
}

int main() {
    cin >> a >> b;

    int cnt = 0;

    for (int i=a; i<=b; i++)
    {
        if (IsSumEven(i) && IsPrime(i))
            cnt++;
    }

    cout << cnt;

    return 0;
}