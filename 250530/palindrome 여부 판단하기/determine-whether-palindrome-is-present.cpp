#include <iostream>
#include <string>

using namespace std;

string A;

bool IsPalindrome(string s)
{
    int size = s.length();

    for (int i=0; i < size; i++)
    {
        if (s[i] != s[size-i-1])
            return 0;
    }
    return 1;
}

int main() {
    cin >> A;

    if (IsPalindrome(A))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}