#include <iostream>
using namespace std;

int line[101] = {};

void FillLine(int s, int e)
{
    for (int i=s; i<=e; i++)
        line[i]++;
}

int Findmax()
{
    int ans = 0;
    for (int i=1; i<=100; i++)
        ans = max(ans,line[i]);
    return ans;
}

int main()
{
    int n, x1, x2;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        cin >> x1 >> x2;
        FillLine(x1,x2);
    }

    cout << Findmax();

    return 0;
}