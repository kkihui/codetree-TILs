#include <iostream>
#include <string>
#include <algorithm>

#define max_N 10

using namespace std;

class Student
{
    public:
        string name;
        int s1, s2, s3;

        Student(string n = " ", int s1 = 0, int s2 = 0, int s3 = 0)
        {
            this -> name = n;
            this -> s1 = s1;
            this -> s2 = s2;
            this -> s3 = s3;
        }
};

bool cmp(const Student &a, const Student &b)
{
    return (a.s1 + a.s2 + a.s3) < (b.s1 + b.s2 + b.s3);
}

Student Students[max_N];

int main() 
{
    int n;
    cin >> n;

    for (int i=0; i<n; i++)
        cin >> Students[i].name >> Students[i].s1 >> Students[i].s2 >> Students[i].s3;

    sort(Students,Students+n,cmp);

    for (int i=0; i<n; i++)
        cout << Students[i].name << " " << Students[i].s1 << " " << Students[i].s2 << " " << Students[i].s3 << endl;

    return 0;
}