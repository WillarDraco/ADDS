#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H

#include <string>
#include "Move.h"


class MoveFactory{
    public:
        static Move* MoveSel(std::string movename);
};
#endif