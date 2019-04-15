#include <iostream>
#include "basicActions.h"
using namespace std;

// Skip 'n' number of Nodes.
Node *doSkips(Node *head, int skips)
{
  Node *p = head;
  while (skips > 1)
  {
    p = p->next;
    skips--;
  }
  return p;
}

/*
  Node Structure : 

  struct Node {
  int data;  // Holds data of the Node.
  Node *next; // Next Node Pointer.
  Node *point; // Points to the Inner Node .. This pointer is used in *express pointer.

};
  
-----------------------------------------------------------------------------------------------------------------------------

  Building a Skip List.
  Step 1 : Start at head node.
  Step 2 : Push the Node's Data into express's "data" field.
  Step 3 : Push the Node's Address into express's "point" field.
  Step 4 : Skip 'n' Nodes.
  Step 5 : Repeat the process till the current node is not NULL.

*/

Node *createSkipList(Node *head)
{
  // ExpressWay Pointer.
  Node *express = NULL;
  Node *p = head;
  Node *temp = NULL;
  int skips = 5;

  // Push the first Node's "data" and "address" into the express pointer's field.
  if (p)
  {
    insertAtEnd(express, p->data);
    express->point = p;
    temp = express;
  }

  int count = 0;
  int len = getLength(head);
  while (count < len - 1)
  {
    count += skips + 1;
    // Do 'n' skips.
    p = doSkips(p, skips);

    // If there is a current node, then addd its "data" and "address" into express's fields. (address is pushed into the "point" field)
    if (p)
    {
      insertAtEnd(express, p->data);
      express = express->next;
      express->point = p;
    }
  }
  // Point the express pointer to the start of the newly made Express List.
  express = temp;

  // Return the Express List.
  return express;
}

void searchViaExpress(Node *head, int target)
{
  if (!head)
    return;

  Node *p = head;

  while (p->next != NULL)
  {
    // If Data is found, then return.
    if (p->data == target)
    {
      cout << "Target : " << p->data << '\n';
      cout << "Target Found at Address : " << p << '\n';
      return;
    }

    // If the Current Node's next Node's data is greater than Target value, then jump into the "point" address which means that our data is in this parition.
    if (p->next->data > target)
      p = p->point;

    // Else, just go to the next node.
    if (p->next->data < target)
      p = p->next;
  }

  // For the Last Node, we just get into the "point" field of the last node and search for the element.
  p = p->point;
  while (p != NULL)
  {
    if (p->data == target)
    {
      cout << "Target : " << p->data << '\n';
      cout << "Target Found at Address : " << p << '\n';
      return;
    }
    p = p->next;
  }
  cout << "Element Not Found.." << '\n';
  return;
}

int main()
{
  Node *head = NULL;
  Node *expressHead = NULL;

  insertAtEnd(head, 10);
  insertAtEnd(head, 20);
  insertAtEnd(head, 22);
  insertAtEnd(head, 23);
  insertAtEnd(head, 27);
  insertAtEnd(head, 30);
  insertAtEnd(head, 43);
  insertAtEnd(head, 45);
  insertAtEnd(head, 50);
  insertAtEnd(head, 54);
  insertAtEnd(head, 57);
  insertAtEnd(head, 58);
  insertAtEnd(head, 62);
  insertAtEnd(head, 65);
  insertAtEnd(head, 67);

  int target;
  cout << "Enter Target Element : ";
  cin >> target;

  expressHead = createSkipList(head);
  searchViaExpress(expressHead, target);
}
