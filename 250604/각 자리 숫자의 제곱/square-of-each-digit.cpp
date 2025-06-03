#include <iostream>

using namespace std;

int N;

int SqaureSum(int num)
{
    if (num < 10)
        return num*num;
    
    return SqaureSum(num/10) + (num%10)*(num%10);
}

int main() {
    cin >> N;

    cout << SqaureSum(N);

    return 0;
}