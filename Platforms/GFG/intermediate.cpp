#include <iostream>
using namespace std;

int main() {
int n,T,a[10000];
int t;

cin >> T;

while(T--) {
    cin >> n;

    for (t=0;t<n;t++)
    cin >> a[t];

    for (t=0;t<n;t++) {
        
        if (a[t] > a[t+1] && t!=n-1)
        cout << a[t+1];

        if (t == n-1)
        cout << -1;
        
        else (a[t] < a[t+1] && t!=n-1)
        cout << -1;

        

        cout << " ";
    }
    cout << '\n';
}
}