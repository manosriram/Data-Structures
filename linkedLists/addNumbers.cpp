#include "basicActions.h"
using namespace std;

Node *addLists(Node *head1, Node *head2) {
    int carry = 0, sum = 0;
    // Two Node pointers pointing to each of the list's head.
    Node *p = head1, *q = head2;
    // New list to store result.
    Node *result = NULL;

    while (p || q) {
        sum = 0;
        // If 'p' Node exits, add it to sum and move forward.
        if (p) {
            sum += p->data;
            p = p->next;
        }
        // If 'q' Node exits, add it to sum and move forward.
        if (q) {
            sum += q->data;
            q = q->next;
        }
        // If there's 'carry', add 'carry' to 'sum' and reset 'carry' to 0.
        if (carry != 0) {
            sum += carry;
            carry = 0;
        }
        // If 'sum' is greater than or equal to 10, add one to 'carry' and reduce 'sum' by 10.
        if (sum >= 10) {
            carry = 1;
            sum -= 10;
        }
        // Insert 'sum' to a new list.
        insertAtEnd(result, sum);
    }
    // Return the newly made list.
    return result;
}

int main() {
    Node *head1 = NULL;
    Node *head2 = NULL;

    // 7 -> 5 -> 9 -> 4 -> 6 (Represents 64957)
    insertAtEnd(head1, 7);
    insertAtEnd(head1, 5);
    insertAtEnd(head1, 9);
    insertAtEnd(head1, 4);
    insertAtEnd(head1, 6);

    // 8 -> 4 (Represents 48)
    insertAtEnd(head2, 8);
    insertAtEnd(head2, 4);

    head1 = addLists(head1, head2);

    displayNodes(head1);
}