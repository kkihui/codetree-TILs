#include <iostream>

using namespace std;

int n;
int l[10], r[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        cin >> l[i] >> r[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                int line[101] = {0, };

                for (int idx = 0; idx < n; idx++)
                {
                    if (idx != i && idx != j && idx != k)
                    {
                        for (int fill = l[idx]; fill <= r[idx]; fill++)
                        {
                            line[fill]++;
                        }
                    }
                }

                bool can = 1;
                for (int pos = 0; pos <= 100; pos++)
                {
                    if (line[pos] > 1)
                    {
                        can = 0;
                        break;
                    }
                }

                if (can)
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}