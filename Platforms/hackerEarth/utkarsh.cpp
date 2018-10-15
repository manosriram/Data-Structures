#include <iostream>

using namespace std;

int main() {
    int n,i=0,t,a[100];
    int b[100];
    int cnt=0,sum=0;

    cin >> n;
    
    for (t=0;t<n;t++)
    cin >> a[t];

while(i<n) {
    for (t=1;t<=n;t++) {
        sum += t;
        if (sum == a[t-1]) {
            cnt++;
            break;
        }
        else
        cnt++;
    }
    b[i] = cnt;
    i++;
    cnt = 0;
    sum=0;
}

for (t=0;t<n;t++) {
cout << b[t];
cout << endl;
 }

    

}