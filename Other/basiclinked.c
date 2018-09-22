#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node * createNode(struct node * start,int d) {
    struct node *temp;

    temp = (struct node *)(malloc(sizeof(struct node)));

    temp -> data = d;
    temp -> next = NULL;
    start = temp;
    return start;
}

struct node * insertAtEnd(struct node *start,int d) {
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    struct node *p;
    p = start;

    while(p->next!=NULL) {
        p = p->next;
    }
    p->next = temp;
    temp -> data = d;
    temp -> next = NULL;
}

// struct node * insertStart(struct node * start,int d) {
//     struct node *temp;

//     temp = (struct node * )malloc(sizeof(struct node));
//     temp -> data = d;
//     // printf("Data Stored!!");
//     temp -> next = start;
//     start = temp;
//     return start;
// }

void displayNodes(struct node *start) {
    struct node *p;
    p = start;
    while(p != NULL) {
        printf("%d -> ",p->data);
        p = p->next;
    }
}

int main() {
    int ch,d;
    struct node *start;
    start=NULL;
    while(1) {
        

        printf("1.Create 2.Insert At End 3.Display 4.Exit \n");
        scanf("%d",&ch);

        switch(ch) {
            case 1:
            printf("Enter Data: ");
            scanf("%d",&d);
            start = createNode(start,d);
            break;

            case 2:
            printf("Enter Data : ");
            scanf("%d",&d);
            insertAtEnd(start,d);
            break;

            case 3:
            displayNodes(start);
            printf("\n");
            break;
            
            case 4:
            exit(0);

        }
    }
}