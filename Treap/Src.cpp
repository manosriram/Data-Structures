#include "Insert.hpp"
#include "ShowTree.hpp"

int main() {
    TreapNode *root = nullptr;

    root = Insert(root, 50);
    root = Insert(root, 10);
    root = Insert(root, 5);
    root = Insert(root, 509);
    root = Insert(root, 510);

    Inorder(root);
}
