#include <iostream>

using namespace std;

int X, Y;

bool IsInterest(int num)
{
    int num_arr[10] = {0, };

    while (num > 0)
    {
        int digit = num % 10;
        num_arr[digit]++;
        num /= 10;
    }

    int num_many = -1, num_one = -1;
    for (int i = 0; i <= 9; i++)
    {
        if (num_arr[i] != 0)
        {
            if (num_arr[i] > 1 && num_many == -1)
            {
                num_many = num_arr[i];
            }
            else if (num_arr[i] == 1 && num_one == -1)
            {
                num_one = num_arr[i];
            }
            else
            {
                return false;
            }
        }
    }

    if (num_many != -1 && num_one != -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() 
{
    cin >> X >> Y;

    int cnt = 0;
    for (int i = X; i <= Y; i++)
    {
        if (IsInterest(i))
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}