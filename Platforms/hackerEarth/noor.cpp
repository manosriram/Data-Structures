#include <iostream>
using namespace std;

int main() {
    int n,s[100000],e[100000];
    int t,i,j;
    int count;
    int T;

    cin >> T;

    while(T--) {
        cin >> n;
        
        count = 0;

        for (t=0;t<n;t++) {
            cin >> s[t] >> e[t];
        }

        for (t=0;t<n;t++) {
            for (j=t+1;j<n-t;j++) {
                if (s[t] > e[t]){
                if (s[t] <= e[j])
                count++;
            }
            }
        }
        cout << count << '\n';
    }


}