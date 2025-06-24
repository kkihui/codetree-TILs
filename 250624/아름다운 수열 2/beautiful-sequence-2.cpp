#include <iostream>

using namespace std;

int N, M;
int A[100], B[100];
int num_arr[101] = {0, };

bool IsBeauty(const int *arr)
{
    for (int idx = 0; idx < 101; idx++)
    {
        if (arr[idx] != num_arr[idx])
            return false;
    }
    return true;
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < M; i++) cin >> B[i];

    for (int i = 0; i < M; i++)
        num_arr[B[i]]++;

    int ans = 0;
    for (int i = 0; i <= N-M; i++)
    {
        int ans_arr[101] = {0, };
        for (int j = 0; j < M; j++)
            ans_arr[A[i+j]]++;
        
        if (IsBeauty(ans_arr))
            ans++;
    }

    cout << ans;
    
    return 0;
}