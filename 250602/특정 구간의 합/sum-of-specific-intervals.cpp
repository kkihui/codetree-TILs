#include <iostream>

using namespace std;

int n, m;
int arr[100];

void PrintArrSum(int n1, int n2)
{
    int sum = 0;
    for (int i = n1-1; i < n2; i++)
        sum += arr[i];
    
    cout << sum << endl;

}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        PrintArrSum(a1,a2);
    }


    return 0;
}