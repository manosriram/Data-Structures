#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
static int level = 0;
=======
int cnt=0;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *insertNode(struct node *root, int d)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
<<<<<<< HEAD
    if (root == NULL)
    {
=======
    if (root) {

        if (d > root->data) 
        root->right = insertNode(root->right,d);

        if (d < root->data)
        root->left = insertNode(root->left,d);

    }
    if (!root) {
	
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
<<<<<<< HEAD
    else
    {

        if (d > root->data)
            root->right = insertNode(root->right, d);

        if (d < root->data)
            root->left = insertNode(root->left, d);
    }
=======
>>>>>>> dc3ed67868f29c275b12363da0f0f81c471020ff
    return root;
}

void displayTree(struct node *root)
{
    if (root)
    {
        displayTree(root->left);
<<<<<<< HEAD
        printf("%d - > ", root->data);
=======
        printf("%d --> ",root->data);
>>>>>>> dc3ed67868f29c275b12363da0f0f81c471020ff
        displayTree(root->right);
    }
}

<<<<<<< HEAD
int searchTree(struct node *root, int d)
{

    if (root->data < d)
    {
        root = root->right;
=======

int searchTree(struct node *root,int d,int level) {
    if (root) {
    if (root -> data < d) {
>>>>>>> dc3ed67868f29c275b12363da0f0f81c471020ff
        level++;
        searchTree(root->right,d,level);
    }
<<<<<<< HEAD

    if (root->data > d)
    {
        root = root->left;
=======
    else if (root->data>d)   {
>>>>>>> dc3ed67868f29c275b12363da0f0f81c471020ff
        level++;
        searchTree(root->left,d,level);
    }

<<<<<<< HEAD
    if (root->data == d)
    {
        return 1;
    }
}

int main()
{
    int ch, d;

=======
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
>>>>>>> dc3ed67868f29c275b12363da0f0f81c471020ff
    struct node *root;

    while (1)
    {
        printf("\n");
<<<<<<< HEAD
        printf("1. Insert Tree Node. \n2. Display All Nodes. \n3.Search \n4.Exit.\n");
        scanf("%d", &ch);
=======
        printf("1. Insert Tree Node. \n2. Display All Nodes. \n3.Search \n4.Exit \n");
        scanf("%d",&ch);
>>>>>>> dc3ed67868f29c275b12363da0f0f81c471020ff

        switch (ch)
        {
        case 1:
            scanf("%d", &d);
            root = insertNode(root, d);
            break;

        case 2:
            displayTree(root);
            break;

<<<<<<< HEAD
        case 3:
            scanf("%d", &d);
            if (searchTree(root, d))
            {
                printf("Element Found!!");
                printf("Found at level %d.", level);
            }
=======
            case 3:
            level=0;
            scanf("%d",&d);
            searchTree(root,d,level);
>>>>>>> dc3ed67868f29c275b12363da0f0f81c471020ff
            break;

        case 4:
            exit(0);

<<<<<<< HEAD
        default:
            printf("Check Your Input Data..Please Try Again!!\n");
=======
            default:
            printf("Wrong Choice Entered..");
>>>>>>> dc3ed67868f29c275b12363da0f0f81c471020ff
        }
    }
}
