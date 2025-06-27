#include <iostream>

using namespace std;

int N;
int x[100];
int y[100];

int  CalTriangleArea(int i1, int i2, int i3)
{
    int horizontal = 0, vertical = 0;

    if (x[i1] == x[i2])
    {
        vertical = abs(y[i1] - y[i2]);
        if (y[i2] == y[i3])
            horizontal = abs(x[i2] - x[i3]);
        else if (y[i1] == y[i3])
            horizontal = abs(x[i1] - x[i3]);
    }
    else if (x[i2] == x[i3])
    {
        vertical = abs(y[i2] - y[i3]);
        if (y[i1] == y[i3])
            horizontal = abs(x[i1] - x[i3]);
        else if (y[i1] == y[i2])
            horizontal = abs(x[i1] - x[i2]);
    }
    else if (x[i1] == x[i3])
    {
        vertical = abs(y[i1] - y[i3]);
        if (y[i1] == y[i2])
            horizontal = abs(x[i1] - x[i2]);
        else if (y[i2] == y[i3])
            horizontal = abs(x[i2] - x[i3]);
    }

    return horizontal * vertical;
}

int main() 
{
    cin >> N;

    for (int i = 0; i < N; i++) 
    {
        cin >> x[i] >> y[i];
    }

    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            for (int k = j+1; k < N; k++)
            {
                int area = CalTriangleArea(i,j,k);
                ans = max(ans,area);
                
            }
        }
    }

    cout << ans;

    return 0;
}