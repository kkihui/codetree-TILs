#include <iostream>

using namespace std;

int N, M, ans = 0;
char arr[50][50];

bool InRange(int row, int col)
{
    return (0 <= row && row < N && 0 <= col && col < M);
}

void Check(int row, int col)
{
    int dr[8] = {0,0,1,1,1,-1,-1,-1};
    int dc[8] = {-1,1,-1,0,1,-1,0,1};

    for (int dir = 0; dir < 8; dir++)
    {
        int nr = row + dr[dir], nc = col + dc[dir];
        if (InRange(nr,nc) && arr[nr][nc] == 'E')
        {
            nr += dr[dir];
            nc += dc[dir];
            if (InRange(nr,nc) && arr[nr][nc] == 'E')
                ans++;
        }
    }
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) cin >> arr[i][j];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(arr[i][j] == 'L')
                Check(i,j);
        }
    }

    cout << ans;
    
    return 0;
}