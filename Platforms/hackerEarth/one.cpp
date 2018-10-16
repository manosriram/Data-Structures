#include <iostream>

using namespace std;

int main() {

    int n,a[100],d,b[100];
    cin >> n;

    for (int t=0;t<n;t++)
    cin >> a[t];

    cin >> d;

    for (int t=0;t<d;t++)
    cin >> b[t];

    for (int t=0;t<n;t++) {
        for (int f=0;f<d;f++) {
        a[t] = a[t]/b[f];
    }
    }

for (int t=0;t<n;t++) {
    cout <<a[t] << " ";
}

}