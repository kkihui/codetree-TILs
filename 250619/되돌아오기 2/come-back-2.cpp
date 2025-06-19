#include <iostream>
#include <string>

using namespace std;

string commands;

int GetAns()
{
    int x = 0, y = 0, dir_state = 0;
    int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};

    for (int i = 0; i < commands.length(); i++)
    {
        if (commands[i] == 'L')
            dir_state = (dir_state + 3) % 4;
        else if (commands[i] == 'R')
            dir_state = (dir_state + 1) % 4;
        else
            {
                x += dx[dir_state];
                y += dy[dir_state];
            }
        
        if (x == 0 && y == 0)
            return ++i;
    }

    return -1;
}

int main() 
{
    cin >> commands;

    cout << GetAns() << endl;

    return 0;
}