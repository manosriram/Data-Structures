#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};


struct node * insertNode(struct node *root,int d) {
    if (root==NULL) {
        root = (struct node *)malloc(sizeof(struct node));

        if (root == NULL) {
        printf("Memory Error...");
        return 0;
        }
        else {
            root -> data = d;
            root -> left = NULL;
            root -> right = NULL;
            return root;
        }
    }
    else {

        if (d > root->data) 
        root->right = insertNode(root->right,d);

        if (d < root->data)
        root->left = insertNode(root->left,d);

    }
    return root;
}

void displayTree(struct node *root) {
    if (root) {
        displayTree(root->left);
        printf("%d - > ",root->data);
        displayTree(root->right);
    }
}


int main() {
    int ch,d;
    
    struct node *root;

    while(1) {
        printf("\n");
        printf("1. Insert Tree Node. \n2. Display All Nodes. \n3.Exit.\n");
        scanf("%d",&ch);

        switch(ch) {
            case 1:
            scanf("%d",&d);
            root = insertNode(root,d);
            break;

            case 2:
            displayTree(root);
            break;

            case 3:
            exit(0);
        }
    }
}