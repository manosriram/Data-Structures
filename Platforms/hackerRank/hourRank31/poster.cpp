#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    unsigned long long T, t;
    unsigned long long int n, ht;

    cin >> n >> ht;
    double *wallPoints = new double[n];
    double *arrayLengths = new double[n];

    for (t = 0; t < n; t++)
        cin >> wallPoints[t];

    for (t = 0; t < n; t++)
        cin >> arrayLengths[t];

    double max = __DBL_MIN__;
    int count = 0;

    for (t = 0; t < n; t++)
    {
        if (arrayLengths[t] <= ht && wallPoints[t] <= ht)
            count++;
    }
    if (count <= n)
    {
        cout << 0 << endl;
        exit(0);
    }

    for (t = 0; t < n; t++)
    {
        double u;

        u = ceil(wallPoints[t] + (arrayLengths[t] / 4) - (arrayLengths[t] / 2) - ht);

        if (u > max)
            max = u;
    }

    cout << max << endl;
}