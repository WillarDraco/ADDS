#ifndef SCISSORS_H
#define SCISSORS_H

#include <string>
#include "Move.h"
#include <unordered_set>


class Scissors : public Move {
    public:
        Scissors();
        std::string getName();
        std::unordered_set<std::string> getWins();
};
#endif