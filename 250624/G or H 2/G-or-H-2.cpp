#include <iostream>

using namespace std;

int N;
char pos[101] = {'\0', };

bool IsCanTake(int s, int e)
{
    int cnt_G = 0, cnt_H = 0;

    for (int i = s; i <= e; i++)
    {
        if (pos[i] == 'G')
            cnt_G++;
        else if (pos[i] == 'H')
            cnt_H++;
    }

    if (pos[s] != '\0' && pos[e] != '\0')
    {
        if (cnt_G == cnt_H && cnt_G != 0)
            return true;
        else if ((cnt_G == 0 && cnt_H != 0) || (cnt_G != 0 && cnt_H == 0))
            return true;
        else
            return false;
    }
    else
        return false;
}

int main() {
    cin >> N;

    int idx; char alpha;
    for (int i = 0; i < N; i++)
    {
        cin >> idx >> alpha;
        pos[idx] = alpha;
    }

    int max_size = 0;
    for (int size = 1; size <= 100; size++)
    {  
        for (int i = 0; i <= (100-size); i++)
        {
            if (IsCanTake(i,i+size))
                max_size = max(max_size,size);
        }
    }

    cout << max_size << endl;

    return 0;
}