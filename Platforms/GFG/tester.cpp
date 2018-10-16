#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    int t,n,a[10000],T;
    int count=0;
    int i,j,x;
    int b[10000];
    static int cnt;

    
    cin >> T;
if (T>=1 && T<=100) {
    while(T--) {
        cin >> n >> x;
        

        for (t=0;t<n;t++)
        cin >> a[t];

        sort(a,a+n);

        for (i=0;i<n;i++) {
            for (j=i+1;j<n-i;j++) {
                
                    if (a[j]-a[i]==x || a[i]-a[j]==x) {
                    count=1;
                    break;
                    }

                    else
                    continue;
                
            }
        }
        if (count==1) {
        b[cnt] = 1;
        cnt++;
        }
        
        else {
        b[cnt] = -1;
        cnt++;
        }

        count=0;

    }
}

    for (t=0;t<cnt;t++)
    cout << b[t] << '\n';

}