#include <iostream>
#include <stack>
#include "../basicTreeTemplate.h"
using namespace std;

void preorderTraversalIterative(Node *root, stack<Node *> st)
{
    while (true)
    {
        while (root)
        {
            st.push(root);
            root = root->left;
        }
        if (st.empty())
            break;
        root = st.top();
        cout << root->data << " ";
        st.pop();
        root = root->right;
    }
    return;
}

int main()
{
    stack<Node *> s1;
    Node *root = NULL;
    insertNode(root, 50);
    insertNode(root, 60);
    insertNode(root, 55);
    insertNode(root, 57);
    insertNode(root, 61);
    insertNode(root, 63);
    insertNode(root, 40);
    insertNode(root, 45);
    insertNode(root, 47);
    insertNode(root, 30);

    preorderTraversalIterative(root, s1);
    cout << endl;
}