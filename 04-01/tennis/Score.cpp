#include "Score.h"
#include <iostream>

void Score::printGamePoints (GamePoints g) const {
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

/* incrp1 and incrp2 will implement the tennis game logic, we'll enforce all
       our constraints here. */
    Score Score::incrp1(){
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
        return Score{m_p1, m_p2};
    }

    Score Score::incrp2(){
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
        return Score{m_p1, m_p2};
    }