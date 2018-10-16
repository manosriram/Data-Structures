#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    char A[10000], B[10000];
    int T;
    long long int sum, sum1;

    cin >> T;
    while (T--)
    {
        sum = 0;
        sum1 = 0;
        cin >> A;
        cin >> B;
        int m = strlen(A);
        if (strlen(A) == strlen(B))
        {

            for (t = 0; t < m; t++)
            {
                sum += int(A[t]);
                sum1 += int(B[t]);
            }
            if (sum == sum1)
                cout << "Arjun" << '\n';

            else
                cout << "Amit" << '\n';
        }
        else
            cout << "Amit" << '\n';
    }
    return 0;
}