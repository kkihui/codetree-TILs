#include <iostream>

#define MAX_TIME 1000001

using namespace std;

int N, M;
int v[1000], t[1000];
int v2[1000], t2[1000];
int aPosRec[MAX_TIME], bPosRec[MAX_TIME];
int totalTime;

void recordPos()
{
    int time = 0, pos = 0;
    // A 기록
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < t[i]; j++)
        {
            time++;
            pos += v[i];
            aPosRec[time] = pos;
        }
    }
    totalTime = time;

    time = 0, pos = 0;
    // B 기록
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < t2[i]; j++)
        {
            time++;
            pos += v2[i];
            bPosRec[time] = pos;
        }
    }
}

int getAns()
{
    int state = 0, ans = 0;
    for (int i = 1; i <= totalTime; i++)
    {
        if (aPosRec[i] > bPosRec[i] && state != 1)
        {
            state = 1;
            ans++;
        }
        else if (aPosRec[i] < bPosRec[i] && state != 2)
        {
            state = 2;
            ans++;
        }
        else if (aPosRec[i] == bPosRec[i] && state != 3)
        {
            state = 3;
            ans++;
        }
    }
    return ans;
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++)
        cin >> v[i] >> t[i];

    for (int i = 0; i < M; i++)
        cin >> v2[i] >> t2[i];
    
    recordPos();

    cout << getAns();

    return 0;
}