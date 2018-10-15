#include <iostream>

using namespace std;

//Global :
int n,t;
int a[100];

void rotate(int n1) {
    int temp;
    temp = a[n1];

    for (t=n1;t<n;t++) {
        a[t] = a[t+1];
    }
    a[n-1] = temp;
    
}


int main() {
    cin >> n;

    for (t=0;t<n;t++)
    cin >> a[t];

for (t=0;t<n;t++) {
    if (a[t] > a[t+1]) {
    rotate(t);
    }
    
    else
    continue;

}

for (t=0;t<n;t++) {
    cout << a[t] << " ";
}
}