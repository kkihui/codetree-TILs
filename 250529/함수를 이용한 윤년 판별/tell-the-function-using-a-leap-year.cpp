#include <iostream>
using namespace std;

bool IsLeafYear(int year)
{
    if (year % 4 != 0)
        return false;
    if (year % 100 == 0 && year % 400 != 0)
        return false;
    return true;
}

int main() {
    int y;
    cin >> y;

    if (IsLeafYear(y))
        cout << "true";
    else
        cout << "false";
        
    return 0;
}