#include <iostream>
using namespace std;

int main() {
    int A[2], B[2];
    cin >> A[0] >> A[1];
    cin >> B[0] >> B[1];

    if (A[0]>B[0] && A[1]>B[1])
        cout << 1;
    else
        cout << 0;

    return 0;
}