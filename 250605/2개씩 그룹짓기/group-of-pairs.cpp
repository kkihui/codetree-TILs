#include <iostream>
#include <algorithm>

using namespace std;

int N;
int nums[2000];
int ans = 0;

int main()
{
    cin >> N;

    for (int i = 0; i < 2 * N; i++)
    {
        cin >> nums[i];
    }

    sort(nums,nums+2*N);

    for (int i = 0; i < N; i++)
        ans = max(ans,nums[i]+nums[2*N-1-i]);
    
    cout << ans << endl;


    return 0;
}
