#include <iostream>

struct Fraction{
    int num {};
    int den {1};
};

void printFrac (const Fraction& f);
Fraction addFracs (const Fraction& x, const Fraction& y);

int main () {
    Fraction x {1, 2};
    Fraction y {5, 3};
    
    std::cout << "x = ";
    printFrac(x);
    std::cout << '\n';
    std::cout << "y = ";
    printFrac(y);
    std::cout << '\n';
    std::cout << "x + y = ";
    printFrac(addFracs (x, y));
    std::cout << '\n';
    return 0;
}

void printFrac (const Fraction& f) {
    std::cout << f.num << "/" << f.den;
}

Fraction addFracs (const Fraction& x, const Fraction& y) {
    Fraction sum{};
    sum.num = x.num + y.num;
    sum.den = x.den + y.den;
    return sum;
    //return Fraction{x.num + y.num, x.den + y.den};
    //return {x.num + y.num, x.den + y.den};
}