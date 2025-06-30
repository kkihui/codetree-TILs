#include <iostream>
#include <string>

using namespace std;

int X, Y;

bool IsPalindrome(int num)
{
    string s_num = to_string(num);
    int place_val = s_num.length();

    for (int i = 0; i < place_val/2; i++)
    {
        if (s_num[i] != s_num[place_val -1 -i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    cin >> X >> Y;

    int cnt = 0;
    for (int i = X; i <= Y; i++)
    {
        if (IsPalindrome(i))
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}