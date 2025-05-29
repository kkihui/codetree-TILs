#include <iostream>

using namespace std;

int n, m;

void Lcm(int a, int b)
{
    int s = min(a,b);
    int l = max(a,b);

    for (int i=1; i<=l; i++)
    {
        if (s*i % l == 0)
        {
            cout << s*i;
            break;
        }
    }
}

int main() {
    cin >> n >> m;

    Lcm(n,m);

    return 0;
}