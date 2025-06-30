#include <iostream>
#include <algorithm>

using namespace std;

int n;
int h[100];

int CalSplit(int height)
{
    bool ing = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (h[i] > height)
        {
            if (!ing)
            {
                ing = 1;
            }
            
            if(i == n-1)
            {
                cnt++;
            }
        }
        else
        {
            if (ing)
            {
                ing = 0;
                cnt++;
            }
        }
    }

    return cnt;
}

int main() 
{
    cin >> n;

    int height_min = 1001, height_max = 0;
    for (int i = 0; i < n; i++) 
    {
        cin >> h[i];
        height_min = min(height_min,h[i]);
        height_max = max(height_max,h[i]);
    }

    int ans = 0;
    for (int height = height_min; height <= height_max; height++)
    {
        ans = max(ans,CalSplit(height));
    }

    cout << ans << endl;

    return 0;
}