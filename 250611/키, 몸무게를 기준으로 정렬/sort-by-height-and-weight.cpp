#include <iostream>
#include <algorithm>
#include <string>

#define max_N 10

using namespace std;

class Person
{
    public:
        string name;
        int height, weight;

        Person (string n = "", int h = 0, int w = 0)
        {
            this -> name = n;
            this -> height = h;
            this -> weight = w;
        }
};

bool cmp(const Person &a, const Person &b)
{
    if (a.height == b.height)
        return a.weight > b.weight;
    return a.height < b.height;
}

Person People[max_N];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> People[i].name >> People[i].height >> People[i].weight;
    
    
    sort(People,People+n,cmp);
    for (int i = 0; i < n; i++)
        cout << People[i].name << " " << People[i].height << " " << People[i].weight << endl;
    
    return 0;
}