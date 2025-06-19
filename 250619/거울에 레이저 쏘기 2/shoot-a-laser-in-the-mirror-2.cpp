#include <iostream>
using namespace std;

int n, k, dir_state, r, c;
char grid[1000][1000];
int dr[4] = {1,0,-1,0}, dc[4] = {0,-1,0,1};

void GetInitState()
{
    for (int i = 1; i <= 4; i++)
    {
        if (k <= (i*n))
        {
            dir_state = i-1;
            break;
        }
    }

    if (dir_state == 0)
    {
        r = 0; c = (k-1) % n;
    }
    else if (dir_state == 1)
    {    
        r = (k-1) % n; c = n - 1;
    }
    else if (dir_state == 2)
    {
        r = n - 1; c = (n-1) - (k-1) % n;
    }
    else if (dir_state == 3)
    {
        r = (n-1) - (k-1) % n; c = 0;
    }    
}

bool InRange(int row, int col)
{
    return (0 <= row && row < n && 0 <= col && col < n);
}

int GetReflectionTime()
{
    int ans = 0;

    while (InRange(r,c))
    {
        // '/'의 경우 0 -> 1, 1 ->  0, 2 -> 3, 3 -> 2
        if (grid[r][c] == '/')
            dir_state = (5 - dir_state) % 4;

        // '\'의 경우 0 -> 3, 1 -> 2, 2 -> 1, 3 -> 0
        else
            dir_state = (3 - dir_state) % 4;

        ans++;
        r += dr[dir_state];
        c += dc[dir_state];
    }

    return ans;
}

int main() 
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];
    }
    cin >> k;

    GetInitState();

    cout << GetReflectionTime() << endl;

    return 0;
}