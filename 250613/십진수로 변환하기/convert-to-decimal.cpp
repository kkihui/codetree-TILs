#include <iostream>
using namespace std;

int main() {
    int binary;
    cin >> binary;

    int ans = 0;
    int square2 = 1;
    int num;
    
    while (binary > 0)
    {
        num = binary%10;
        binary /= 10;
        ans += square2*num;
        square2 *= 2; 
    }

    cout << ans;

    return 0;
}