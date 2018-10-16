#include <iostream>

using namespace std;

int main() {
    int n,a[60],grade,b[60];
    int res,dif;

    cin >> n;
    
    if (n<=60) {
    
    for (int t=0;t<n;t++)
    cin >> a[t];

    for (int t=0;t<n;t++) {
        if (a[t]>=38) {
        res = (((a[t]/5)+1) * 5);
        dif = res-a[t];
        if (dif < 3) 
        a[t] = res;
        else
        continue;
    }
    }

    for (int t=0;t<n;t++)
    cout << a[t] << endl;

    }   
}