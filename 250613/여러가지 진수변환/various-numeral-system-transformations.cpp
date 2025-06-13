#include <iostream>

#define max_N 5

using namespace std;

int N, B, digit;

int arr[max_N];

void ConvetBase(int n, int b)
{
    digit = 0;

    while (n >= b)
    {
        arr[digit] = n%b;
        n /= b;
        digit++;
    }
    
    arr[digit] = n;
}

int main() 
{
    cin >> N >> B;

    ConvetBase(N,B);

    for(int i=digit; i>=0; i--)
        cout << arr[i];

    return 0;
}