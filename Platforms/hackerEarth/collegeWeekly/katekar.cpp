#include <iostream>
using namespace std;

int main() {
    int n,a[100000],count=0;
    int t,next;
    cin >> n;

    for (t=0;t<n;t++)
    cin >> a[t];

    for (t=0;t<n-1;t++) {
        next = a[t+1];

        if (a[t] == next-1) {
            count++;
        }

        else if (a[t] == next) {
            count += 2;
            break;
        }

        else
        break;
    }

    cout << count;
}