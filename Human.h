#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include "Player.h"
#include "Move.h"

class Human : public Player {
    public:
        Human();
        Human(std::string name);
        Move* makeMove();
        std::string getName();
};
#endif