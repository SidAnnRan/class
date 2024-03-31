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
    return 0;
}

int gcd(int x, int y){
    int min = x < y? x : y;
    for(int i = min; i >= 0; i--){
        if(x % i == 0 && y % i == 0){
            return i;
        }
    }
    return 1;
}

Fraction simpFrac(const Fraction& x){
    int gcdFrac = gcd(x.getNum(), x.getDen());

    return Fraction{x.getNum()/gcdFrac, x.getDen()/gcdFrac};
}

bool eqFrac(const Fraction& x, const Fraction& y){
    Fraction simpx = simpFrac(x);
    Fraction simpy = simpFrac(y);

    return ((simpx.getNum() == simpy.getNum()) && (simpx.getDen() == simpy.getDen()));
}