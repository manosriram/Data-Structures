#include <iostream>

using namespace std;

int main() {
    int n,t,flag=0,len=0;
    char a[50];

    cin >> a;
    
    for (t=0;a[t]!='\0';t++) {
        len++;
    }

    for (t=0;t<len;t++) {
        if (a[t]==1 || a[t] == 8 || a[t] == 9 || a[t]==0) {
            flag=0;
        }
        else if (a[t]!=1 || a[t] != 8 || a[t] != 9 || a[t]!=0) {
        flag=1;
        break;
        }
    }

    if (flag==0)
    cout << "YES";

    if (flag==1)
    cout << "NO";

}