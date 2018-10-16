#include <iostream>

using namespace std;

int main(){ 
    int r,c,t,j;
    cin>>r>>c;
    int **array = new int* [100];
    int **transpose = new int* [100];
    
    for(int i = 0; i < r; ++i) {
    array[i] = new int[c];
    transpose[i] = new int[c];
    }
    
    for (t=0;t<r;t++) {
        for (j=0;j<c;j++) {
            cin>>array[t][j];
       }
    }
    
    for (t=0;t<r;t++)
    for (j=0;j<c;j++)
    transpose[j][t] = array[t][j];
 

    for (t=0;t<r;t++)
    for (j=0;j<c;j++)
    cout<<transpose[t][j]<<" ";

    for (int i=0;i<r;i++){
    delete [] array[i];
    delete [] transpose[i];
    }


}