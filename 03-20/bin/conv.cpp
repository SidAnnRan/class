#include <iostream>
using namespace std;

//Return remainder from division by two, converted to a bool
bool int2Bool (int m);
/* The pow function from math.h works on double types. Instead of using it with type conversions, lets
just define a function exp2, that given non-negative integer m, returns 2^m */
int exp2 (int m);

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