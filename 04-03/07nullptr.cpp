#include <iostream>

int main(){
    int x{5};
    int* ptr {}; //Null pointer
    //int* ptr {nullptr}; //Same as above
    //std::cout << "Value stored at address " << ptr << " is " << *ptr << '\n'; //Undefined behavior
    
    //Safe access to nullptr
    if(ptr == nullptr)
        std::cout << "Null pointer!\n";
    else
        std::cout << "Value stored at address " << ptr << " is " << *ptr << '\n'; //Undefined behavior

    //Since nullptr implicitly converts to false, the above simplifies to
    if(!ptr)
        std::cout << "Null pointer!\n";
    else
        std::cout << "Value stored at address " << ptr << " is " << *ptr << '\n'; //Undefined behavior

    ptr = &x;
    std::cout << "Value stored at address " << ptr << " is " << *ptr << '\n';

    return 0;
}