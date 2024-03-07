#include <iostream>
#include <fstream>
#include <string>

//All possible points in a game for a player
enum GamePoints {
    love,
    fifteen,
    thirty,
    forty,
    adv,
    game
};

void printGamePoints (GamePoints g);

//CHANGE: enumerators are just constants so we can use switch
void printGamePoints (GamePoints g) {
    switch(g){
        case love:
            std::cout << "0";
            break;
        case fifteen:
            std::cout << "15";
            break;
        case thirty:
            std::cout << "30";
            break;
        case forty:
            std::cout << "40";
            break;
        case adv:
            std::cout << "A";
            break;
        default:
            std::cout << "W";
            break;
    }
}

int main (){
    std::string points;
    std::ifstream inf{ "Points.txt" };

    if (!inf) {
        std::cerr << "Couldn't open Points.txt for reading!\n";
        return 1;
    }

    inf >> points;
    std::cout << "Points: " << points << '\n';

    GamePoints g = adv;
    printGamePoints(g);
    std::cout << '\n';

    return 0;
}