#include <iostream>

using namespace std;

int n;
int grid[100][100];
int dr[4] = {0,0,1,-1} , dc[4] = {1,-1,0,0};

bool InRange(int row, int col)
{
    return (0 <= row && row < n && 0 <= col && col < n);
}

int serach(int row, int col)
{
    int nr,nc;
    int cnt = 0;

    for (int i = 0; i < 4; i++)
    {
        nr = row+dr[i];
        nc = col+dc[i];
        if (InRange(nr,nc) && grid[nr][nc] == 1)
            cnt++;
    }

    if (cnt >= 3)
        return 1;
    return 0;
}

int main() 
{
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
            ans += serach(i,j);
    }

    cout << ans << endl;

    return 0;
}