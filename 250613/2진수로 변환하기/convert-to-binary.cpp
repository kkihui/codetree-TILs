#include <iostream>

#define max_N 20

using namespace std;

int n;
int arr[max_N];

void FindBinary(int n)
{
    int digit = -1;

    while (n >= 2)
    {
        digit++;
        arr[digit] = n%2;
        n /= 2;
    }

    digit++;
    arr[digit] = n;
        

    for (int i=digit; i>=0; i--)
        cout << arr[i];

}

int main() {
    cin >> n;

    FindBinary(n);

    return 0;
}