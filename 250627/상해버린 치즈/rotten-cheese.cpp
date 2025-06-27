#include <iostream>

using namespace std;

int N, M, D, S;
int p[1000], m[1000], t[1000];
int sick_p[50], sick_t[50];

int main() 
{
    cin >> N >> M >> D >> S;

    for (int i = 0; i < D; i++) 
    {
        cin >> p[i] >> m[i] >> t[i];
    }

    for (int i = 0; i < S; i++) 
    {
        cin >> sick_p[i] >> sick_t[i];
    }

    int max_pill = 0;
    
    // 치즈 별로 다 살펴보기.
    for (int rotten_idx = 1; rotten_idx <= M; rotten_idx++)
    {
        bool cant = false;

        // 아픈 사람 별로 아프기 전에 그 치즈를 먹었는지 확인.
        for (int i = 0; i < S; i++)
        {
            if (cant)
            {
                break;
            }

            cant = true;
            // 아프기 전에 그 치즈를 먹었다면 가능성 있음.
            for (int j = 0; j < D; j++)
            {
                if (m[j] == rotten_idx && p[j] == sick_p[i] && t[j] < sick_t[i])
                {
                    cant = false;
                    break;
                }
            }
        }
        
        // 현재 치즈가 상한 치즈일 수 있으면 먹은 사람 수 계산
        if (!cant)
        {
            bool rotten_chese_eater[51] = {0, };
            for (int i = 0; i < D; i++)
            {
                if (m[i] == rotten_idx)
                {
                    rotten_chese_eater[p[i]] = true;
                }
            }

            int cnt = 0;
            for (int i = 1; i <= N; i++)
            {
                if (rotten_chese_eater[i])
                {
                    cnt++;
                }
            }
            max_pill = max(max_pill,cnt);
        }
    }

    cout << max_pill;

    return 0;
}