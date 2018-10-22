//C
// Created by Mano Sriram on 16/10/18.
//

#include <iostream>
using namespace std;

int main() {
    int n,t,T;
    char sel;
    int arr[100000];

    cin >> T;
    while(T--) {
        cin >> sel >> n;

        if (sel == 'L') {
            int i;
            for (i=T-1;i>=0;i--) {
                arr[i+1] = arr[i];
            }
            arr[0] = n;
        }

        else if (sel == 'R') {
            arr[T+1] = n;

        }

        else if (sel == '?') {
            int i;

            for (i=0;i<T;i++) {
                if (arr[i] == n) {
                    cout << i << endl;
                    break;
                }
            }
        }

    }
}