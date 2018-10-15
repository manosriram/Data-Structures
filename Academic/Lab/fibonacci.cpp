#include <iostream>

using namespace std;

int first,second;

class fibo {
public:
  fibo() {
    first = 0;
    second = 1;
  }
};

int main()
{
int i,next,n;

fibo ob1;

cin >> n;

while (first < n)
{
 cout<< first << " ";

 next=first+second;
 first=second;
 second=next;
}

}
