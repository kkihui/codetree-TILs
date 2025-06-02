#include <iostream>
using namespace std;

void PrintNtime(int num)
{
    if (num == 0)
        return;
    cout << "HelloWorld" << endl;
    PrintNtime(num-1);
}

int main() {
    int n;
    cin >> n;

    PrintNtime(n);
    return 0;
}