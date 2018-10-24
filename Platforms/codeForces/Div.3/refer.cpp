#include <iostream>
#define size 10
using namespace std;

class a
{

  public:
    a()
    {
        int *a1 = new int[size];

        a1[0] = 1;
        a1[1] = 2;
        cout << a1[0] << " " << a1[1] << endl;
    }
    ~a()
    {
        delete[size] a1;
        cout << "Destructor Called !" << endl;
    }
};

int main()
{
    a ob;
}