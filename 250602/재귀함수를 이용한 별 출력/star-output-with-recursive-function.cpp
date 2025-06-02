#include <iostream>
using namespace std;

void PrintNlineStars(int num)
{
    if (num == 0)
        return;
    
    PrintNlineStars(num-1);
    for (int i=0; i<num; i++)
        cout << '*';
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    PrintNlineStars(n);
    return 0;
}