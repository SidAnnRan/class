#include <iostream>
using namespace std;

bool int2bool (int m) {
    return (m % 2 == 1) ? true : false;
}

void inttobin (int i) {
    const int LEN = 4;
    bool bin [LEN] = {false};
    
    cout << "Binary value of " << i << " is ";

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
    cout << "Enter a number between 0 and 15: ";
    cin >> i;
    if (i < 0 || i > 15)
        cout << "Number out of range!\n";
    else
        inttobin(i);
    return 0;
}