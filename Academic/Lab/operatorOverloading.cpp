#include <iostream>
using namespace std;

class one
{
  public:
    int a;
    void getA()
    {
        a = 100;
    }

    void operator++(int)
    {
        a = 400;
    }
    void operator++()
    {
        a = 1000;
    }
};

int main()
{
    one o;
    o.getA();
    cout << "Value of a : " << o.a << '\n';
    // Post Incrementation...
    o++;
    cout << "Value of a : " << o.a << '\n';
    // Pre Incrementation...
    ++o;
    cout << "Value of a : " << o.a << '\n';
}