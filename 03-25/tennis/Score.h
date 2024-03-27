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

    void printScore() const {
        printGamePoints(m_p1);
        std::cout << "\t\t";
        printGamePoints(m_p2);
    }

    void incrp1();
    void incrp2();
};