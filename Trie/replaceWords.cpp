#include <string.h>
#include <iostream>
using namespace std;

int main() {
    string a = "hey there from the earth";
    string rep = "world";

    cout << a << endl;
    a.replace(0, 3, rep);
    cout << a << endl;
}