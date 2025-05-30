#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool IsContiPartArr(int* a,int* b, int len_a, int len_b)
{
    for (int start=0; start <= len_a-len_b; start++)
    {
        bool can = 1;
        for (int idx=0; idx <len_b; idx++)
        {
            if(a[start+idx] != b[idx])
            {
                can = 0;
                break;
            }
        }
        if (can)
            return 1;
    }
    return 0;
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    if (IsContiPartArr(a,b,n1,n2))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}