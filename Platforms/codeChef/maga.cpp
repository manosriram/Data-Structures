#include <iostream>

using namespace std;

int main() {
    int t,i,j,a[100],n;
    int cnt=1;
    int temp;
    cin >> n;

    for (t=0;t<n;t++) 
        cin >> a[t];
    
    for (i=0;i<n;i++) {
        for (j=n-1;j>=0;j--) {
            if(i < j) {
                if (cnt % 2 != 0) {
                    if (a[i] < a[j])
                    continue;

                    else {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }

                if (cnt % 2 == 0 ) {
                    if (a[i] > a[j])
                    continue;

                    else {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
                 
            }
       cnt++;
        }
        
    }    
    
    for (t=0;t<n;t++) 
    cout << a[t] << " ";
    cout << endl;
    cout << cnt;
}