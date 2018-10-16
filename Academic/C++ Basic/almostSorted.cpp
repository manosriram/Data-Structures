#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n,k,a[100000],t;
    int i,j;
    int cnt=0;
    cin >> n >> k;

    i = 0;
    j = n-1;

    for (t=0;t<n;t++)
    cin >> a[t];

while (i < j) {

  if (abs(a[i] - a[j]) == k) {
    cnt++;
    i++;
    j--;
  }

  else if (abs(a[i]- a[j]) > k || abs(a[i] - a[j] < k)) {
    j--;
     }

}

    cout << cnt;
    cout << endl;

}
