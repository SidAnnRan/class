#include <iostream>

int main(){
    const int x { 5 }; // x is now const
    int y {};
    
    //int* ptr { &x };   // compile error: cannot convert from const int* to int*
    const int* ptr { &x };
    //*ptr = 6; //not allowed
    std::cout << "Value stored at address " << ptr << " is " << *ptr << '\n'; //Undefined behavior

    //Unlike references, pointer to const can be modified to point to a new value
    ptr = &y;
    std::cout << "Value stored at address " << ptr << " is " << *ptr << '\n'; //Undefined behavior
    return 0;
}