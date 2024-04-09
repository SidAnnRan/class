#include <iostream>

class Fraction{
    int m_num {};
    int m_den {1};
    public:
    void print () const {
        std::cout << m_num << "/" << m_den;
    }
    Fraction() = default;

    Fraction (int num, int den)
        : m_num { num }, m_den {den } {}
    
    Fraction (int num)
        : m_num { num }, m_den { 1 } {}

    int getNum() const {
        return m_num;
    }
    
    int getDen() const {
        return m_den;
    }

    friend Fraction operator*(const Fraction& x, const Fraction& y);
    friend Fraction operator*(const Fraction& x, const int y);
    friend Fraction operator*(const int x, const Fraction& y);
    friend bool operator==(const Fraction& x, const Fraction& y);
};

int main(){
    std::cout << "1/5 == 1/5 returns " << (Fraction{1, 5} == Fraction{1, 5}) << '\n';
    std::cout << "1/2 == 2/4 returns " << (Fraction{1, 2} == Fraction{2, 4}) << '\n';
    std::cout << "1/5 == 1/2 returns " << (Fraction{1, 5} == Fraction{1, 2}) << '\n';
    std::cout << "-1/2 == 1/2 returns " << (Fraction{-1, 2} == Fraction{1, 2}) << '\n';
    std::cout << "-1/-2 == 1/2 returns " << (Fraction{-1, -2} == Fraction{1, 2}) << '\n';
    std::cout << "-1/2 == 1/-2 returns " << (Fraction{-1, 2} == Fraction{1, -2}) << '\n';
    std::cout << "1/2 * 15 == "; 
    (Fraction{1, 2} * 15).print();
    std::cout << '\n';
    std::cout << "23 * 2/5 == "; 
    (23 * Fraction{2, 5}).print();
    std::cout << '\n';
    return 0;
}

Fraction operator*(const Fraction& x, const Fraction& y){
    return Fraction{x.m_num * y.m_num, x.m_den * y.m_den};
}

Fraction operator*(const Fraction& x, const int y){
    return x * Fraction{y};
}

Fraction operator*(const int x, const Fraction& y){
    return Fraction{y} * x;
}

bool operator==(const Fraction& x, const Fraction& y){
    //Normalize x and y relative to each other
    Fraction xnorm = x * Fraction{y.m_den, y.m_den};
    Fraction ynorm = y * Fraction{x.m_den, x.m_den};
    //Check for equality
    return ((xnorm.m_num == ynorm.m_num) && (xnorm.m_den == ynorm.m_den));
}