#include <iostream>
using namespace std;

//  Multiple Inheritance
class Mammal
{
  public:
    Mammal()
    {
        cout << "It is a Mammal.." << '\n';
    }
};

class WingedAnimal
{
  public:
    WingedAnimal()
    {
        cout << "It is a Winged Animal.." << '\n';
    }
};

class Bat : public Mammal, public WingedAnimal
{
};
// End of Multiple Inheritance...

// Start of Multi-Level Inheritance ..

class A
{
  public:
    void display()
    {
        cout << "This is Multi Level Inheritance.." << '\n';
    }
};

class B : public A
{
};

class C : public B
{
};

int main()
{
    Bat o1;
    cout << endl;
    C o;
    o.display();
}