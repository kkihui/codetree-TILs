#include <iostream>
#include <algorithm>

using namespace std;

int n, idx=0;
int arr[100];
int ans[50];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];

        if (i % 2 == 0)
        {
            sort(arr,arr+i+1);
            ans[idx] = arr[i/2];
            idx++;
        }
    }

    for (int i = 0; i < idx; i++)
        cout << ans[i] << ' ';
    cout << endl;

    return 0;
}