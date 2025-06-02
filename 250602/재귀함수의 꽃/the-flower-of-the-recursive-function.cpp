#include <iostream>

using namespace std;

int N;

void PrintNumArr(int n)
{
    if (n==0)
        return;

    cout << n << ' ';
    PrintNumArr(n-1);
    cout << n << ' ';
}

int main() {
    cin >> N;

    PrintNumArr(N);

    return 0;
}