#include <iostream>
#include <string>

using namespace std;

string secret_code;
char meeting_point;
int t;

class Spy
{
    public:
        string code;
        char point;
        int ti;
        
        Spy (string c, char p, int t)
        {
            this -> code = c;
            this -> point = p;
            this -> ti = t;
        }
};

int main() {
    cin >> secret_code >> meeting_point >> t;
    Spy spy1 = Spy(secret_code,meeting_point,t);

    cout << "secret code : " << spy1.code << endl;
    cout << "meeting point : " << spy1.point << endl;
    cout << "time : " << spy1.ti << endl;
    

    return 0;
}