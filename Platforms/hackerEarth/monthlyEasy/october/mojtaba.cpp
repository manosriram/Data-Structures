#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double f = 0;
    // float f = 0;

    float sum1 = 0, X, va, vb;

    cin >> X >> va >> vb;

    if (vb > va)
        cout << -1 << endl;

    else
    {
        while (sum1 < X)
        {
            sum1 += va;
            X += vb;
            f++;
        }
        std::cout << std::setprecision(6) << fixed << f * 2 << '\n';
    }
}