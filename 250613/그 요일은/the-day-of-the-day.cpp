#include <iostream>
#include <string>

using namespace std;

int m1, m2, d1, d2;
string A;

int last_day[13] = {31,29,31,30,31,30,31,31,30,31,30,31};
string day_of_week[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

int D2Day(int m, int d)
{
    for (int i=1; i<m; i++)
        d += last_day[i];
    return d;
}

int Find_remainder(string a)
{
    for (int i=0; i<7; i++)
    {
        if (day_of_week[i] == a)
            return i;
    }
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    int elapsed_day = D2Day(m2,d2) - D2Day(m1,d1);
    int remainder = Find_remainder(A);

    int ans = elapsed_day/7;
    elapsed_day %= 7;

    if (elapsed_day > remainder)
        ans += 1;

    cout << ans;

    return 0;
}