#include <iostream>

using namespace std;

int t,n,len=0;



int cnt1=0;
string s;
char temp;


int main() {
  static int cnt;
  static string lock[30];
  char a[100];
  int a1[100];
  cin >> s;

   for (t=0;s[t]!='\0';t++)
   len++;
cin >> n;
  for (t=0;t<n;t++) {
    cin >> a[t] >> a1[t];
  }

  for (t=0;t<n;t++) {
    if (a[t]=='L') {

      for (t=0;t<a1[t];t++) {
      temp = s[0];

      for (int i=0;i<n-1;i++) {
          s[i] = s[i+1];
      }
      s[n-1] = temp;

  }
  lock[cnt] = s[0];
  cnt++;
    }


    if (a[t]=='R') {

      for (t=0;t<a1[t];t++) {
      temp = s[len-1];

      for (int i=len-1;i>=0;i--) {
          s[i+1] = s[i];
      }
      s[0] = temp;
    }
    lock[cnt] = s[0];
    cnt++;
  }


}

for (t=0;t<cnt;t++)
cout << lock[t];

}
