#include <iostream>
#include <algorithm>

using namespace std;

int N, K;
int num[100];

int main() 
{
    cin >> N >> K;

    for (int i = 0; i < N; i++) 
    {
        cin >> num[i];
    }

    int ans = -1;
    for (int i = 0; i < N; i++)
    {
        int end_idx = min(i+K+1,N);
        for (int j = i+1; j < end_idx; j++)
        {
            if (num[i] == num[j])
            {
                ans = max(ans,num[i]);
            }
        }
    }

    cout << ans;

    return 0;
}