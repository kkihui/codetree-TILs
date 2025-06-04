#include <iostream>

using namespace std;

int a, b, c;

int SumNum(int num)
{
    if (num<10)
        return num;
    return SumNum(num/10) + num%10;
}

int GetAns(int a, int b, int c)
{
    return SumNum(a*b*c);
}

int main() {
    cin >> a >> b >> c;

    cout << GetAns(a,b,c);

    return 0;
}