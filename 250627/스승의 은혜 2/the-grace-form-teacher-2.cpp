#include <iostream>
#include <algorithm>

using namespace std;

int N, B;
int P[1000];

int main() {

    cin >> N >> B;

    for (int i = 0; i < N; i++) 
    {
        cin >> P[i];
    }

    sort(P,P+N);

    int ans = 0;
    for (int discount_idx = 0; discount_idx < N; discount_idx++)
    {
        int cnt = 0;
        int budget = B;

        for (int i = 0; i < N; i++)
        {
            if (i == discount_idx)
            {
                if (P[i]/2 <= budget)
                {
                    cnt++;
                    budget -= P[i]/2;
                }
            }
            else
            {
                if (P[i] <= budget)
                {
                    cnt++;
                    budget -= P[i];
                }
            }
        }
        ans = max(ans,cnt);
    }

    cout << ans;

    return 0;
}