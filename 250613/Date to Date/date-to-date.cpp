#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int last_day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int D2day(int m, int d)
{
    for (int i=1; i<m; i++)
        d += last_day[i];
    return d;
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    cout << D2day(m2,d2) - D2day(m1,d1) + 1;
    return 0;
}