#include <iostream>
using namespace std;

void inttobin (int i) {
    bool bin3 = false, bin2 = false, bin1 = false, bin0 = false;
    
    cout << "Binary value of " << i << " is ";

    //Most significant bit
    if (i % 2 == 1)
        bin3 = true;
    else
        bin3 = false;

    i /= 2;
    if (i % 2 == 1)
        bin2 = true;
    else
        bin2 = false;
    
    i /= 2;
    if (i % 2 == 1)
        bin1 = true;
    else
        bin1 = false;

    //Least significant bit
    i /= 2;
    if (i % 2 == 1)
        bin0 = true;
    else
        bin0 = false;

    cout << bin0 << bin1 << bin2 << bin3 << endl;
}

int main() {
    //Program to input integer and return binary
    int i = 0;
    cout << "Enter a number between 0 and 15 (inclusive): ";
    cin >> i;
    if (i < 0 || i > 15)
        cout << "Number out of range!\n";
    else
        inttobin(i);
    return 0;
}