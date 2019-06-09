#include <iostream>
#include <string.h>
using namespace std;
static int row, col, currentIndex;

string getNewString(int r, char a[][100])
{
    string temp;
    for (int t = 0; t < r; t++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[t][j] != ' ')
            {
                temp += a[t][j];
            }
        }
    }
    return temp;
}

void printMatrix(int r, char a[][100])
{
    for (int t = 0; t < r; t++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[t][j] << " ";
        }
        cout << '\n';
    }
}

void fillMatrixWithSpace(char a[][100], int r)
{
    for (int t = 0; t < r; t++)
    {
        for (int j = 0; j < 50; j++)
        {
            a[t][j] = ' ';
        }
    }
}

void fillVertical(int r, char a[][100], string str)
{
    for (int t = 0; t < r; t++)
    {
        a[t][col] = str[currentIndex];
        currentIndex++;
    }
    return;
}

void fillDiagnol(int r, char a[][100], string str)
{
    int tempR = r - 2;
    col++;

    for (int t = tempR; t >= 1; t--)
    {
        a[t][col] = str[currentIndex];
        currentIndex++;
        col++;
    }
    return;
}

string fillMatrix(int r, string str)
{
    char a[r][100];
    fillMatrixWithSpace(a, r);
    while (currentIndex < str.length())
    {
        fillVertical(r, a, str);
        fillDiagnol(r, a, str);
    }
    printMatrix(r, a);
    return getNewString(r, a);
}

int main()
{
    int r;
    string str;
    cin >> str;
    cin >> r;

    cout << fillMatrix(r, str) << '\n';
}