#include <iostream>

using namespace std;

void incdec ()
{
    int i = 0, j = 0;

    cout << "i = " << ++i << "\n";

    cout << "j = " << j++ <<"\n";
}
int main () {
    cout << "Demonstrating the operation of ++ and --\n";

    incdec();

    return 0;
}