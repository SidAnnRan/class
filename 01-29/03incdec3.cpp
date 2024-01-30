#include <iostream>

using namespace std;

void incdec ()
{
    int res = 0, i = 0;

    cout << "res = " << res << ", i = " << i << endl << endl;

    res = 2 + (i++);
    cout << "res = " << res << ", i = " << i << endl << endl;
}
int main () {
    cout << "Demonstrating the operation of ++ and --\n";

    incdec();

    return 0;
}