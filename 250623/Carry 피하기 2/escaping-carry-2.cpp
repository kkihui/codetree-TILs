#include <iostream>

using namespace std;

int n;
int arr[20];

int CalculateDigit(int num)
{
    int digit = 1;
    while (num > 10)
    {
        num /= 10;
        digit++;
    }
    return digit;
}

bool IsNotCarry(int n1, int n2, int n3)
{
    int max_digit = CalculateDigit(max(max(n1,n2),n3));
    for (int i = 0; i < max_digit; i++)
    {
        if ((n1%10 + n2%10 + n3%10) >= 10)
            return false;
        n1 /= 10;
        n2 /= 10;
        n3 /= 10;
    }
    
    return true;
}

int main() 
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (IsNotCarry(arr[i],arr[j],arr[k]))
                    ans = max(ans, arr[i]+arr[j]+arr[k]);
            }
        }
    }

    cout << ans;

    return 0;
}