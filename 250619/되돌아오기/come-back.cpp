#include <iostream>

using namespace std;

int N;
char dir[100];
int dist[100];

int GetDirection(char d)
{
    char dirs[4] = {'N','S','E','W'};
    for (int i = 0; i < 4; i++)
    {
        if (dirs[i] == d)
            return i;
    }
}

int GetAns()
{
    int dx[4] = {0,0,1,-1}, dy[4] = {1,-1,0,0};
    int x = 0, y = 0, time = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < dist[i]; j++)
        {
            x += dx[GetDirection(dir[i])];
            y += dy[GetDirection(dir[i])];
            time++;
            if (x == 0 && y == 0)
                return time;
        }
    }
    return -1;
}

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> dir[i] >> dist[i];

    cout << GetAns();

    return 0;
}