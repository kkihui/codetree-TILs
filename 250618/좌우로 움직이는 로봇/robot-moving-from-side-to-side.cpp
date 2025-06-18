#include <iostream>

#define MAX_TIME 1000001

using namespace std;

int n, m;
int t[50000];
char d[50000];
int t_b[50000];
char d_b[50000];
int aPosRec[MAX_TIME], bPosRec[MAX_TIME];
int timeMax;

void recordPos()
{
    // Record A position
    int time = 0, pos = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < t[i]; j++)
        {
            time++;
            if (d[i] == 'R')
                pos++;
            else
                pos--;
            aPosRec[time] = pos;
        }
    }
    int aMaxTime = time;

    // Record B position
    time = 0, pos = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < t_b[i]; j++)
        {
            time++;
            if (d_b[i] == 'R')
                pos++;
            else
                pos--;
            bPosRec[time] = pos;
        }
    }
    int bMaxTime = time;

    // Change array according to Max time 
    if (aMaxTime > bMaxTime)
    {
        timeMax = aMaxTime;
        for (int i = bMaxTime+1; i <= aMaxTime; i++)
            bPosRec[i] = bPosRec[bMaxTime];
    }
    else if (bMaxTime > aMaxTime)
    {
        timeMax = bMaxTime;
        for (int i = aMaxTime+1; i <= bMaxTime; i++)
            aPosRec[i] = aPosRec[aMaxTime];
    }

}

int getAns()
{
    int ans = 0;
    for (int i = 1; i < timeMax; i++)
    {
        if (aPosRec[i] != bPosRec[i] && aPosRec[i+1] == bPosRec[i+1])
            ans++;
    }
    return ans;
}

int main() 
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> t[i] >> d[i];

    for (int i = 0; i < m; i++)
        cin >> t_b[i] >> d_b[i];
    
    recordPos();

    cout << getAns();

    return 0;
}