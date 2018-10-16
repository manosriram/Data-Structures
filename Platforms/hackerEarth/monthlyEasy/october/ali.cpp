#include <iostream>
using namespace std;

int main()
{
    char s[10];
    int n;

    cin >> s;

    if (s[2] == 'A' || s[2] == 'E' || s[2] == 'I' || s[2] == 'O' || s[2] == 'U' || s[2] == 'Y')
        cout << "invalid" << '\n';

    else if ((int(s[0] - 48) + int(s[1] - 48)) % 2 != 0)
        cout << "invalid" << '\n';

    else if ((int(s[3] - 48) + int(s[4] - 48)) % 2 != 0)
        cout << "invalid" << '\n';

    else if ((int(s[4] - 48) + int(s[5] - 48)) % 2 != 0)
        cout << "invalid" << '\n';

    else if ((int(s[7] - 48) + int(s[8] - 48)) % 2 != 0)
        cout << "invalid" << '\n';

    else
        cout << "valid" << '\n';
}