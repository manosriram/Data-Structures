#include <iostream>

using namespace std;

int main() {
    int a[30][30],temp1=0,temp2=0,temp3=0,temp4=0,temp5=0,temp6=0,temp7=0,temp8=0,i,j,t,r,c;
    int result;
    int loop,magicNumber;
    

    cout << "Enter Number of Rows and Columns : " << endl;
    cin >> r >> c;
int row=0,col=r-1;
magicNumber = (r * (r*r+1))/2;

    cout << "Enter Matrix Elements : " << endl;
    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            cin >> a[i][j];
        }
    }

    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            if (i==0)
            temp1 += a[i][j];

            if (i==1)
            temp2 += a[i][j];

            if (i==2)
            temp3 += a[i][j];
        }
    }

    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            if (j==0)
            temp4 += a[i][j];

            if (j==1)
            temp5 += a[i][j];

            if (j==2)
            temp6 += a[i][j];
        }
    }


for (i=0;i<r;i++) {
    for (j=0;j<c;j++) { 
        if (i==j)
        temp7 += a[i][j];
    }
}

for (loop=0;loop<r;loop++) {
    temp8 += a[row][col];
    row++;
    col--;
}  


// cout << "Temp1 = " << temp1 << endl << "Temp2 = " << temp2 << endl << "Temp3 = " << temp3 << endl;
// cout << "Temp4 = " << temp4 << endl << "Temp5 = " << temp5 << endl << "Temp6 = " << temp6 << endl;
// cout << "Temp7 = " << temp7 <<endl;
// cout << "Temp8 = " << temp8 <<endl;

if (temp1 == magicNumber && temp2 == magicNumber && temp3 == magicNumber && temp4 == magicNumber && temp5 == magicNumber && temp6 == magicNumber && temp7 == magicNumber && temp8 == magicNumber)
cout << "It's a Magic Square!!" << endl;
else
cout << "It's Not a Magic Square.." << endl;

}