#include <iostream>

using namespace std;

int N;

int FindN(int n)
{
    if (n==1)
        return 2;
    else if (n==2)
        return 4;
    return (FindN(n-1)*FindN(n-2)) % 100;
}

int main() {
    cin >> N;

    cout << FindN(N);

    return 0;
}