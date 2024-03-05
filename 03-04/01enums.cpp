#include <iostream>

enum CardinalDirections {
    North, //0
    South, //1
    East,  //2
    West   //3
};

void printDir(CardinalDirections c);

int main () {
    CardinalDirections south = South;
    std::cout << "IA is " << south << " of MN.\n";
    std::cout << "IA is ";
    printDir(south);
    std:: cout << " of MN.\n";

    return 0;
}

void printDir(CardinalDirections c) {
    switch(c){
        case North:
            std::cout << "North";
            break;
        case South:
            std::cout << "South";
            break;
        case East:
            std::cout << "East";
            break;
        case West:
            std::cout << "West";
            break;
    }
}