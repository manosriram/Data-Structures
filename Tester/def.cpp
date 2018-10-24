#include <iostream>
using namespace std;

int main()
{
    int m;
    float a = 0.1, l;

    try
    {
        throw l;
    }
    catch (int m)
    {
        cout << "Int Catch Block!!" << endl;
    }
    catch (...)
    {
        cout << "Default Catch Block!" << endl;
    }
}