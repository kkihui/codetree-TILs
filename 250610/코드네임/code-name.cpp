#include <iostream>

#define MAX_N 5

using namespace std;

char codename[MAX_N];
int score[MAX_N];

class Agent
{
    public:
        char name;
        int score;
        Agent (char n=' ', int s = 0)
        {
            this -> name = n;
            this -> score = s;
        }
};

void GetAnswer(Agent* a,size_t size)
{
    int ans = 101, idx = 0;

    for (int i=0; i<size; i++)
    {
        if (ans > a[i].score)
        {
            ans = a[i].score;
            idx = i;
        }
    }

    cout << a[idx].name << " " << a[idx].score << endl;
}

int main() {
    Agent Agents[5];
    for (int i = 0; i < MAX_N; i++) {
        cin >> codename[i] >> score[i];
        Agents[i].name = codename[i];
        Agents[i].score = score[i];
    }

    GetAnswer(Agents,MAX_N);

    return 0;
}
