#include <iostream>

using namespace std;

int N;

void PrintNumRect(int n)
{
    int cnt = 1;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << cnt << ' ';
            if (cnt < 9)
                cnt++;
            else
                cnt = 1;
        }
        cout << endl;
    }
}

int main() {
    cin >> N;

    PrintNumRect(N);

    return 0;
}