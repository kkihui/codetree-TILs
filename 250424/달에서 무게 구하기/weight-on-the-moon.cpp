#include <iostream>
using namespace std;

int main() {
    int mass = 13;
    double g = 0.165;
    
    cout << fixed;
    cout.precision(6);
    cout << mass << " * " << g << " = " << mass*g;
    return 0;
}