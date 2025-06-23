#include <iostream>

using namespace std;

int n;
int x[100];
int y[100];

int Abs(int num)
{
    if (num < 0)
        return -num;
    return num;
}

int CalManDist(int x1, int x2, int y1, int y2)
{
    return Abs(x1-x2) + Abs(y1-y2);
}

int Min(int n1, int n2)
{
    if (n1 > n2)
        return n2;
    return n1;
}

int main() 
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];
    
    int ans = 4000000;

    // pass 1 ~ n-2 check point
    for (int i = 1; i < n-1; i++)
    {
        int dist_sum = 0;
        // calculate all points distance
        for (int j = 1; j < n; j++)
        {
            if (j == i)
                continue;
            else if (j == i+1)
                dist_sum += CalManDist(x[j],x[j-2],y[j],y[j-2]);
            else
                dist_sum += CalManDist(x[j],x[j-1],y[j],y[j-1]);
        }
        ans = Min(ans,dist_sum);
    }

    cout << ans;

    return 0;
}