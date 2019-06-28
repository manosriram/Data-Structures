#include <iostream>
#include <vector>
#include <stack>
#include "../basicTreeTemplate.h"
using namespace std;

int countLeafNodes(Node *root)
{
    stack<Node *> st;
    vector<int> vec;
    int leaves = 0;

    while (true)
    {
        while (root)
        {
            if (!root->left && !root->right)
            {
                cout << root->data << " ";
                leaves++;
                vec.push_back(root->data);
            }
            st.push(root);
            root = root->left;
        }
        if (st.empty())
            break;

        root = st.top();
        st.pop();
        root = root->right;
    }
    cout << endl;
    return leaves;
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
    insertNode(root, 100);

    cout << countLeafNodes(root) << endl;
}