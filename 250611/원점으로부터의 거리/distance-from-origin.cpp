#include <iostream>
#include <algorithm>

#define max_N 1000

using namespace std;

int abs(int n)
{
    if (n < 0)
        return -n;
    return n;
}

class Point
{
    public:
        int x, y, num, dist;

        Point (int x = 0, int y = 0, int n = 0)
        {
            this -> x = x;
            this -> y = y;
            this -> num = n;
            this -> dist = abs(x) + abs(y);
        }
};

bool cmp(const Point &a, const Point &b)
{
    if (a.dist == b.dist)
        return a.num < b.num;
    return a.dist < b.dist;
}

Point Points[max_N];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> Points[i].x >> Points[i].y;
        Points[i].num = i+1;
        Points[i].dist = abs(Points[i].x) + abs(Points[i].y);
    }
    
    sort(Points,Points+n,cmp);

    for (int i = 0; i < n; i++)
        cout << Points[i].num << endl;
    
    return 0;
}