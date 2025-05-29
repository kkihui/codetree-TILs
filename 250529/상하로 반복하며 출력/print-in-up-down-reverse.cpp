#include <iostream>
using namespace std;

int main() {
    int matrix[9][9];
    int n;
    cin >> n;

    // 2차원 배열 생성
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i%2 == 0)
                matrix[j][i] = j+1;
            else
                matrix[j][i] = n-j;
        }
    } 

    // 2차원 배열 출력
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
            cout << matrix[i][j];
        cout << endl;
    } 

    return 0;
}