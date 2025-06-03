#include <iostream>

using namespace std;

int N;

int Fibonacci(int num)
{
    if (num == 1)
        return 1;
    if (num == 2)
        return 1;
    
    return Fibonacci(num-1) + Fibonacci(num-2);
}

int main() {
    cin >> N;

    cout << Fibonacci(N);

    return 0;
}