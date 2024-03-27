#include <iostream>

class Fraction{
    int m_num {};
    int m_den {1};
    public:
    void print () const {
        std::cout << m_num << "/" << m_den;
    }
    
    //We can create a default constructor
    Fraction(){}

    int getNum() const {
        return m_num;
    }
    int getDen() const {
        return m_den;
    }
};

int main () {
    Fraction x, y;
    const Fraction z;

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