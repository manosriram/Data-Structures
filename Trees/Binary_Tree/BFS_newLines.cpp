#include <iostream>
#include <queue>
#include "createDefaultTree.hpp"
#include "basicTreeTemplate.h"
using namespace std;

void BFSNL(BNode *root) {
    queue<BNode *> q;
    q.push(root);
    int ct = q.size();
    while (!q.empty()) {
        while (ct--) {
            BNode *now = q.front();
            cout << now->data << " ";
            q.pop();

            if (now->left) q.push(now->left);
            if (now->right) q.push(now->right);
        }

        ct = q.size();
        cout << endl;
    }
}

int main() {
    BNode *root = createDefaultTree();

    BFSNL(root);
}

