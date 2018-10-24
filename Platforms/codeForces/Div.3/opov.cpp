#include <iostream>
using namespace std;
class A
{
  public:
    int a;
    void getA()
    {
        cin >> a;
    }

    A operator+(A object)
    {
        A another;
        another.a = a + object.a;
        return another;
    }

    void operator++(int)
    {
        cout << this->a + 1;
    }
};

int main()
{
    A ob1, ob2, ob3;
    ob1.getA();
    ob2.getA();
    ob3 = ob1 + ob2;
    cout << ob3.a << endl;
    ob3++;
}