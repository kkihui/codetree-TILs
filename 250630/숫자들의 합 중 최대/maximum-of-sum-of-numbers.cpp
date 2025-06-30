#include <iostream>
#include <algorithm>

using namespace std;

int X, Y;

int CalDigitSum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    cin >> X >> Y;

    int max_num = 0;

    for (int i = X; i <= Y; i++)
    {
        max_num = max(max_num, CalDigitSum(i));
    }

    cout << max_num << endl;

    return 0;
}