#include <iostream>

void incrementAndPrint(){
    static int s_value = 1; // automatic duration by default
    ++s_value;
    std::cout << s_value << '\n';
} // value is destroyed here

int main(){
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();
    //std::cout << s_value; //Illegal
    return 0;
}