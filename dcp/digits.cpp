#include <iostream>
using namespace std;

bool calDig(unsigned long long int n)
{
    unsigned long long int sum = 0, rem;
    while (n > 0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }

    if (sum == 10)
        return 1;
    else
        return 0;
}

int main()
{
    unsigned long long int num, n, cnt = 0;

    cin >> n;

    while (1)
    {
        if (calDig(num))
            cnt++;

        if (calDig(num) && cnt == n)
        {
            cout << num << endl;
            exit(0);
        }
        num++;
    }
}