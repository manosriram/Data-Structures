#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;
    int counter = 1;

    cin >> a >> b >> c;

    for (int t = 0; t < a; t++)
    {
        cin >> d >> e;
    }

    while ((c + a) < b)
    {
        a += c;
        counter++;
    }
    cout << counter << endl;
}