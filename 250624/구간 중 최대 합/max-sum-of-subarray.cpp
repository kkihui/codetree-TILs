#include <iostream>

using namespace std;

int n, k;
int arr[100];
int ans = 0;

int main() 
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i <= n-k; i++)
    {
        int sum = 0;
        for (int j = 0; j < k; j++)
            sum += arr[i+j];
        ans = max(ans,sum);
    }

    cout << ans << endl;

    return 0;
}