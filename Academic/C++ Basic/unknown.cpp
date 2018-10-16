#include <iostream>

using namespace std;

int main() {
    char inp[30];
    int t;
    static int count;
  
    cin >> inp;

    for (t='a';t<'z';t++) {
        if (inp[count]==t) {
        cout<<inp[count];
        count++;
        }
        else
        count++;
        continue;
    }
}