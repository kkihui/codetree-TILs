#include <iostream>

using namespace std;

int n, m;

void Print1Rect(int row,int col)
{
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
            cout << 1;
        cout << endl;
    }
}

int main() {
    cin >> n >> m;

    Print1Rect(n,m);

    return 0;
}