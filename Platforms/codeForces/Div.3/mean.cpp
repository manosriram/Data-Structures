#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a[100] = {600, 470, 170, 430, 300};
    float *p;
    p = &a[0];
    float mean = 0, variance = 0;
    float stdev;
    for (int i = 0; i < 5; i++)
    {
        mean += *p;
        p++;
    }
    mean /= 5;

    p = &a[0];
    for (int i = 0; i < 5; i++)
    {
        variance += (*p - mean) * (*p - mean);
        p++;
    }
    variance /= 5;
    stdev = sqrt(variance);

    cout << "Mean = " << mean << endl;
    cout << "Standard Deviation = " << stdev << endl;
}