#include <iostream>

using namespace std;

int n, m;

int Gcd(int a, int b)
{
    for (int i = max(a,b); i>0; i--)
    {
        if (a%i == 0 && b%i == 0)
        {
            cout << i;
            return i;
        }
    }
}

int main() {
    cin >> n >> m;

    Gcd(n,m);

    return 0;
}