#include <iostream>
using namespace std;

class first
{
  public:
    int a;
    int b;

    void getV1()
    {
        cin >> a >> b;
    }

    void showV1()
    {
        cout << a << " " << b << " " << '\n';
    }
};

class parent2
{
  public:
    int c, d;

    void getVV()
    {
        cin >> c >> d;
    }
    void showVV()
    {
        cout << c << " " << d << " " << '\n';
    }
};

class second : public first
{
  public:
    void changeV2()
    {
        a = 123;
        b = 456;
    }
    void showV2()
    {
        cout << a << " " << b << " " << '\n';
    }
};

class third : public second
{
  public:
    void changeV3()
    {
        a = 7498;
        b = 765;
    }
    void showV3()
    {
        cout << a << " " << b << " " << '\n';
    }
};

class multipleInh : public first, public parent2
{
  public:
    void showAll()
    {
        cout << "This is Multiple Inheritence: " << '\n';
        getV1();
        getVV();
        showV1();
        showVV();
    }
};

int main()
{
    first o1;
    second o2;
    third o3;
    parent2 o4;
    multipleInh o5;

    o1.getV1();
    o1.showV1();

    o2.changeV2();
    o2.showV2();

    o3.changeV3();
    o3.showV3();

    o4.getVV();
    o4.showVV();

    o5.showAll();
}