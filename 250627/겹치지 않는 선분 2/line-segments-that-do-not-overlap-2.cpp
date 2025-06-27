#include <iostream>

using namespace std;

int N;
int x1[100], x2[100];

int main() 
{
    cin >> N;

    for (int i = 0; i < N; i++) 
    {
        cin >> x1[i] >> x2[i];
    }

    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        bool is_isolated = true;
        for (int j = 0; j < N; j++)
        {
            if (j == i)
            {
                continue;
            }
            else
            {
                if (x1[i] < x1[j] && x2[i] > x2[j])
                    is_isolated = false;
                else if (x1[i] > x1[j] && x2[i] < x2[j])
                    is_isolated = false;
            }
        }
        if (is_isolated)
        {
            cnt++;
        }
    }

    cout << cnt;
    
    return 0;
}