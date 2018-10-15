#include <iostream>

using namespace std;

int main() {
    int t,n,a[100],cnt=0;
    int i,j,temp;

    cin >> n;

    for(t=0;t<n;t++)
    cin >> a[t];

    for (t=0;t<n;t++) {
        if (a[t]==a[t+1]) {
            a[t] = 2 * a[t];
            a[t+1] = 0;
        }
        else
        continue;
    }
    
    int n1 = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);

    // for (i=0;i<n;i++) {
    //     for (j=n-1;j>=0;j--) {
    //         if (a[i]==0 && a[j]!=0 && i<j)  {
    //             temp = a[i];
    //             a[i] = a[j];
    //             a[j] = temp;
    //         }
    //         else
    //         continue;
    //     }
    // }


    for (t=0;t<n;t++)
    cout << a[t];

}