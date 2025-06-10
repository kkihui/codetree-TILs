#include <iostream>
#include <string>
#include <algorithm>

#define max_N 10

using namespace std;

class Person
{
    public:
        string name, addr, city;

        Person(string n = " ",string a = " ",string c = " ")
        {
            this -> name = n;
            this -> addr = a;
            this -> city = c;
        }

        // 비교 시, 사전 순으로
        bool operator <(Person& person)
        {
            return this -> name < person.name;
        }
};

int main() {
    int n;
    cin >> n;
    Person People[max_N];
    
    for (int i=0; i<n; i++)
        cin >> People[i].name >> People[i].addr >> People[i].city;

    sort(People,People+n);

    cout << "name " << People[n-1].name << endl;
    cout << "addr " << People[n-1].addr << endl;
    cout << "city " << People[n-1].city << endl;
    
    return 0;
}