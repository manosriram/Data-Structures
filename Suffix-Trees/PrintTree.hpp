#pragma once
#include "Base.hpp"

void Print(SuffixTree *root, string st) {
    if (root->EOS)
        cout << st << endl;

    for (int t=0;t<26;t++) {
        int in = t+97;
        if (root->branch[t]) {
            st.push_back(in);
            Print(root->branch[t], st);
            st.pop_back();
        }
    }

}
