#include <iostream>
using namespace std;

// int*** can reference to only type int**

void pointerParameter(int *p, int **q, int ***r)
{
    cout << *p << endl;
    cout << **q << endl;
    cout << ***r << endl;
}

int main()
{
    int x = 5;

    int *p = &x;
    int **q;
    int ***r;

    q = &p;
    r = &q;

    ***r = 10;
    cout << p << endl;  // address of 'x'.
    cout << *p << endl; // value at 'x'.

    cout << q << endl;   // value of 'p' address.
    cout << *q << endl;  // value of 'x' address.
    cout << **q << endl; // value of 'x'.

    cout << r << endl;    // value of 'q' address
    cout << *r << endl;   // value of 'p' address.
    cout << **r << endl;  // value of 'x' address.
    cout << ***r << endl; // value of 'x'.

    pointerParameter(p, q, r);
}