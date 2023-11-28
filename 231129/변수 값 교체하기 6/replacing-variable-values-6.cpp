#include <iostream>

int main() {
    int a=2, b=5, temp;
    temp = a;
    a = b;
    b = temp;
    std::cout << a << std::endl << b;
    return 0;
}