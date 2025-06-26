#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int abilities[6];

int CalTotal()
{
    int sum = 0;
    for (int i = 0; i < 6; i++)
        sum += abilities[i];
    return sum;
}

int main() 
{
    for (int i = 0; i < 6; i++)
        cin >> abilities[i];

    int total = CalTotal();
    int ans = total;

    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            for (int k = j+1; k < 6; k++)
            {
                int team_1 = abilities[i] + abilities[j] + abilities[k];
                int team_2 = total - team_1;
                ans = min(ans,abs(team_2 - team_1));
            }
        }
    }

    cout << ans;
    
    return 0;
}