#include <iostream>

using namespace std;

int main() {
    int a[100000],t,i,j,temp;
    int T,one=0;
    int n,m,b[100000];
    int cache[100000];
    int cnt=0;
    
//     cin >> T;
// if (T>=1 && T<=100) {
// while(one<T) {
    
    cin >> n;  
    m+=n;

    for (t=0;t<n;t++) {
    cin >> a[t];
    }

    for (t=0;t<n;t++) {
        if (t%2==0) {
            if (a[t]%2!=0){
                for (j=t+1;j<n;j++) {
                    if (a[j] % 2 == 0) {
                        temp = a[t];
                        a[t] = a[j];
                        a[j] = temp;
                        break;
                }
            }
        }
    }

    if (t%2!=0) {
        if (a[t]%2==0) {
            for (j=t+1;j<n;j++) {
                if (a[j] % 2 != 0) {
                    temp = a[t];
                    a[t] = a[j];
                    a[j] = temp;
                    break;
                }
            }
        }
    }
}


for (i=m-n;i<m;) {
    for (j=0;j<n;j++) {
        b[i] = a[j];
        i++;
    }
}
one++;
cache[cnt] = n;
cnt++;


int two=0;

// for (t=0;t<m;t++) {
//     if (t==cache[two]) {
//     cout << '\n';
//     two++;
//     t--;
//     }
//     else
//     cout << b[t] << " ";
// }
// cout << '\n';
// }

for (t=0;t<m;t++)
cout << b[t] << " ";
}