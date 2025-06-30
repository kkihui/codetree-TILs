#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, c, g, h;
    cin >> n >> c >> g >> h;

    int t_a[1000] = {0, }, t_b[1000] = {0, };
    int t_max = -1, t_min = 1001;

    for (int i = 0; i < n; i++)
    {
        cin >> t_a[i] >> t_b[i];
        t_max = max(t_max,t_b[i]);
        t_min = min(t_min,t_a[i]);
    }

    int ans = 0;
    for (int temp = t_min - 1; temp <= t_max + 1; temp++)
    {
        int task = 0;
        for (int i = 0; i < n; i++)
        {
            if (temp < t_a[i])
            {
                task += c;
            }
            else if (temp > t_b[i])
            {
                task += h;
            }
            else
            {
                task += g;
            }
        }
        ans = max(ans,task);
    }

    cout << ans << endl;

    return 0;
}