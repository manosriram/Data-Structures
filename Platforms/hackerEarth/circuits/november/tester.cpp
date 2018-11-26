#include <iostream>
#include <set>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    // set<char> arr;
    // set<char>::iterator itr = arr.begin();
    // int cnt;
    // char X;
    // int n;

    // cin >> n;
    // char u;
    // for (int t = 0; t < n; t++)
    // {
    //     cin >> u;
    //     arr.insert(u);
    // }
    // int size = arr.size();
    // for (itr = arr.begin(), cnt = 1; itr != arr.end(); itr++, cnt++)
    // {

    //     int co = *itr * pow(10, size - cnt);
    //     X += co;
    // }
    // cout << X;
    char a[100], b[100];
    string res;
    cin >> a >> b;
    res = strcat(a, b);

    res += "hellothere!";
    cout << res;
}