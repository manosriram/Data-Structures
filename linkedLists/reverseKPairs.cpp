#include <iostream>
#include <stack>
#include "basicActions.h"
using namespace std;

// Get the Top Most Element of the Next Stack.
Node *getFirstK(Node *head, int k) {
	if (!head) return NULL;
	k -= 1;
	while (k-- && head->next != NULL) {
		head = head->next;
	}
	return head;
}

// Push Elements Into Stack.
stack<Node *> pushInto(Node *&head, int k, int &rem) {
	stack<Node *> temp;
	while (k--) {
		temp.push(head);
		head = head->next;
		rem--;
	}
	return temp;
}

// Driver Function.
Node *reverseKPairs(Node *head, int k) {
	// No Head, return NULL.
	if (!head) return NULL;

	stack<Node *> st;
	Node *prev, *temp, *newHead, *top_ = NULL, *bottom_ = NULL;
	bool fst = true;

	// 'rem' is the Original Length of the Linked List.
	int cnt = k, rem = getLength(head);

	while (true) {
		// If Current Length < k, then stop. (Since, we are reversing in pairs.)
		if (rem < k)
			break;

		// Push K elements in to Stack and return that Stack.
		st = pushInto(head, k, rem);
		// Get the Top Most Node of the Upcoming Stack.
		top_ = getFirstK(head, k);
		// Keep track of Previous Element. (To connect them)
		prev = st.top();

		// If its the First Iteration, the set the Kth Element as the Head of the Modified List.
		if (fst) {
			newHead = prev;
		}
		// Pop Element From Stack. (Since, we got our prev element, we start from the next element)
		st.pop();
		// Loop until the stack is empty.
		while (!st.empty()) {
			// Take the Top Element and make it as the 'Next' of the Previous Pointer (prev). (Eg : 2->1, 2 : Prev, 1 : Temp)
			temp = st.top();
			st.pop();
			prev->next = temp;
			// Make prev as Temp.
			prev = temp;
		}
		// Store the Bottom Element of the Stack.
		bottom_ = temp;
		// As the First Iteration is completed, we make the first iteration as completed.
		if (fst) {
			fst = false;
		}
		// Connect the Bottom Element in the Current Stack to the Top Element in the Next Stack.
		bottom_->next = top_;
	}
	// Connect any remaining elements left.
	while (rem--) {
		temp->next = head;
		temp = head;
		head = head->next;
	}

	// Return the newHead of the List.
	return newHead;
}

int main() {
	Node *head = NULL;
	int k = 5;

	for (int t=1;t<=15;t++)
		insertAtEnd(head, t);

	head = reverseKPairs(head, k);
	displayNodes(head);
	cout << endl;
}