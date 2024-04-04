#include <iostream>

class Something{
    private:
        static int s_value;

    public:
        int getValue() { return s_value; } // static member function
};
int Something::s_value{1};

int main(){
    Something s;
    std::cout << s.getValue() << '\n';
    return 0;
}