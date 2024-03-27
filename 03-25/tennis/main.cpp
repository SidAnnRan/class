#include "Score.h"
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

    Score s;

    std::cout << "Player 1\tPlayer 2\n";
    for(char point : points){
        if(point == '1')
            s.incrp1();
        else
            s.incrp2();
        s.printScore();
            std::cout << '\n';
    }

    return 0;
}