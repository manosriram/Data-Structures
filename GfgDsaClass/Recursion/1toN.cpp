#include <iostream>
using namespace std;

void printN(int n)
{
    if (n < 1)
        return;

    printN(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    printN(n);
}