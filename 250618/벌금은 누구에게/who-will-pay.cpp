#include <iostream>

using namespace std;

int N, M, K;
int student[10000];
int penaltyTime[101];

int main() {
    cin >> N >> M >> K;

    for (int i = 0; i < M; i++)
        cin >> student[i];

    for (int i = 0; i < M; i++)
    {
        penaltyTime[student[i]]++;
        if (penaltyTime[student[i]] >= K)
        {
            cout << student[i];
            break;
        }
    }

    return 0;
}