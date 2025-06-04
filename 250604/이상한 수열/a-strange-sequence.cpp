#include <iostream>

using namespace std;

int N;

int Sequence(int n)
{
    if (n==1)
        return 1;
    else if (n==2)
        return 2;
    
    return Sequence(n/3) + Sequence(n-1);
}

int main() {
    cin >> N;

    cout << Sequence(N);

    return 0;
}