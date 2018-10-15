#include <iostream>
using namespace std;

int main() { 
    int cnt=0;
    int n,temp;
    int T;

    cin >> T;

    while(T--) {
        cnt = 0;
        cin >> n;
        n++
        while(1) {
        temp = n;

        while(temp > 0) {
            if (temp%10 == 3) 
                cnt++;
                temp /= 10;
            
        
            if (cnt >= 3) {
                cout << n << '\n';
                break;
            }
            else {
                cnt = 0;
                n++;
            }
        }
        }
    }
}