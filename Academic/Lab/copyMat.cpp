#include <iostream>

using namespace std;
int r,c,i,j;

class mat1 {
    public:

    int a[100][100],b[100][100];

    
mat1() {

    int **a = new int*[r];
for(int i = 0; i < c; ++i) {
    a[i] = new int[r];
}
}


void getmat1(mat1 ob1) {
    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
        cin >> a[i][j];

        }
    }
}

mat1(mat1 &ob1,mat1 &ob2) {
    int **b = new int*[r];
    for (i=0;i<c;i++)
    b[i] = new int[r];

    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            ob2.b[i][j] = ob1.a[i][j];
        }
    }
}

void sumMat(mat1 ob1,mat1 ob2) {
    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            b[i][j] = ob1.a[i][j] + ob2.b[i][j];
        }
    }
    
}

void showMat(mat1 ob2) {
    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            cout << b[i][j];
        }
        cout <<endl;
    }
}

};



int main() {
    cin >> r >> c;
    mat1 ob1;
    ob1.getmat1(ob1);
    mat1 ob2(ob1,ob2);
    ob2.sumMat(ob1,ob2);
    ob2.showMat(ob2);

}