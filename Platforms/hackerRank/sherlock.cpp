#include <iostream>

using namespace std;

int main() {
    string lock[50];
    int n1,n,t,a[100];
    static int cnt;
    int i1=0;
    int j,k,i;
    int sum1=0,sum2=0;
    int mid;


    cin >> n1;

    while (i1 < n1) {

        cin >> n;

        for (t=0;t<n;t++)
        cin >> a[t];

for ()
        

        if (sum1 + sum2 == a[mid]) 
        lock[cnt] = "YES";
        
        if (sum1 + sum2 != a[mid])
        lock[cnt] = "NO";
        
        cnt++;
        i1++;
        sum1=0;
        sum2=0;
    }

    for (t=0;t<n1;t++)
    cout << lock[t] << '\n';




}