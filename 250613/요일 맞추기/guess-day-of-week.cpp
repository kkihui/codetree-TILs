#include <iostream>
#include <string>

using namespace std;

int m1, d1, m2, d2;

int last_day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
string day_of_week[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

int D2Day(int m, int d)
{
    for (int i = 1; i<m; i++)
        d += last_day[i];
    return d;
}

string Whatday(int num)
{
    if (num < 0)
        return day_of_week[(num+700)%7];
    else
        return day_of_week[num%7];
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    string ans = Whatday(D2Day(m2,d2)-D2Day(m1,d1));

    cout << ans;

    return 0;
}