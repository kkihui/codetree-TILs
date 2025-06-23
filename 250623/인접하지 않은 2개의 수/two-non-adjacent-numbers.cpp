#include <iostream>
using namespace std;

const int kArrMax = 100;

int main() 
{
    int n, arr[kArrMax] = {0, }, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i ++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = i+2; j < n; j++)
            ans = max(arr[i]+arr[j], ans);
    }

    cout << ans;

    return 0;
}