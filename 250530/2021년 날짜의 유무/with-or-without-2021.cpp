#include <iostream>

using namespace std;

int M, D;

bool IsValidDate(int M, int D)
{
    if (M >= 13 || D >= 32)
        return 0;
    else if (M == 2 && D >= 29)
        return 0;
    else if (M == 4 || M == 6 || M == 9 || M == 11)
        if (D == 31)
            return 0;
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