#include <iostream>
using namespace std;

int checkFree(int key, int index, int a[])
{
    if (a[index] == NULL)
        return index;

    return checkFree(key, index + 1, a);
}

int main()
{
    int n, t;
    cin >> n;
    int *a = new int[n];
    a[0] = 123;
    a[1] = 123;
    a[3] = 123;
    cout << checkFree(12, 0, a);
}