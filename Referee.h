#ifndef REFEREE_H
#define REFEREE_H

#include <string>
#include "Player.h"


class Referee {
    public:
        Referee( ); // constructor
        Player* refGame(Player* player1, Player* player2);
};
#endif

