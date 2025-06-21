#include <iostream>

using namespace std;

int R, C;
char grid[15][15];
int ans = 0;

bool CanJump()
{
    return grid[0][0] != grid[R-1][C-1];
}

void SearchGrid()
{
    for (int i = 1; i < R; i++)
    {
        for (int j = 1; j < C; j++)
        {
            if (grid[i][j] != grid[0][0])
            {
                for (int k = i+1 ; k < R-1; k++)
                {
                    for (int l = j+1; l < C-1; l++)
                    {
                        if (grid[k][l] == grid[0][0])
                            ans++;
                    }
                }
            }
        }
    }
}

int main() 
{
    cin >> R >> C;
    for (int i = 0; i < R; i++) 
    {
        for (int j = 0; j < C; j++)
            cin >> grid[i][j];
    }

    if (CanJump())
        SearchGrid();
        
    cout << ans;

    return 0;
}