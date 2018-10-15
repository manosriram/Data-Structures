#include <iostream>
#include <stdlib.h>

using namespace std;
int arr[100][100],r,c,t,j;
int n,a=0,a1=0;

// Right to Left
int leftDiagnol(int mat[100][100],int n) {
    int loop;
    int row=0,col=0;
    for (loop=0;loop<=n;loop++){ 
        a = mat[row][col] + a;
        row++;
        col++;
    }
    return a;
}

// Left to Right
int rightDiagnol(int mat[100][100],int n) {
    int loop;
    int row=0,col=n-1;
    for (loop=0;loop<n;loop++) {
        a1 = mat[row][col] + a1;
        row++;
        col--;
    }
    return a1;
}

int main() {
int res1,res2,result;
cin>>n;
if (n <= 100 && n>= -100) {
r=c=n;

for (t=0;t<r;t++) {
    for (j=0;j<c;j++) {
        cin>>arr[t][j];
    }
}
res1 = rightDiagnol(arr,n);
res2 = leftDiagnol(arr,n);
result = res1-res2;
if (result<0) {
    result = -(result);
}
if (result>0) {
    result=result;
}
cout<<result;
}
}