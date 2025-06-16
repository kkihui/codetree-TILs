#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];
int blocks[100] = {};

void Fillblock(int s, int e)
{
    for (int i = s-1; i < e; i++)
        blocks[i]++;
}

int Maxblock(int k)
{
    int ans = 0;
    for (int i = 0; i < k; i++)
        ans = max(ans,blocks[i]);
    return ans;
}

int main() {
    cin >> N >> K;

    for (int i = 0; i < K; i++)
        cin >> A[i] >> B[i];

    for (int i = 0; i < K; i++)
        Fillblock(A[i],B[i]);

    cout << Maxblock(K);
    
    return 0;
}