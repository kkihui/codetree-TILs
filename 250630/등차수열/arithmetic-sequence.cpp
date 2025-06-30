#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    int sequence[100] = {0, };
    int min_num = 101, max_num = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> sequence[i];
        min_num = min(min_num, sequence[i]);
        max_num = max(max_num, sequence[i]);
    }

    int ans = 0;
    for (int num = min_num; num <= max_num; num++)
    {
        int cnt = 0;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (num - sequence[i] == sequence[j] - num)
                {
                    cnt++;
                }
            }
        }
        ans = max(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}