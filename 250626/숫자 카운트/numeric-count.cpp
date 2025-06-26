#include <iostream>
#include <tuple>

using namespace std;

int n;
int a[10], b[10], c[10];

tuple<int,int> DoNumBaseBall(int n1, int n2)
{
    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < 3; i++)
    {
        int digit1 = n1 % 10;
        int temp = n2;
        
        for (int j = 0; j < 3; j++)
        {
            int digit2 = n2 % 10;

            if (digit1 == digit2)
            {
                if (i==j)
                    cnt1++;
                else
                    cnt2++;
            }
            n2 /= 10;
        }
        n2 = temp;
        n1 /= 10;
    }

    return tuple<int,int>(cnt1,cnt2);
}

int main() 
{
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i];

    int cnt = 0;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            for (int k = 1; k <= 9; k++)
            {
                bool is_can = true;
                for (int idx = 0; idx < n; idx++)
                {
                    int cnt1 = 0;
                    int cnt2 = 0;

                    tuple<int,int> ball_cnt = DoNumBaseBall((i*100)+(j*10)+k, a[idx]);

                    if (get<0>(ball_cnt) != b[idx] || get<1>(ball_cnt) != c[idx])
                    {
                        is_can = false;
                        break;
                    }
                }
                if (is_can)
                    cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}