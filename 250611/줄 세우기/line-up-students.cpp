#include <iostream>
#include <algorithm>

#define max_N 1000

using namespace std;

class Student
{
    public:
        int height, weight, number;
        Student(int h = 0, int w = 0, int n = 0)
        {
            this -> height = h;
            this -> weight = w;
            this -> number = n;
        }
};

bool cmp(const Student &a, const Student &b)
{
    if (a.height == b.height)
    {
        if (a.weight == b.weight)
            return a.number < b.number;
        return a.weight > b.weight;
    }
    return a.height > b.height;
}

Student Students[max_N];

int main() 
{
    int n;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        cin >> Students[i].height >> Students[i].weight;
        Students[i].number = i+1;
    }

    sort(Students,Students+n,cmp);

    for (int i=0; i<n; i++)
        cout << Students[i].height << ' ' << Students[i].weight << ' ' << Students[i].number << endl;

    return 0;
}