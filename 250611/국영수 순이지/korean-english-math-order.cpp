#include <iostream>
#include <string>
#include <algorithm>

#define max_N 10

using namespace std;

int n;

class Student
{
    public:
        string name;
        int korean;
        int english;
        int math;

        Student (string n = " ", int k = 0, int e = 0, int m = 0)
        {
            this -> name = n;
            this -> korean = k;
            this -> english = e;
            this -> math = m;
        }
};

bool cmp(const Student &a, const Student &b)
{
    if (a.korean == b.korean)
    {
        if (a.english == b.english)
            return a.math > b.math;
        return a.english > b.english;
    }
    return a.korean > b.korean;
}

Student Students[max_N];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> Students[i].name >> Students[i].korean >> Students[i].english >> Students[i].math;

    sort(Students,Students+n,cmp);

    for (int i = 0; i < n; i++)
        cout << Students[i].name << ' ' << Students[i].korean << ' ' << Students[i].english << ' ' << Students[i].math << endl;

    return 0;
}