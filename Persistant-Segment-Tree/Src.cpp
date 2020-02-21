int arr[] = {1, 2, 3, 4, 5};
int n = sizeof(arr)/sizeof(arr[0]);

#include <iostream>
#include "Build.hpp"
#include "Structure.hpp"
#include "Upgrade.hpp"
#define HIGH 264

int main() {
    int a[HIGH];
    for (int t=0;t<n;++t) a[t] = arr[t];

    Node *Version[HIGH];

    Node *root = new Node(nullptr, nullptr, 0);
    Build(root, 0, n-1);

    Version[0] = root;

    Version[1] = new Node(nullptr, nullptr, 0);
    Upgrade(Version[0], Version[1], 0, n-1, 4, 1); 

    printTree(Version[1]);
    cout << endl;
     
    cout << Query(Version[0], 0, n-1, 2, n-1);
}
