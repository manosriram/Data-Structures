#include <iostream>
using namespace std;

void pushFront(int arr[], int n, int count)
{
    for (int k = n - 1; k >= 0; k--)
        arr[k + 1] = arr[k];

    count++;
    return;
}

void pushBack(int arr[], int n, int count, int key)
{
    arr[n + 1] = key;
    count++;

    return;
}

int main()
{

    int arr[1000], n, t;
    int count = 0;

    cin >> n;

    for (t = 0; t < n; t++)
        cin >> arr[t];

    for (t = 0; t < n + 2; t++)
        cout << arr[t] << " ";
}