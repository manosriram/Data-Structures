#include <iostream>
using namespace std;

int numCount(int a[], int j)
{
    int count = 0;

    for (int t = 0; t < j; t++)
    {

        if (a[t] == 1)
            count++;

        else
            count--;
    }
    return count;
}

int main()
{

    int a[1000], T, n;

    cin >> n;

    for (int t = 0; t < n; t++)
        cin >> a[t];

    int max = a[0];

    int i = 0;
    int j;
    for (j = 0; j < n; j++)
    {

        int b = numCount(a, j);

        if (max > b)
            max = b;
    }

    for (j = 0; j < n; j++)
    {
        int b = numCount(a, j);

        if (b == max)
        {
            cout << b + 1 << endl;
            exit(0);
        }
    }
}