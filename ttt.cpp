#include <iostream>
using namespace std;

// Initializations....
static char grid[3][3];
static char one = grid[0][0] = '1';
static char two = grid[0][1] = '2';
static char three = grid[0][2] = '3';
static char four = grid[1][0] = '4';
static char five = grid[1][1] = '5';
static char six = grid[1][2] = '6';
static char seven = grid[2][0] = '7';
static char eight = grid[2][1] = '8';
static char nine = grid[2][2] = '9';
// static int count;

void takeMove(int pm, int n)
{

    switch (pm)
    {

    case 1:

        if (n == 1)
            grid[0][0] = 'X';

        if (n == 2)
            grid[0][0] = 'O';

        break;

    case 2:

        if (n == 1)
            grid[0][1] = 'X';

        else if (n == 2)
            grid[0][1] = 'O';
        break;

    case 3:
        if (n == 1)
            grid[0][2] = 'X';

        else if (n == 2)
            grid[0][2] = 'O';
        break;

    case 4:
        if (n == 1)
            grid[1][0] = 'X';

        else if (n == 2)
            grid[1][0] = 'O';
        break;

    case 5:
        if (n == 1)
            grid[1][1] = 'X';

        else if (n == 2)
            grid[1][1] = 'O';
        break;

    case 6:
        if (n == 1)
            grid[1][2] = 'X';
        else if (n == 2)
            grid[1][2] = 'O';
        break;

    case 7:
        if (n == 1)
            grid[2][0] = 'X';
        else if (n == 2)
            grid[2][0] = 'O';
        break;

    case 8:
        if (n == 1)
            grid[2][1] = 'X';
        else if (n == 2)
            grid[2][1] = 'O';
        break;

    case 9:
        if (n == 1)
            grid[2][2] = 'X';
        else if (n == 2)
            grid[2][2] = 'O';
        break;
    }
}

bool checkStatus()
{

    if (grid[0][0] == grid[0][1] && grid[0][1] == grid[0][2])
        return 1;

    if (grid[1][0] == grid[1][1] && grid[1][1] == grid[1][2])
        return 1;

    if (grid[2][0] == grid[2][1] && grid[2][1] == grid[2][2])
        return 1;

    if (grid[0][0] == grid[1][0] && grid[1][0] == grid[2][0])
        return 1;

    if (grid[0][1] == grid[1][1] && grid[1][1] == grid[2][1])
        return 1;

    if (grid[0][2] == grid[1][2] && grid[1][2] == grid[2][2])
        return 1;

    if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2])
        return 1;

    if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0])
        return 1;

    else
        return 0;
}

int main()
{

    int pm, n;

    while (1)
    {
        cout << '\n';
        cout << '|' << " " << grid[0][0] << " " << '|' << " " << grid[0][1] << " " << '|' << " " << grid[0][2] << " " << '|' << " " << '\n';
        cout << "--------------" << '\n';
        cout << '|' << " " << grid[1][0] << " " << '|' << " " << grid[1][1] << " " << '|' << " " << grid[1][2] << " " << '|' << " " << '\n';
        cout << "--------------" << '\n';
        cout << '|' << " " << grid[2][0] << " " << '|' << " " << grid[2][1] << " " << '|' << " " << grid[2][2] << " " << '|' << " " << '\n';
        cout << '\n';

        cout << "Enter Player 1's Move : (1-9) " << '\n';
        cin >> pm;
        n = 1;
        takeMove(pm, n);

        if (checkStatus() == 1)
        {
            cout << "Player ONE Wins!!" << '\n';
            exit(0);
        }

        cout << '\n';
        cout << '|' << " " << grid[0][0] << " " << '|' << " " << grid[0][1] << " " << '|' << " " << grid[0][2] << " " << '|' << " " << '\n';
        cout << "--------------" << '\n';
        cout << '|' << " " << grid[1][0] << " " << '|' << " " << grid[1][1] << " " << '|' << " " << grid[1][2] << " " << '|' << " " << '\n';
        cout << "--------------" << '\n';
        cout << '|' << " " << grid[2][0] << " " << '|' << " " << grid[2][1] << " " << '|' << " " << grid[2][2] << " " << '|' << " " << '\n';
        cout << '\n';

        cout << "Enter Player 2's Move : (1-9) " << '\n';
        cin >> pm;
        n = 2;
        takeMove(pm, n);

        if (checkStatus())
        {
            cout << "Player TWO Wins!!" << '\n';
            exit(0);
        }
    }
}