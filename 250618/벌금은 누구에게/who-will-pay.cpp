#include <iostream>

using namespace std;

int N, M, K;
int student[10000];
int penaltyTime[101];

int getAns()
{
    for (int i = 0; i < M; i++)
    {
        penaltyTime[student[i]]++;
        if (penaltyTime[student[i]] >= K)
            return student[i];
    }
    return -1;
}

int main() {
    cin >> N >> M >> K;

    for (int i = 0; i < M; i++)
        cin >> student[i];

    cout << getAns();



    return 0;
}