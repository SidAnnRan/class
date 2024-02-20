#include<iostream>
#include<iomanip>

int main() {
    char str[5] = {"0"};
    std::cout << "Enter a string:\n";
    std::cin >> std::setw(5) >> str;
    std::cout << "Part of your input that was stored: " << str << '\n';

    std::cout << "Ignoring next character in stream\n";
    std::cin.ignore();

    std::cout << "But the one after that is:\n";
    char c = std::cin.peek();
    std::cout << c << '\n';

    return 0;
}