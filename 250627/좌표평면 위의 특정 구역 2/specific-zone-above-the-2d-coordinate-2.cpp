#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int N;
int x[100], y[100];

int main() 
{
    cin >> N;

    for (int i = 0; i < N; i++) 
    {
        cin >> x[i] >> y[i];
    }

    int ans = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        int min_pt[2] = {INT_MAX,INT_MAX};
        int max_pt[2] = {0,0};

        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                min_pt[0] = min(x[j],min_pt[0]);
                min_pt[1] = min(y[j],min_pt[1]);
                max_pt[0] = max(x[j],max_pt[0]);
                max_pt[1] = max(y[j],max_pt[1]);
            }
        }
        int area = (max_pt[1] - min_pt[1]) * (max_pt[0] - min_pt[0]);
        ans = min(ans,area);
    }

    cout << ans;

    return 0;
}