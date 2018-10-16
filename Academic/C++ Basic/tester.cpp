#include <iostream>
#include <algorithm>

using namespace std;
int counted=0;
int cnt=0;
int a[100],t,n,check,a1[100],m,n1,temp;
int track,out=0,out1=0;
static int rank1[100];
int record[100];
int b[100];

int rankCounter(int a[100]) {
int count;
    count = 2;
    rank1[0] = 1;
    // LeaderBoard Ready.
    for (t=0;t<n;t++) {
        if (a[t] == a[t-1]) {
            rank1[t] = rank1[t-1];
        } 
        if (a[t] != a[t-1] && t!=0) {
                rank1[t] = count++;
        }
        }
    return rank1[t];
}

int sortIt(int a[100]) {
    std::sort(a,a+n+n1,std::greater<int>());
    return a[n+n1+1];
}


int returnRank(int a[100],int b[100]) {
    for (t=0;t<n1;t++) {
        if (a[t]!=b[t])
        cnt++;

        if (a[t]==b[t])
        return rank1[cnt-1];
        
    }

}



int main() {
    int getRank;
    int c[100],cntag=0;
    cin>>n;
    
    for (t=0;t<n;t++)
    cin>>a[t];

    rankCounter(a);
      
    cin >> n1;

    for (t=0;t<n1;t++)
    cin >> b[t];

    for (t=0;t<n1;t++) {
        a[n] = b[t];
        sortIt(a);
        rankCounter(a);
        getRank = returnRank(a,b);
        c[cntag] = getRank;
        cntag++;
    }

     
    for (t=0;t<n+n1;t++)
    cout<<"Rank of Value " << " " << a[t] << " is " << rank1[t] << endl; 
    
    }
