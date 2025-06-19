#include <iostream>
#include <string>

using namespace std;

string dirs;
int x = 0, y = 0;
int dx[4] = {0,1,0,-1} , dy[4] = {1,0,-1,0};
int dir_state = 0;

void CalState(char c)
{
    if (c == 'R')
        dir_state = (dir_state + 1) % 4;
    else if (c == 'L')
        dir_state = (dir_state + 3) % 4;
    else
    {
        x += dx[dir_state];
        y += dy[dir_state];
    }
}


int main()
{
    cin >> dirs;

    for (int i = 0; i < dirs.length(); i++)
        CalState(dirs[i]);

    cout << x << ' ' << y << endl;

    return 0;
}