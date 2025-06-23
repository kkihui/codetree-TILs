#include <iostream>
#include <cstdlib>

using namespace std;

int N, S;
int arr[100];

int main() 
{
    cin >> N >> S;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    int ans = -20000;
    
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            int arr_sum = 0;
            for (int k = 0; k < N; k++)
            {
                if (k != i && k != j)
                    arr_sum += arr[k];
            }

            if (abs(S-ans) > abs(S-arr_sum))
                ans = arr_sum;
        }
    }

    cout << abs(ans - S);

    return 0;
}