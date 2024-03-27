#include <iostream>

class Fraction{
    int m_num {};
    int m_den {1};
    public:
    void print () const {
        std::cout << m_num << "/" << m_den;
    }
    
    //No default constructor, so we must use this one
    Fraction (int num, int den) 
        : m_num { num }, m_den {den } {}

    int getNum() const {
        return m_num;
    }
    int getDen() const {
        return m_den;
    }
};

int main () {
    //Fraction a{}, b{}; //Illegal
    Fraction x {1, 2}, y {2, 5};
    const Fraction z {1, 2};
    
    std::cout << "x: "; 
    x.print();
    std::cout << '\n';

    std::cout << "y: "; 
    y.print();
    std::cout << '\n';

    std::cout << "z: "; 
    z.print();
    std::cout << '\n';
    
    return 0;
}