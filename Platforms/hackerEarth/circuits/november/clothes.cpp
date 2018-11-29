#include <iostream>
using namespace std;

int main()
{
    int n, T, t;
    cin >> n;
    int *arr = new int[n];

    for (t = 0; t < n; t++)
        cin >> arr[t];

    int type, C, K;
    cin >> T;
    while (T--)
    {
        cin >> type >> C;

        if (type == 1)
        {
            int sizeArr = sizeof(arr) / sizeof(*arr);
            arr[sizeArr + 1] = C;
        }
        int sizeArr1 = sizeof(arr) / sizeof(*arr);

        for (t = 0; t < sizeArr1; t++)
            cout << arr[t] << " ";
    }
}