#pragma once
#include "Base.hpp"

void Insert(string key, SuffixTree *root) {
    int n = key.end() - key.begin();
    SuffixTree *temp = root;

    for (int t=0;t<n;t++) {
        root = temp;
        for (int j=t;j<n;j++) {
            if (!root->branch[key[j] - 'a'])
                root->branch[key[j] - 'a'] = createNode();

            root = root->branch[key[j] - 'a'];
        }
        root->EOS = true;
    }
}
