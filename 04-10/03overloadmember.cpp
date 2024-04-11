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

    //Overload unary minus
    Fraction operator-() const{
        return Fraction{-m_num, m_den};
    }

    friend std::istream& operator>> (std::istream& in, Fraction& x);
};

std::ostream& operator<< (std::ostream& out, const Fraction& x);
Fraction operator*(const Fraction& x, const Fraction& y);
Fraction operator*(const Fraction& x, const int y);
Fraction operator*(const int x, const Fraction& y);
bool operator==(const Fraction& x, const Fraction& y);

int main(){
    std::cout << "1/5 == 1/5 returns " << (Fraction{1, 5} == Fraction{1, 5}) << '\n';
    std::cout << "1/2 == 2/4 returns " << (Fraction{1, 2} == Fraction{2, 4}) << '\n';
    std::cout << "1/5 == 1/2 returns " << (Fraction{1, 5} == Fraction{1, 2}) << '\n';
    std::cout << "-1/2 == 1/2 returns " << (Fraction{-1, 2} == Fraction{1, 2}) << '\n';
    std::cout << "-1/-2 == 1/2 returns " << (Fraction{-1, -2} == Fraction{1, 2}) << '\n';
    std::cout << "-1/2 == 1/-2 returns " << (Fraction{-1, 2} == Fraction{1, -2}) << '\n';
    std::cout << "1/2 * 15 == " << (Fraction{1, 2} * 15) << '\n';
    std::cout << "23 * 2/5 == " << (23 * Fraction{2, 5}) << '\n';
    //Fraction x{};
    //std::cout << "Enter a fraction by entering the numerator first, then the denominator:\n";
    //std::cin >> x;
    //std::cout << "Your fraction is " << x << '\n';
    Fraction x{1,2};
    std::cout << "-x = " << -x << '\n';
    return 0;
}

Fraction operator*(const Fraction& x, const Fraction& y){
    return Fraction{x.getNum() * y.getNum(), x.getDen() * y.getDen()};
}

Fraction operator*(const Fraction& x, const int y){
    return x * Fraction{y};
}

Fraction operator*(const int x, const Fraction& y){
    return Fraction{y} * x;
}

bool operator==(const Fraction& x, const Fraction& y){
    //Normalize x and y relative to each other
    Fraction xnorm = x * Fraction{y.getDen(), y.getDen()};
    Fraction ynorm = y * Fraction{x.getDen(), x.getDen()};
    //Check for equality
    return ((xnorm.getNum() == ynorm.getNum()) && (xnorm.getDen() == ynorm.getDen()));
}

std::ostream& operator<< (std::ostream& out, const Fraction& x){
    out << x.getNum() << "/" << x.getDen();
    return out;
}

std::istream& operator>> (std::istream& in, Fraction& x){
    in >> x.m_num >> x.m_den;
    return in;
}