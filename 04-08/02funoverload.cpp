#include <iostream>

class Something{
    private:
        int m_value{1};

    public:
        int getValue() const {
            std::cout << "Const member function\n";
            return m_value; 
        }

        int getValue() {
            std::cout << "Non-const member function\n";
            return m_value;
        }
};

/* //Can't do this:
void print(int x){
    std::cout << "Non-const arg: " << x << '\n';  
}

void print(const int x){
    std::cout << "Const arg: " << x << '\n';
}*/

int main(){
    Something s1{};
    const Something s2{};
    std::cout << "s1: " << s1.getValue() << '\n';
    std::cout << "s2: " << s2.getValue() << '\n';

    int x{};
    const int y{};
    //const int x{};
    //print(x);
    //print(y);
    return 0;
}

