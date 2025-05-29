#include <iostream>
using namespace std;

int main() {
    int matrix[4][4];
    int total = 0;

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            cin >> matrix[i][j];
            if (i >= j)
                total += matrix[i][j];
        }
    }

    cout << total;

    return 0;
}