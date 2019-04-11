#include <iostream>
#include <string.h>
using namespace std;
struct node
{
    struct node *children[26];
    bool isEnd;
    int cnt;
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
    root->cnt++;
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

void getMax(struct node *root, string keys[], int n)
{
    int max = 0, index;
    struct node *crawl = root;
    for (int t = 0; t < n; t++)
    {
        // if (crawl->cnt > max)
        // {
        //     max = crawl->cnt;
        //     index = t;
        // }
        cout << crawl->cnt << endl;
    }
    // cout << "Maximum Times Occured String is " << keys[index] << " .. it Occured " << max << " times.." << endl;
}

int main()
{
    string keys[] = {
        "mano",
        "mano",
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

    // for (int t = 0; t < n; t++)
    getMax(root, keys, n);
}