#include <iostream>
using namespace std;

int GetAns(int n)
{
    if (n==1)
        return 0;
    if (n%2==0)
        return GetAns(n/2)+1;
    else
        return GetAns(n*3+1)+1;
}

int main() {
    int n;
    cin >> n;

    cout << GetAns(n);
    return 0;
}