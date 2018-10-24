#include <iostream>
using namespace std;

class Test
{
  public:
    static void justTest()
    {
        cout << "A Static Test!" << endl;
    }
};

int main()
{
    Test::justTest();
}