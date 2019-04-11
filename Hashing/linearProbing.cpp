#include <iostream>
using namespace std;

int getHash(int key, int n)
{
    return key % n;
}

int checkFree(int key, int index, int a[])
{
    if (a[index] == NULL)
        return index;

    return checkFree(key, index + 1, a);
}

int main()
{
    int n, temp;
    cin >> n;
    int m = n;
    int *a = new int[n];
    while (m--)
    {
        cin >> temp;
        int hash = getHash(temp, n);
        int index = checkFree(hash, 0, a);
        a[index] = temp;
    }
    for (int t = 0; t < n; t++)
        cout << a[t] << " ";
}