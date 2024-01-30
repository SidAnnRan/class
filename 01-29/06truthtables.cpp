#include <iostream>

using namespace std;

void nottable ()
{
    bool x = false;

    cout << "x\t!x\n";
    cout << "0\t" << !x << "\n";

    x = true;

    cout << "1\t" << !x << "\n";
    cout << endl;
}
void andtable ()
{
    bool x = false, y = false;

    cout << "x\ty\tx && y\n";
    cout << "0\t0\t" << (x && y) << "\n";

    x = false, y = true;
    cout << "0\t1\t" << (x && y) << "\n";

    x = true, y = false;
    cout << "1\t0\t" << (x && y) << "\n";

    x = true, y = true;
    cout << "1\t1\t" << (x && y) << "\n";

    cout << endl;
}
void ortable ()
{
    bool x = false, y = false;

    cout << "x\ty\tx || y\n";
    cout << "0\t0\t" << (x || y) << "\n";

    x = false, y = true;
    cout << "0\t1\t" << (x || y) << "\n";

    x = true, y = false;
    cout << "1\t0\t" << (x || y) << "\n";

    x = true, y = true;
    cout << "1\t1\t" << (x || y) << "\n";

    cout << endl;
}
void xortable ()
{
    bool x = false, y = false;

    cout << "x\ty\tx ^ y\n";
    cout << "0\t0\t" << (x ^ y) << "\n";

    x = false, y = true;
    cout << "0\t1\t" << (x ^ y) << "\n";

    x = true, y = false;
    cout << "1\t0\t" << (x ^ y) << "\n";

    x = true, y = true;
    cout << "1\t1\t" << (x ^ y) << "\n";

    cout << endl;
}
int main () {
    cout << "Truth tables of logical operators\n\n";

    nottable();

    andtable();

    ortable();

    xortable();

    return 0;
}