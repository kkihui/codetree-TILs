#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    
    int total;
    total = a+b+c;

    int avg;
    avg = total/3;

    cout << total << endl << avg << endl << total-avg;
    return 0;
}