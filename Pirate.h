#ifndef PIRATE_H
#define PIRATE_H

#include <string>
#include "Move.h"
#include <unordered_set>


class Pirate : public Move {
    public:
        Pirate();
        std::string getName();
        std::unordered_set<std::string> getWins();
};
#endif