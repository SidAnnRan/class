#include<iostream>

int main(){
    int input1 = 0, input2 = 0, input3 = 0;
    
    std::cout << "Enter a number: \n";
    std::cin >> input1;
    std::cout << "Enter a number: \n";
    std::cin >> input2;
    std::cout << "Enter a number: \n";
    std::cin >> input3;

    std::cout << "Sum of your inputs is " << (input1 + input2 + input3) << '\n';

    return 0;
}