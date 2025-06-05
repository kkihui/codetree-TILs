#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int n,k;
string t;
string words[100];

bool IsStart(int num)
{   
    for (int idx = 0; idx < t.length(); idx++)
        {
            if (words[num][idx] != t[idx])
                return false;
        }
    return true;
}

string FindAns()
{
    string candinates[n];
    int size = 0;
    
    for (int i=0; i<n; i++)
    {
        if (IsStart(i))
        {
            candinates[size] = words[i];
            size++;
        }
    }

    sort(candinates,candinates+size);

    return candinates[k-1];
}

int main() {
    cin >> n >> k >> t;

    for (int i=0; i<n; i++)
        cin >> words[i];
    
    cout << FindAns() << endl;

    return 0;
}