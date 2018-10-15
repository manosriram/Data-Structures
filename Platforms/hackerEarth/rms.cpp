#include <iostream>

using namespace std;

int main() {
    int n,t,i,cnt=0;
    int v[100],w[100];
    int sum1=0,sum2=0,sum3=0;
    int max;

    cin >> n;
    cin >> max;

    for (t=0;t<n;t++) {
    cin >> w[t];
    }

    for (t=0;t<n;t++) {
    cin >> v[t];
    }

for (t=0;t<n;t++) {
    if (sum1 < max) {
        sum1 += w[t];
        sum2 += v[t];
        cnt++;
    }
    else 
    break;
}

for (t=0;t<n;t++)
sum3 += v[t];

cout << sum3 - sum2;


}