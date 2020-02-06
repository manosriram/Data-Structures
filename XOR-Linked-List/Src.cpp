#include "./Structure.hpp"

/*
 * Next Node:   XOR(prev, currentNode->npx);
 * Prev Node:   XOR(next, currentNode->npx);
*/

Node *XOR(Node *A, Node *B) {
    return (Node *) ((uintptr_t)(A) ^ (uintptr_t)(B));
}

Node *returnLastNode(Node *head) {
    Node *prev = nullptr, *current = head, *next;

    next = XOR(prev, current->npx);
    while (next) {
        next = XOR(prev, current->npx);
        prev = current;
        current = next;
    }
    return prev;
}

void Insert(Node **head, int data) {
   Node *newNode = new Node();
   newNode->dt = data;

   newNode->npx = XOR(*head, nullptr); 

   if (*head) {
        Node *next = XOR((*head)->npx, nullptr);
        (*head)->npx = XOR(newNode, next);
   }
   *head = newNode;
}

void printLLBackward(Node *head) {
    Node *next = nullptr, *current = head, *prev;

    while (current) {
        cout << current->dt << " ";

        prev = XOR(next, current->npx);
        next = current;
        current = prev;
    }
    return;
}

void printLLForward(Node *head) {
    Node *prev = nullptr, *current = head, *next;

    while (current) {
        cout << current->dt << " ";

        next = XOR(prev, current->npx);
        prev = current;
        current = next;
    }
    return;
}

int main() {
    Node *head = nullptr;

    Insert(&head, 5);
    Insert(&head, 8);
    Insert(&head, 2);


    printLLForward(head); // nullptr <-> 2 <-> 8 <-> 5 <-> nullptr

    printLLBackward(returnLastNode(head)); // nullptr <-> 5 <-> 8 <-> 2 <-> nullptr
}
