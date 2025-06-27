#include <iostream>

using namespace std;

int k, n;
int arr[10][20];

bool IsFast(int a, int b)
{
    for (int i = 0; i < k; i++)
    {
        bool is_fast = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == b)
            {
                if (!is_fast)
                {
                    return false;
                }
            }
            else if (arr[i][j] == a)
            {
                is_fast = 1;
            }
        }
    }
    return true;
}

int main() 
{
    cin >> k >> n;

    for (int i = 0; i < k; i++)
        for (int j = 0; j < n; j++) cin >> arr[i][j];
    
    int ans = 0;
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++)
        {
            if (a != b)
            {
                if (IsFast(a,b))
                {
                    ans++;
                }
            }
        }
    }

    cout << ans;

    return 0;
}