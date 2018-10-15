#include <iostream>

using namespace std;

int main() {
    int a,b;
    int cnt=0,max,min;
    int u=1,v=1;
    cin >> a >> b;
    
    if (a > b) {
    max = a;
    min = b;
    }
    else {
    max = b;
    min = a; 
    }

for (int t=0;t<min/2;t++ ) {
    if (u < a/2 || v < b/2) {
        if (a % u == 0 && b % v == 0)  {
        cnt++;
        }
        u++;
        v++;
    }
}    
    cout << cnt;
    cout << endl;


}