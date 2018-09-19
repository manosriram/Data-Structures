#include <stdio.h>
#include <stdlib.h>

int cnt=0;

struct node {
    int data;
    struct node *left;
    struct node *right;
};


struct node * insertNode(struct node *root,int d) {
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (root) {

        if (d > root->data) 
        root->right = insertNode(root->right,d);

        if (d < root->data)
        root->left = insertNode(root->left,d);

    }
    if (!root) {
        root = (struct node *)malloc(sizeof(struct node));

        if (root == NULL) {
        printf("Memory Error...");
        return 0;
        }
        else {
            temp -> data = d;
            temp -> left = NULL;
            temp -> right = NULL;
            return temp;
        }
    }
    return root;
}

void displayTree(struct node *root) {
    if (root) {
        displayTree(root->left);
        printf("%d --> ",root->data);
        displayTree(root->right);
    }
}


int searchTree(struct node *root,int d,int level) {
    if (root) {
    if (root -> data < d) {
        level++;
        searchTree(root->right,d,level);
    }
    else if (root->data>d)   {
        level++;
        searchTree(root->left,d,level);
    }

    else if (root -> data == d)  {
        printf("Element Found at Level %d.\n",level);
        level=0;
        return 1;
    }
    }
    else {
        printf("Element Not Found in the Tree..\n");
        return 0;
    }
}

int main() {
    int ch,d;
    int level;
    struct node *root;

    while(1) {
        printf("\n");
        printf("1. Insert Tree Node. \n2. Display All Nodes. \n3.Search \n4.Exit \n");
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
            level=0;
            scanf("%d",&d);
            searchTree(root,d,level);
            break;

            case 4:
            exit(0);

            default:
            printf("Wrong Choice Entered..");
        }
    }
}