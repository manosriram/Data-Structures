#include <iostream>
using namespace std;

int main() {
    int a[100000];
    int t,n,temp,i,j;
    int T,d;
    cin >> T;

    while (T--) {
        cin >> n >> d;

        for (t=0;t<n;t++)
        cin >> a[t];


        for (t=0;t<d;t++) {
            temp = a[0];

            for (i=0;i<n;i++)
            a[i] = a[i+1];

            a[n-1] = temp;
        }

        for (t=0;t<n;t++)
        cout << a[t] << " ";

        cout <<'\n';
    }
}