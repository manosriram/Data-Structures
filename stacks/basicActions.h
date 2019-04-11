#include <iostream>
#define max 1500
using namespace std;

static int top = -1;
int *stack = new int[max];

void push(int data)
{
    if (top == max)
    {
        cout << "Stack OverFlow!" << '\n';
        return;
    }

    top++;
    stack[top] = data;
    return;
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack UnderFlow!" << '\n';
        return;
    }
    top--;
    return;
}

bool isEmpty()
{
    return (top == -1) ? true : false;
}

bool isFull()
{
    return (top == max) ? true : false;
}

int getTopElement()
{
    return top > -1 ? stack[top] : 0;
}
