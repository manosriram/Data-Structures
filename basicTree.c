#include <stdio.h>
#include <stdlib.h>

static int level;
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
        // printf("%d --> ",root->data);
        // displayTree(root->right);

        if (root -> right == NULL && root -> left == NULL) {
            printf("%d ",root->data);
        }
    }
}


void deleteTree(struct node *root) {
    
    deleteTree(root->right);
    deleteTree(root->left);


    free(root);
}



int searchTree(struct node *root,int d) {
    if (root) {
    if (root -> data < d) {
        searchTree(root->right,d);
        level++;
    }
    else if (root->data>d)   {
        searchTree(root->left,d);
        level++;
    }

    else if (root -> data == d) 
    return 1;
    }

    else
    return 0;

}

int main() {
    int ch,d;
    
    struct node *root;

    while(1) {
        printf("\n");
        printf("1. Insert Tree Node. \n2. Display All Nodes. \n3.Search \n4.Delete Data. \n5.Exit");
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
            scanf("%d",&d);
            int gt;
            gt = searchTree(root,d);
            if (gt) {
            printf("Element Found!!\n");
            printf("Found at Level %d",level);
            level=0;
            }
            else {
            printf("Element Not Found!!");
            level=0;
            }
            break;

            case 4:
            // scanf("%d",&d);
            deleteTree(root);
            break;

            case 5:
            exit(0);

            default:
            printf("Wrong Choice Entered..");
        }
    }
}