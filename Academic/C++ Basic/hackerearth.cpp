#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int b[100];
	int k,t,i,j;
    int cnt=0,len=0,cnt1=0;
	char str[26];
	int a[100];
	int n,r=0;
	
	cin >> n;
	if (n>=1 &&  n<=20) {
	
	
	while (r<n) {
		
	cin >> k;
	cin >> str;
	
	
	
	for (t=0;str[t]!='\0';t++)
	len++;
	
	
	
	for (t='a';t<'z';t++) {
		if (str[cnt1]==t) {
			a[cnt] = (int(t)-96);
			cnt++;
			cnt1++;
		}
		else
		continue;
	}
	
	cnt=0;
	
	for (i=0;i<len;i++) {
		for (j=len-1;j>=0;j--) {
			if (a[i]<k && a[j]<k && i<j ) {
				if (a[i]+a[j]==k) {
					cnt++;
				}
				else
				continue;
			}
			else
			continue;
		}
	}
	b[r]=cnt;
	r++;
}
}

for (t=0;t<r;t++)
cout << b[t] << endl;

}
