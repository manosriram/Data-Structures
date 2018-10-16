#include <iostream>
using namespace std;

class first
{
  public:
    int a, b;

    void getV()
    {
        cin >> a >> b;
    }

    void showV()
    {
        cout << a << " " << b << " ";
    }
};

class second : public first
{
  public:
    void changeV()
    {
        a = 10;
        b = 20;
    }

    void showV()
    {
        cout << a << " " << b << " ";
    }
};

class third : private first
{
  public:
    void changeV1()
    {
        a = 40;
        b = 90;
    }
};

int main()
{
    first ob1;
    second ob2;
    third ob3;

    ob1.getV();
    ob1.showV();

    // Doesnt give us any kind of error as we have derived it in public form...
    ob2.changeV();
    ob2.showV();

    // Gives us an Error.... as we cant access a privately derived variable..

    cout << ob3.a;
}