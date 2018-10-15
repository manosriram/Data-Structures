#include <iostream>

using namespace std;

int count(n) {
    if (n==1 || n==2)
    return 0;

    else 
    return count(n-1)+count(n+1);
}

int main() {
    int r=2,c;
    int n=0,i,j;
    int a[30][30];
    cin >> c;

    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            a[i][j] = 1;
        }
    }



   
    

}