#include <iostream>
using namespace std;

int main() {
    int a[10000],b[10000];
    int t,i,j;
    int n,T;
    

    cin >> T;

    while(T--) {
        int check=0;
        cin >> n;

        for (t=0;t<n;t++) 
            cin >> a[t];
        for (t=0;t<n;t++)    
            cin >> b[t];

        for (i=0;i<n;i++) {
            for (j=0;j<n;j++) {
                if (a[i] == a[j])
                check = 1;
                
                else
                continue;
            }
            if (check == 0) {
                break;
            }
            else
            continue;

        }

        if (check == 1)
        cout << "YES" << '\n';

        else
        cout << "NO" << '\n';

    }
}