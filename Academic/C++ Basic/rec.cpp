#include <iostream>

using namespace std;
int t,n1=0;
int callLinear(int a[30],int num,int n1) {
        if (a[n1] == num)
        cout << "Number found at position " << n1+1 << endl;
        else
        callLinear(a,num,n1+1);
    }



int main() {
    int key,a[30],num,n;

    cout << "Enter Number of Integers : " << endl;
    cin >> n;

    cout << "Enter the Integers : " << endl;
    for (t=0;t<n;t++)
    cin >> a[t];

    cout << "Enter the Number You Want To Search : " << endl;
    cin >> num;

    key = callLinear(a,num,n1);



}