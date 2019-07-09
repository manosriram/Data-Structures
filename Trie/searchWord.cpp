#include <iostream>
#include "BaseTemplate.h"
using namespace std;

int main()
{
    struct TrieNode *root = createNode();

    string paragraph[] = {"hey"
                          "there",
                          "i", "am", "manosrira", "manosriram", "and", "this", "is", "an", "example", "of", "trie", "data", "structure", "manomano", "hello", "helium", "heart", "hate", "anyways"};

    int n = sizeof(paragraph) / sizeof(paragraph[0]);
    for (int t = 0; t < n; t++)
    {
        insert(paragraph[t], root);
    }
    string key;
    // cin >> key;
    // search(key, root) ? cout << "Word found !" << '\n' : cout << "Word Not Found." << '\n';
    printDictionary(root);
}