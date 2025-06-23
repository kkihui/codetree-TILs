#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    int len = A.length(), ans = 0;
    for (int i = 0; i < len-1; i++)
    {
        if (A[i] == '(' && A[i+1] == '(')
        {
            for (int j = i+1; j < len-1; j++)
            {
                if (A[j] == ')' && A[j+1] == ')')
                    ans++; 
            }
        }
        
    }

    cout << ans;

    return 0;
}