#include <iostream>

using namespace std;

int main() {
    int a[100],t,n,r;
    int temp;

    cin >> n >> r;

    if (r <= n && n<=100000) {

    for (t=0;t<n;t++)
    cin >> a[t];

    for (t=0;t<r;t++) {
        temp = a[n-1];

        for (int i=n-1;i>=0;i--) {
            a[i+1] = a[i];
        }
        a[0] = temp;
    }

    for (t=0;t<n;t++)
    cout << a[t] << " ";



    }
  }
