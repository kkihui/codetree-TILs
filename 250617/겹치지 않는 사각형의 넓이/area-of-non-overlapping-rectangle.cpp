#include <iostream>

#define MAX_SIZE 2001
#define OFFSET 1000

using namespace std;

int coordinate[MAX_SIZE][MAX_SIZE] = {0,};

void fillRect(int x1, int y1, int x2, int y2)
{
    for (int i = x1+OFFSET; i < x2+OFFSET; i++)
    {
        for (int j = y1+OFFSET; j < y2+OFFSET; j++)
            coordinate[i][j] = 1;
    }
}

void delArea(int x1, int y1, int x2, int y2)
{
    for (int i = x1+OFFSET; i < x2+OFFSET; i++)
    {
        for (int j = y1+OFFSET; j < y2+OFFSET; j++)
            coordinate[i][j]--;
    }
}

int getArea()
{
    int area = 0;
    for (int i = 0; i < MAX_SIZE; i++)
    {
        for (int j = 0; j < MAX_SIZE; j++)
        {
            if (coordinate[i][j] == 1)
                area++;
        }
    }
    return area;
}


int main() 
{
    int x1, y1, x2, y2;
    for (int i = 0; i < 2; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        fillRect(x1,y1,x2,y2);
    }

    cin >> x1 >> y1 >> x2 >> y2;
    delArea(x1,y1,x2,y2);

    cout << getArea();

    return 0;
}