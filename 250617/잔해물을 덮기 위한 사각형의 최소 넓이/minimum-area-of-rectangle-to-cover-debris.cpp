#include <iostream>

#define MAX_SIZE 2000
#define OFFSET 1000

using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];
int coordinate[MAX_SIZE][MAX_SIZE] = {0,};

int min(int a, int b)
{
    if (a<b)
        return a;
    else
        return b;
}

void fillRectangle(int x, int y, int xe, int ye, int n)
{
    for (int i = x+OFFSET; i < xe+OFFSET; i++)
    {
        for (int j = y+OFFSET; j < ye+OFFSET; j++)
        {
            if (n == 0)
                coordinate[i][j]++;
            else
                coordinate[i][j]--;
        }
    }
}

int getAns()
{
    int xs = MAX_SIZE, ys = MAX_SIZE;
    int xe = 0, ye = 0;

    for (int i = 0; i < MAX_SIZE; i++)
    {
        for (int j = 0; j < MAX_SIZE; j++)
        {
            if (coordinate[i][j] == 1)
            {
                xs = min(xs,i);
                xe = max(xe,i);
                ys = min(ys,j);
                ye = max(ye,j);
            }
        }
    }

    if (xs > xe || ys > ye)
        return 0;
    
    return (xe-xs+1) * (ye-ys+1);
}

int main() 
{
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    for (int i = 0; i < 2; i++)
        fillRectangle(x1[i],y1[i],x2[i],y2[i],i);
    
    cout << getAns();

    return 0;
}