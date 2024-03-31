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

    int getNum() const {
        return m_num;
    }
    int getDen() const {
        return m_den;
    }
};

bool eqFrac(const Fraction& x, const Fraction& y);

int main(){
    std::cout << "1/5 == 1/5 returns " << eqFrac({1, 5}, {1, 5}) << '\n';
    std::cout << "1/2 == 2/4 returns " << eqFrac({1, 2}, {2, 4}) << '\n';
    std::cout << "1/5 == 1/2 returns " << eqFrac({1, 5}, {1, 2}) << '\n';
    std::cout << "-1/2 == 1/2 returns " << eqFrac({-1, 2}, {1, 2}) << '\n';
    std::cout << "-1/-2 == 1/2 returns " << eqFrac({-1, -2}, {1, 2}) << '\n';
    std::cout << "-1/2 == 1/-2 returns " << eqFrac({-1, 2}, {1, -2}) << '\n';
    return 0;
}

Fraction mulFrac(const Fraction& x, const Fraction& y){
    return Fraction{x.getNum() * y.getNum(), x.getDen() * y.getDen()};
}

bool eqFrac(const Fraction& x, const Fraction& y){
    Fraction xnorm = mulFrac(x, Fraction{y.getDen(), y.getDen()});
    Fraction ynorm = mulFrac(y, Fraction{x.getDen(), x.getDen()});
    return ((xnorm.getNum() == ynorm.getNum()) && (xnorm.getDen() == ynorm.getDen()));
}