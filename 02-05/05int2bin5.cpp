#include <iostream>
using namespace std;

bool int2bool (int m) {
    return (m % 2 == 1) ? true : false;
}

void inttobin (int i) {
    const int LEN = 4;
    bool bin [LEN] = {false};

    //Most significant bit
    bin[3] = int2bool(i);

    i /= 2;
    bin[2] = int2bool(i);
    
    i /= 2;
    bin[1] = int2bool(i);

    //Least significant bit
    i /= 2;
    bin[0] = int2bool(i);

    cout << bin[0] << bin[1] << bin[2] << bin[3] << endl;
}

int main() {
    //Program to input integer and return binary
    int i = 0;
    cout << "Enter a non-negative number: ";
    cin >> i;
    if (i < 0)
        cout << "Number out of range!\n";
    else if (i > 15) {
        cout << "Binary value of " << i << " is ";
        inttobin(i % 16); }
    else {
        cout << "Binary value of " << i << " is ";
        inttobin(i); }
    return 0;
}