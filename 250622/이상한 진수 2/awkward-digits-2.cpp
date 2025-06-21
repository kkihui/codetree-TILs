#include <iostream>
#include <string>

using namespace std;

string a;

int BinaryToDecimal(string a)
{
    int digits = 1, result = 0;
    for (int i = a.length()-1; i >= 0; i--)
    {
        result += (a[i]-'0') * digits;
        digits *= 2;
    }

    return result;
}

int main() 
{
    cin >> a;

    int n_max = 0;
    for (int i=0; i < a.length(); i++)
    {
        if (a[i] == '1')
        {
            a[i] = '0';
            n_max = max(n_max,BinaryToDecimal(a));
            a[i] = '1';
        }

        else
        {
            a[i] = '1';
            n_max = max(n_max,BinaryToDecimal(a));
            a[i] = '0';
        }
    }

    cout << n_max;

    return 0;
}