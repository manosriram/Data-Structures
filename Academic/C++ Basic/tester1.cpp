#include <iostream>

using namespace std;

int main() {
    string s;
    int c[40];
    int cnt=0,t,i=0;

    cin >> s;
    
    while (s[i]!='\0') {
        if (s[i]==',') {
            i++;
        }
        c[cnt] = s[i];
        if (s[i]==',')
        i--;
        else
        i++;

        cnt++;
    }

    for (t=0;t<7;t++) {
    cout << char(c[t]);
    cout << " ";
    }
    cout << int(c[0]+1);
    cout <<endl;

}