#include <iostream>
#include <fstream>
#include <string>

int main (){
    std::string points;
    std::ifstream inf{ "Points.txt" };

    if (!inf) {
        std::cerr << "Couldn't open Points.txt for reading!\n";
        return 1;
    }

    inf >> points;
    std::cout << "Points: " << points << '\n';

    return 0;
}