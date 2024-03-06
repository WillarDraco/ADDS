#include <string>
#include "Player.h"
#include "Referee.h"
#include <iostream>

Referee::Referee() {
}

Player* Referee::refGame(Player* player1, Player* player2) {
    std::string player1M = player1->makeMove();
    char player2M = player2->makeMove();

    if (player1M == player2M) {
        return nullptr;
    } else if ((player1M == 'R' && player2M == 'S') || (player1M == 'S' && player2M == 'P') || (player1M == 'P' && player2M == 'R')) {
        return player1;
    }

    return player2;
}