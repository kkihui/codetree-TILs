#include <iostream>

using namespace std;

void PrintNlines(int n)
{
    for (int i=0; i<n; i++)
        cout << "12345^&*()_" << endl;
}

int N;

int main() {
    cin >> N;

    PrintNlines(N);

    return 0;
}