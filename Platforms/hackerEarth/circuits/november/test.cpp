#include <iostream>
using namespace std;

int main()
{
    char a[100];
    int t, t2;
    cin >> a;

    // for (t=0;t<strlen(a);t++) {

    for (t2 = 0; t2 < strlen(a); t2++)
    {

        a[t2] = a[t2 + 1];
    }
    // }

    cout << a << endl;
}
