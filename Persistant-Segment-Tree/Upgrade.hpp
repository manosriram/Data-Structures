void printTree(Node *root) {
    if (!root) return;

    printTree(root->left);
    cout << root->data << " ";
    printTree(root->right);
}
int Query(Node *N, int st, int ed, int Qst, int Qed) {
    if (Qst > ed || Qed < st || st > ed)
        return 0;
    if (Qst >= st && Qed <= ed)
        return N->data;

    int mid = (st + ed) / 2;
    return min(Query(N->left, st, mid, Qst, Qed), Query(N->right, mid+1, ed, Qst, Qed));
}

void Upgrade(Node *prevVersion, Node *currentVersion, int st, int ed, int in, int value) {
    if (st == ed) {
        currentVersion->data = value;
        return;
    }
    int mid = (st + ed) / 2;
    if (in <= mid) {
        currentVersion->right = prevVersion->right;
        
        currentVersion->left = new Node(nullptr, nullptr, 0);
        Upgrade(prevVersion, currentVersion->left, st, mid, in, value);
    } else {
        currentVersion->left = prevVersion->left;

        currentVersion->right = new Node(nullptr, nullptr, 0);
        Upgrade(prevVersion, currentVersion->right, mid+1, ed, in, value);
    }
    // currentVersion->data = currentVersion->left->data + currentVersion->right->data;
    
    currentVersion->data = min(currentVersion->left->data, currentVersion->right->data);
}
