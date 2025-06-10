#include <iostream>
#include <string>

using namespace std;

string unlock_code;
char wire_color;
int seconds;

class Bombinfo
{
    public:
        string code;
        char color;
        int second;

        Bombinfo(string c, char rgb, int s)
        {
            this -> code = c;
            this -> color = rgb;
            this -> second = s;
        }
};

int main() {
    cin >> unlock_code >> wire_color >> seconds;

    Bombinfo b1 = Bombinfo(unlock_code,wire_color,seconds);

    cout << "code : " << b1.code << endl;
    cout << "color : " << b1.color << endl;
    cout << "second : " << b1.second << endl;

    return 0;
}