#include <iostream>

class Fraction{
    int m_num {};
    int m_den {1};
    public:
    void print () const {
        std::cout << m_num << "/" << m_den;
    }
    Fraction (int num, int den) 
        : m_num { num }, m_den {den } {}

    int getNum() const {
        return m_num;
    }
    int getDen() const {
        return m_den;
    }
    Fraction mulBy (const Fraction& x) {
        Fraction prod{m_num * x.m_num, m_den * x.m_den};
        return prod;
    }
};

Fraction addFracs (const Fraction& x, const Fraction& y);

int main () {
    Fraction x {1,2}, y {5,3};
    const Fraction z {7, 1}; //we'll see how to do this in the future
    x.print();
    std::cout << '\n';
    y.print();
    std::cout << '\n';
    std::cout << "x + y = ";
    Fraction sum = addFracs(x, y);
    sum.print();
    std::cout << '\n';
    std::cout << "x * y = ";
    Fraction prod = x.mulBy(y);
    prod.print();
    //(x.mulBy(y)).print();
    std::cout << '\n';
    return 0;
}

Fraction addFracs (const Fraction& x, const Fraction& y) {
    Fraction sum{x.getNum() + y.getNum(), x.getDen() + y.getDen()};
    return sum;
}