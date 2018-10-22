#include <iostream>
#include <list>
using namespace std;

int main()
{

    int n, k;
    int t;
    int a;
    list<int> arr;
    cin >> n >> k;
    int len = 0;
    for (t = 0; t < n; t++)
    {
        cin >> a;
        arr.push_back(a);
    }

    for (t = 0; t < n; t++)
    {
        if (*arr.begin() <= k)
        {
            arr.pop_front();
            len++;
        }
        if (*arr.end() <= k)
        {
            arr.pop_back();
            len++;
        }
    }
    cout << len;
}