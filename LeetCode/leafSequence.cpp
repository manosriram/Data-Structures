#include <iostream>
#include <vector>
#include "basicTreeTemplate.h"
using namespace std;
vector<int> vector1;
vector<int> vector2;

void printVector(vector<int> tree) {
    for (auto itr = tree.begin();itr != tree.end(); itr++) 
        cout << *itr << " ";

    cout << endl;
}

bool isSequenced(Node *root1, Node *root2)
{   
    if (!root1 || !root2) return false;

    if (!root1->left && !root1->right) 
        vector1.push_back(root1->data);
    
    if (!root2->left && !root2->right) 
        vector2.push_back(root2->data);
    
    isSequenced(root1->left, root2->left);
    isSequenced(root1->right, root2->right);
    
    return (vector1 == vector2);
}

int main()
{
    Node *root1 = NULL, *root2 = NULL;

    insertNode(root1, 500);
    insertNode(root1, 490);
    insertNode(root1, 510);
    insertNode(root1, 520);
    insertNode(root1, 495);

    insertNode(root2, 500);
    insertNode(root2, 490);
    insertNode(root2, 510);
    insertNode(root2, 520);
    insertNode(root2, 495);


    isSequenced(root1, root2);
    printVector(vector1);
    printVector(vector2);
    isSequenced(root1, root2)  ? cout << "Equal." << endl  : cout << "Not Equal." << endl;
}