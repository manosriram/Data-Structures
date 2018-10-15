#include <iostream>

using namespace std;

int main() {
    int t,j,a[100000],tar,count,n;

    cin >> n >> tar;

    for (t=0;t<n;t++)
    cin>>a[t];

    for (t=0;t<n;t++) {
        for (j=n-1;j>=0;j--) {
            if (a[t] > a[j]) {
                if (a[t] - a[j] == tar) {
                    count++;
                }
                else{
                    continue;
                }
            }
        }
    }
    cout << count;
}