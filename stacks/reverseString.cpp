#include <iostream>
#include <string.h>
#define max 100
using namespace std;
static string Rstr;
static int top = -1;
char stack[max];

void push(char value)
{
    if (top < max)
    {
        top++;
        stack[top] = value;
    }
    return;
}

char pop()
{
    char temp = stack[top];
    top--;
    return temp;
}

void combineString()
{
    while (top > -1)
    {
        Rstr += pop();
    }
    Rstr += " ";
    return;
}

void reverseWords(char a[])
{
    int t;
    for (t = strlen(a) - 1; t >= 0; t--)
    {
        if (a[t] == ' ')
        {
            combineString();
        }
        else
        {
            push(a[t]);
        }
    }
    combineString();
    return;
}

int main()
{
    char a[40];
    cin.getline(a, 40);
    reverseWords(a);
    cout << Rstr << endl;
}