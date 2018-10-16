#include <iostream>

using namespace std;

int main() {
int x1,x2,v1,v2,t;

//0<=x1<x2<=10000 && 1<=v1<=10000 && 1<=v2<=10000
cin>>x1>>v1>>x2>>v2;

if (x1>=0 && x1<x2 && x1<=10000 && x2>=0 && x2<=10000 && x2>x1 && v1>=0 && v1<=10000 && v2>=0 && v2<=10000) {

for (t=0;t<10000;t++) { 
    x1 = x1 + v1;
    x2 = x2 + v2;

    if (x1 == x2) {
        break;
    }
    if (x1 != x2) {
        continue;
    }
}

if (x1==x2) {
cout<<"YES"<<endl;
}
if (x1!=x2) {
    cout<<"NO"<<endl;
}
}
}
