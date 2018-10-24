#include <iostream>
using namespace std;

class Test
{
  public:
    int a;

    Test retOb(Test o2)
    {
        Test o1;
        o1.a = this->a;
        return o1;
    }
};

int main()
{
    Test obj, obj1;
    obj.a = 100;
    cout << "Value of a in Object 0 = " << obj.a << endl;
    obj1 = obj.retOb(obj);
    cout << "Value of a in Object 1 = " << obj1.a << endl;
}