#include <iostream>

using namespace std;

int n;
int a[1003];

int Min(int n1, int n2)
{
    if (n1 > n2)
        return n2;
    return n1;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 1006009;
    // start i th room
    for (int i = 0; i < n; i++)
    {
        int dist_sum = 0;
        // calculate distance for all rooms
        for (int j = 0; j < n; j++)
            dist_sum += a[(i+j)%n] * j;
        ans = Min(ans,dist_sum);
    }

    cout << ans << endl;

    return 0;
}