#include <iostream>
using namespace std;

int maxElement(int a, int b, int c)
{
    return (a > b && a > c) ? a : (b > a && b > c) ? b : c;
}

/* 

    Q. Given a Rope of length 'n' and 3 values (a,b,c). We need to make maximum number of pieces such that every piece has length in set {a,b,c}.

    Need to Implement using Recursion. (Un-optimized is OK)

    Solution Exp. : Make a cut of length 'a', then recursively search how many pieces it is going to give (if possible) and the same for 'b' and 'c'.
                    Then Return the maximum of these Three Results.
    
*/

int getMax(int n, int a, int b, int c)
{
    //  Base Cases.
    if (n < 0)
        return -1;

    if (n == 0)
        return 0;

    int Ca = getMax(n - a, a, b, c);
    int Cb = getMax(n - b, a, b, c);
    int Cc = getMax(n - c, a, b, c);
    int res = maxElement(Ca, Cb, Cc);
    if (res == -1)
        return -1;
    else
        return res + 1;
}

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int res = getMax(n, a, b, c);
    cout << res << '\n';
}