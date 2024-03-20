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
//Perform bitwise operations on the 4-bit integers
void menu(int dec1, int dec2, bool bin1 [], bool bin2 [], int LEN);
//Bitwise AND
void bAndBin(int dec1, int dec2, bool bin1 [], bool bin2 [], int LEN);
//Bitwise OR
void bOrBin(int dec1, int dec2, bool bin1 [], bool bin2 [], int LEN);
//Bitwise XOR
void bXorBin(int dec1, int dec2, bool bin1 [], bool bin2 [], int LEN);
//Bitwise NOT
void bNotBin(int dec, bool bin [], int LEN);
//Left shift
void lShiftBin(int dec1, int dec2, bool bin1 [], bool bin2 [], int LEN);
//Right shift
void rShiftBin(int dec1, int dec2, bool bin1 [], bool bin2 [], int LEN);
//Helper functions for addition
bool addBit(int bitsum);
bool addCarryBit(int bitsum);
//Addition
void bAddBin(int dec1, int dec2, bool bin1 [], bool bin2 [], int LEN);

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

void menu(int dec1, int dec2, bool bin1 [], bool bin2 [], int LEN){
    int choice = 0;
    cout << "Bitwise operators menu:\n";
    cout << "1. Bitwise AND (&)\n";
    cout << "2. Bitwise OR (|)\n";
    cout << "3. Bitwise XOR (^)\n"; 
    cout << "4. Bitwise NOT (~)\n";
    cout << "5. Left Shift (<<)\n"; 
    cout << "6. Right Shift (>>)\n";
    cout << "7. Addition (+)\n";
    while(choice < 1 || choice > 7){
        cout << "Choose an op: ";
        cin >> choice;
    }

    int oneOrTwo = 0;
    switch(choice) {
        case 1:
            bAndBin(dec1, dec2, bin1, bin2, LEN);
            break;
        case 2:
            bOrBin(dec1, dec2, bin1, bin2, LEN);
            break;
        case 3:
            bXorBin(dec1, dec2, bin1, bin2, LEN);
            break;
        case 4:
            while (oneOrTwo < 1 || oneOrTwo > 2){
                cout << "Choose the number you want to perform bitwise NOT on, 1 for the first and 2 for the second: ";
                cin >> oneOrTwo;
            }
            if (oneOrTwo == 1)
                bNotBin(dec1, bin1, LEN);
            else
                bNotBin(dec2, bin2, LEN);
            break;
        case 5:
            lShiftBin(dec1, dec2, bin1, bin2, LEN);
            break;
        case 6:
            rShiftBin(dec1, dec2, bin1, bin2, LEN);
            break;
        case 7:
            bAddBin(dec1, dec2, bin1, bin2, LEN);
            break;
        default:
            cout << "Invalid choice!\n";
    }
}

void bAndBin(int dec1, int dec2, bool bin1 [], bool bin2 [], int LEN){
    bool res [LEN] = {false};

    for(int i = 0; i < LEN; i++){
        res[i] = bin1[i] && bin2[i];
    }
    cout << dec1 << " & " << dec2 << " = " << bin2Dec(res, LEN) << "\n";
    printBin(bin1, LEN);
    cout << " & "; 
    printBin(bin2, LEN); 
    cout << " = "; 
    printBin(res, LEN);
    cout << "\n";
}

void bOrBin(int dec1, int dec2, bool bin1 [], bool bin2 [], int LEN){
    bool res [LEN] = {false};

    for(int i = 0; i < LEN; i++){
        res[i] = bin1[i] || bin2[i];
    }
    cout << dec1 << " | " << dec2 << " = " << bin2Dec(res, LEN) << "\n";
    printBin(bin1, LEN);
    cout << " | "; 
    printBin(bin2, LEN); 
    cout << " = "; 
    printBin(res, LEN);
    cout << "\n";
}

void bXorBin(int dec1, int dec2, bool bin1 [], bool bin2 [], int LEN){
    bool res [LEN] = {false};

    for(int i = 0; i < LEN; i++){
        res[i] = (bin1[i] != bin2[i]);
    }
    cout << dec1 << " ^ " << dec2 << " = " << bin2Dec(res, LEN) << "\n";
    printBin(bin1, LEN);
    cout << " ^ "; 
    printBin(bin2, LEN); 
    cout << " = "; 
    printBin(res, LEN);
    cout << "\n";
}

void bNotBin(int dec, bool bin [], int LEN){
    bool res [LEN] = {false};
    for(int i = 0; i < LEN; i++){
        res[i] = !bin[i];
    }
    cout << "~" << dec << " = " << bin2Dec(res, LEN) << "\n";
    cout << "~"; 
    printBin(bin, LEN);
    cout << " = "; 
    printBin(res, LEN);
    cout << "\n";
}

void lShiftBin(int dec1, int dec2, bool bin1 [], bool bin2 [], int LEN){
    bool res [LEN] = {false};
    if (dec2 < 4){
        for(int i = (LEN - 1); i >= dec2; i--){
            res[i] = bin1[i - dec2];
        }
    }
    cout << dec1 << " << " << dec2 << " = " << bin2Dec(res, LEN) << "\n";
    printBin(bin1, LEN);
    cout << " << "; 
    printBin(bin2, LEN); 
    cout << " = "; 
    printBin(res, LEN);
    cout << "\n";
}

void rShiftBin(int dec1, int dec2, bool bin1 [], bool bin2 [], int LEN){
    bool res [LEN] = {false};
    if (dec2 < 4){
        for(int i = 0; i < (LEN - dec2); i++){
            res[i] = bin1[i+dec2];
        }
    }
    cout << dec1 << " >> " << dec2 << " = " << bin2Dec(res, LEN) << "\n";
    printBin(bin1, LEN);
    cout << " >> "; 
    printBin(bin2, LEN); 
    cout << " = "; 
    printBin(res, LEN);
    cout << "\n";
}

bool addBit(int bitsum){
    return ((bitsum % 2 == 0)? false : true);
}

bool addCarryBit(int bitsum){
    return (bitsum < 2)? false : true;
}

void bAddBin(int dec1, int dec2, bool bin1 [], bool bin2 [], int LEN){
    bool res [LEN] = {false};
    bool carry = false;
    for(int i = 0; i < LEN; i++){
        int bitsum = bin1[i] + bin2[i] + carry;
        res[i] = addBit(bitsum);
        carry = addCarryBit(bitsum);
    }
    
    cout << dec1 << " + " << dec2 << " = " << bin2Dec(res, LEN) << "\n";
    printBin(bin1, LEN);
    cout << " + "; 
    printBin(bin2, LEN); 
    cout << " = "; 
    printBin(res, LEN);
    cout << "\n";
}