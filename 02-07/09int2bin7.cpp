#include <iostream>
using namespace std;

bool int2bool (int m);
void inttobin (int n);

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

bool int2bool (int m) {
    return (m % 2 == 1) ? true : false;
}

void inttobin (int n) {
    const int LEN = 4;
    bool bin [LEN] = {false};

    //Conversion
    int i = LEN - 1;
    while (i >= 0) {
        bin[i] = int2bool(n);
        n = n/= 2;
        i--;
    }

    //Print
    int j = 0;
    while(j < LEN) {
        cout << bin[j];
        j++;
    }
    cout << endl;
}