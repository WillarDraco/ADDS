#include <string>
#include "Player.h"
#include "Referee.h"
#include <iostream>

Referee::Referee() {
}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* player1M = player1->makeMove();
    Move* player2M = player2->makeMove();

    std::string move1 = player1M->getName();
    std::string move2 = player2M->getName();

    if (move1 == move2) {
        return nullptr;
    } else if (player1M->wins.find(move2) != player1M->wins.end()) {
        return player1;
    }

    return player2;
}