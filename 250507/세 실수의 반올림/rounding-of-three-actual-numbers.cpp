#include <iostream>
using namespace std;

int main() {
    double a,b,c;
    
    // 입력
    cin >> a >> b >> c;
    
    // 출력
    cout << fixed;
    cout.precision(3);
    cout << a << endl << b << endl << c;

    return 0;
}