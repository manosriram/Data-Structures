#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
 long long int a[1000000],b[1000000],i,j,t,n;
 int cnt;
 int T;
 
 cin >> T;
 
 while(T--) {
     cnt = 0;
     cin >> n;
     
     for (t=0;t<n;t++)
     cin >> a[t];
     
     for (i=0;i<3;i++) {
         for (j=0;j<n;j++) {
             if (i==0) {
                 if (a[j]==0){
                     b[cnt] = a[j];
                     cnt++;
                 }
             }
             
             else if (i==1) {
                 if (a[j] == 1) {
                     b[cnt] = a[j];
                     cnt++;
                 }
             }
             else if (i==2) {
                 if (a[j] == 2) {
                     b[cnt] = a[j];
                     cnt++;
                 }
             }
         }
     }
    for (t=0;t<n;t++)
    cout << b[t] << " ";

 cout << '\n';
 }    
}