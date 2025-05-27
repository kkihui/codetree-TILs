#include <iostream>
using namespace std;

int main() {
    int cnt3 = 0, cnt5 = 0;
    int temp;

    for(int i=0; i<10; i++)
    {
        cin >> temp;
        if (temp%3 == 0)
            cnt3++;
        if (temp%5 == 0)
            cnt5++;
    }

    cout << cnt3 << ' ' << cnt5;

    return 0;
}