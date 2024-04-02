#include <iostream>
static int y {7};

/*extern*/ const int z {10};

int w {12};

void foo();

int main(){
    int x {5}; //Local scope
    std::cout << "In main, outer x = " << x << '\n';
    std::cout << "In main, y = " << y << '\n';
    {
        int x {4};  //Shadows outer x
        std::cout << "In main, inner x = " << x << '\n';
    }
    std::cout << "In main, outer x is still " << x << '\n';
    std::cout << "In main, z = " << z << '\n';
    std::cout << "In main, w = " << w << "\n\n";

    foo();

    return 0;
}