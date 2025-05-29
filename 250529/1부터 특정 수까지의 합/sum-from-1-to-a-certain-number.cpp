#include <iostream>

using namespace std;

int N;

int GaussSum(int num)
{
    return num*(num+1)/20;
}

int main() {
    cin >> N;

    int ans = GaussSum(N);
    cout << ans;

    return 0;
}