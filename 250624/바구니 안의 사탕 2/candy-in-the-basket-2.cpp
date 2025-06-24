#include <iostream>

using namespace std;

int N, K;
int pos[101] = {0, };

int main() 
{
    cin >> N >> K;

    int idx, candy;
    for (int i = 0; i < N; i++)
    {
        cin >> candy >> idx;
        pos[idx] += candy;
    }

    int max_sum = 0;
    for (int c = K; c <= (100 - K); c++)
    {
        int sum = 0;
        for (int i = -K; i <= K; i++)
            sum += pos[c+i];
        max_sum = max(max_sum,sum);
    }

    cout << max_sum << endl;

    return 0;
}