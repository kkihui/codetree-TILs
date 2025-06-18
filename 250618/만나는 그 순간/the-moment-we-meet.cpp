#include <iostream>

#define MAX_TIME 1000001

using namespace std;

int n, m;
char d[1000];
int t[1000];
char d2[1000];
int t2[1000];

int aPosRec[MAX_TIME] = {0, };
int bPosRec[MAX_TIME] = {0, };


void recordPos()
{
    int pos = 0, time = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < t[i]; j++)
        {
            time++;
            if (d[i] == 'L')
                pos--;
            else
                pos++;
            aPosRec[time] = pos;
        }
    }

    pos = 0, time = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < t2[i]; j++)
        {
            time++;
            if(d2[i] == 'L')
                pos--;
            else
                pos++;
            bPosRec[time] = pos;
        }
    }
}

int comparePos()
{
    for (int i = 1; i < MAX_TIME; i++)
    {
        if (aPosRec[i] == bPosRec[i])
            return i;
    }
    return -1;
}

int main() 
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> d[i] >> t[i];

    for (int i = 0; i < m; i++) cin >> d2[i] >> t2[i];

    recordPos();

    cout << comparePos();

    return 0;
}