#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int n;
int x[100], y[100];

int CalDistance(int x1, int y1, int x2, int y2)
{
    return (x2-x1)*(x2-x1) + (y2-y1) * (y2-y1);
}

int main() 
{
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        cin >> x[i] >> y[i];
    }

    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int dist = CalDistance(x[i],y[i],x[j],y[j]);
            ans = min(ans,dist);
        }
    }

    cout << ans;

    return 0;
}