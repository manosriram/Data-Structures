#include <iostream>
using namespace std;

int main()
{
    char board[10];
    int t, T;

    cin >> T;
    while (T--)
    {
        int xCount = 0, oCount = 0;
        for (t = 0; t < 9; t++)
        {
            cin >> board[t];
            if (board[t] == 'X')
                xCount++;
            else
                oCount++;
        }

        if (xCount == 5 && oCount == 4)
            cout << "Valid" << endl;

        else
            cout << "Invalid" << endl;
    }
}