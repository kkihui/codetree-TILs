#include <iostream>

#define MAX_TIME 1000001

using namespace std;

int n, m, v, t;
int hour, hourMax;
double pos, aPosRec[MAX_TIME], bPosRec[MAX_TIME];

void recordPos(int v, int t, char who)
{
    double dist = (double) v/t;
    for (int i = 0; i < t; i++)
    {
        hour++;
        pos += dist;
        if(who == 'A')
            aPosRec[hour] = pos;
        else
            bPosRec[hour] = pos;
    }
}

int comparePos()
{
    char frontRunner = '0';
    int ans = 0;

    for (int i=0; i < hourMax; i++)
    {
        if (aPosRec[i] > bPosRec[i] && frontRunner != 'A')
        {   
            ans++;
            frontRunner = 'A';
        }
        else if (aPosRec[i] < bPosRec[i] && frontRunner != 'B')
        {   
            ans++;
            frontRunner = 'B';
        }
    }
    return ans;
}

int main()
{
    cin >> n >> m;

    // Record A
    pos = 0;
    hour = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v >> t;
        recordPos(v,t,'A');
    }
    hourMax = max(hour,hourMax);
    
    // Record B
    pos = 0;
    hour = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> v >> t;
        recordPos(v,t,'B');
    }
    hourMax = max(hour,hourMax);
    
    // Get Answer
    cout << comparePos();

    return 0;
}