#include <iostream>

using namespace std;

int a, b, c;

int D2M (int d, int h, int m)
{
    return (d-1)*24*60 + h*60 + m;
}

int main() {
    cin >> a >> b >> c;

    int ans = D2M(a,b,c) - D2M(11,11,11);

    if (ans < 0)
        cout << -1;
    else
        cout << ans;

    return 0;
}