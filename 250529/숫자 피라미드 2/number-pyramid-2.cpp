#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0, criteria = 1;

    for (int i=1; i<=n*(n+1)/2; i++)
    {
        cout << i << " ";
        cnt++;
        if (cnt == criteria)
        {
            cout << endl;
            criteria++;
            cnt = 0;
        }
    } 

    return 0;
}