#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    string strs[100];
    for (int i=0; i<n; i++)
        cin >> strs[i];

    sort(strs,strs+n);
    for (int i=0; i<n; i++)
        cout << strs[i] << endl;

    return 0;
}