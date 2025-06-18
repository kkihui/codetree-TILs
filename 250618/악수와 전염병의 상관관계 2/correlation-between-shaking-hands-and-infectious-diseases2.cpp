#include <iostream>
#include <algorithm>

using namespace std;

class DeveloperInfo
{
    public:
        bool isInspection;
        int remaining;

        DeveloperInfo(bool i = false, int r = 0)
        {
            this -> isInspection = i;
            this -> remaining = r;
        }
};

class InfectionInfo
{
    public:
        int time;
        int x;
        int y;

        InfectionInfo(int a = 0, int x = 0, int y = 0)
        {
            this -> time = a;
            this -> x = x;
            this -> y = y;
        }
};

bool cmp (const InfectionInfo &a, const InfectionInfo &b)
{
    return a.time < b.time;
}

int N,K,P,T;
DeveloperInfo developers[101];
InfectionInfo infections[250];

void infect (int x, int y)
{
    if (developers[x].isInspection && developers[y].isInspection)
    {
        developers[x].remaining--;
        developers[y].remaining--;
    }
    else if (developers[x].isInspection && !developers[y].isInspection)
    {
        if (developers[x].remaining > 0)
        {
            developers[x].remaining--;
            developers[y].isInspection = true;
            developers[y].remaining = K;    
        }
    }
    else if (!developers[x].isInspection && developers[y].isInspection)
    {
        if (developers[y].remaining > 0)
        {
            developers[y].remaining--;
            developers[x].isInspection = true;
            developers[x].remaining = K;    
        }
    }
}

int main()
{
    cin >> N >> K >> P >> T;

    developers[P] = DeveloperInfo(true,K);

    for (int i = 0; i < T; i++)
    {
        int t,x,y;
        cin >> t >> x >> y;
        infections[i] = InfectionInfo(t,x,y);
    }

    sort(infections,infections+T,cmp);

    for (int i = 0; i < T; i++)
        infect(infections[i].x,infections[i].y);

    for (int i = 1; i <= N; i++)
        cout << developers[i].isInspection;

    return 0;
}