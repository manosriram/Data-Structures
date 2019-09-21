#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    // Single Pointer
    int *singlePointer = &a;
    cout << *singlePointer << endl;  // 10

    // Double Pointer (To store array of Pointers.)
    int **doublePointer = new int *[5];  // Datatype is "int *" as it stores pointers."
    doublePointer[0] = &a;
    doublePointer[1] = &b;

    cout << *doublePointer[0] << " " << *doublePointer[1] << endl;    // 10 20
    cout << **doublePointer << " " << **(doublePointer + 1) << endl;  // 10 20
}