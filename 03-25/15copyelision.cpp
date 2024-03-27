#include <iostream>

class Something
{
    int m_x{};

public:
    Something(int x)
        : m_x{ x }
    {
        std::cout << "Normal constructor\n";
    }

    Something(const Something& s)
        : m_x { s.m_x }
    {
        std::cout << "Copy constructor\n";
    }

    void print() const { std::cout << "Something(" << m_x << ")\n"; }
};

int main()
{
    /* Copy elision: since constructor is initialized with
       a temp object, compiler optimizes away the copy,
       so copy constructor isn' called */
    Something s { Something { 5 } };
    s.print();

    return 0;
}