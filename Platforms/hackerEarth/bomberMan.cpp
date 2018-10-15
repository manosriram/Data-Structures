#include <iostream>

using namespace std;

int main() {
    char a[10][10];
    int i,j,r,c;
    cin >> r >> c;

    for (i=0;i<r;i++) {
    for (j=0;j<c;j++) {
        cin >> a[i][j];
    }
}





for (i=0;i<r;i++) {
    for (j=0;j<c;j++) {
        if (a[i][j] == '0') {
            a[i][j] = 'a';
        }
    }
}

for (i=0;i<r;i++) {
    for (j=0;j<c;j++) {
        if (a[i][j] != 'a') {
            a[i][j] = '0';
        }
        else
        continue;
    }
}

cout << endl;

for (i=0;i<r;i++) {
    for (j=0;j<c;j++) {
        if (a[i][j]=='a') {
            a[i++][j] = '.';
            a[i--][j] = '.';
            a[i][j++] = '.';
            a[i][j--] = '.';            
            a[i][j] = '.';
        }

    }
}

    for (i=0;i<r;i++)   {
    for (j=0;j<c;j++) {
        cout << a[i][j];
    }
cout << endl;
    }

}