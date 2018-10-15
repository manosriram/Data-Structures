#include <iostream>
#include <string.h>
using namespace std;


// Rotate Function..
int rotateStr(int n,char str[],int len,int track,char str1[]) {
    int temp,i,t,cnt;
    track++;
for (i=0;i<n;i++) {
    temp = str[0];

    for (t=0;t<len;t++) {
        str[t] = str[t+1];
    }
    str[len-1] = temp;
}

return track;
}

//Check if the Strings are Equal..
bool check(char str[],char str1[]) {
    int cnt;
    cnt = strcmp(str,str1);

    if (cnt==0)
    return 1;

    else
    return 0;
}


// Rotate until Strings are Equal..
int loopRotate(int m,int p,char str[],char str1[],int len,int track) {
    int t;

    for (t=0;t<len-(m+p);t++) {
    
    track = rotateStr(m,str,len,track,str1);
    if (check(str,str1))
    return track;

    track = rotateStr(p,str,len,track,str1);
    if (check(str,str1))
    return track;

    }
}

int main() {

    int m,p;
    char str[1000],str1[1000];
    int track,checkCount,len;
    int T;

    cin >> T;

    while(T--) {
        track = 0;
        
        
        cin >> str;
        cin >> m >> p;

        len = strlen(str);
        strcpy(str1,str);

        track = rotateStr(m,str,len,track,str1);
        track = rotateStr(p,str,len,track,str1);       
        track = loopRotate(m,p,str,str1,len,track);

        cout << track << '\n';
              

    }
}

