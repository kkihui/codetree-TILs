#include <iostream>

using namespace std;

int a;
int c;
char o;

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int division(int a,int b)
{
    return a/b;
}

int multiple(int a, int b)
{
    return a*b;
}

int main() {
    cin >> a >> o >> c;
    int ans;
    bool cant = 0;

    if (o == '+')
        ans = add(a,c);
    else if (o == '-')
        ans = sub(a,c);
    else if (o == '/')
        ans = division(a,c);
    else if (o == '*')
        ans = multiple(a,c);
    else
        cant = 1;

    if (cant)
        cout << "False";
    else
        cout << a << " " << o << " " << c << " = " << ans;

    return 0;
}