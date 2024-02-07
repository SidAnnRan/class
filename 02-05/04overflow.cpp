#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Understanding overflow with 16-bit integers\n\n";
    uint16_t x = 0;
    cout << "Unsigned Case\n";
    cout << "After initialization, x = " << x << endl;

    x += (pow(2, 16) - 1);
    cout << "Max value of x is " << x << endl;

    x += 1;
    cout << "Value of x when it overflows by 1 is " << x << endl << endl;


    int16_t y = 0;
    cout << "Signed Case\n";
    cout << "After initialization, y = " << y << endl;
    
    y += (pow(2, 15) - 1);
    cout << "Max value of y is " << y << endl;

    y += 1;
    cout << "Value of y when it overflows by 1 is " << y << endl << endl;

    /*uint16_t z = 0;
    cout << "Avoiding narrowing errors using list initialization\n";
    uint16_t w{65536}; //Error
    //uint16_t w{pow(2, 15)}; //Also an error
    z += w;
    cout << "Value of z after adding a value that is too large is " << z << endl;*/


    return 0;
}