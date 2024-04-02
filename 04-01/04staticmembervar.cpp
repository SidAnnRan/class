#include <iostream>

class Something{
    public:
    int value{ 1 };
};

int main(){
    Something first{};
    Something second{};

    first.value = 2;

    std::cout << first.value << '\n';
    std::cout << second.value << '\n';

    return 0;
}