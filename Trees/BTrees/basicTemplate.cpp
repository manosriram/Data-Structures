#include <iostream>
#include "./NodeStructure.hpp"
using namespace std;

class BTree {
   public:
    int t;
    BTreeNode *root;
    BTree(int _t) {
        root = NULL;
        t = _t;
    }
    void Insert(int k);
    void Traverse() {
        if (root)
            root->Traverse();
    }
};

// Constructor of BTreeNode from "NodeStructure.hpp".
BTreeNode::BTreeNode(int _t, bool leaf) {
    this->t = _t;
    this->leaf = leaf;
    this->keys = new int[(2 * t) - 1];
    this->children = new BTreeNode *[2 * t];
    this->n = 0;
}

// Driver function for Insertion of Data.
void BTree::Insert(int k) {
    // If there is no Root.
    if (root == NULL) {
        root = new BTreeNode(t, true);
        root->keys[0] = k;
        root->n = 1;
        return;
    } else {
        if (root->n == (2 * t) - 1) {  // If the Root is Full.
            BTreeNode *s = new BTreeNode(t, false); // Create a new Node as the root is full.
            s->children[0] = root;
            s->splitChild(0, root); // As we know, we have to split if the node is full.

            int i = 0;
            if (s->keys[0] < k)
                i++;

            s->children[1]->insertNonFull(k); // Insert Data.
            root = s;

        } else  // If the Root is not full.
            root->insertNonFull(k);
    }
}

// Function which inserts data into node assuming that the space isn't full yet.
void BTreeNode::insertNonFull(int k) {
    int i = n - 1;

    // If the node is a Leaf Node.
    if (leaf) {
        // Get the position of the key to be inserted.
        while (i >= 0 && keys[i] > k) {
            keys[i + 1] = keys[i];
            i--;
        }
        // Insert the key.
        keys[i + 1] = k;
        // Increment number of keys.
        ++n;
    } else { // If the node is not a Leaf node.
        while (i >= 0 && keys[i] > k) // Get the position of the node to be inserted.
            i--;

        // if the node is full.
        if (children[i + 1]->n == (2 * t) - 1) {
            // Split the node.
            splitChild(i + 1, children[i + 1]);

            // As we have to decide the bias whether it is left-median or right-median.
            if (keys[i + 1] < k)
                i++;
        }
        // insert k to the child's node.
        children[i + 1]->insertNonFull(k);
    }
    return;
}

// Function for splitting a node.
void BTreeNode::splitChild(int i, BTreeNode *y) {
    // As we're splitting a node into two, we need another node to accompany.
    BTreeNode *z = new BTreeNode(y->t, y->leaf);
    // Set number of keys for the new node equal to the degree.
    z->n = t - 1;

    // Copy the last t-1 nodes of 'y' to 'z'.
    for (int j = 0; j < t - 1; j++)
        z->keys[j] = y->keys[j + t];

    // If Node 'y' isn't a leaf node.
    if (!y->leaf) {
        //  Then, we must copy the node's children too.
        for (int j = 0; j < t; j++)
            z->children[j] = y->children[j + t];
    }
    // decrease the number of nodes in 'y'.
    y->n = t - 1;

    // Create space for new child (split node). Remember, this is the children of the node that called this function.
    for (int j = n; j >= i + 1; j--)
        children[j + 1] = children[j];

    // Insert our new node into that space we've created.
    children[i + 1] = z;

    // Create space for the new key as the median of the children comes to it's parent. 
    for (int j = n - 1; j >= i; j--)
        keys[j + 1] = keys[j];

    // Insert the key into that position.
    keys[i] = y->keys[t - 1];
    // Increment the number of keys of this node (Root).
    ++n;
}

// Function for Traversing the Tree.
void BTreeNode::Traverse() {
    int t;
    // Traverse 'n' children.
    for (t = 0; t < n; t++) {
        // If the current node isn't a leaf, then we're sure that it has children. So, we call them first.
        if (!leaf)
            children[t]->Traverse();
        
        // Print the key.
        cout << keys[t] << " ";
    }
    // Subtree rooted with last child.
    if (!leaf)
        children[t]->Traverse();
}

int main() {
    BTree *bt = new BTree(3);

    bt->Insert(10);
    bt->Insert(20);
    bt->Insert(5);
    bt->Insert(6);
    bt->Insert(12);
    bt->Insert(30);
    bt->Insert(7);
    bt->Insert(17);

    bt->Traverse();
    cout << endl;
}