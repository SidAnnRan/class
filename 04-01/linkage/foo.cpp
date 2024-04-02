#include <iostream>
int y {}; //Can't do this, unless y from main() is static
/*extern*/ int z {};
extern int w; //Defined externally

void foo(){
    int x {5}; //Local scope
    std::cout << "In foo, outer x = " << x << '\n';
    std::cout << "In foo, y = " << y << '\n';
    {
        int x {4};  //Shadows outer x
        std::cout << "In foo, inner x = " << x << '\n';
    }
    std::cout << "In foo, outer x is still " << x << '\n';
    std::cout << "In foo, z = " << z << '\n';
    std::cout << "In foo, w = " << w << '\n';
}