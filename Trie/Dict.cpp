#include <chrono>
#include <iostream>
#include "./BaseTemplate.hpp"
#define clck high_resolution_clock::now();
#define differ duration_cast<microseconds>(stop - start);
using namespace std;
using namespace std::chrono;

void takeUp(TrieNode *root, string prefix) {
    if (root->eOF)
        cout << prefix << " ";

    if (isLastNode(root))
        return;

    for (int t = 0; t < 26; t++) {
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

    for (level = 0; level < n; level++) {
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
    auto start = clck;

    TrieNode *root = new TrieNode();
    root = createNode();
    insert("gforgeeks", root);
    insert("geeksquiz", root);
    insert("gamble", root);
    insert("gallow", root);

    string words[] = {
        "abalones",
        "Abama",
        "abamp",
        "abampere",
        "abamperes",
        "abampsbbye",
        "Abbyville",
        "abboccato",
        "abbogada",
        "Abbot",
        "abbotcy",
        "abbotcies",
        "abbotnulliu"};

    for (int t = 0; t < 1000000; t++) {
        insert(words[t % 13], root);
    }

    auto stop = clck;
    auto duration = differ;
    cout << duration.count() << " microseconds " << endl;
}