#include <iostream>
#include <algorithm>

using namespace std;

int N, B;

class GiftInfo
{
    public:
        int idx;
        int price;
        int fee;
        int total;

        GiftInfo(int i = 0, int p = 0, int f = 0, int t = 0)
        {
            idx = i;
            price = p;
            fee = f;
            total = price + fee;
        }

        void SetTotal()
        {
            total = price + fee;
        }

        void SetDiscountTotal()
        {
            total = price / 2 + fee;
        }
};

bool cmp(GiftInfo a, GiftInfo b)
{
    return a.total < b.total;
}

GiftInfo gifts[1000]; 

int main() {
    cin >> N >> B;

    for (int i = 0; i < N; i++) 
    {
        cin >> gifts[i].price >> gifts[i].fee;
        gifts[i].idx = i;
        gifts[i].SetTotal();
    }

    int ans = 0;
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++)
        {
            if (gifts[j].idx == i)
            {
                gifts[j].SetDiscountTotal();
                break;
            }
        }
        
        sort(gifts,gifts+N,cmp);

        int budget = B, cnt = 0;
        for (int j = 0; j < N; j++)
        {
            if (gifts[j].total <= budget)
            {
                cnt++;
                budget -= gifts[j].total;
            }
        }

        ans = max(ans,cnt);
        for (int j = 0; j < N; j++)
        {
            if (gifts[j].idx == i)
            {
                gifts[j].SetTotal();
                break;
            }
        }
    }

    cout << ans;
    
    return 0;
}