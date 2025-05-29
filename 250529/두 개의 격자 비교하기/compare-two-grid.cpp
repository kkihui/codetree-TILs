#include <iostream>
using namespace std;

int main() {
    // 변수 선언
    int matrix_1[10][10];
    int matrix_2[10][10];
    int ans[10][10];
    int n,m;

    // 입력부
    cin >> n >> m;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
            cin >> matrix_1[i][j];
    }
    
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
            cin >> matrix_2[i][j];
    }

    // 출력부
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (matrix_1[i][j] == matrix_2[i][j])
                ans[i][j] = 0;
            else
                ans[i][j] = 1;
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}