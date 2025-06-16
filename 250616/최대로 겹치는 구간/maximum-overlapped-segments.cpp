#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];
int line[200] = {};

void FillLine(int s, int e)
{
    for (int i = s; i < e; i++)
        line[i+100]++; 
}

int Findmax()
{
    int ans = 0;
    for (int i=0; i<200; i++)
        ans = max(ans, line[i]);
    return ans;
}

int main() 
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> x1[i] >> x2[i];
    
    for (int i = 0; i < n; i++)
        FillLine(x1[i],x2[i]);
    
    cout << Findmax();

    return 0;
}