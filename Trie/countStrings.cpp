#include <iostream>
#include "BaseTemplate.h"
using namespace std;

int getCountPrefix(TrieNode *root, int k, string str)
{
    int t, count = 0;
    TrieNode *crawl = root;

    for (t = 0; t < k; t++)
    {
        int ind = str[t] - 'a';

        if (!crawl->children[ind])
            return 0;

        crawl = crawl->children[ind];
    }
    return crawl->freq;
}

int main()
{
    string arr[] = {"abba", "abbb", "abbc", "abbd", "abaa", "abca", "abba", "abba", "abba"};
    int k = 3, n = (sizeof(arr) / sizeof(arr[0])), t;
    string str = "abbg";

    TrieNode *root = createNode();

    for (t = 0; t < n; t++)
    {
        insert(arr[t], root);
    }

    int count = getCountPrefix(root, k, str);
    cout << count << endl;
}