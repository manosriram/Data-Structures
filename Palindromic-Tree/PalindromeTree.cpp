#include <iostream>
#include <cstring>

using namespace std;

const int MAXN = 105000;

struct node {
    int next[26];
    int len;
    int a;
    int num;
};

int len;
char s[MAXN];
node tree[MAXN]; 
int num;            
int b;           
long long ans;

bool addLetter(int pos) {
    int cur = b, curlen = 0;
    int let = s[pos] - 'a';

    while (true) {
        curlen = tree[cur].len;
        if (pos - 1 - curlen >= 0 && s[pos - 1 - curlen] == s[pos])     
            break;  
        cur = tree[cur].a;
    }       
    if (tree[cur].next[let]) {  
        b = tree[cur].next[let];
        return false;
    }

    num++;
    b = num;
    tree[num].len = tree[cur].len + 2;
    tree[cur].next[let] = num;

    if (tree[num].len == 1) {
        tree[num].a = 2;
        tree[num].num = 1;
        return true;
    }

    while (true) {
        cur = tree[cur].a;
        curlen = tree[cur].len;
        if (pos - 1 - curlen >= 0 && s[pos - 1 - curlen] == s[pos]) {
            tree[num].a = tree[cur].next[let];
            break;
        }       
    }           

    tree[num].num = 1 + tree[tree[num].a].num;

    return true;
}

void initTree() {
    num = 2; b = 2;
    tree[1].len = -1; tree[1].a = 1;
    tree[2].len = 0; tree[2].a = 1;
}

int main() {
    

    gets(s);
    len = strlen(s);

    initTree();

    for (int i = 0; i < len; i++) {
        addLetter(i);
        ans += tree[b].num;
    }

    cout << ans << endl;

    return 0;
}
