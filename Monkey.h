#ifndef MONKEY_H
#define MONKEY_H

#include <string>
#include "Move.h"
#include <unordered_set>


class Monkey: public Move {
    public:
    Monkey();
    std::string getName();
};
#endif