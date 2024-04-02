#ifndef SCORE_H
#define SCORE_H
#include <iostream>

//Score tracks points in a game
class Score {
    private:
    //All possible points in a game for a player
    enum GamePoints {
        love,
        fifteen,
        thirty,
        forty,
        adv,
        game
    };
    //Printer for GamePoints
    void printGamePoints (GamePoints g) const;
    GamePoints m_p1, m_p2; //Score

    public:
    Score() 
        : m_p1 { love }, m_p2 { love } {}
    
    Score(GamePoints p1, GamePoints p2)
        : m_p1 { p1 }, m_p2 { p2 } {}

    bool isp1Game(){
        return (m_p1 == game);
    }

    bool isp2Game(){
        return (m_p2 == game);
    }

    void printScore() const {
        printGamePoints(m_p1);
        std::cout << "\t\t";
        printGamePoints(m_p2);
    }

    Score incrp1();
    Score incrp2();
};
#endif