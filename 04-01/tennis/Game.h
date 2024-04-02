#ifndef GAME_H
#define GAME_H
#include "Score.h"
#include <vector>
#include <string>

class Game {
    std::vector<Score> m_points{};
    int winner{0};

    public:
    Game(){
        m_points.push_back(Score{});
    }

    void printGame() const;

    std::string winnerToString() const;

    void gincrp1();

    void gincrp2();
};
#endif