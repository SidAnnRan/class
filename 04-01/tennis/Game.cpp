#include "Score.h"
#include "Game.h"
#include <vector>
#include <iostream>
#include <string>

void Game::printGame() const{
    for(Score p : m_points){
        p.printScore();
        std::cout << '\n';
    }
}

std::string Game::winnerToString() const{
    switch(winner){
        case 1:
            return "Player 1";
        case 2:
            return "Player 2";
        default:
            return "Undecided";
    }
}

void Game::gincrp1(){
    if(winner == 0){
        Score last = m_points.back();
        Score newScore = last.incrp1();
        if(newScore.isp1Game())
            winner = 1;
        m_points.push_back(newScore);
    }
}

void Game::gincrp2(){
    if(winner == 0){
        Score last = m_points.back();
        Score newScore = last.incrp2();
        if(newScore.isp2Game())
            winner = 2;
        m_points.push_back(newScore);
    }
}