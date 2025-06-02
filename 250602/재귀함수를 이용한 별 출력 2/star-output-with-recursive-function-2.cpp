#include <iostream>

using namespace std;

int n;

void PrintStars(int num)
{
    if (num == 0)
        return;
    
    for (int i=0; i<num; i++)
        cout << "* ";
    cout << endl;
    
    PrintStars(num-1);
    
    for (int i=0; i<num; i++)
        cout << "* ";
    cout << endl;
}

int main() {
    cin >> n;

    PrintStars(n);

    return 0;
}