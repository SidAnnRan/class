#include <iostream>
using namespace std;


/* Decimal to binary conversion
bin is an array of length LEN, and i is the integer that must be converted to a LEN-bit binary number */
void dec2Bin (bool bin [], int LEN, int i);
//Print a binary value contained in array bin of length LEN
void printBin (bool bin [], int LEN);
//Input and return a (4-bit) integer (decimal), using C++ unsigned integer semantics for overflow
int inputInt ();
//Given a LEN-bit binary number stored in array bin, return its decimal equivalent
int bin2Dec (bool bin [], int LEN);

//Perform bitwise operations on the 4-bit integers
void menu(int dec1, int dec2, bool bin1 [], bool bin2 [], int LEN);

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

    //Call menu here
    menu(dec1, dec2, bin1, bin2, LEN);

    return 0;
}