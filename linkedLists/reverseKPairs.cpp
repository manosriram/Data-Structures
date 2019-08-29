#include <iostream>
#include "basicActions.h"
using namespace std;

Node *Reverse(Node *head, int k, int First) {
	if (!head) return NULL;

	Node *p = head, *q = p->next, *r = q->next, *op;
	
	if (First % 2)
		op = head;

	head -> next = NULL;
	
	while (q->next != NULL) {
		q->next = p;
		p = q;
		q = r;
		r = r->next;
	}
	q->next = p;
	head = q;
	if (!First % 2)
		op = q;

	return op;
}


Node *reverseKPairs(Node *head, int k) {
	if (!head) return NULL;
	
}


int main() {
	int k = 3;
	Node *head = NULL;

	insertAtEnd(head, 1);
	insertAtEnd(head, 2);
	insertAtEnd(head, 3);
	insertAtEnd(head, 4);
	insertAtEnd(head, 5);
	insertAtEnd(head, 6);
	insertAtEnd(head, 7);
	insertAtEnd(head, 8);
	insertAtEnd(head, 9);
	insertAtEnd(head, 10);
	insertAtEnd(head, 11);
	insertAtEnd(head, 12);
	insertAtEnd(head, 13);

	head = reverseKPairs(head, k);
	displayNodes(head);
	cout << endl;
}