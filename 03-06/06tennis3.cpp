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

//Score tracks points in a game
class Score {
    //The score is a tuple of points representing p1 and p2's scores in the game
    GamePoints m_p1, m_p2;
    public:
    /* Because we have various constraints on what the points can be (ex: A-A is not 
    a valid score), this function is a bad idea. But for now, we'll use it to
    initialize the score of a game to 0-0 */
    void setScore(GamePoints p1, GamePoints p2) {
        m_p1 = p1;
        m_p2 = p2;
    }

    void printScore() const {
        printGamePoints(m_p1);
        std::cout << "\t\t";
        printGamePoints(m_p2);
    }

    /* incrp1 and incrp2 will implement the tennis game logic, we'll enforce all
       our constraints here. Both functions are incomplete, try and complete them by
       filling in the other branches. What happens when m_p1 == fifteen, thirty, etc.? */
    void incrp1(){
        if(m_p1 == love){
            m_p1 = fifteen;
        }
    }
    void incrp2 (){
        if(m_p2 == love){
            m_p2 == fifteen;
        }
    }
};

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