#include <iostream>

using namespace std;

long long int Convert2Binary(int d)
{
    long long int result = 0;
    int digit = 0;
    int arr[20];

    while (d >= 2)
    {
        arr[digit] = d % 2;
        d /= 2;
        digit++;
    }
    arr[digit] = d;

    for (int i=digit; i >= 0; i--)
    {
        result += arr[i];
        result *= 10;
    }
    result /= 10;

    return result;
}

int Convert2Decimal(int b)
{
    int result = 0, square2 = 1, num;
    while (b > 0)
    {
        num = b%10;
        result += num*square2;
        square2 *= 2;
        b /= 10;
    }
    return result;
}


int main() {
    int binary;
    cin >> binary;

    int decimal = Convert2Decimal(binary) * 17;
    
    cout << Convert2Binary(decimal);

    return 0;
}