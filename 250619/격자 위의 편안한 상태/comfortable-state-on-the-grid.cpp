#include <iostream>

using namespace std;

int N, M;
int r[10000], c[10000];
bool grid[100][100] = {false,};

void FillGrid(int row, int col)
{
    grid[row][col] = true;
}

bool InRange(int row, int col)
{
    return (0 <= row && row < N & 0 <= col && col < N);
}

bool IsComfortable(int row, int col)
{
    int dr[4] = {0,0,1,-1} , dc[4] = {1,-1,0,0};
    int nr, nc, cnt = 0;

    for (int i = 0; i < 4; i++)
    {
        nr = row + dr[i];
        nc = col + dc[i];
        if (InRange(nr,nc) && grid[nr][nc] == true)
            cnt++;
    }
    
    if (cnt == 3)
        return true;
    else
        return false;
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        cin >> r[i] >> c[i];
        FillGrid(r[i]-1,c[i]-1);
        cout << IsComfortable(r[i]-1,c[i]-1) << endl;
    }

    return 0;
}