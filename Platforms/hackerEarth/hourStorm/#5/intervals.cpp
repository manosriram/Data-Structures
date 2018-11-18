#include <iostream>

using namespace std;

void quick(int a[], int N)
{
    int l = 0;
    int u = N - 1;
    int p, temp;
    if (l < u)
    {
        p = a[l];
        int i = l;
        int j = u;
        while (i < j)
        {
            while (a[i] <= p && i < j)
                i++;
            while (a[j] > p && i <= j)
                j--;
            if (i <= j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int count = 0;
    int N, K, min, t;
    int i, j;
    cin >> N >> K;
    int a[N];

    for (t = 0; t < N; t++)
        cin >> a[t];

    quick(a, N);

    // for (i = 0; i < N; i++)
    // {
    //     min = a[i];
    //     for (j = 0; j < N; j++)
    //     {
    //         if (j >= i)
    //         {
    //             if (a[i] + a[j] + min <= K)
    //             {
    //                 cout << i + 1 << " " << j + 1 << '\n';
    //                 count++;
    //             }
    //         }
    //     }
    // }
    for (t = 0; t < N; t++)
        cout << a[t] << " ";
    // cout << count << endl;
}