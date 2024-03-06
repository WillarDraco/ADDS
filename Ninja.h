#ifndef NINJA_H
#define NINJA_H

#include <string>
#include "Move.h"
#include <unordered_set>


class Ninja : public Move {
    public:
        Ninja();
        std::string getName();
        std::unordered_set<std::string> getWins();
};
#endif