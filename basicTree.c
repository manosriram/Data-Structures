#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
static int level;
int cnt=0;
=======
static int level=0;
>>>>>>> e4a0dcf8578d812fe2a81eb11bbec2c7565e5ce9

struct node {
    int data;
    struct node *left;
    struct node *right;
};


struct node * insertNode(struct node *root,int d) {
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
<<<<<<< HEAD
    if (root) {

        if (d > root->data) 
        root->right = insertNode(root->right,d);

        if (d < root->data)
        root->left = insertNode(root->left,d);

    }
    if (!root) {
=======
    if (root==NULL) {
>>>>>>> e4a0dcf8578d812fe2a81eb11bbec2c7565e5ce9
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

int searchTree(struct node *root,int d) {
    
    if (root -> data < d) {
        root = root-> right;
        level++;
    }

    if (root -> data > d) {
        root = root -> left;
        level++;
    }

    if (root->data == d) {
    return 1;
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
<<<<<<< HEAD
        printf("1. Insert Tree Node. \n2. Display All Nodes. \n3.Search \n4.Delete Data. \n5.Exit");
=======
        printf("1. Insert Tree Node. \n2. Display All Nodes. \n3.Search \n4.Exit.\n");
>>>>>>> e4a0dcf8578d812fe2a81eb11bbec2c7565e5ce9
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
<<<<<<< HEAD
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
=======
            if (searchTree(root,d)) {
            printf("Element Found!!");
            printf("Found at level %d.",level);
>>>>>>> e4a0dcf8578d812fe2a81eb11bbec2c7565e5ce9
            }
            break;

            case 4:
<<<<<<< HEAD
            // scanf("%d",&d);
            deleteTree(root);
            break;

            case 5:
            exit(0);

            default:
            printf("Wrong Choice Entered..");
=======
            exit(0);

            default:
            printf("Check Your Input Data..Please Try Again!!\n");
>>>>>>> e4a0dcf8578d812fe2a81eb11bbec2c7565e5ce9
        }
    }
}