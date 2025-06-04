#include <iostream>

using namespace std;

int N;

int Factorial(int num)
{
    if (num == 1)
        return 1;
    
    return Factorial(num-1) * num;
}

int main() {
    cin >> N;

    cout << Factorial(N);

    return 0;
}