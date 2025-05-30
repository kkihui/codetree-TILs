#include <iostream>

using namespace std;

int Y, M, D;

bool IsLunaYear(int y)
{
    if (y % 4 == 0)
    {
        if (y % 100 == 0)
        {
            if (y % 400 == 0)
                return 1;
            else
                return 0;
        }
        else
            return 1;
    }
    else
        return 0;
}

int MonthLastday(int y, int m)
{
    if (m == 2)
    {
        if (IsLunaYear(y))
            return 29;
        else
            return 28; 
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        return 30;
    else
        return 31;
}

bool ValidDate(int y, int m, int d)
{
    if (d <= MonthLastday(y,m))
        return 1;
    else
        return 0;
}

string JudgeSeason(int m)
{
    string ans;
    if (m >= 3 && m <= 5)
        ans = "Spring";
    else if (m >= 6 && m <= 8)
        ans = "Summer";
    else if (m >= 9 && m <= 11)
        ans = "Fall";
    else
        ans = "Winter";
    
    return ans;
}


int main() {
    cin >> Y >> M >> D;

    if (ValidDate(Y,M,D))
        cout << JudgeSeason(M);
    else
        cout << -1;
    
    return 0;
}