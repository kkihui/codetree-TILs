#include <iostream>
using namespace std;

int FindMin(int a, int b, int c)
{
    return min(min(a,b),min(b,c));
}

int main() {
    int A,B,C;
    cin >> A >> B >> C;

    int ans = FindMin(A,B,C);
    cout << ans;
    
    return 0;
}