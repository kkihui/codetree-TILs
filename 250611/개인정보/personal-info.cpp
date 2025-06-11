#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Person
{
    public:
        string name;
        int height;
        double weight;

        Person (string n = "", int h = 0, double w = 0)
        {
            this -> name = n;
            this -> height = h;
            this -> weight = w;
        }
};

bool cmp1(const Person &a, const Person &b)
{
    return a.name < b.name;
}

bool cmp2(const Person &a, const Person &b)
{
    return a.height > b.height;
}

Person People[5];

int main()
{
    for (int i = 0; i < 5; i++)
        cin >> People[i].name >> People[i].height >> People[i].weight;
    cout << fixed;
    cout.precision(1);
    
    // name 순 정렬
    sort(People,People+5,cmp1);
    cout << "name" << endl;
    for (int i = 0; i < 5; i++)
        cout << People[i].name << " " << People[i].height << " " << People[i].weight << endl;

    // height 순 정렬
    sort(People,People+5,cmp2);
    cout << endl << "height" << endl;
    for (int i = 0; i < 5; i++)
        cout << People[i].name << " " << People[i].height << " " << People[i].weight << endl;

    return 0;
}