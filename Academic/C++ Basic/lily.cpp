#include <iostream>

using namespace std;

long int temp;
static int cnt;
long int t,i,a[100],n;
int j=0,k=n-1;

int swap(int j,int k) {
    temp = a[j];
    a[j] = a[k];
    a[k] = temp;
    cnt++;
    return cnt;
}

int main() {
    
    cin >> n;

    for (t=0;t<n;t++)
    cin >> a[t];

    while (j < k && a[j] > a[k]) {
       cnt = swap(j,k);
       j++;
       k--;
    }

    cout << cnt;
    
}