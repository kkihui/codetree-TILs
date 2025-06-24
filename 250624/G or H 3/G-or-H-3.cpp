#include <iostream>

using namespace std;

const int kSize = 10001;

int main() 
{
    char pos[kSize] = {'0', };
    int n, k, idx, max_sum = 0;
    char c;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> idx >> c;
        pos[idx] = c;
    }

    for (int i = 0; i < kSize - k; i++)
    {
        int sum = 0;
        for (int j = 0; j <= k; j++)
        {
            if (pos[i+j] == 'G')
                sum++;
            else if (pos[i+j] == 'H')
                sum += 2;
        }
        max_sum = max(max_sum,sum);
    }

    cout << max_sum << endl;

    return 0;
}