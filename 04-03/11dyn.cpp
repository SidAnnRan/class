#include<iostream>

int main(){
    new int; //Returns address
    int* ptr {new int};
    *ptr = 7;
    std::cout << "Dynamically allocated address " << ptr << " to store " << *ptr << '\n';
    delete ptr;
    std::cout << "After deleting ptr, dynamically allocated address " << ptr << " stores " << *ptr << '\n';
    ptr = nullptr;
    //std::cout << "ptr is now nullptr, dynamically allocated address " << ptr << " stores " << *ptr << '\n';
    return 0;
}