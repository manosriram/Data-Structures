#include <iostream>
#include <queue>
#include "basicTreeTemplate.h"
using namespace std;

void displayTreeNextPointer(Node *root) {
  if (!root)
    return;

  cout << root->next << " ";
  displayTreeNextPointer(root->left);
  displayTreeNextPointer(root->right);
  return;
}

Node* connect(Node* root) {
        if (!root)
            return NULL;
        int count;
        Node *temp;
        queue<Node *> currentLevel, nextLevel;
        currentLevel.push(root);

        while (!currentLevel.empty()) {
            count = currentLevel.size();
            
            while (count--) {
                temp = currentLevel.front();
                currentLevel.pop();
                
                temp->next = (currentLevel.size() > 0 ? currentLevel.front() : NULL);
                
                if (temp->left)
                    nextLevel.push(temp->left);
                
                if (temp->right)
                    nextLevel.push(temp->right);
            }
            
            while (!nextLevel.empty()) {
                temp = nextLevel.front();
                currentLevel.push(temp);
                nextLevel.pop();
            }
        }
        return root;
    }

int main() {
    Node *root = NULL;
    insertNode(root, 50);
    insertNode(root, 45);
    insertNode(root, 35);
    insertNode(root, 30);
    insertNode(root, 60);
    insertNode(root, 70);
    insertNode(root, 10);
    insertNode(root, 15);
    insertNode(root, 37);

    root = connect(root);
    displayTreeNextPointer(root);
}
