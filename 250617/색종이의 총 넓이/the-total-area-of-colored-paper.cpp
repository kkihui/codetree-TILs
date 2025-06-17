#include <iostream>

#define MAX_SIZE 200
#define OFFSET 100

using namespace std;

int N;
int x[100], y[100];
int coordinate[MAX_SIZE][MAX_SIZE] = {0,};

void fillPaper(int a, int b)
{
    for (int i = a+OFFSET; i < a+OFFSET+8; i++)
    {
        for (int j = b+OFFSET; j < b+OFFSET+8; j++)
            coordinate[i][j] = 1;
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
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> x[i] >> y[i];
    
    for (int i = 0; i < N; i++)
        fillPaper(x[i],y[i]);
    
    cout << getArea();

    return 0;
}