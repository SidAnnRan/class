#include <iostream>

using namespace std;

void incdec ()
{
    int res = 0, i = 0;

    cout << "Initial values:\n";
    cout << "res = " << res << ", i = " << i << endl << endl;

    res = i++;
    cout << "After res = i++:\n";
    cout << "res = " << res << ", i = " << i << endl << endl;

    res = ++i;
    cout << "After res = ++i:\n";
    cout << "res = " << res << ", i = " << i << endl << endl;

    cout << "Resetting res and i to 0\n";
    res = 0, i = 0;
    cout << "res = " << res << ", i = " << i << endl << endl;

    res = i--;
    cout << "After res = i--:\n";
    cout << "res = " << res << ", i = " << i << endl << endl;

    res = --i;
    cout << "After res = --i:\n";
    cout << "res = " << res << ", i = " << i << endl << endl;
}
int main () {
    cout << "Demonstrating the operation of ++ and --\n";

    incdec();

    return 0;
}