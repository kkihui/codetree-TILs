#include <iostream>

#define MAX_SIZE 201
#define OFFSET 100

using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];
int coordinate[MAX_SIZE][MAX_SIZE] = {0,};

void fillRect(int x, int y, int xe, int ye)
{
    for (int i = x + OFFSET; i < xe + OFFSET; i++)
    {
        for (int j = y + OFFSET; j < ye + OFFSET; j++)
        {
            coordinate[i][j] = 1;
        }
    }
}

int getArea()
{
    int area = 0;
    for (int i = 0; i < MAX_SIZE; i++)
    {
        for (int j = 0; j < MAX_SIZE; j++)
        {
            if (coordinate[i][j] > 0)
                area++;
        }    
    }
    return area;
}

int main() 
{
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

    for (int i = 0; i < N; i++)
        fillRect(x1[i],y1[i],x2[i],y2[i]);

    cout << getArea();

    return 0;
}