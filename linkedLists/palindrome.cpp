#include <iostream>
#include "basicActions.h"
using namespace std;

bool isPalindromeEff(Node *head) {
    Node *slowP = head, *fastP = head;

    while (fastP) {
        slowP = slowP->next;
        fastP = fastP->next->next;
    }
    Node *checkP = head;
    slowP = slowP->next;
    // cout << slowP->data << endl;
    while (slowP) {
        if (checkP->data != slowP->data)
            return false;
        
        slowP = slowP->next;
        checkP = checkP->next;
    }
    return true;
}

bool isPalindrome(Node *head) {
    Node *p = head;
    int a[1000000];
    int cnt = 0;
    while (p != NULL) {
        a[cnt] = p->data;
        cnt++;
        p = p->next;
    }
    int high = cnt - 1;
    int low = 0;
    while (low < high) {
        if (a[low] == a[high]) {
            low++;
            high--;
            continue;
        } else
            return false;
    }
    return true;
}

int main() {
    Node *head = NULL;

    insertAtEnd(head, 1);
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 2);
    insertAtEnd(head, 1);
    insertAtEnd(head, 1);

    cout << isPalindromeEff(head) << endl;
}
