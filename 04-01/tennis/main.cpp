#include "Game.h"
#include <iostream>
#include <fstream>
#include <string>

int main (){
    std::string points;
    std::ifstream inf{ "Points2.txt" };

    if (!inf) {
        std::cerr << "Couldn't open Points.txt for reading!\n";
        return 1;
    }

    inf >> points;
    
    std::cout << '\n';

    Game g{};
    std::cout << "Player 1\tPlayer 2\n";
    for(char point : points){
        if(point == '1')
            g.gincrp1();
        else
            g.gincrp2();
    }
    g.printGame();
    std::cout << '\n';
    std::cout << "The winner of the game is " << g.winnerToString() << '\n';

    return 0;
}