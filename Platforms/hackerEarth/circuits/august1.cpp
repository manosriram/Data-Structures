#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;
 
// Driver code
int main()
{
int t,n;
char a[1000],a1[1000],s2[1000],s1[1000];
int len=0,len1=0,len2;
int i,j;
int count=0;
int b[1000];
int max=0;
int store;
char rem;
int cnt=0;



cin.get(a,10);
   
   for (t=0;a[t]!='\0';t++) {
   a1[t]=a[t];
   len++;
   }

   for (t=0;a1[t]!='\0';t++)
   len1++;

   for (t=0;t<len1;t++) {
       for (int t1=0;t1<len;t1++) {
           if (a[t] == a[t1]) {
           count++;
           b[t] = count;
           }
       }
       count=0;
   }

    for (t=0;t<len1;t++) {
        if (b[t] > max) {
        max = b[t];
        store = t;
        }
    }

for (t=0;t<len;t++) {
    if (a1[t]!=a1[store]) {
        s2[cnt] = a1[t];
        cnt++;
    }
}
len2 = strlen(s2);
cout << len2 << '\n';

}
