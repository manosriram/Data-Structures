#include <iostream>
#define MAX 264
using namespace std;

struct DEQ {
	int *q;
	int front, last;
};

void initDEQ(DEQ *deq) {
	deq->front = -1;
	deq->last = MAX;
	deq->q = new int[MAX];
}

void insertFront(DEQ *deq, int data) {
	deq->q[++deq->front] = data;
}

void insertLast(DEQ *deq, int data) {
	deq->q[--deq->last] = data;
}

void dqFront(DEQ *deq) {
	--deq->front;
}

void dqLast(DEQ *deq) {
	++deq->last;
}

int getFront(DEQ *deq) {
	if (deq->front != -1)
		return deq->q[deq->front];

	return -1;
}

int getLast(DEQ *deq) {
	if (deq->last != MAX)
		return deq->q[deq->last];

	return MAX;
}

void printDEQ(DEQ *deq) {
	int itr = 0;
	while (itr <= deq->front) {
		cout << deq->q[itr] << " ";
		itr++;
	}
	cout << "<--> ";
	itr = deq->last;
	while (itr < MAX) {
		cout << deq->q[itr] << " ";
		itr++;
	}
	cout << '\n';
}