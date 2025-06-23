#include <iostream>

using namespace std;

int N;
int arr[20][20];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> arr[i][j];
    

    int coin_sum_1 = 0, coin_sum_2 = 0, ans = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N-2; j++)
        {
            coin_sum_1 = arr[i][j] + arr[i][j+1] + arr[i][j+2];

            for (int o = j+3; o < N-2; o++)
            {
                coin_sum_2 = arr[i][o] + arr[i][o+1] + arr[i][o+2];
                ans = max(ans, coin_sum_1 + coin_sum_2);
            }

            for (int k = i+1; k < N; k++)
            {
                for (int l = 0; l < N-2; l++)
                {
                    coin_sum_2 = arr[k][l] + arr[k][l+1] + arr[k][l+2];
                    ans = max(ans, coin_sum_1 + coin_sum_2);
                }
            }
        }
    }

    cout << ans;

    return 0;
}