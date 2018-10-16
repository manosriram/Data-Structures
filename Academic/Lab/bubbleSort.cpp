#include <iostream>
using namespace std;

void bubbleS(int n, int a[])
{

    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n, a[100];
    cin >> n;

    for (int t = 0; t < n; t++)
        cin >> a[t];

    bubbleS(n, a);

    for (int t = 0; t < n; t++)
        cout << a[t] << " ";
}