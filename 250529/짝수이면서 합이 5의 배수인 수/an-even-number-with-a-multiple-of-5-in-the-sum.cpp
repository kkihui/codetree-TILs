#include <iostream>

using namespace std;

int n;

int IsMagicNum(int num)
{
    int sum = num/10 + num%10;
    return num % 2 == 0 && sum % 5 == 0;
}

int main() {
    cin >> n;

    if (IsMagicNum(n))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}