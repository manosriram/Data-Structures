#include <iostream>
#include <list>
using namespace std;

int main()
{
    int n, k;
    int t, a1;
    list<int> a;
    cin >> n >> k;
    int len = 0;
    for (t = 0; t < n; t++)
    {
        cin >> a1;
        a.push_back(a1);
    }

    for (t = 0; t < n - len; t++)
    {
        if (!a.empty())
        {
            if (*a.begin() <= k)
            {
                a.pop_front();
                len++;
            }
            else
                break;
        }
    }
    for (t = 0; t < n - len; t++)
    {
        if (!a.empty())
        {
            if (*a.end() <= k)
            {
                a.pop_back();
                len++;
            }
            else
                break;
        }
    }
    cout << len;
}