#include <iostream>
#define MAX 264
using namespace std;
bool contains[MAX][2];

bool checkPresence(int n) {
    if (n < 0)
        return contains[abs(n)][1];
    else
        return contains[n][0];
}

void insert(int n) {
    if (n < 0)
        contains[abs(n)][1] = true;
    else
        contains[n][0] = true;
}

int main() {
    insert(1);
    insert(-3);

    cout << checkPresence(-3); // 1
}

