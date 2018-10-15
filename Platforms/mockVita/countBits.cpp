#include <iostream>

using namespace std;

int a[100],t,i,n,cnt=0;
int len,b[40],take[40],n1;
int c[40];

int main() {
cin >> n;
    while (n>=2) {
        a[cnt] = n%2;
        n=n/2;
        cnt++;
    }

    cout << n;
    for (t=cnt-1;t>=0;t--)
    cout << a[t];

    cout << endl;


}