#include<iostream>

int incrbyval(int x);
void incrbyref(int& x);
int& incrretbyref(int& x);

int main(){
    int a{};
    std::cout << "In main, \n\tAddress of a is " << &a << " and value is " << a << '\n';
    int b{};
    std::cout << "\nCall and return by value\n";
    b = incrbyval(a);
    std::cout << "b = " << b << "\n";
    std::cout << "In main,\n\tAddress of a is " << &a << " and value is " << a << '\n';

    std::cout << "\nCall by ref\n";
    incrbyref(a);
    std::cout << "In main,\n\tAddress of a is " << &a << " and value is " << a << '\n';

    std::cout << "\nCall and return by ref\n";
    int& ref1{incrretbyref(a)};
    std::cout << "Address of incrretbyref(a) is " << &ref1 << " and value is " << ref1 << '\n';

    return 0;
}

int incrbyval(int x){
    x++;
    std::cout << "In incrbyval, \n\tAddress of x is " << &x << " and value is " << x << '\n';
    return x;
}

void incrbyref(int& x){
    std::cout << "In incrbyref, \n\tAddress of x is " << &x << " and value is " << x << '\n';
    x++;
}

int& incrretbyref(int& x){
    std::cout << "In retbyref, \n\tAddress of x is " << &x << " and value is " << x << '\n';
    x++;
    return x;
}