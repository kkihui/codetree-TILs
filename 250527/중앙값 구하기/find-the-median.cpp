#include <iostream>
using namespace std;

int main() {
    int num[3];
    int max_num = -200, min_num = 200;

    for (int i=0; i<3 ; i++)
    {
        cin >> num[i];
        max_num = max(max_num,num[i]);
        min_num = min(min_num,num[i]);
    }

    for (int i=0; i<3 ; i++)
    {
        if (num[i] != max_num && num[i] != min_num)
            cout << num[i];
    }

    return 0;
}