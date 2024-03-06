#ifndef PAPER_H
#define PAPER_H

#include <string>
#include "Move.h"
#include <unordered_set>


class Paper : public Move {
    public:
        Paper();
        std::string getName();
        std::unordered_set<std::string> getWins();
};
#endif