#include <iostream>

using namespace std;

int N;
int grid[20][20];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> grid[i][j];
    
    int max_coin_sum = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N-2; j++)
        {
            int coin_sum = 0;
            for (int k = 0; k < 3; k++)
                coin_sum += grid[i][j+k];
            max_coin_sum = max(max_coin_sum,coin_sum); 
        }
    }

    cout << max_coin_sum << endl;

    return 0;
}