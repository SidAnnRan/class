#include <iostream>

int main(){
    int x{0};
    std::cout << "Address of x is " << &x << " and value stored in x is " << x << '\n';
    std::cout << "Address " << &x << " dereferenced is " << *(&x) << '\n';
    
    return 0;
}