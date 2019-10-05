/*
 * 
 * Title:       Priority Queue with linked list implementation.
 * Author:      Viswalahiri Swamy Hejeebu
 * GitHub:      https://github.com/Viswalahiri
 * LinkedIn:    https://in.linkedin.com/in/viswalahiri
 *  
 */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	int priority;
	struct Node *next;
};
struct Node *head=NULL;

void dequeue()
{
	if(head==NULL)
	{
		cout<<"Queue Underflow."<<endl;
		return;
	}
	if(head->next==NULL)
	{
		struct Node *temp=head, *temp2;
		
		if(temp!=NULL)
		{
			temp2=temp;
			temp=temp->next;
		}
	//	temp1=temp;
		head=NULL;
		cout<<"The dequeued value is "<<temp2->data<<endl;
		free(temp2);
		return;	
	}
	else
	{
		struct Node *temp=head, *temp2;
		while(temp->next!=NULL)
		{
			temp2=temp;
			temp=temp->next;
		}
		temp2->next=NULL;
		cout<<"The dequeued value is "<<temp->data<<endl;
		free(temp);
		return;
	}	
}

void enqueue(int value)
{
	int p;
	cout<<"Priority?"<<endl;
	cin>>p;
	struct Node *new_node;
	new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->priority = p;
	new_node->data=value;
	
	
	struct Node *temp=head,*temp2;
	if(head==NULL)
	{
		head=new_node;
		new_node->next=NULL;
	}
	else
	{
	int counter=0;
	
//	

	while(temp!=NULL && temp->priority > p)
	{
		counter=1;
		temp2=temp;
		temp=temp->next;
	}
	
	if(temp!=NULL)
	{
	// if temp not null
	if(counter==0)
	{
		new_node->next=head;
		head=new_node;
	}
	else
	{
	temp2->next= new_node;
	new_node->next=temp;
	}
	}
	else
	{
		temp2->next=new_node;
		new_node->next=NULL;
	}
	
//	new_node->next=head;
//	head=new_node;
	}
	cout<<"The value "<<value<<" has been pushed."<<endl;
	return;
}

int main()
{
	
	while(1)
	{
	cout<<"1 - enqueue"<<endl;
	cout<<"2 - dequeue"<<endl;
	cout<<"3 - exit"<<endl;
	int choice;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Push what?"<<endl;
			int to_push;
			cin>>to_push;
			enqueue(to_push);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			exit(0);
			break;
		default:
			cout<<"The option you have requested isn't present."<<endl;
	}
	
	}
	return 0;
}
