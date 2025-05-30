#include <iostream>

using namespace std;

int a, b;

int pow(int base, int index)
{
    int value = 1;
    for (int i=0; i<index; i++)
        value *= base;
    return value;
}

int main() {
    cin >> a >> b;

    cout << pow(a,b);
    
    return 0;
}