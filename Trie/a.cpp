#include <iostream>
#include <string.h>
using namespace std;

struct node
{
    struct node *children[26];
    bool isEnd;
};

struct node *getNode()
{
    struct node *root = new node;
    root->isEnd = false;
    for (int t = 0; t < 26; t++)
    {
        root->children[t] = NULL;
    }
    return root;
}

void insert(struct node *root, string key)
{
    struct node *crawl = root;
    for (int t = 0; t < key.length(); t++)
    {
        int index = key[t] - 'a';
        if (!crawl->children[index])
        {
            crawl->children[index] = getNode();
        }
        crawl = crawl->children[index];
    }
    crawl->isEnd = true;
}

bool search(struct node *root, string key)
{
    struct node *crawl = root;
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!crawl->children[index])
            return false;

        crawl = crawl->children[index];
    }
    return crawl->isEnd;
}

int main()
{
    string keys[] = {
        "mano",
        "sriram",
        "hey",
        "hello",
        "world"};
    int n = sizeof(keys) / sizeof(keys[0]);
    struct node *root = getNode();
    for (int t = 0; t < n; t++)
        insert(root, keys[t]);
    string word;
    cin >> word;
    if (search(root, word))
        cout << "Found!" << endl;
    else
        cout << "Not Found!" << endl;
}