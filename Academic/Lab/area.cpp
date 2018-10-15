#include <iostream>

using namespace std;

class area_all {
public:
  void area(int l,int b) {
    int area1 = l * b;
    cout << area1;
  }

  void area(double r) {
    float pi = 3.14;
    float area2 = pi * (r * r);
    cout << area2;
  }

  void area(int a) {
    float area3 = 6 * (a * a);
    cout << area3;
  }
};

int main() {
area_all ob1;
ob1.area(3,4);
cout << endl;
ob1.area(4.3);
cout << endl;
ob1.area(3);
}
