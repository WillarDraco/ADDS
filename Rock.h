#ifndef ROCK_H
#define ROCK_H

#include <string>
#include "Move.h"
#include <unordered_set>


class Rock : public Move {
    public:
        Rock();
        std::string getName();
        std::unordered_set<std::string> getWins();
};
#endif