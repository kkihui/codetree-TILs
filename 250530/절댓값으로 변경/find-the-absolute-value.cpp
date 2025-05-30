#include <iostream>

using namespace std;

int n;
int arr[50];

void PrintAbsArr(int *arr, size_t size)
{
    for (int i=0; i<size; i++)
    {
        if (arr[i] < 0)
            arr[i] *= -1;

        cout << arr[i] << ' ';
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    PrintAbsArr(arr,n);

    return 0;
}