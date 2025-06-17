#include <iostream>

#define MAX_SIZE 200
#define OFFSET 100

using namespace std;

int n;
int x1[10], y1[10];
int x2[10], y2[10];
char coordinate[MAX_SIZE][MAX_SIZE] = {'0',};

void fillColor(int x, int y, int xe, int ye, int num)
{
    for (int i = x+OFFSET; i < xe+OFFSET; i++)
    {
        for (int j = y+OFFSET; j < ye+OFFSET; j++)
        {
            if (num % 2 == 0)
                coordinate[i][j] = 'R';
            else
                coordinate[i][j] = 'B';
        }
        
    }
}

int getBlueArea()
{
    int area = 0;
    for (int i = 0; i < MAX_SIZE; i++)
    {
        for (int j = 0; j < MAX_SIZE; j++)
        {
            if (coordinate[i][j] == 'B')
                area++;
        }    
    }
    return area;
}

int main() 
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        fillColor(x1[i],y1[i],x2[i],y2[i],i);
    }

    cout << getBlueArea();

    return 0;
}