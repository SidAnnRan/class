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
    GamePoints m_p1, m_p2;
    public:
    void setScore() {
        m_p1 = love;
        m_p2 = love;
    }

    void printScore() const {
        printGamePoints(m_p1);
        std::cout << "\t\t";
        printGamePoints(m_p2);
    }

    /* incrp1 and incrp2 will implement the tennis game logic, we'll enforce all
       our constraints here. */
    void incrp1(){
        if (m_p1 == love)
            m_p1 = fifteen;
        else if (m_p1 == fifteen)
            m_p1 = thirty;
        else if (m_p1 == thirty)
            m_p1 = forty;
        else if (m_p1 == forty) {
            if (m_p2 < forty)
                m_p1 = game;
            else if (m_p2 == adv) {
                //deuce
                m_p1 = forty;
                m_p2 = forty;
            }
            else if (m_p2 == forty)
                m_p1 = adv;
        }
        else if (m_p1 == adv)
            m_p1 = game;
        else
            //already a m_p1 game
            m_p1 = game;
    }

    void incrp2(){
        if (m_p2 == love)
            m_p2 = fifteen;
        else if (m_p2 == fifteen)
            m_p2 = thirty;
        else if (m_p2 == thirty)
            m_p2 = forty;
        else if (m_p2 == forty) {
            if (m_p1 < forty)
                m_p2 = game;
            else if (m_p1 == adv) {
                //deuce
                m_p2 = forty;
                m_p1 = forty;
            }
            else if (m_p1 == forty)
                m_p2 = adv;
        }
        else if (m_p2 == adv)
            m_p2 = game;
        else
            //already a m_p2 game
            m_p2 = game;
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
    std::ifstream inf{ "Points2.txt" };

    if (!inf) {
        std::cerr << "Couldn't open file for reading!\n";
        return 1;
    }

    inf >> points;
    
    std::cout << '\n';

    Score s;
    s.setScore();

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