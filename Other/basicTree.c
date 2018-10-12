#include <stdio.h>
#include <stdlib.h>

static int level = 0;
== == == =
             int cnt = 0;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// A function to create a new node..

struct node *newNode(int key)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = key;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}

/* A utility function to insert a new node with given key in BST */
struct node *insertNode(struct node *root, int key)
{
    /* If the tree is empty, return a new node */
    if (root == NULL)
        return newNode(key);

    /* Otherwise, recur down the tree */
    if (key < root->key)
        root->left = insertNode(root->left, key);
    else if (key > root->key)
        root->right = insertNode(root->right, key);

    /* return the (unchanged) root pointer */
    return root;
}

void displayTree(struct node *root)
{
    if (root)
    {
        displayTree(root->left);
        printf("%d - > ", root->data);
        displayTree(root->right);
    }
}

int searchTree(struct node *root, int d, int level)
{
    if (root)
    {
        if (root->data < d)
        {

            level++;
            searchTree(root->right, d, level);
        }

        else if (root->data > d)
        {
            level++;
            searchTree(root->left, d, level);
        }

        if (root->data == d)
        {
            return 1;
        }
    }

    int main()
    {
        int ch, d;
        int level;

        struct node *root;

        while (1)
        {
            printf("\n");

            printf("1. Insert Tree Node. \n2. Display All Nodes. \n3.Search \n4.Exit.\n");
            scanf("%d", &ch);

            switch (ch)
            {
            case 1:
                scanf("%d", &d);
                root = insertNode(root, d);
                break;

            case 2:
                displayTree(root);
                break;

            case 3:
                printf("Enter Key to be Searched : \n");
                scanf("%d", &d);
                if (searchTree(root, d))
                {
                    printf("Element Found!!");
                    printf("Found at level %d.", level);
                }
            case 4:
                exit(0);

            default:
                printf("Wrong Choice Entered..");
            }
        }
    }
