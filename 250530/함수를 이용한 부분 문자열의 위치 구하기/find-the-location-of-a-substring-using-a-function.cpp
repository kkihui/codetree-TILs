#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int FindIdx()
{
    int len_t = text.length();
    int len_p = pattern.length();
    for (int idx=0; idx<=len_t-len_p; idx++)
    {
        bool exists = 1;
        for (int i=0; i<len_p; i++)
        {
            if (text[i+idx] != pattern[i])
            {
                exists = 0;
                break;
            }
        }
        if (exists)
            return idx;
        
    }
    return -1;
}

int main() {
    cin >> text;
    cin >> pattern;

    int ans;
    ans = FindIdx();
    cout << ans;

    return 0;
}