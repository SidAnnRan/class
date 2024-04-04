#include <iostream>

class Something{
    private:
        static int s_value;

    public:
        static int getValue() { return s_value; } // static member function
};
int Something::s_value{1};

int main(){
    std::cout << Something::getValue() << '\n'; //Don't need to create an object now
    return 0;
}