#include <iostream>
using namespace std;

int inputInt () {
    int i = 0;
    do {
        cout << "Enter a non-negative number: ";
        cin >> i;
        if (i < 0)
            cout << "Number out of range!\n";
    }while(i < 0);
    
    return i % 16;
}

void printBin (bool bin[], int LEN)
{
    int i = LEN - 1;
    while(i >= 0) {
        cout << bin[i];
        i--;
    }
}