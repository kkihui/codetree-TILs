#include <iostream>
#include <string>

using namespace std;

string A;

bool Havemanychar(string s)
{
    int size = s.length();
    for(int i=1; i<size; i++)
    {
        if(s[i] != s[i-1])
            return 1;
    }
    return 0;
}

int main() {
    cin >> A;

    if (Havemanychar(A))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}