#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];

int line[2001]={};

void FillLine()
{
    int pos = 1000;

    for (int i = 0; i < n; i++)
    {
        if (dir[i] == 'L')
            pos -= x[i];
        for (int j = 0; j < x[i]; j++)
        {
            pos++;
            line[pos]++;
        }
        if (dir[i] == 'L')
            pos -= x[i];
    }
}

int GetAns()
{
    int ans = 0;
    for (int i = 0; i < 2001; i++)
    {
        if (line[i] > 1)
            ans++;
    }
    return ans;
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> x[i] >> dir[i];
    
    FillLine();
    
    cout << GetAns();

    return 0;
}