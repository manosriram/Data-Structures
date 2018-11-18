#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[10];

    cin >> a;
    int n = strlen(a);
    cout << n << endl;

    cout << a[n] << endl;
    cout << a[n - 1] << endl;
}