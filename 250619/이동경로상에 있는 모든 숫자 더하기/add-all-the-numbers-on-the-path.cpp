#include <iostream>
#include <string>

using namespace std;

int N, T;
string str;
int board[100][100];
int r, c;
int dr[4] = {-1,0,1,0}, dc[4] = {0,1,0,-1};
int dir_state = 0;

bool InRange (int row, int col)
{
    return (0 <= row && row < N && 0 <= col && col < N);
}

int Move (char command)
{
    if (command == 'F')
    {
        int nr = r + dr[dir_state];
        int nc = c + dc[dir_state];
        
        if (InRange(nr,nc))
        {
            r = nr; c = nc;
            return board[r][c];
        }
        return 0;
    }
    else if (command == 'R')
        dir_state = (dir_state+1) % 4;
    else
        dir_state = (dir_state+3) % 4;
    return 0;
}

int main() 
{
    cin >> N >> T;
    cin >> str;

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++)
            cin >> board[i][j];
    }

    r = N / 2; c = N / 2;
    int ans = board[r][c];

    for (int i = 0; i < T; i++)
        ans += Move(str[i]);

    cout << ans << endl;

    return 0;
}