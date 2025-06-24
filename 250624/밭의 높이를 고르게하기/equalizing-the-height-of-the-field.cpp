#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <climits>

using namespace std;

int N, H, T;
int arr[100];
int height_diff_arr[100];

int main() 
{
    cin >> N >> H >> T;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    for (int i = 0; i < N; i++)
        height_diff_arr[i] = abs(arr[i] - H);
    
    int min_sum = INT_MAX;
    for (int i = 0; i <= N-T; i++)
    {
        int sum = 0;
        for (int j = 0; j < T; j++)
            sum += height_diff_arr[i+j];
        min_sum = min(min_sum,sum);
    }

    cout << min_sum << endl;

    return 0;
}