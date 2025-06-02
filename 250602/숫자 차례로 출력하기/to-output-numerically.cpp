#include <iostream>

using namespace std;

int N;

void PrintAns1(int n)
{
    if (n==0)
        return;
    
    PrintAns1(n-1);
    cout << n << ' ';
}

void PrintAns2(int n)
{
    if (n==0)
        return;
    
    cout << n << ' ';
    PrintAns2(n-1);
}

int main() {
    cin >> N;

    PrintAns1(N);
    cout << endl;
    PrintAns2(N);

    return 0;
}