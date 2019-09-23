#include <iostream>
#include <string>
#define alpha_size 26
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
using namespace std;
string word;
struct TrieNode {
    bool eOF;
    TrieNode *children[alpha_size];
    int freq;
};

// Create and Return a New Trie Node.
struct TrieNode *createNode() {
    TrieNode *pNode = new TrieNode;
    pNode->eOF = false;

    for (int t = 0; t < alpha_size; t++) {
        pNode->children[t] = NULL;
    }
    return pNode;
}

// Insert a word into a Trie.
void insert(string key, TrieNode *root) {
    TrieNode *crawl = root;

    for (int t = 0; t < key.length(); t++) {
        int index = key[t] - 'a';

        if (!crawl->children[index]) {
            crawl->children[index] = createNode();
        }

        crawl = crawl->children[index];
        // crawl->freq++; Uncomment for Count of every node hit count.
    }
    crawl->freq++;  // For the count of word hit count.
    crawl->eOF = true;
}

// Search for a word in the Dictionary.
bool search(string key, TrieNode *root) {
    TrieNode *crawl = root;

    for (int t = 0; t < key.length(); t++) {
        int index = key[t] - 'a';

        if (!crawl->children[index])
            return false;

        crawl = crawl->children[index];
    }
    return (crawl != NULL && crawl->eOF);
}

bool isLastNode(TrieNode *root) {
    for (int t = 0; t < alpha_size; t++) {
        if (root->children[t])
            return false;
    }
    return true;
}

void suggestWords(string prefix, TrieNode *root) {
    if (root->eOF == true)
        cout << prefix << endl;

    if (isLastNode(root)) {
        return;
    }

    for (int t = 0; t < alpha_size; t++) {
        if (root->children[t]) {
            prefix.push_back(97 + t);
            suggestWords(prefix, root->children[t]);
            prefix.pop_back();
        }
    }
    return;
}

int autoSuggest(TrieNode *root, const string query) {
    TrieNode *crawl = root;
    int level;
    int n = query.length();

    for (level = 0; level < n; level++) {
        int ind = CHAR_TO_INDEX(query[level]);

        if (!crawl->children[ind])
            return 0;

        crawl = crawl->children[ind];
    }

    bool isWord = (crawl->eOF == true);
    bool isLast = isLastNode(crawl);

    if (isWord && isLast) {
        cout << query << endl;
        return -1;
    }

    if (!isLast) {
        string prefix = query;
        suggestWords(prefix, crawl);
        return 1;
    }
    return 0;
}

void printDictionary(TrieNode *root) {
    if (root->eOF)
        cout << word << endl;

    if (isLastNode(root))
        return;

    for (int t = 0; t < alpha_size; t++) {
        if (root->children[t]) {
            word.push_back(97 + t);
            printDictionary(root->children[t]);
            word.pop_back();
        }
    }
    return;
}