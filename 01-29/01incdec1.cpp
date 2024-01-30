#include <iostream>

using namespace std;

void incdec ()
{
    int i = 0, j = 0;

    cout << "Initialized i, j\n";
    cout << "i = " << i << ", j = " << j<< "\n\n";

    cout << "Post-incrementing i, pre-incrementing j\n";
    i++; ++j;
    cout << "i = " << i << ", j = " << j<< "\n\n";

    cout << "Post-decrementing i, pre-decrementing j\n";
    i--; --j;
    cout << "i = " << i << ", j = " << j<< "\n\n";
}
int main () {
    cout << "Demonstrating the operation of ++ and --\n\n";

    incdec();

    return 0;
}