#include <iostream>
using namespace std;

int main() {
	int n;
	int a[10000],t,d;
	int T;
	
	cin >> T;
	
	while(T--) {
	    cin >> n >> d;
	    
	    while (n>0) {
	        if (n%10 == d) {
            n /= 10;
	        cout << n << " ";
            }
	        else
	        continue;
	    }
	}
	
	return 0;
}