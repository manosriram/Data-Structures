#include <iostream>
#include "BaseTemplate.h"
#define ALPHA_SIZE 26
using namespace std;
static int min_ = INT_MIN;
string baseWord, currentWord;


void countMaxFreq(TrieNode *root) {
    int t;
    TrieNode *crawl = root;
    // cout << "Current Word : " << currentWord << "  " << "Word's Frequency : " << crawl->freq << endl;

    if (crawl->eOF) {
        if (crawl->freq > min_) {
            min_ = crawl->freq;
            baseWord = currentWord;
        }
    }

    if (isLastNode(root))
        return;

    for (t=0;t<ALPHA_SIZE;t++) {
        if (crawl->children[t]) {
            currentWord.push_back(97 + t);
            countMaxFreq(crawl->children[t]);
            currentWord.pop_back();
        }
    }
    return;
}

int main()
{
    int t;
    string dictionary[] = {"abba", "abbb", "abbc", "abbd", "abaa", "abca", "abba", "abba", "abba", "abbc"};
    int n = sizeof(dictionary) / sizeof(dictionary[0]);

    TrieNode *root = createNode();

    for (t = 0; t < n; t++)
        insert(dictionary[t], root);

    countMaxFreq(root);
    cout << baseWord << endl;
}