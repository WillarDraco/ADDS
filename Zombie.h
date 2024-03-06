#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include "Move.h"
#include <unordered_set>


class Zombie: public Move {
    public:
    Zombie();
    std::string getName();
};
#endif