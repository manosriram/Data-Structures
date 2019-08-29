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

	Node *p = head, *q = p;
	int cnt = 0;

	while (p != NULL && q != NULL) {
		p = Reverse(head, k, cnt);
		cnt++;
		q = Reverse(head, k, cnt);
		cnt++;
	}
	int l = 0;
	while (l < k) {
		head = head->next;
	}
	return head;
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

	head = Reverse(head, k, 5);
	// head = reverseKPairs(head, k);
	displayNodes(head);
	cout << endl;
}