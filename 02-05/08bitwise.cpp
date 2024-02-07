#include <iostream>

using namespace std;

int main() {
    uint16_t x = 5, y = 12, z = 65535;
    cout << "x = " << 5 << ", y = " << y << endl;

    cout << "x & y = " << (x & y) << endl;

    cout << "x | y = " << (x | y) << endl;

    cout << "x ^ y = " << (x ^ y) << endl;

    cout << "~z = " << ((uint16_t) (~z)) << endl;

    return 0;
}