#include <iostream>
using namespace std;

int main() {
    for (int i=0; i<4; i++)
    {
        int total = 0;
        for (int j=0; j<4; j++)
        {
            int temp;
            cin >> temp;
            total += temp;
        }
        cout << total << endl;
    }
    return 0;
}