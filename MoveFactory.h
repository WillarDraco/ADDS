#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H

#include <string>
#include "Move.h"


class MoveFactory{
    public:
    MoveFactory();
    Move* MoveSel(std::string movename);
};
#endif