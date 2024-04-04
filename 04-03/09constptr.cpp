#include <iostream>

int main(){
    int x { 5 };
    int y {};
    
    int* const ptr { &x };
    std::cout << "Value stored at address " << ptr << " is " << *ptr << '\n'; //Undefined behavior

    //int* const ptr2; //Illegal: must be intialized

    //ptr = &y; //Illegal: ptr is const

    *ptr = 6; //Okay: ptr is const, but x is not const
    std::cout << "Value stored at address " << ptr << " is " << *ptr << '\n'; //Undefined behavior

    return 0;
}