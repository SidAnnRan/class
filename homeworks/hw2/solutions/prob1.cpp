#include <iostream>
using namespace std;

//Return remainder from division by two, converted to a bool
bool int2Bool (int m);
/* Decimal to binary conversion
bin is an array of length LEN, and i is the integer that must be converted to a LEN-bit binary number
*/
void dec2Bin (bool bin [], int LEN, int i);
//Print a binary value contained in array bin of length LEN
void printBin (bool bin [], int LEN);
//Input and return a (4-bit) integer (decimal), using C++ unsigned integer semantics for overflow
int inputInt ();
//Given a LEN-bit binary number stored in array bin, return its decimal equivalent
int bin2Dec (bool bin [], int LEN);
/* The pow function from math.h works on double types. Instead of using it with type conversions, lets
just define a function exp2, that given non-negative integer m, returns 2^m */
int exp2 (int m);

int main() {
    const int LEN = 4;
    int dec1 = 0, dec2 = 0;
    bool bin1 [LEN] = {false}, bin2 [LEN] = {false};

    //Set dec1 and dec2 to in-range integers from the user using inputInt
    dec1 = inputInt();
    dec2 = inputInt();

    //Set bin1 and bin2 to binary of dec1 and dec2 using dec2Bin
    dec2Bin(bin1, LEN, dec1);
    dec2Bin(bin2, LEN, dec2);

    //Convert back from binary to decimal
    int dec1a = 0, dec2a = 0;
    //Set dec1a and dec1b to be the decimal of binary values bin1 and bin2 using bin2Dec
    dec1a = bin2Dec(bin1, LEN);
    dec2a = bin2Dec(bin2, LEN);

    cout << "Your numbers in decimal and binary and decimal (converted back from binary) are:\n";
    cout <<"\tDecimal\tBinary\tDecimal Again\n";
    cout << "1.\t" << dec1 << "\t";
    printBin(bin1, LEN);
    cout << "\t" << dec1a;
    cout << "\n";
    cout << "2.\t" << dec2 << "\t";
    printBin(bin2, LEN);
    cout << "\t" << dec2a;
    cout << "\n\n";

    return 0;
}

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

bool int2Bool (int m) {
    return (m % 2 == 1) ? true : false;
}

void dec2Bin (bool bin [], int LEN, int n) {
    //MSB = bin[3], ..., LSB = bin[0]
    int i = 0;
    while (i < LEN){
        bin[i] = int2Bool(n);
        n /= 2;
        i++;
    }
}

int exp2 (int m) {
    int pow2 = 1;
    while (m > 0) {
        pow2 *= 2;
        m--;
    }
    return pow2;
}

int bin2Dec (bool bin [], int LEN) {
    int dec = 0;
    int i = 0;
    while(i < LEN)
    {
        dec += bin[i] * exp2(i); //bin[i] * 2^i
        i++;
    }
    return dec;
}

void printBin (bool bin[], int LEN)
{
    int i = LEN - 1;
    while(i >= 0) {
        cout << bin[i];
        i--;
    }
}