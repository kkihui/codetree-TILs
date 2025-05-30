#include <iostream>

using namespace std;

int n, m;

int swap (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a,b;
}

int main() {
    cin >> n >> m;

    n,m = swap(n,m);

    cout << n << ' ' << m;

    return 0;
}