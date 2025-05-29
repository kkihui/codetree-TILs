#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int length = s.length();
    cout << s.substr(0,1) + s.substr(2,length-4) + s.substr(length-1,1); 


    return 0;
}