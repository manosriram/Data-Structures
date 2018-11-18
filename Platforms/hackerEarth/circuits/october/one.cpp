#include <iostream>
using namespace std;

static int count;
int numCount(int a[], int j)
{
}
int main()
{

    int a[1000], T, n;

    cin >> n;

    for (int t = 0; t < n; t++)
        cin >> a[t];

    int max = 0;

    int i = 0;
    int j;
    for (j = 0; j < n; j++)
    {

        if (a[j] == 1)
            count++;

        if (a[j] == 0)
            count--;
    }

    for (j = 0; j < n; j++)
    {
        numCount(a, j);

        if (count == max)
        {
            cout << j + 1 << endl;
            break;
        }
    }
}