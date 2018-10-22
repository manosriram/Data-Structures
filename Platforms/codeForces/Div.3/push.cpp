#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(1);

    a.push_back(123);
    a.push_back(444);
    a.push_back(1233);

    for (int t = 0; t < 4; t++)
        cout << a[t] << " ";
}