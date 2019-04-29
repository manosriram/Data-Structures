#include <iostream>
#include <algorithm>
#include "basicTreeTemplate.h"
using namespace std;
static int top = -1;
class Stack
{
    Node *a[100];

public:
    void push(Node *root)
    {
        if (top >= 0)
        {
            top++;
            a[top] = root;
        }
    }

    void pop()
    {
        top--;
    }

    Node *topEl()
    {
        return a[top];
    }

    bool empty()
    {
        return (top == -1) ? true : false;
    }
};

void KLargestIterative(Node *root, int k)
{
    int a[100];
    int ind = 0;
    Node *p = root;
    Stack q;

    while (1)
    {
        while (root)
        {
            a[ind] = root->data;
            ind++;
            q.push(root);
            root = root->left;
        }
        if (q.empty())
            break;

        root = q.topEl();
        q.pop();
        root = root->right;
    }
    sort(a, a + ind);
    // cout << a[ind - k] << endl;
}

int main()
{
    Node *root = NULL;
    insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);
    int k;
    cin >> k;

    KLargestIterative(root, k);

    // int *arr = KLargest(root, k);
    // cout << arr[ind - k] << '\n';
}