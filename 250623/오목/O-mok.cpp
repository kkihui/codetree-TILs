#include <iostream>

using namespace std;

int board[19][19];
int ans[3] = {0, };

bool InRange(int row, int col)
{
    return (0 <= row && row < 19 && 0 <= col && col < 19);
}

void CheckVertical(int row, int col)
{
    int cnt = 1;
    for (int i = 1; i < 5; i++)
    {
        if (InRange(row+i,col) && board[row+i][col] == board[row][col])
            cnt++;
    }
    if (cnt == 5)
    {
        ans[0] = row+3; ans[1] = col+1; ans[2] = board[row][col];
    }
}

void CheckHorizontal(int row, int col)
{
    int cnt = 1;
    for (int i = 1; i < 5; i++)
    {
        if (InRange(row,col+i) && board[row][col+i] == board[row][col])
            cnt++;
    }
    if (cnt == 5)
    {   
        ans[0] = row+1; ans[1] = col+3; ans[2] = board[row][col];
    }
}

void CheckLeftDiagonal(int row, int col)
{
    int cnt = 1;
    for (int i = 1; i < 5; i++)
    {
        if (InRange(row+i,col+i) && board[row+i][col+i] == board[row][col])
            cnt++;
    }
    if (cnt == 5)
    {
        ans[0] = row+3; ans[1] = col+3; ans[2] = board[row][col];
    }
}

void CheckRightDiagonal(int row, int col)
{
    int cnt = 1;
    for (int i = 1; i < 5; i++)
    {
        if (InRange(row+i,col-i) && board[row+i][col-i] == board[row][col])
            cnt++;
    }
    if (cnt == 5)
    {
        ans[0] = row+3; ans[1] = col-1; ans[2] = board[row][col];
    }
}

// row, col을 기준으로 탐색 (1. 상단, 2. 가로 3. 좌측 대각선 4. 우측 대각선)
void Check(int row, int col)
{
    if (board[row][col] != 0)
    {
        CheckVertical(row,col);
        CheckHorizontal(row,col);
        CheckLeftDiagonal(row,col);
        CheckRightDiagonal(row,col);
    }
}

int main() 
{
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++) cin >> board[i][j];

    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++) Check(i,j);

    cout << ans[2] << endl;
    if (ans[2] != 0)
        cout << ans[0] << ' ' << ans[1] << endl;

    return 0;
}