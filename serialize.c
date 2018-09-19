#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *addData(struct node *root, int d)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (root == NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));

        if (root == NULL)
        {
            printf("Memory Error...");
            return 0;
        }
        else
        {
            temp->data = d;
            temp->left = NULL;
            temp->right = NULL;
            return temp;
        }
    }
    else
    {

        if (d > root->data)
            root->right = addData(root->right, d);

        if (d < root->data)
            root->left = addData(root->left, d);
    }
    return root;
}

void displayTree(struct node *root)
{
    if (root)
    {
        displayTree(root->left);
        printf("%d -> ", root->data);
        displayTree(root->right);
    }
}

struct node *serializeTree(struct node *root)
{

    if (!root->left)
        printf(" -1 ->");

    if (!root->right)
        printf(" -1 ->");

    else
    {
        serializeTree(root->left);
        printf(" %d ->", root->data);
        serializeTree(root->right);
    }
}

int main()
{
    int ch, d;
    struct node *root;

    while (1)
    {
        printf("Choose any One : \n1.Add Data. \n2.Display Tree. \n3.Serialize Tree. \n4.Search Data. \n5.Exit. \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            scanf("%d", &d);
            root = addData(root, d);
            break;

        case 2:
            displayTree(root);
            break;
        case 3:
            serializeTree(root);
            break;
        case 5:
            exit(0);
        }
    }
}