#include <iostream>
using namespace std;

int main() {
int a[4],b[4];
int alice=0,bob=0;

cin >> a[0] >> a[1] >> a[2];
cin >> b[0] >> b[1] >> b[2];

for (int t=0;t<3;t++) {

if (a[t] > b[t])
alice++;

else if (b[t] > a[t])
bob++;

else 
continue;

}

cout << alice << " " << bob << endl;
}