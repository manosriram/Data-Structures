#include <iostream>

using namespace std;

//Class Starts Here....
class ranker {
public:
int ranked,value;


//Get the Rank of the User...
void getRank() {
    cin>>ranked;
}

//Show the Ranks of the Members..
void showRank() {
    cout<<ranked;
}

};
//End of Class...

//The Main Function..
int main() { 
int t,n,alice[50];
ranker arr[50];

cin>>n;

for (t=0;t<n;t++)
cin>>arr[t].value;

arr[0].ranked++;

//Calculating the Rank Algorithm...
for (t=1;t<n;t++) {
    if (arr[t].ranked == arr[t-1].ranked){ 
        arr[t].ranked = arr[t-1].ranked;
    }
    if (arr[t] != arr[t-1]) {
    arr[t].ranked++;
    }

}
}