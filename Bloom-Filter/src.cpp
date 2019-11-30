#include "Base.hpp"

int main() {
    const char *cp[] = {"one", "two", "zzz"};

    Insert(cp[0]);
    Insert(cp[1]);

    cout << Check(cp[2]); // Definitely Not Present.
    Insert(cp[2]);
    cout << endl;
    cout << Check(cp[2]); // Maybe it is present.
}
