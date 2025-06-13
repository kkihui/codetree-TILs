#include <iostream>

using namespace std;

int a, b, c, d;

int T2M(int h, int m)
{
    return 60*h + m;
}

int main()
{
    cin >> a >> b >> c >> d;

    cout << T2M(c,d) - T2M(a,b);

    return 0;
}