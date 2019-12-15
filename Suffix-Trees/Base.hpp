#pragma once
#include <iostream>
#include <string.h>

using namespace std;

struct SuffixTree {
    SuffixTree *branch[26];
    bool EOS;
};

SuffixTree *createNode() {
    SuffixTree *temp = new SuffixTree();

    for (int t=0;t<26;t++) {
        temp->branch[t] = nullptr;
    }

    return temp;
}

#include "Insert.hpp"
#include "PrintTree.hpp"
