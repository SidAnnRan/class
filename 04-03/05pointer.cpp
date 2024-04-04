#include <iostream>

int main(){
    int x{5};
    // int* ptr; don't do this
    int* ptr {&x};
    std::cout << "Value stored at address " << ptr << " is " << *ptr << '\n';

    *ptr = 6;
    std::cout << "Value stored at address " << ptr << " is " << *ptr << '\n';

    return 0;
}