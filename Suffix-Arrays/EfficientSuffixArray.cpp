#include <iostream>
using namespace std;

struct Suffix {
    int index;
    int rank[2];
};

bool cmp(Suffix a, Suffix b) {
    return (a.rank[0] == b.rank[0]) ? (a.rank[1] < b.rank[1] ? 1 : 0) : (a.rank[0] < b.rank[0] ? 1 : 0);
}

int *buildEffSuffixArray(char *txt, int n) {
    Suffix suffix[n];

    for (int t=0;t<n;t++) {
        suffix[t].index = t;
        suffix[t].rank[0] = txt[t] - 'a';
        if (t+1 < n)
            suffix[t].rank[1] = txt[t+1] - 'a';
        else
            suffix[t].rank[1] = -1;
    }
    stable_sort(suffix, suffix+n, cmp);
    int indices[n];

    for (int k=4;k<2*n;k *= 2) {
        
        int rank = 0;
        int prevRank = suffix[0].rank[0];
        suffix[0].rank[0] = rank;
        indices[suffix[0].index] = 0;

        for (int t=1;t<n;t++) {
            if (suffix[t].rank[0] == prevRank && suffix[t].rank[1] == suffix[t-1].rank[1]) {
                prevRank = suffix[t].rank[0];
                suffix[t].rank[0] = rank;
            } else {
                prevRank = suffix[t].rank[0];
                suffix[t].rank[0] = ++rank;
            }
            indices[suffix[t].index] = t;
        }

        for (int t=0;t<n;t++) {
            int nextIndex = suffix[t].index + (k/2);
            if (nextIndex < n)
                suffix[t].rank[1] = suffix[indices[nextIndex]].rank[0];
            else
                nextIndex = -1;
        }
        stable_sort(suffix, suffix + n, cmp);
    }

    int *suffArr = new int[n];
    for (int t=0;t<n;t++)
        suffArr[t] = suffix[t].index;

    return suffArr;
}

int main() {
    char text[] = "banana";
    int n = strlen(text);

    int *ret = new int[n];

    ret = buildEffSuffixArray(text, n);

    for (int t=0;t<n;++t)
        cout << ret[t] << " ";
}
