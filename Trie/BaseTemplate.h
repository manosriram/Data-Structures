#include <iostream>
#include <string>
#define alpha_size 26
using namespace std;

struct TrieNode
{
    bool eOF;
    struct TrieNode *children[alpha_size];
};

// Create and Return a New Trie Node.
struct TrieNode *createNode()
{
    struct TrieNode *pNode = new TrieNode;
    pNode->eOF = false;

    for (int t = 0; t < alpha_size; t++)
    {
        pNode->children[t] = NULL;
    }
    return pNode;
}

// Insert a word into a Trie.
void insert(string key, struct TrieNode *root)
{
    struct TrieNode *crawl = root;

    for (int t=0;t<key.length();t++) {
        int index = key[t] - 'a';

        if (!crawl->children[index])  {
            crawl->children[index] = createNode();
        }

        crawl = crawl->children[index]; 
    }
    crawl->eOF = true;
}

// Search for a word in the Dictionary.
bool search(string key, struct TrieNode *root) {
    struct TrieNode *crawl = root;

    for (int t=0;t<key.length();t++) {
        int index = key[t] - 'a';

        if (!crawl->children[index]) return false;

        crawl = crawl->children[index];
    }
    return (crawl!=NULL && crawl->eOF);
}