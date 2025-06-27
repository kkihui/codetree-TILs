#include <iostream>

using namespace std;

int N;
int A[100], B[100];

int main() 
{
    cin >> N;

    for (int i = 0; i < N; i++) 
    {
        cin >> A[i] >> B[i];
    }

    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        bool time[1001] = {0, };
        for (int j = 0; j < N; j++)
        {
            if (j == i)
            {
                continue;
            }
            else
            {    
                for (int k = A[j]; k < B[j]; k++)
                {
                    time[k] = 1;
                }
            }
        }
        int cnt = 0;
        for (int idx = 1; idx <= 1000; idx++)
        {
            if (time[idx] == 1)
            {
                cnt++;
            }
        }
        ans = max(ans,cnt);
    }

    cout << ans;

    return 0;
}