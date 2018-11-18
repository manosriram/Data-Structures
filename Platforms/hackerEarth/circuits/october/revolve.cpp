#include <iostream>
using namespace std;

inline int update(int id, int val, int N, int a[])
{
    if (!val)
    {
        return 0;
    }
    a[id] += val;

    if (id == N)
        update(1, val - 1, N, a);

    else
        update(id + 1, val - 1, N, a);
}

inline int query(int l, int r, int N, int a[])
{
    if (l == r)
        return a[l];

    if (l == N)
        return a[l] + query(1, r, N, a);

    else
        return a[l] + query(l + 1, r, N, a);
}

int main()
{
    int m = 1000000007;
    int N, val, id, r, l, queries;
    int first, second, que;
    cin >> N >> queries;

    // int *a = new int[N];
    int a[N];
    for (int t = 1; t < N + 1; t++)
        cin >> a[t];

    while (queries--)
    {
        cin >> que >> first >> second;

        if (que)
            update(first, second, N, a);

        if (que == 2)
        {
            int b = query(first, second, N, a);
            cout << b % m << endl;
            ;
        }
    }
}