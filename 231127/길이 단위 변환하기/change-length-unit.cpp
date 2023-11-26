#include <iostream>
using namespace std;
int main() {
    float ft2cm = 30.48;
    int mi2cm = 160934;

    float ft = 9.2;
    float mi = 1.3;

    cout << fixed;
    cout.precision(1);

    cout << ft << "ft = " << ft*ft2cm << "cm" << endl;
    cout << mi << "mi = " << mi*mi2cm << "cm" << endl; 

    // 여기에 코드를 작성해주세요.
    return 0;
}