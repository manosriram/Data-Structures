void Inorder(TreapNode *root) {
    if (!root) return;

    Inorder(root->left);
    cout << root->key << " " << root->priority << endl;
    Inorder(root->right);
}

void Preorder(TreapNode *root) {
    if (!root) return;

    cout << root->key << " " << root->priority << endl;
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(TreapNode *root) {
    if (!root) return;

    Postorder(root->left);
    Postorder(root->right);
    cout << root->key << " " << root->priority << endl;
}
