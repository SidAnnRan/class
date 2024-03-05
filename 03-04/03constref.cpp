#include <iostream>

void printval(int x);
void printref(int& x);
void printconstref(const int& x);

int main() {
    int x {};
    const int y {};

    std::cout << "Call by value:\n";
    printval(x);
    printval(y);
    printval(5);

    std::cout << "Call by reference:\n";
    printref(x);
    //printref(y); //illegal
    //printref(5); //illegal

    std::cout << "Call by constant reference:\n";
    printconstref(x);
    printconstref(y);
    printconstref(5);

    return 0;
}

void printval (int x){
    std::cout << x << '\n';
}

void printref (int& x) {
    std::cout << x << '\n';
}

void printconstref (const int& x) {
    //x++; //illegal
    std::cout << x << '\n';
}