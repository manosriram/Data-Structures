#include <iostream>
#include <string>
using namespace std;

/*
    This is an Naive Implementation which takes O(n^2Logn) Time.
*/

struct Suffix {
    int index;
    char *suff;
};

bool comperator(Suffix a, Suffix b) {
    return strcmp(a.suff, b.suff) < 0 ? 1 : 0;
}

void printSuffixArray(Suffix *Arr, int n) {
    for (int t=0;t<n;t++) {
        cout << Arr[t].index << " " << Arr[t].suff << endl;
    }
    return;
}

void buildSuffixArray(char *text, int n) {
    Suffix Arr[n];

    for (int t=0;t<n;t++) {
        Arr[t].index = t;
        Arr[t].suff = (text + t);
    }

    sort(Arr, Arr+n, comperator);
    printSuffixArray(Arr, n);

}

int main() {
    char text[] = "banana";
    buildSuffixArray(text, 6);
}
