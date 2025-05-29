#include <iostream>
using namespace std;

int main() {
    // 입력부
    int matrix_1[3][3];
    int matrix_2[3][3];

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
            cin >> matrix_1[i][j];
    }

    
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
            cin >> matrix_2[i][j];
    }

    // 출력부
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
            cout << matrix_1[i][j] * matrix_2[i][j] << ' ';
        cout << endl;
    }
    return 0;
}