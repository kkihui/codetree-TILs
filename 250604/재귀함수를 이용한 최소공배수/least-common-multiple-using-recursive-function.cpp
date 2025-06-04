#include <iostream>

using namespace std;

int n;
int arr[10];

int GCD(int a, int b)
{
    if (a%b==0)
        return b;
    return GCD(b,a%b);
}

int LCM(int a, int b)
{
    return a*b/GCD(a,b);
}

int GetAns(int num)
{
    int ans = arr[0];
    for (int i=1; i<num ; i++)
        ans = LCM(ans,arr[i]);
    return ans;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << GetAns(n);

    return 0;
}