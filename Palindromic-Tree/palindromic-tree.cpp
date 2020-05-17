#include <iostream>
#include <string.h>
using namespace std;
const int N = 1e5+10;
int tree[N][26], idx;
int len[N], link[N], t;
char s[N];

void extend(int p) {
    while (s[p - len[t] - 1] != s[p]) t = link[t];
    int x = link[t], c = s[p] - 'a';
    while (s[p - len[x] - 1] != s[p]) x = link[x];
    if (!tree[t][c]) {
        tree[t][c] = ++idx;
        len[idx] = len[t] + 2;
        link[idx] = len[idx] == 1 ? 2 : tree[x][c];
    } t = tree[t][c];
}

int main() {
    len[1] = -1, link[1] = 1;
    len[2] = 0, link[2] = 1;
    idx = t = 2;

    cin >> s;
    int n = strlen(s);
    for (int t=0;t<n;++t)
        extend(t);

    for (int t=0;t<=n;++t) {
        for (int tt=0;tt<26;++tt) {
            cout << tree[t][tt] << " ";
        }
        cout << endl;
    }
}
