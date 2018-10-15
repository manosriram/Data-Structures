#include <iostream>
#include <string.h>
#include <math.h>
#include <cmath>


using namespace std;

int main() {

//Initializations ..     
string name,a[100][100];
int n,t,len=0;
int row,col,i,j,cnt=0;
float root;
int a1=0,b1=0;

//Get the String..
getline(cin, name);

// //Removing the Spaces..
// name.erase(remove( name.begin(), name.end(), ' ' ), name.end() );

//Calculating the Length of the String..
for (t=0;name[t]!='\0';t++) {
    len++;
}

root = sqrt(len);

//Calculating the Rows and Columns..
row = floor(root);
col = ceil(root);



for (i=0;i<row;i++) {
    for (j=0;j<col;j++) {
        if (cnt <= len) {
        a[i][j] = name[cnt];
        cnt++;
        }   
    }   
}


for (i=0;i<col;i++) {
    for (j=0;j<col;j++) {
        if (a1 <= row) {
        cout << a[a1][b1];
        a1++;
        }
        if (a1 > row) 
        a1=0;
    }        
    
    if (b1 <= col)
    b1++;
    
    if (b1 > col)
    b1=0;
    
    cout << " ";

}
cout << endl;
}


