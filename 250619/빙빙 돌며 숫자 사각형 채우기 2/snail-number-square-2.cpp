#include <iostream>

using namespace std;

int n, m;
int grid[100][100] = {0, };
int dr[4] = {1,0,-1,0}, dc[4] = {0,1,0,-1};
int dir_state = 0;


bool InRange(int row, int col)
{
    return (0 <= row && row < n && 0 <= col && col < m);
}

bool CheckConti(int row, int col)
{
    int r, c;
    for (int i = 0; i < 4; i++)
    {
        r = row + dr[i];
        c = col + dc[i];
        if (InRange(r,c) && grid[r][c] == 0)
            return true;
    }
    return false;
}

void FillGrid()
{
    int r = 0, c = 0, nr, nc;
    grid[r][c] = 1;
    int num = 2;

    while (CheckConti(r,c))
    {
        nr = r + dr[dir_state];
        nc = c + dc[dir_state];
        if (InRange(nr,nc) && grid[nr][nc] == 0)
        {
            r = nr; c = nc;
            grid[r][c] = num++;
        }
        else
            dir_state = (dir_state + 1) % 4;
    }
}

void PrintGrid()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << grid[i][j] << ' ';
        cout << endl;
    }
}

int main() 
{
    cin >> n >> m;

    FillGrid();

    PrintGrid();

    return 0;
}