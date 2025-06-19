#include <iostream>

using namespace std;

int n, m;
int arr[100][100] = {0, };

int r = 0, c = 0;
int dr[4] = {0,1,0,-1}, dc[4] = {1,0,-1,0};
int dir_state = 0;

bool InRange(int row, int col)
{
    return (0 <= row && row < n && 0 <= col && col < m);
}

bool CanFill()
{
    int nr,nc;
    // 4방향 한 칸이라도 갈 수 있으면 true
    for (int i = 0; i < 4; i++)
    {
        nr = r + dr[i];
        nc = c + dc[i];
        if (InRange(nr,nc) && arr[nr][nc] == 0)
            return true;
    }
    return false;
}

void Fillnumber()
{
    int nr, nc, num = 2;
    arr[0][0] = 1;
    
    while (CanFill())
    {
        
        nr = r + dr[dir_state];
        nc = c + dc[dir_state];
        if (InRange(nr,nc) && arr[nr][nc] == 0)
        {
            r = nr; 
            c = nc;
            arr[r][c] = num;
            num++;
        }
        else
            dir_state = (dir_state+1)%4;
    }
}

void Printarr()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
}

int main() 
{
    cin >> n >> m;

    Fillnumber();
    
    Printarr();

    return 0;
}