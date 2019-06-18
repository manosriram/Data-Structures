#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

pair<int, int> closestSum(int a[], int d, int n)
{
    d -= 30;

    int *front, *back;
    pair<int, int> make_pair;

    sort(a, a + n);
    front = &a[0], back = &a[n - 1];
    int max_ = INT_MIN;
    while (front < back)
    {
        if ((*front + *back) <= d)
        {
            if (*front + *back > max_)
            {
                max_ = *front + *back;
                make_pair.first = *front;
                make_pair.second = *back;
            }
        }

        if ((*front + *back) <= d)
            front++;
        else
            back--;
    }
    return make_pair;
}

int main()
{
    int n, d;
    cin >> n;
    cin >> d;
    int a[n];

    for (int t = 0; t < n; t++)
        cin >> a[t];

    pair<int, int> res;

    res = closestSum(a, d, n);

    cout << res.first << " " << res.second << endl;
}