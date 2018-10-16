#include <iostream>

using namespace std;
class cl2;
class cl1 {

public:
  int a,b;
  void getV1() {
    a=10;
    b=20;
  }

  friend void sum(cl1 v1,cl2 v2);

};

class cl2 {

public:
  int c;
  void getV2() {
    c=20;
  }

  friend void sum(cl1 v1,cl2 v2);
};

void sum(cl1 v1,cl2 v2) {
  int sum=0;
  sum = v1.a + v1.b + v2.c;
  cout << sum << endl;

}

int main() {
  cl1 ob1;
  cl2 ob2;

  ob1.getV1();
  ob2.getV2();

  sum(ob1,ob2);


}
