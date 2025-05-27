#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=1; i <= 100; i++)
    {
        if (i*(i+1)/2 >= n)
        {
            cout << i;
            break;
        } 
    }

    return 0;
}