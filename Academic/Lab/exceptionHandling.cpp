#include <iostream>
#define max 10
using namespace std;

int main()
{
    int n, a[max], t;
    float sum = 0;

    try
    {

        float avg;
        cout << "No of Subjects : " << '\n';
        cin >> n;

        if (n == 0)
            throw n;

        if (n > max)
            throw 'x';

        for (t = 0; t < n; t++)
        {
            cin >> a[t];
            sum += a[t];
        }

        avg = sum / n;
        cout << "Avg = " << avg << '\n';
    }
    catch (int n)
    {
        cout << "Please Enter Atleast One Subject.." << '\n';
    }
    catch (char a)
    {
        cout << "Array out of bounds.." << '\n';
    }
}