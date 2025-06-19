#include <iostream>
#include <climits>

using namespace std;

int n;
int A[100];
int min_dist_sum = INT_MAX;

int Min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

int Abs(int num)
{
    if (num < 0)
        return -num;
    return num;
}

void CalDistSum(int idx)
{
    int dist_sum = 0;
    for (int i = 0; i < n; i++)
        dist_sum += Abs(idx-i)*A[i];
    min_dist_sum = Min(min_dist_sum,dist_sum);
}

int main() 
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    
    for (int i = 0; i < n; i++)
        CalDistSum(i);
    
    cout << min_dist_sum;

    return 0;
}