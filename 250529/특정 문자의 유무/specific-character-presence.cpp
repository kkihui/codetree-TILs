#include <iostream>
using namespace std;

int main() {
    bool exists_ee = false;
    bool exists_ab = false;
    string s;
    getline(cin,s);

    if (s.find("ee") != string::npos)
        exists_ee = true;
    
    if (s.find("ab") != string::npos)
        exists_ab = true;
    
    if (exists_ee)
        cout << "Yes ";
    else
        cout << "No ";
    
    if (exists_ab)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}