#include <iostream>
#include "basicActions.h"
using namespace std;

bool isPalindrome(Node *head){
    Node *p = head;
    int a[1000000];
    int cnt=0;
    while (p != NULL) {
        a[cnt] = p->data;
        cnt++;
        p = p->next;
    }
    int high = cnt-1;
    int low = 0;
    while (low < high) {
        if (a[low] == a[high]) {
            low++;
            high--;
            continue;
        } else return false;
    }
    return true;
}

int main() {
  Node *head = NULL;

  insertAtEnd(head,1);
  insertAtEnd(head,2);
  insertAtEnd(head,1);
  insertAtEnd(head,2);
  insertAtEnd(head,1);

  cout << isPalindrome(head) << endl;
}
