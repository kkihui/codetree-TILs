#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string word1;
string word2;

string GetAns()
{
    if (word1.length() != word2.length())
        return "No";
    
    sort(word1.begin(),word1.end());
    sort(word2.begin(),word2.end());

    for (int i=0; i < word1.length(); i++)
    {
        if (word1[i] != word2[i])
            return "No";
    }

    return "Yes";
}

int main() {
    cin >> word1;
    cin >> word2;

    cout << GetAns() << endl;

    return 0;
}
