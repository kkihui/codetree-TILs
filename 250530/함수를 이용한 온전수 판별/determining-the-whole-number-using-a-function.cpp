#include <iostream>

using namespace std;

int a, b;

bool IsNotLast5(int num)
{
    return num%10 != 5;
}

bool IsNotDivide3(int num)
{
    if(num % 3 == 0 && num % 9 != 0)
        return 0;
    else
        return 1;
}

bool IsOnjeon(int num)
{
    if (num % 2 == 1 && IsNotLast5(num) && IsNotDivide3(num))
        return 1;
    else
        return 0;
}

int main() {
    cin >> a >> b;
    int cnt = 0;

    for (int i=a; i<=b; i++)
    {
        if (IsOnjeon(i))
            cnt++;
    }

    cout << cnt;

    return 0;
}