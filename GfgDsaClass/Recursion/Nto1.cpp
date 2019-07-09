#include <iostream>
using namespace std;

void printN(int n)
{
    if (n < 1)
        return;

    cout << n << " ";
    printN(n - 1);
}

int main()
{
    int n;
    cin >> n;
    printN(n);
}