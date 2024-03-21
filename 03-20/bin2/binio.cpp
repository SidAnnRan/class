#include "binio.h"
#include <iostream>

int inputInt () {
    int i = 0;
    do {
        std::cout << "Enter a non-negative number: ";
        std::cin >> i;
        if (i < 0)
            std::cout << "Number out of range!\n";
    }while(i < 0);
    
    return i % 16;
}

void printBin (bool bin[], int LEN)
{
    int i = LEN - 1;
    while(i >= 0) {
        std::cout << bin[i];
        i--;
    }
}