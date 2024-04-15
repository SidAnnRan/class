#include <iostream>

int incrbyval(int x);
void incrbyref(int& x);
int& incrretbyref(int& x);

int main(){
    int a{};
    std::cout << "In main, \n\tAddress of a is " << &a << " and value is " << a << '\n';
    int b{};

    b=incrbyval(a);
    std::cout << "b = " << b << '\n';
    std::cout << "In main, \n\tAddress of a is " << &a << " and value is " << a << '\n';
    
    incrbyref(a);
    std::cout << "In main, \n\tAddress of a is " << &a << " and value is " << a << '\n';

    incrretbyref(a);
    std::cout << "In main, \n\tAddress of a is " << &a << " and value is " << a << '\n';

    
    return 0;
}

int incrbyval(int x){
    x++;
    std::cout << "In incrbyval, \n\tAddress of x is " << &x << " and value is " << x << '\n';
    return x;
}

void incrbyref(int& x){
    x++;
    std::cout << "In incrbyref, \n\tAddress of x is " << &x << " and value is " << x << '\n';
}

int& incrretbyref(int& x){
    x++;
    std::cout << "In incrretbyref, \n\tAddress of x is " << &x << " and value is " << x << '\n';
    return x;
}