#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int n;
int A[100];
int B[100];

string FindAns()
{
    sort(A,A+n);
    sort(B,B+n);

    for (int i=0; i<n; i++)
    {
        if (A[i] != B[i])
            return "No";
    }
    return "Yes";
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    cout << FindAns();

    return 0;
}