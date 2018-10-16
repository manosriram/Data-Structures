#include <iostream>

using namespace std;

int r,c,arr[100][100],i,j,arr1[100][100];

class addArr {

private:
int addOne(int arr[100][100]) {
cout<< "Enter First Array : ";
for (i=0;i<r;i++)
for (j=0;j<c;j++)
cin >> arr[i][j];

return arr[i][j];
}

public:
void callAddOne() {
    addOne(arr);
}

};

class addArr1 {
private:
int addTwo(int arr1[100][100]) {
    cout << "Enter Second Array : ";
    for (i=0;i<r;i++)
    for (j=0;j<c;j++)
    cin >> arr1[i][j];

    return arr1[i][j];

}

public:
void callAddTwo() {
    addTwo(arr1);
}

};

class sumMat {
public:
int sum[100][100];
void sum1() {

for (i=0;i<r;i++)
for (j=0;j<c;j++)
sum[i][j] = arr[i][j] + arr1[i][j];

}
void print() {
    for (i=0;i<r;i++) {
    for (j=0;j<c;j++) {
    cout << sum[i][j] << " ";
}

    }
}
};


int main() {
int sum[100][100];
cout << "Enter Rows and Columns : ";
cin >> r >> c;

addArr array1;
addArr1 array2;
sumMat res;

array1.callAddOne();
array2.callAddTwo();
res.sum1();
res.print();
cout << endl;
}