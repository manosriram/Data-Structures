#include <iostream>
#include <array>
#include <algorithm>


using namespace std;

int main() {
    int count=0;
    int c[100];
    string a[100],b[100],f[100];
    int n,t,i,j;
    int cnt=0;
    int test=0;
    int d,n1;

    cin >> n;
if (n>=1 && n<=100) {
    while (test<n) {
    
    cin >> n1;
    for (t=0;t<n1;t++) {
    cin >> a[t];
    b[t] = a[t];
    }
int count1=0;
    for (i=0;i<n1;i++) {
        for (j=i+1;j<n1-i;j++) {
            if (b[i] == b[j]) {
                for (t=j;t<n1;++t) {
                    b[t] = b[t+1];
                }
            count1++;
            }
        }
    }

for (i=0;i<count1;i++) {
    for (j=0;j<n1;j++) {
        if (a[j]==b[i]) {
            count++;
        }
    }
    c[cnt] = count;
    count=0;
    cnt++;
}

int tr;
sort(c,c+count1,greater<int>());

d = count1/2;

f[test] = b[d];

test++;
    }
}
    for (t=0;t<test;t++)
    cout << f[t] << '\n';
}
