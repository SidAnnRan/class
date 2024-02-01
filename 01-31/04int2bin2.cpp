#include <iostream>
using namespace std;

bool int2bool (int m) {
    if (m % 2 == 1)
        return true;
    else 
        return false;
}

void inttobin (int i) {
    bool bit3 = false, bit2 = false, bit1 = false, bit0 = false;
    
    cout << "Binary value of " << i << " is ";

    //Most significant bit
    bit3 = int2bool(i);

    i /= 2;
    bit2 = int2bool(i);
    
    i /= 2;
    bit1 = int2bool(i);

    //Least significant bit
    i /= 2;
    bit0 = int2bool(i);

    cout << bit0 << bit1 << bit2 << bit3 << endl;
}

int main() {
    //Program to input integer and return binary
    int i = 0;
    cout << "Enter a number between 0 and 15: ";
    cin >> i;
    if (i < 0 || i > 15)
        cout << "Number out of range!\n";
    else
        inttobin(i);
    return 0;
}