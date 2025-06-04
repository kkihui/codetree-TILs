#include <iostream>

using namespace std;

int N;

int OddEvenSum(int num)
{
    if (num == 1)
        return 1;
    else if (num == 2)
        return 2;
    return OddEvenSum(num-2) + num;
}

int main() {
    cin >> N;

    cout << OddEvenSum(N);

    return 0;
}