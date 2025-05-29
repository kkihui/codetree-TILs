#include <iostream>

using namespace std;

int a, b;

bool IsPrime(int num)
{
    for (int i=2; i<num; i++)
    {
        if (num%i == 0)
            return false;
    }
    return true;
}

int main() {
    cin >> a >> b;
    int total = 0;

    for (int i=a; i<=b; i++)
    {
        if (IsPrime(i))
            total += i;
    }
    
    cout << total;
    
    return 0;
}