#include <iostream>

using namespace std;

int main() {
    int n,a[100],sum=0;
    static int y;
    cin >> n;
    
    for (int t=0;t<n;t++)
    cin >> a[t];

    for (int t=0;t<n;t++)
    sum = sum + a[t];

    while ( (y*n) <= sum ) {
        y++;
    }

    cout << y;
    cout << endl;


    
}