#include <iostream>

using namespace std;

int main() {
    int cnt=0,n,t,no,a[100],i,d,z=0,b[100],z1,i1=0;
    int k=0;
    int e;

    cin >> n;
    no = n * 3;

    for (t=0;t<no;t++)
    cin >> a[t];

    for (t=0;t<n;t++) {
        i=a[k];
        d=a[k+1];
        z1=a[k+2];        
        
        while (i!=z1 || i<z) {
            int z2 = z1 + z;
            i += d;
            z = z2 + z1;
            cnt++;      
        }

        b[e] = cnt;
        cnt = 0;
        k += 3;
        e++;
    }

    for (t=0;t<n;t++)
    cout << b[t];

}
