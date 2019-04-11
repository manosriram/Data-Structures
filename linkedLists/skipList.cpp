#include <iostream>
#include "basicactions.h"
using namespace std;

int main() {
  Node *head = NULL;

  insertAtStart(head,1);
  insertAtStart(head,2);
  insertAtStart(head,3);
  insertAtStart(head,4);
  insertAtStart(head,5);
  insertAtStart(head,6);
  insertAtStart(head,7);
  insertAtStart(head,8);
  insertAtStart(head,9);
  insertAtStart(head,10);
  insertAtStart(head,11);
  insertAtStart(head,12);

  displayNodes(head);
  
}
