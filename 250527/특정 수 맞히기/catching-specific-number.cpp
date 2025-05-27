#include <iostream>
using namespace std;

int main() {
    int temp;

    while (true)
    {
        cin >> temp;
        if(temp > 25)
            cout << "Lower" << endl;
        else if (temp < 25)
            cout << "Higher" << endl;
        else
        {
            cout << "Good" << endl;
            break;
        }
    }
    return 0;
}