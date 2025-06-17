#include <iostream>

using namespace std;

int N;
int arr[1000];

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    int ans = 0, cnt = 1;

    for (int i = 1; i < N; i++)
    {
        if (arr[i] > arr[i-1])
            cnt++;
        else
            cnt = 1;
        
        ans = max(ans,cnt);
    }

    cout << ans;

    return 0;
}