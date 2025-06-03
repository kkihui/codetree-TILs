#include <iostream>

using namespace std;

int N;

int GaussSum(int num)
{
    if (num == 0)
        return 0;
    
    return GaussSum(num-1) + num;
}

int main() {
    cin >> N;

    cout << GaussSum(N);

    return 0;
}