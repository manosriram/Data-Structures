#include <string.h>
#include <iostream>
#include <vector>
#define ALPHA_SIZE 26
using namespace std;

struct TrieNode {
    bool EOS;
    TrieNode *children[ALPHA_SIZE];

    TrieNode() {
        EOS = false;
        for (int t = 0; t < ALPHA_SIZE; t++)
            children[t] = NULL;
    }
};

TrieNode *createNode() {
    TrieNode *Node = new TrieNode();
    return Node;
}

void insertWord(TrieNode *root, string key) {
    TrieNode *crawl = root;

    for (int t = 0; t < key.length(); t++) {
        int ind = key[t] - 'a';

        if (!crawl->children[ind])
            crawl->children[ind] = createNode();

        crawl = crawl->children[ind];
    }
    crawl->EOS = true;
    return;
}

string getReplacement(TrieNode *root, string query) {
    TrieNode *crawl = root;
    string temp = query, ret;

    for (int t = 0; t < query.length(); t++) {
        int ind = query[t] - 'a';
        ret += 97 + ind;

        if (!crawl->children[ind])
            return temp;

        crawl = crawl->children[ind];

        if (crawl->EOS)
            return ret;
    }
}

string replaceString(TrieNode *root, string sent) {
    TrieNode *crawl = root;
    string res, temp;

    for (int t = 0; t < sent.length(); t++) {
        if (sent[t] == ' ') {
            res += getReplacement(root, temp);
            temp = "";
            res += " ";
        } else {
            temp += sent[t];
        }
    }
    res += getReplacement(root, temp);
    return res;
}

int main() {
    TrieNode *root = new TrieNode();
    vector<string> vt;

    vt.push_back("cat");
    vt.push_back("bat");
    vt.push_back("rat");
    string sent = "the cattle was rattled by the battery";

    for (int t = 0; t < vt.size(); t++)
        insertWord(root, vt[t]);

    cout << replaceString(root, sent) << endl;
}