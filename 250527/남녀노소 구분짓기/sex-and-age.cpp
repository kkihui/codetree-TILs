#include <iostream>
using namespace std;

int main() {
    bool is_female;
    int age;
    cin >> is_female >> age;

    if (is_female)
    {
        if (age >= 19)
            cout << "WOMAN";
        else
            cout << "GIRL";
    }
    else
    {
        if (age >= 19)
            cout << "MAN";
        else
            cout << "BOY";
    }
    return 0;
}