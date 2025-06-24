#include <iostream>

using namespace std;

int n;
double arr[100];

int main() 
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int avg_cnt = n;

    // 구간 크기 2 ~ n까지 해보기
    for (int size = 2; size <= n; size++)
    {
        for (int i = 0; i <= n - size; i++)
        {
            double avg = 0;
            for (int j = 0; j < size; j++)
                avg += arr[i+j];
            avg /= size;

            for (int idx = i; idx < i + size; idx++)
            {
                if (avg == arr[idx])
                {
                    avg_cnt++;
                    break;
                }
            }
        }
    }

    cout << avg_cnt << endl;

    return 0;
}