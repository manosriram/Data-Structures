#include <iostream>
using namespace std;

void searchKey(int a[100][100], int key, int r, int c) {

    int row = 0, col = c-1;
    bool got = false;
    while (!got) {
        if (a[row][col] > key) {
            col--;
        } else if (a[row][col] < key) {
            row++;
        } else {
            cout << "Found at ( " << row << "," << col << " )" << '\n';
            got = true;
        }
    }
    return;
}

int main() {
    int a[100][100];
    int r,c,i,j;
    cin >> r >> c;

    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            cin >> a[i][j];
        }
    }
    int key;
    cin >> key;
    searchKey(a, key,r,c);
}