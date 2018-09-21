#include <iostream>
using namespace std;

// Initializations....
static char grid[3][3];
static char one = grid[0][0];
static char two = grid[0][1];
static char three = grid[0][2];
static char four = grid[1][0];
static char five = grid[1][1];
static char six = grid[1][2];
static char seven = grid[2][0];
static char eight = grid[2][1];
static char nine = grid[2][2];
static count;

void takeMove(int pm,int n) {

    switch(pm) {
        
        case 1:

        if (n==1)
        one = 'X';

        if (n==2)
        one = 'O';

        break;

        case 2:

        if (n==1)
        two = 'X';

        else if (n==2)
        two = 'O';
        break;

        case 3:
        if (n==1)
        three = 'X';

        else if (n==2)
        three = 'O';
        break;

        case 4:
        if (n==1)
        four = 'X';

        else if (n==2)
        four = 'O';
        break;

        case 5:
        if (n==1)
        five = 'X';

        else if (n==2)
        five = 'O';
        break;

        case 6:
        if (n==1)
        six = 'X';
        else if (n==2)
        six = 'O';
        break;

        case 7:
        if (n==1)
        seven = 'X';
        else if (n==2)
        seven = 'O';
        break;

        case 8:
        if (n==1)
        eight = 'X';
        else if (n==2)
        eight = 'O';
        break;

        case 9:
        if (n==1)
        nine = 'X';
        else if (n==2)
        nine = 'O';
        break;
    }
    count++;
}

bool checkStatus() {
    if (one == two && two == three)
    return 1;

    else if (four == five && five == six)
    return 1;

    else if (seven == eight && eight == nine)
    return 1;

    else if (one == four && four == seven)
    return 1;

    else if (two == five && five == eight)
    return 1;

    else if (three == six && six == nine)
    return 1;

    else if (one == five && five == nine)
    return 1;

    else if (three == five && five == seven)
    return 1;

    else
    return 0;
}


int main() {
    
    int pm,n;

    while(count<=9) {

        for (int i=0;i<3;i++) {
            for (int j=0;j<3;j++) {
                cout << grid[i][j] << " ";
            }
            cout << '\n';
        }


        cout << "Enter Player 1's Move : (1-9) " << '\n';
        cin >> pm;
        n=1;
        takeMove(pm,n);

        if (checkStatus()) {
        cout << "Player One Wins!!" << '\n';
        exit(0);
        }

        cout << "Enter Player 2's Move : (1-9) " << '\n';
        cin >> pm;
        n=2;
        takeMove(pm,n);

        if (checkStatus()) {
        cout << "Player Two Wins!!" << '\n';
        exit(0);
        }
    }
}