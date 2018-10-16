#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (abs(n) == n && n != 0)
        cout << "Positive" << '\n';

    else if (n == 0)
        cout << "ZERO" << '\n';

    else
        cout << "Negative" << '\n';
}