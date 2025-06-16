#include <iostream>

#define Max_size 200002

using namespace std;

class Tile
{
    public:
        char color;
        int cntb;
        int cntw;

        Tile (char c = 0, int cntb = 0, int cntw = 0)
        {
            this -> color = c;
            this -> cntb = cntb;
            this -> cntw = cntw;
        }
};

int n;
int x[1000];
char dir[1000];

Tile Tiles[Max_size];

void FillColor()
{
    int pos = Max_size/2;
    int cur;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < x[i]; j++)
        {
            // R과 L 나눠 색칠해주기
            if (dir[i] == 'R')
            {
                cur = pos + j;
                if (Tiles[cur].color != 'B' || Tiles[cur].color != 'G')
                {
                    Tiles[cur].color = 'B';
                    Tiles[cur].cntb++;
                }
            }
            else
            {
                cur = pos - j;
                if (Tiles[cur].color != 'W' || Tiles[cur].color != 'G')
                {
                    Tiles[cur].color = 'W';
                    Tiles[cur].cntw++;
                }
            }
            // 4번 이상 칠해지면 Gray로 변경
            if (Tiles[cur].cntb >= 2 && Tiles[cur].cntw >= 2)
                Tiles[cur].color = 'G';
        }
        // Pos 업데이트
        pos = cur;
    }
}

void PrintAns()
{
    int w = 0, b = 0, g = 0;

    for (int i = 0; i < Max_size; i++)
    {
        if (Tiles[i].color == 'W')
            w++;
        else if (Tiles[i].color == 'B')
            b++;
        else if (Tiles[i].color == 'G')
            g++;
    }

    cout << w << ' ' << b << ' ' << g;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> x[i] >> dir[i];

    FillColor();

    PrintAns();

    return 0;
}