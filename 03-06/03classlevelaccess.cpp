#include <iostream>

class Fraction{
    int m_num {};
    int m_den {1};
    public:
    void print () const {
        std::cout << m_num << "/" << m_den;
    }
    void setFrac (int num, int den) {
        m_num = num;
        m_den = den;
    }
    int getNum() const {
        return m_num;
    }
    int getDen() const {
        return m_den;
    }
    Fraction mulBy (const Fraction& x) {
        Fraction prod;
        prod.setFrac(m_num * x.m_num, m_den * x.m_den); //We can access x's private members!
        return prod;
    }
};

Fraction addFracs (const Fraction& x, const Fraction& y);

int main () {
    Fraction x, y;
    x.setFrac(1, 2);
    y.setFrac(5, 3);
    //const Fraction z {7, 1}; we'll see how to do this in the future
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
    Fraction sum; 
    sum.setFrac(x.getNum() + y.getNum(), x.getDen() + y.getDen());
    return sum;
}