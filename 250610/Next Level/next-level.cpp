#include <iostream>
#include <string>

using namespace std;

string user2_id;
int user2_level;

class UserInfo
{
    public:
        string id;
        int level;
        UserInfo (string i = "codetree", int l = 10)
        {
            this -> id = i;
            this -> level = l;
        }
};

int main() {
    cin >> user2_id >> user2_level;

    UserInfo user1 = UserInfo();

    cout << "user " << user1.id << " lv " << user1.level << endl;

    user1.id = user2_id;
    user1.level = user2_level;
    
    cout << "user " << user1.id << " lv " << user1.level << endl;


    return 0;
}