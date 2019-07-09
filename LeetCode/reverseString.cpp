#include <iostream>
#include <string.h>
using namespace std;

char *getS(char *s)
{
    return s;
}

int reverseString(char s[], int front, int back)
{
    char temp;
    if (front == back - 1 || front == back)
    {
        temp = s[front];
        s[front] = s[back];
        s[back] = temp;
        return 1;
    }
    temp = s[front];
    s[front] = s[back];
    s[back] = temp;

    return reverseString(s, front + 1, back - 1);
}

int main()
{
    char s[20];
    cin >> s;

    // reverseString(s, 0, strlen(s) - 1);
    // cout << s << endl;
    char *r = new char[20];
    r = getS(s);
    cout << r << endl;
    delete[] r;
}