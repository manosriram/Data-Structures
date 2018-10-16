#include <iostream>
using namespace std;

int main() {
    int max[100],t,j,n;
    int count=0,cnt=0;
    int a[100];
    int jumps=0;

    cin >> n;

    for (t=0;t<n;t++)
    cin >> a[t];

    int last;
    last = a[n-1];

    for (t=0;t<n;t++) {
        if (a[t] == last) {
            for (j=t+1;j<n;j++) {
                if (a[j] == a[t]) {
                max[cnt] = count+1;
                cnt++;
                break;
                }
                count++;
            }
        }
        else {
            max[cnt] = n-t;
            cnt++;
            continue;
        }
        count=0;
    }

    for (t=0;t<cnt;t++) {
        if (max[t] > jumps)
        jumps = max[t];
    }

    cout << jumps << '\n';
}

