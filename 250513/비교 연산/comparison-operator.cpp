#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0;
    if (a>=b)
    {
        c1=1;
    }
    if (a>b)
    {
        c2=1;
    }
    if (b>=a)
    {
        c3=1;
    }
    if (b>a)
    {
        c4=1;
    }
    if (a==b)
    {
        c5=1;
    }
    if (a!=b)
    {
        c6=1;
    }

    cout << c1 << endl << c2 << endl << c3 << endl << c4 << endl << c5 << endl << c6 << endl;  
    

    return 0;
}