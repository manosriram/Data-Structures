#include <iostream>
using namespace std;

int main()
{
    int T;
    int width, height;
    int n;
    int count = 0;

    cin >> T;

    while (T--)
    {
        cin >> width >> height;

        int t = width / height;

        if (t >= 16 * width && t <= 17)
        {
            count++;
        }
    }
    cout << count << endl;
}