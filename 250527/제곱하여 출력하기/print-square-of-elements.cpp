#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int list[n];
    for (int i =0 ; i < n ; i ++)
        cin >> list[i];
    
    for (int i =0 ; i < n ; i ++)
        cout << list[i]*list[i] << ' ';

    return 0;
}