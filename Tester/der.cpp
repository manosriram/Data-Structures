#include <iostream>
using namespace std;
class rectangle
{

    int length, width;

  public:
    rectangle() // Default constructor
    {
        cout << "Default Constructor called!!" << endl;
        length = 10;
        width = 20;
    }
    rectangle(int length, int width) // Parameterized constructor
    {
        cout << "Parameterized Constructor called!!" << endl;
        length = length;
        width = width;
    }
    rectangle(rectangle &r) // Copy constructor
    {
        cout << "Copy Constructor called!!" << endl;
        length = r.length;
        width = r.width;
    }

    // other functions for reading, writing and processing can be written
};
int main()
{
    rectangle r0;
    rectangle r2(10, 10); // Invokes parameterized constructor
    rectangle r3(r2);     // Invokes copy constructo
}