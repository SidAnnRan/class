#include <iostream>

class Fraction{
    public:
    int m_num {};
    int m_den {1};
    
    Fraction() = default; //explicitly defaulted default constructor

    Fraction (int num, int den) 
        : m_num { num }, m_den {den } {}

    int getNum() const {
        return m_num;
    }
    int getDen() const {
        return m_den;
    }
};

void print (Fraction f) {
    std::cout << f.m_num << "/" << f.m_den;
}

int main () {
    //These are not temp objects
    Fraction x {1, 2}, y {2, 5};
    const Fraction z {1, 2};
    
    std::cout << "x: "; 
    print(x); 
    std::cout << '\n';

    std::cout << "y: "; 
    print(y);
    std::cout << '\n';

    std::cout << "z: "; 
    print(z);
    std::cout << '\n';
    
    return 0;
}