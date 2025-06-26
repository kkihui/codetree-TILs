#include <iostream>

using namespace std;

int N;
int a1, b1, c1;
int a2, b2, c2;

bool InDist(int num, int ref_num)
{
    if (abs(num - ref_num) <= 2 || abs(num + N - ref_num) <= 2 || abs(num - N - ref_num) <= 2)
        return true;
    else
        return false;
}

int main() 
{
    cin >> N;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            for (int k = 1; k <= N; k++)
            {
                if (InDist(i,a1) && InDist(j,b1) && InDist(k,c1))
                    cnt++;
                else if (InDist(i,a2) && InDist(j,b2) && InDist(k,c2))
                    cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}