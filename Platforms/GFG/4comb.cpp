#include <iostream>

using namespace std;

int main() {
    int n,a[100],i,j,t,b;
    int x,cnt=0,tst=1,count=0;
    int count1=0;
    
    // cin >> tst;

    while(count<tst) {
if (tst>=1 && tst<=100) {
    cin >> n;
if (n>=1 && n<=100) {
    for (t=0;t<n;t++)
    cin >> a[t];
    
    cin >> x;

    for (i=0;i<n;i++) {
        for (j=i+1;i<n-i;i++) {
            if (a[i]+a[j]+a[j+1]+a[j+2] == x) {
            b = 1;
            break;
            }
        }
    }
}
    }
    count++;
    }
if (b==1)
cout << b << '\n';  
else
 cout << 0 << '\n';
}