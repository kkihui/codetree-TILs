#include <iostream>

using namespace std;

int n, m;
int A[100];

bool IsEven(int num)
{
    if (num % 2 == 1)
        return false;
    else
        return true;
}

int ModifyM(int num)
{
    if (IsEven(num))
        return num/2;
    else
        return num-1;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int ans = A[m-1];
    while (m != 1)
    {
        m = ModifyM(m);
        ans += A[m-1];
    }

    cout << ans;
    
    return 0;
}