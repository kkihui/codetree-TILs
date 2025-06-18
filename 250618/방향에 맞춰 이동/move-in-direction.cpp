#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];

int x = 0, y = 0;
int dx[4] = {0,0,1,-1}, dy[4] = {1,-1,0,0};
char direction[4] = {'N','S','E','W'};

void move(char d, int v)
{
    for (int i = 0; i < 4; i++)
    {
        if (direction[i] == d)
        {
            x += dx[i] * v;
            y += dy[i] * v;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> dir[i] >> dist[i];
        move(dir[i],dist[i]);
    }

    cout << x << ' ' << y;

    return 0;
}