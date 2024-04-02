#include "file1.h" //Includes x from file1.h
#include "file2.h" //Includes y and x from file2.h
#include <iostream>


int main(){
    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    return 0;
}