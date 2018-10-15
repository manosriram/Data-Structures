#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main() {
    char a[1000],g;
    int n,len,t,i,j;
    int b[1000];
    int count=0,counted=0;
    int maximum;

    cin >> a;

    len = strlen(a);

    for (i=0;i<len;i++) {
        for (j=len-1;j>i;j--) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        count += 1;
        b[i] = count;
        count = 0;
    }
    
    maximum = *max_element(b,b + len);

    for (t=0;t<len;t++) {
        if (b[t]==maximum) {
            g = a[t];
            }
        }
    
    for (t=0;t<len;t++) {
        if (a[t]==g){
            a[t] = a[t+1];
            counted++;
        }
    }

    len = strlen(a)-counted + 1;
    cout << len << '\n';
    
    // for (t=0;t<len-counted+1;t++)
    // cout << a[t] << " ";


}