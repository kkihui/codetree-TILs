#include <iostream>
#include <algorithm>

#define max_N 1000

using namespace std;

class Sequence
{
    public:
        int value, index;

        Sequence (int v = 0, int idx = 0)
        {
            this -> value = v;
            this -> index = idx;
        }
};

bool cmp(const Sequence &a, const Sequence &b)
{
    if (a.value == b.value)
        return a.index < b.index;
    return a.value < b.value;
}

Sequence a[max_N];
int ans[max_N];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].value;
        a[i].index = i;
    }
    
    sort(a,a+n,cmp);

    for (int i = 0; i < n; i++)
        ans[a[i].index] = i+1;
    
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";

    return 0;
}