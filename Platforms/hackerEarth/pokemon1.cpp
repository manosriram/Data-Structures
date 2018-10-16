#include <iostream>

using namespace std;

int main() {
  int a[100000],n,r;

  cin >> n >> r;

  for (int t=0;t<n;t++)
  cin >> a[t];

  for (int t=0;t<r;t++) {
    for (int i=1;i<n+1;i++) {
    a[i] = a[i-1] | a[i];
  }
  }

  for (int t=0;t<n;t++)
  cout << a[t] << " ";

}
