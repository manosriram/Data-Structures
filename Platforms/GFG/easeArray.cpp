#include <iostream>
using namespace std;

int main() {
    int n;
    int a[100000];
    int t,T;
    
    cin >> T;

    while(T--) {
        cin >> n;

        for (t=0;t<n;t++)
        cin >> a[t];

        for (t=0;t<n;t++) {
            if (t!=n-1) {
            if (a[t]!=0 && a[t+1]!=0 && a[t] == a[t+1]) {
                a[t] = a[t] + a[t+1];
                a[t+1] = 0;
            }
            }
            else
            break;
        }

        for (t=0;t<n;t++)
        cout << a[t] << " ";

        }


}