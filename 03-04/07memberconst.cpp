#include <iostream>

struct Fraction{
    int num {};
    int den {1};
    void print () const {
        std::cout << num << "/" << den;
    }
};

Fraction addFracs (const Fraction& x, const Fraction& y);

int main () {
    Fraction x {1, 2};
    Fraction y {5, 3};
    const Fraction z {7, 1};
    x.print(); //printFrac(x);
    std::cout << '\n';
    y.print(); //printFrac(y);
    std::cout << '\n';
    z.print(); // Okay now that print is const
    std::cout << '\n';
    std::cout << "x + y = ";
    Fraction sum = addFracs(x, y);
    sum.print(); //printFrac(addFracs (x, y));
    std::cout << '\n';
    return 0;
}

Fraction addFracs (const Fraction& x, const Fraction& y) {
    return {x.num + y.num, x.den + y.den};
}