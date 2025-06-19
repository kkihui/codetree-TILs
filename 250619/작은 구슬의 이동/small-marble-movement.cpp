#include <iostream>

using namespace std;

int n, t;
int r, c;
char d;

int dr[4] = {0,1,-1,0}, dc[4] = {1,0,0,-1};
char directions[4] = {'R','D','U','L'};

bool InRange(int row, int col)
{
    return (0 <= row && row < n && 0 <= col && col < n);
}

int GetDirection(int d)
{
    for (int i = 0; i < 4; i++)
    {
        if (directions[i] == d)
            return i;
    }
}

void MoveBead()
{
    int dir_state = GetDirection(d);
    int nr, nc;
    for (int i = 0; i < t; i++)
    {
        nr = r + dr[dir_state];
        nc = c + dc[dir_state];
        
        // 범위 안에 있으면 이동
        if (InRange(nr,nc))
        {
            r = nr;
            c = nc;
        }
        // 부딫히면 방향 전환 (1초 소요)
        else
            dir_state = 3 - dir_state;
    }
}

int main() 
{
    cin >> n >> t;
    cin >> r >> c >> d;

    r--;
    c--;

    MoveBead();

    cout << r+1 << ' ' << c+1 << endl;

    return 0;
}