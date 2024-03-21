#include <iostream>
using namespace std;

int bin2Dec (bool bin [], int LEN);
void printBin (bool bin [], int LEN);
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