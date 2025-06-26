#include <iostream>
#include <algorithm>

using namespace std;

int arr[5];

int CalTotal()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum += arr[i];
    return sum;
}

int CalDiff(int n1, int n2, int n3)
{
    int list[3] = {n1,n2,n3};
    sort(list,list+3);
    return list[2] - list[0];
}

int main() 
{
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    
    int total = CalTotal();
    int ans = total;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if (k != i && k != j)
                {
                    int team_1 = arr[i]+arr[j];
                    int team_2 = arr[k];
                    int team_3 = total - team_1 - team_2;

                    if (team_1 != team_2 && team_2 != team_3 && team_3 != team_1)
                        ans = min(ans,CalDiff(team_1,team_2,team_3));
                }
            }
        }
    }

    if (ans == total)
        cout << -1;
    else
        cout << ans;

    return 0;
}