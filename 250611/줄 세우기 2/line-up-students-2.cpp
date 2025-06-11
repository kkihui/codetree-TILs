#include <iostream>
#include <algorithm>
#include <string>

#define max_N 1000

using namespace std;

class Person
{
    public:
        int height, weight, num;

        Person (int h = 0, int w = 0, int n = 0)
        {
            this -> height = h;
            this -> weight = w;
            this -> num = n;
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
    {
        cin >> People[i].height >> People[i].weight;
        People[i].num = i+1;
    }
    
    sort(People,People+n,cmp);

    for (int i = 0; i < n; i++)
        cout << People[i].height << " " << People[i].weight << " " << People[i].num << endl;
    
    return 0;
}