#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int T, a, b;
char c, line[1001];
int x, d1, d2;

void UpdateDist(int start, int pos, char ch)
{
    if (ch == 'S' && line[pos] == ch)
    {
        d1 = min(d1, abs(pos-start));
    }
    else if (ch == 'N' && line[pos] == ch)
    {
        d2 = min(d2, abs(pos-start));
    }
}

bool IsSpecial(int pos)
{
    d1 = 1001; d2 = 1001;
    for (int j = 0; j <= 1000; j++)
    {
        int pos1 = pos - j;
        int pos2 = pos + j;
        if (pos1 >= 1)
        {
            UpdateDist(pos,pos1,line[pos1]);
        }
        if (pos2 <= 1000)
        {
            UpdateDist(pos,pos2,line[pos2]);
        }
    }
    
    if (d1 <= d2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cin >> T >> a >> b;

    for (int i = 0; i < T; i++) 
    {
        cin >> c >> x;
        line[x] = c; 
    }

    int cnt = 0;
    for (int i = a; i <= b; i++)
    {
        if (IsSpecial(i))
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}