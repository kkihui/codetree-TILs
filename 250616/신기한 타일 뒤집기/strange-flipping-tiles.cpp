#include <iostream>

#define Max_n 200000

using namespace std;

int n;
int x[1000];
char dir[1000];
char tile[Max_n] = {0};

void FillTile()
{
    int pos = Max_n / 2;
    int cur;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < x[i]; j++)
        {
            if (dir[i] == 'R')
            {
                cur = pos + j;
                tile[cur] = 'B';
            }
            else
            {
                cur = pos - j;
                tile[cur] = 'W';
            }
        }
        pos = cur;
    }
}

void PrintAns()
{
    int b = 0, w = 0;

    for (int i = 0; i < Max_n; i++)
    {
        if (tile[i] == 'B')
            b++;
        else if (tile[i] == 'W')
            w++;
    }

    cout << w << ' ' << b;
}

int main() 
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> x[i] >> dir[i];

    FillTile();

    PrintAns();

    return 0;
}