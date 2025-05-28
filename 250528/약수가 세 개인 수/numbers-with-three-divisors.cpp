#include <iostream>
using namespace std;

int main() {
    int s,e;
    cin >> s >> e;

    int ans_cnt = 0;
    for (int i=s; i <= e; i++)
    {
        int cnt = 0;
        for (int j=1; j<=i; j++)
        {
            if (i%j == 0)
                cnt++;
        }
        if (cnt == 3)
            ans_cnt++;
    }
    cout << ans_cnt;
    return 0;
}