#include <iostream>

using namespace std;

int main() {
string s;
int t,leng;
    cin >> s;
char temp;
    for (t=0;s[t]!='\0';t++)
    leng++;

    for (t=0;t<leng;t++) {
        if (s[t]==' ') {
            for (int j=leng-t;j<leng;j++) {
            temp = s[t];
            s[t] = s[t+1];
            s[t+1] = temp;
        }
        }

    }
 cout <<s;
}