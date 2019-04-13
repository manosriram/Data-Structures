#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *store;
};

int main()
{
    Node *root = NULL, *root2 = NULL;

    int a = 10;
    Node *forward[10];

    // *forward[0]-
    forward[0]->store = root;
    root->data = 123;
    root = root->next;
    forward[1]->store = root;

    cout << forward[1]->store << endl;
}