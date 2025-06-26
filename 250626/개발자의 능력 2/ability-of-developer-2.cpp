#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int ability[6];

int GetTotal()
{
    int sum = 0;
    for (int i = 0; i < 6; i++)
        sum += ability[i];
    return sum;
}

int CalDiff(int n1, int n2, int n3)
{
    int arr[3] = {n1,n2,n3};
    sort(arr,arr+3);
    return arr[2] - arr[0];
}

int main() 
{
    for (int i = 0; i < 6; i++)
        cin >> ability[i];
    
    int total = GetTotal();
    int ans = total;

    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            int team_1 = ability[i] + ability[j];

            for (int k = 0; k < 6; k++)
            {
                if (k != i && k != j)
                {
                    for (int l = k+1; l < 6; l++)
                    {
                        if (l != i && l != j)
                        {
                            int team_2 = ability[k] + ability[l];
                            int team_3 = total - team_1 - team_2;
                            ans = min(ans, CalDiff(team_1,team_2,team_3));
                        }
                    }
                }
            }
        }
    }

    cout << ans;

    return 0;
}