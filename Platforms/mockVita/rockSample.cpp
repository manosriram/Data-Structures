#include <iostream>

using namespace std;

int main() {
    int a[1000000],r1[1000000],t,j,b,n,r;
    int cnt=0,a1=0,ranges[1000],cnt1=0;
    
    cin >> n >> r;
    b = 2 * r;

if (b%2==0) {
    for (t=0;t<n+b;t++)
    cin >> a[t];
    
if (n >= 10 && n <= 10000 && r >=1 && r <= 1000000) {

    int max = a[0];
    
    for (t=0;t<n;t++) {
        if (a[t]>max)
        max = a[t];

        else
        continue;     
    }
if (max >= 1 && max <= 1000) {
    for (t=n;t<n+b;t++) {
    r1[cnt] = a[t];
    cnt++;
    }
    
    for (j=0;j<b;j=j+2) {
        for (t=0;t<n;t++) {
            if (a[t]>r1[j] && a[t]<r1[j+1])  {
                a1++;
            }
        }
        ranges[cnt1] = a1;
        cnt1++;
        a1=0;
    }
    
    cout << endl;
    for (t=0;t<r;t++) {
    cout << ranges[t] << endl;
    cout << endl;
    }
}
}
}
}