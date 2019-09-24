#include <iostream>
#include "./BaseTemplate.hpp"
using namespace std;

void takeUp(TrieNode *root, string prefix) {

    if (root->eOF)
        cout << prefix << " ";
    
    if (isLastNode(root))
        return;
    
    for (int t=0;t<26;t++) {
        if (root->children[t]) {
            prefix.push_back(97 + t);
            takeUp(root->children[t], prefix);
            prefix.pop_back();
        }
    }
    return;
}

void displayContacts(TrieNode *root, string qry) {
    int n = qry.length(), level;
    TrieNode *crawl = root;
    string word;

    for (level=0;level<n;level++) {
        int ind = qry[level] - 'a';
        if (!crawl->children[ind])
            return;

        word.push_back(97 + ind);
        cout << "Suggestions for " << word << " ";
        crawl = crawl->children[ind];
        takeUp(crawl, word);
        cout << endl;
    }

}

int main() {
    TrieNode *root = new TrieNode();
    root = createNode();
    insert("gforgeeks", root);
    insert("geeksquiz", root);
    insert("gamble", root);
    insert("gallow", root);

    displayContacts(root, "ge");
}