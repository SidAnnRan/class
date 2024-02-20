#include<iostream>

int main(){
    int x = 5;
    std::cout << "x has been initialized to " << x << '\n';

    std::cout << "Turning on showpos flag\n";
    std::cout.setf(std::ios::showpos); // turn on the std::ios::showpos flag
    
    std::cout << "Value of x is still " << x << '\n';

    std::cout << "Turning off showpos flag\n";
    std::cout.unsetf(std::ios::showpos); // turn the flag back off
    std:: cout << "And still, x is " << x << "\n\n";

    float y = 5.0;
    std::cout << "x is " << x << " and y is " << y << '\n';
    std::cout << "Turning on showpos and showpoint\n";
    std::cout.setf(std::ios::showpos | std::ios::showpoint);
    std::cout << "x is " << x << " and y is " << y << "\n\n";

    x = 200;
    std::cout << "Printing in hex\n";
    std::cout.unsetf(std::ios::dec);
    std::cout.setf(std::ios::hex);
    std::cout << "Value of x is now " << x << '\n';

    //Using manipulators
    std::cout << std::dec << "Value of x in decimal is " << x << '\n';
    
    return 0;
}