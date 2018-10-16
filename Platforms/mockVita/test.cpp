#include <iostream>
#include <stdlib.h>

using namespace std;


// static int c=0;
int binary(int n) {
    int t;
    int cnt=0,b[40];
    int count=0;
    while(n>=2) {
        b[cnt] = n%2;
        n=n/2;
        cnt++;
    }
    for (t=0;t<cnt;t++) {
        if (b[t]==1) {
        count++;
        }
        else {
        continue;
        }
    }   
    return count+1;
}
int main() {
    int temp1[40],n1,i,j,res=0;
    string a[500];
    int b1[100];
    cin >> n1;
<<<<<<< HEAD
if (n1 <= 50) {

    for (i=0;i<n1 && i<=10000000;i++) {
    int b1[i] = atoi(a.c_str());
    cin >> b1[i];
}

    
=======
    
    if (n1<=50) {

    for (i=0;i<n1 && i<10000000;i++)
    cin >> a[i];
>>>>>>> bb987baaafe2c5fbef9643d4c29d52810f40a7ef

    for (i=0;i<n1;i++) {
    temp1[i] = binary(a[i]);
    }
    for (i=0;i<n1;i++) {
        for (j=0;j<n1;j++) {
            if (temp1[i]>temp1[j] && i<j) {
            res++;
            }
            else
            continue;
        }
    }
<<<<<<< HEAD


    // for (i=0;i<n1;i++)
    // cout << temp1[i] << endl;
cout << res;
cout << endl;
}
}
=======
 cout << res;
}
}
>>>>>>> bb987baaafe2c5fbef9643d4c29d52810f40a7ef
