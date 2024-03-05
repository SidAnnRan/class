#include <iostream>

struct Employee{
    int id {}; //{0};
    int age {}; //{0};
    double wage {}; //{0.0};
};

int main()
{
    Employee e1 {};
    e1.age = 32;  // use member selection operator (.) to select the age member of variable e1
    std::cout << e1.age << '\n'; // print e1's age

    Employee e2 = { 1, 32, 60000.0 }; // copy-list initialization using braced list
    Employee e3 { 2, 28, 45000.0 };

    Employee e4 {e3};

    return 0;
}