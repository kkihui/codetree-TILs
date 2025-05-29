#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch != 'a')
        cout << (char) ((int)ch - 1);
    else
        cout << 'z';

    return 0;
}