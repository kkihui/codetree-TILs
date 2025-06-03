#include <iostream>

using namespace std;

int N;

int Until1(int num)
{
    if (num == 1)
        return 0;
    
    if (num%2 == 0)
        return Until1(num/2)+1;
    else
        return Until1(num/3)+1;
}

int main() {
    cin >> N;

    cout << Until1(N);

    return 0;
}