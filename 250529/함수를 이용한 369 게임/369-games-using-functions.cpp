#include <iostream>
#include <string>

using namespace std;

bool Have3(int num)
{
    string s = to_string(num);
    int length = s.length();
    
    for (int i=0; i < length; i++)
    {
        if ((int)s[i] % 3 == 0 && (int)s[i] != 0)
            return true; 
    }

    return false;
}

int Find369(int a, int b)
{
    int cnt = 0;
    for (int i = a; i <= b; i++)
    {
        if(Have3(i) || i%3 == 0)
            cnt++;
    }

    return cnt;
}

int main() {
    int A,B;
    cin >> A >> B;

    int ans = Find369(A,B);
    cout << ans;

    return 0;
}