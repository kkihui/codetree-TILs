#include <iostream>
using namespace std;

int main() {
    string strs[5] = {"apple","banana","grape","blueberry","orange"};
    char c;
    cin >> c;

    int cnt = 0;

    for (int i=0; i<5; i++)
    {
        string str = strs[i];
        if (str[2] == c || str[3] == c)
        {
            cout << str << endl;
            cnt += 1;
        }
    }

    cout << cnt;
    
    return 0;
}