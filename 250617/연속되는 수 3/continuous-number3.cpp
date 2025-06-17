#include <iostream>

using namespace std;

int N;
int arr[1000];

bool isSame(bool sign, int n)
{
    // 양수 && 양수 || 음수 && 음수
    if ((sign && n > 0) || (!sign && n < 0))
        return true;
    else
        return false;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    bool positive;
    int cnt = 0, ans = 0;

    for (int i = 0; i < N; i++)
    {
        if (i == 0 || isSame(positive,arr[i]))
            cnt++;
        else
            cnt = 1;
        
        if (arr[i] > 0)
            positive = true;
        else
            positive = false;
        
        ans = max(ans,cnt);
    }

    cout << ans;

    return 0;
}