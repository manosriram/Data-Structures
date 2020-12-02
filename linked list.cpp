#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};

//INSERTION IN SINGLY LINKED LIST 

void push(Node** head_ref,int data)//insertion at front
{
    Node* newnode=new Node;
    newnode->data=data;
    newnode->next=*head_ref;
    *head_ref=newnode;
}


void append(Node **head_ref,int data)//insertion at the end
{
    Node *newnode=new Node;
    newnode->data=data;
    newnode->next=NULL;
    Node *last=*head_ref;
    if(*head_ref==NULL)//check if list is empty
    {
        *head_ref=newnode;
        return;
        
    }
    
    while(last->next!=NULL)
    last=last->next;
    last->next=newnode;
}


//DELETION OF NODE  IN SINGLY LINKED LIST

//Deleting node at the beginning of the linked list
void popfront(Node** head_ref)
{
	Node *temp=*head_ref;
	if(*head_ref==NULL)
	{
		cout<<"List empty\n";
		return;
	}
	*head_ref=temp->next;
	free(temp);
	
	
}
//Deleting the node from  the end 
 void popback(Node** head)
 {
     Node *p=*head;
     if(*head==NULL )
     {
         cout<<"List empty\n";
         return;
     }
     else if (p->next==NULL)
     {
         Node *temp=*head;
         *head=NULL;
         free(temp);
     }
     else
     {
         
         Node *temp=p->next;
         while(temp->next!=NULL)
         {
             p=temp;
             temp=temp->next;
         }
         p->next=NULL;
         free(temp);
     }
 }



//Deleting node with  the given key
void delkey(Node**head_ref,int key)
{
    Node *temp=*head_ref,*prev;
    if(temp!=NULL and temp->data==key)
    {
        *head_ref=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL and temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    return;
    prev->next=temp->next;
    free(temp);
}

//Deletion of linked list

void deletelist(Node**head)
{
    Node* next,*current=*head;
    while(current!=NULL)
    {
        next=current->next;
        free(current);
        current=next;
    }
    *head=NULL;
}

//Display the Linked list
void display(Node *head)
{
    if(head==NULL)
    {
        cout<<"Empty List\n";
        return;
    }
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}


//Detect loop in linked list method 1:Hashing
bool detectloop1(Node* h)
{
    unordered_set<Node*> s;
    while(h!=NULL)
    {
        if(s.find(h)!=s.end())
        return true;
        s.insert(h);
        h=h->next;
        
    }
    return false;
}
//Detect loop in in a linked list using floyd cycle detection

bool detectloop2(Node *h)
{
    Node *s=h,*f=h;
    while(s and f and f->next)
    {
        s=s->next;
        f=f->next->next;
        if(s==f)
        return true;
    }
    return false;
}

//reverse a linked list
void reverse(Node**head)
{
    Node *curr=*head;
    Node *prev=NULL,*next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    *head=prev;
}




int main()
{
    Node *head=NULL;
    push(&head,10);
    append(&head,20);
    append(&head,30);
    append(&head,40);
    push(&head,5);
    push(&head,1);
    display(head);
    popback(&head);
   // head->next->next->next=head;
    // deletelist(&head);
    
   // reverse(&head);
    if(detectloop2(head))
    {
    cout<<"LOOP DETECTED\n";
    
    }
    else
    {
    cout<<"NO LOOP\n";
    display(head);
    }
    
    
}
