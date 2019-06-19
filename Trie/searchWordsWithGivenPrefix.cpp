#include <iostream>
#include "BaseTemplate.h"
using namespace std;

int main()
{
    struct TrieNode *root = createNode();
    string paragraph[] = {"hey"
                          "there",
                          "i", "am", "manosrira", "manosriram", "master", "and", "this", "is", "an", "example", "of", "trie", "data", "structure", "manomano", "hello", "helium", "heart", "hate"};

    int n = sizeof(paragraph) / sizeof(paragraph[0]);
    for (int t = 0; t < n; t++)
    {
        insert(paragraph[t], root);
    }
    string query;
    cin >> query;
    int res = autoSuggest(root, query);
    if (res == -1)
        cout << "No Other Words found other than the Prefix Itself !" << '\n';

    if (!res)
        cout << "No Words found with this Prefix" << '\n';
}