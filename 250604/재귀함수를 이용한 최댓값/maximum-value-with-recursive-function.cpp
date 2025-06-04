#include <iostream>

using namespace std;

int n;
int arr[100];

int FindArrmax(int num)
{
    if (num == 0)
        return arr[num];
    return max(arr[num],FindArrmax(num-1));
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << FindArrmax(n);

    return 0;
}