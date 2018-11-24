<<<<<<< HEAD
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
=======
#include <iostream>
using namespace std;

int main()
{
    int n, S;
    cin >> n >> S;
    int t = S / n;
    cout << t + 1 << endl;
>>>>>>> 2f5eeb3fb69a8df634e31c21cb33ead381a5222c
}