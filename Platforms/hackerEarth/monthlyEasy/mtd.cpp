#include <iostream>
using namespace std;

void removeE(int g, int arr[],int n) {
    for (int t=n;t>=0;t--) {
        if (arr[t] == g) {
            for (int h=t;h<n-t;h++) {
                arr[h] = arr[h+1];
            }
        }
    }
}


int main() {
int n,a,b,arr[10000];
int i,j,t;
int count=1;
int sum1=0;

cin >> n >> a >> b;

for (t=0;t<n;t++)
cin >> arr[t];

for (i=0;i<n;i++) {
    for (j=i+1;j<n-i;j++) {
        
        if (arr[i] == arr[j])
        count++;

        if (count >=3)
        break;
        
}
if (count == 3) {
sum1 += a+b;
count=1;
int g = arr[i];
removeE(g,arr,n);
}
if (count==2) {
sum1 += b;
count=1;
}

}
cout << sum1;

}