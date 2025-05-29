#include <iostream>
using namespace std;

int abs(int num)
    {
        if (num > 0)
            return num;
        else
            return -num; 
    }

int main() {
    char a,b;
    cin >> a >> b;
    cout << (int)a+b << " " << (int) abs(a-b);
    return 0;
}