#include <iostream>

using namespace std;

int M, D;

bool IsValidDate(int m, int d)
{
    if (m >= 13 || d >= 32)
        return 0;
    else if (m == 2 && d >= 29)
        return 0;
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        {
        if (d == 31)
            return 0;
        return 1;
        }
    else
        return 1;
}

int main() {
    cin >> M >> D;

    if (IsValidDate(M,D))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}