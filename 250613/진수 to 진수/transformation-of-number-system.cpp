#include <iostream>
#include <string>

using namespace std;

int a, b, n;

int ConvertBase(int a, int b, int n)
{
    int decimal = 0;
    int num, square = 1;
    // a 진법 to 10진법
    while (n > 0)
    {
        num = n%10;
        n /= 10;
        decimal += num*square;
        square *= a;
    }

    // 10 진법 to b 진법
    int res = 0, digit = 1;
    while (decimal >= b)
    {
        res += (decimal % b) * digit;
        decimal /= b;
        digit *= 10;
    }
    res += decimal * digit;

    return res;
}

int main() {
    cin >> a >> b;
    cin >> n;

    cout << ConvertBase(a,b,n);

    return 0;
}