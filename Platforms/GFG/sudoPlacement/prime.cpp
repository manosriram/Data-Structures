#include <iostream>
using namespace std;

int main() {
    int T,n,t;
    
    
    cin >> T;

    while (T--) {
        char s[10000];
        bool isPrime = true;
        int count=0,sum=0;
        cin >> n;

        for (t=0;t<n;t++)
        cin >> s[t];

        for (t=0;t<n;t++) {
            sum += int(s[t]);
        }

        for (t=2;t<=sum/2;t++) {
            if (sum % t == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        cout << "YES" << '\n';

        else
        cout << "NO" << '\n';

        // cout << sum;

        // cout << s;
    }
}