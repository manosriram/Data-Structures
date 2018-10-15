#include <iostream>

using namespace std;

int main() {
    int a[5],t;

    for (t=0;t<5;t++) {
        cin>>a[t];
    }

    for (t=0;t<5;t+2) {
        a[t+1]=a[t];
    }

    for (t=0;t<5;t++)
    cout<<a[t];
}