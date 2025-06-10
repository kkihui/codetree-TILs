#include <iostream>
#include <string>

using namespace std;

string product_name;
int product_code;

class Product
{
    public:
        string name;
        int code;
        Product (string n = "codetree", int c = 50)
        {
            this -> name = n;
            this -> code = c;
        }
};

int main() {
    cin >> product_name >> product_code;

    Product p1 = Product();

    cout << "product " << p1.code << " is " << p1.name << endl;

    p1.code = product_code;
    p1.name = product_name;

    cout << "product " << p1.code << " is " << p1.name << endl;

    return 0;
}