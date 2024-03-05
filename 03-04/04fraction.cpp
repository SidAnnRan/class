#include <iostream>

struct Fraction{
    int num {};
    int den {1};
};

void printFrac (const Fraction& f);

int main () {
    Fraction x {1, 2};
    Fraction y {5, 3};
    const Fraction z {7, 1};
    printFrac(x);
    std::cout << '\n';
    printFrac(y);
    std::cout << '\n';
    printFrac(z);
    std::cout << '\n';
    return 0;
}

void printFrac (const Fraction& f) {
    std::cout << f.num << "/" << f.den;
}