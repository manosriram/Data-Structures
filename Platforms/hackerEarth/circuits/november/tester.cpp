#include <iostream>
#include <set>
#include <math.h>
using namespace std;

int main()
{
    set<int> arr;
    set<int>::iterator itr = arr.begin();
    int cnt, X = 0;
    int n;

    cin >> n;
    int u;
    for (int t = 0; t < n; t++)
    {
        cin >> u;
        arr.insert(u);
    }
    int size = arr.size();
    for (itr = arr.begin(), cnt = 1; itr != arr.end(); itr++, cnt++)
    {
        int co = *itr * pow(10, size - cnt);
        X += co;
    }
}